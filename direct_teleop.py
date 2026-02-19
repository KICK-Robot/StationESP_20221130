import serial
import time
time.sleep(5)

PORT_LEADER = '/dev/serial/by-path/platform-3f980000.usb-usb-0:1.5:1.0'   
PORT_FOLLOWER = '/dev/serial/by-path/platform-3f980000.usb-usb-0:1.4:1.0' 
BAUDRATE = 1000000
IDS = [1, 2, 3, 4, 5, 6]

def create_read_packet(id, addr):
    return [0xFF, 0xFF, id, 0x04, 0x02, addr, 0x02, ~(id + 0x04 + 0x02 + addr + 0x02) & 0xFF]

def create_write_packet(id, addr, pos):
    p_l = pos & 0xFF
    p_h = (pos >> 8) & 0xFF
    return [0xFF, 0xFF, id, 0x05, 0x03, addr, p_l, p_h, ~(id + 0x05 + 0x03 + addr + p_l + p_h) & 0xFF]

def limit_pos(pos):
    return max(1000, min(3000, pos))

try:
    print("接続中...")
    ser_l = serial.Serial(PORT_LEADER, BAUDRATE, timeout=0.01)
    ser_f = serial.Serial(PORT_FOLLOWER, BAUDRATE, timeout=0.01)
    print("マスタースレーブ開始！")

    while True:
        for i in IDS:
            ser_l.write(create_read_packet(i, 56))
            res = ser_l.read(8)
            
            if len(res) >= 8 and res[2] == i:
                pos = res[5] | (res[6] << 8)
                safe_pos = limit_pos(pos)
                ser_f.write(create_write_packet(i, 42, safe_pos))
        
        time.sleep(0.02)

except Exception as e:
    print(f"エラーが発生しました: {e}")

finally:
    if 'ser_l' in locals(): ser_l.close()
    if 'ser_f' in locals(): ser_f.close()

