#include "DHT.h"
DHT dht;
int licznik = 0;
int liczba = 0;
int minimum, maksimum, jasnosc, wilgotnosc, temperatura;
char tryb = 'L' ;
void Znak(int iNumer) //chyba to mamy za implementować

void setup() {
    dht.setup(12);
    for (int i = 2; i < 9; i++)
        pinMode(i, OUTPUT);

    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    delay(1000);
    minimum = analogRead(0);
    maksimum = minimum;
}
void loop() {
    digitalWrite(11, LOW);
    // . . . .
    delay(2);
    if(licznik++ > 100) {
        jasnosc = analogRead(0);
        if(minimum > jasnosc) minimum = jasnosc;
        if(maksimum < jasnosc) maksimum = jasnosc;
        if(minimum != maksimum) jasnosc = 99 * (jasnosc−minimum) / (maksimum−minimum);
        wilgotnosc = (int)(dht.getHumidity());
        temperatura = (int)(dht.getTemperature());
        switch (tryb)
        {
        case 'L' :
            liczba = jasnosc;
            break;
        case 'H' :
            liczba = wilgotnosc;
            break;
        case 'T' :
            liczba = temperatura;
            break;
        }
        licznik = 0;
    }
    if(digitalRead(9) > 0) { // przycisk
        digitalWrite(10, LOW);
        digitalWrite(11, HIGH);
        i f(tryb == 'L')
        {
            tryb = 'H';
            digitalWrite(8, LOW);
            PORTD = 0b00100100;
        }
        else if /*......*/
        while (digitalRead(9) > 0);
    }
}