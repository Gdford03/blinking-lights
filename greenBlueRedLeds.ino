int red= 10 ;
int green= 9 ;
int blue= 8 ;

int ten= 10;
int fiv= 5;
int fif = 15;

void setup() {

pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(blue,OUTPUT);

}

void loop() {
//red light 5 times fast

digitalWrite(red,HIGH);
delay(fiv);
digitalWrite(red,LOW);
delay(fiv);
//green light 10 times slower
digitalWrite(green,HIGH);
delay(ten);
digitalWrite(green,LOW);
delay(ten);
//blue light 15 times slow
digitalWrite(blue,HIGH);
delay(fif);
digitalWrite(blue,LOW);
delay(fif);

}
