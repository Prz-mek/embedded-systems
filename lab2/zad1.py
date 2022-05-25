import Adafruit_BMP.BMP085 as BMP085 #Import BMP library
sensor = BMP085.BMP085()
# Temerature in C deg
print(’Temperatura = {0:0.2f} *C’.format(sensor.read_temperature()))
# Pressuer in Pa
print(’Cisnienie = {0:0.2f} Pa’.format(sensor.read_pressure()))