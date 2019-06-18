/***********
 **READ-ME**
 ***********
 * Relais 1 -> Digital Pin 10
 * Relais 2 -> Digital Pin 11
 * 
 * Taster 1 -> Digital Pin 2
 * Taster 2 -> Digital Pin 3
 */

//Relais Pin Configuration
int relais1 = 10;
int relais2 = 11;

//Taster Pin Configuration
int taster1 = 2;
int taster2 = 3;

//SETUP Funktion.
void setup(){
  
  //Serial Setup
  Serial.begin(9600); 

  //Pinmode Configuration

     //Relais
    pinMode(relais1,OUTPUT);
    pinMode(relais2,OUTPUT);

    //Taster
    pinMode(taster1,INPUT_PULLUP);
    pinMode(taster2,INPUT_PULLUP);
}

void loop(){

  //Relais && Taster query


    digitalWrite(relais1, convert(digitalRead(taster1)));

    digitalWrite(relais2, convert(digitalRead(taster2)));
}

//Convert Function, to change the Signal.
int convert(int input){
  if(input == 1){
    input = 0;
  }else if(input == 0){
    input = 1;
  }
  return input;
}

