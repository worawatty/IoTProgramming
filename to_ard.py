#!/usr/bin/env python3
import serial
import time
if __name__ == '__main__':
    ser = serial.Serial('/dev/ttyUSB0', 9600, timeout=1)
    ser.flush()
    while True:
        led = input("Enter LED number: ")
        ser.write(b'%d' %led)
        #line = ser.readline().decode('utf-8').rstrip()
        #print(line)
        print(led)
        time.sleep(1)

