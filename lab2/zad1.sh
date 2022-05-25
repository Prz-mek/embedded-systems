sudo i2cdetect -y 1

sudo apt-get update
sudo apt-get install git build-essential python-dev python-smbus

cd ~/BMP180Code

git clone https://github.com/adafruit/Adafruit_Python_BMP.git

cd Adafruit_Python_BMP

sudo python setup.py install

sudo apt-get install python-pip

cd ~/BMP180Code

git clone https://github.com/adafruit/Adafruit_Python_GPIO.git

sudo python setup.py install

# test poprawności
cd ~/BMP180Code/Adafruit_Python_BMP/examples
python3 simpletet.py