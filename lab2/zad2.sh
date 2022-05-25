avrdude -c arduino -p m328p -P /dev/ttyUSB0 -U flash:w:"plik.hex":i
# weryfikacja
avrdude -c arduino -p m328p -P /dev/ttyUSB0 -U flash:v:"plik.hex":i