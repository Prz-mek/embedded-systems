#. . .
import serial
#. . .
ser = serial.Serial('/dev/ttyUSB0', 9600)
ser.timeout = 1
przeczytano = ser.read(10)
ser.write("przeczytalem")
#. . .
