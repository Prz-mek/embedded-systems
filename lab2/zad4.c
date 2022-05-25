//. . .
setup ( ) {
//. . .
Serial.begin (9600);
//. . .
}
loop ( ) {
//. . .
if (Serial.available () > 0) {
    mojBajt = Serial.read ( ) ;
    Serial.print("Odebralem") ;
    Serial.println(mojBajt, DEC) ;
    //. . .
