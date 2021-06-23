#define NOTE_C3 131
#define NOTE_D3 147
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_G3 196
#define NOTE_A3 220
#define NOTE_B3 247
#define NOTE_C4 262

int latchPin = 10;
int clockPin = 12;
int dataPin = 11;

byte buttonpin[8]={2,3,4,5,6,7,8,9};
byte j= -1;
byte previousState[8]={1};
byte presentState[8]={1};

byte colDataMatrix[8] = {
   B11111110,
   B11111101,
   B11111011,
   B11110111,
   B11101111,
   B11011111,
   B10111111,
   B01111111
}; //掃描

byte rowDataMatrix[8] = {
  B00000001,
  B00000010,
  B00000100,
  B00001000,
  B00010000,
  B00100000,
  B01000000,
  B10000000
};


void setup()
{
  pinMode(latchPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
  pinMode(2,INPUT_PULLUP);
  pinMode(3,INPUT_PULLUP);
  pinMode(4,INPUT_PULLUP);
  pinMode(5,INPUT_PULLUP);
  pinMode(6,INPUT_PULLUP);
  pinMode(7,INPUT_PULLUP);
  pinMode(8,INPUT_PULLUP);
  pinMode(9,INPUT_PULLUP);
}


void loop(){

 for(int i=0;i<8;i++)
 {   
      presentState[i]=digitalRead(buttonpin[i]);
 }
  
  if (presentState[0]==0){

    tone(13, NOTE_C3, 100);    
    if ( j == 7) { j = -1; }
    j++;

    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST,colDataMatrix[0]);
    shiftOut(dataPin,clockPin,MSBFIRST,rowDataMatrix[j]);
    digitalWrite(latchPin, HIGH);
    delay(600);
    
}

else if (presentState[1]==0){

    tone(13, NOTE_D3, 100);
    if ( j == 7) { j = -1; }
    j++;
    digitalWrite(latchPin,  LOW);
    shiftOut(dataPin, clockPin, MSBFIRST,colDataMatrix[1]);
    shiftOut(dataPin,clockPin,MSBFIRST,rowDataMatrix[j]);
    digitalWrite(latchPin, HIGH);
    delay(600);
    
}
else if (presentState[2]==0){
  
    tone(13, NOTE_E3, 100);
    if ( j == 7) { j = -1; }
    j++;
    digitalWrite(latchPin,  LOW);
    shiftOut(dataPin, clockPin, MSBFIRST,colDataMatrix[2]);
    shiftOut(dataPin,clockPin,MSBFIRST,rowDataMatrix[j]);
    digitalWrite(latchPin, HIGH);
    delay(600);
    
}

else if (presentState[3]==0){

    tone(13, NOTE_F3, 100);
    if ( j == 7) { j = -1; }
    j++;
    digitalWrite(latchPin,  LOW);
    shiftOut(dataPin, clockPin, MSBFIRST,colDataMatrix[3]);
    shiftOut(dataPin,clockPin,MSBFIRST,rowDataMatrix[j]);
    digitalWrite(latchPin, HIGH);
    delay(600);
   
}

else if (presentState[4]==0){

    tone(13, NOTE_G3, 100);
    if ( j == 7) { j = -1; }
    j++;
    digitalWrite(latchPin,  LOW);
    shiftOut(dataPin, clockPin, MSBFIRST,colDataMatrix[4]);
    shiftOut(dataPin,clockPin,MSBFIRST,rowDataMatrix[j]);
    digitalWrite(latchPin, HIGH);
    delay(600);
    
}

else if (presentState[5]==0){

    tone(13, NOTE_A3, 100);
    if ( j == 7) { j = -1; }
    j++;
    digitalWrite(latchPin,  LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, colDataMatrix[5]);
    shiftOut(dataPin,clockPin,MSBFIRST,rowDataMatrix[j]);
    digitalWrite(latchPin, HIGH);
    delay(600);
    
}

else if (presentState[6]==0){

    tone(13, NOTE_B3, 100);
    if ( j == 7) { j = -1; }
    j++;
    digitalWrite(latchPin,  LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, colDataMatrix[6]);
    shiftOut(dataPin,clockPin,MSBFIRST,rowDataMatrix[j]);
    digitalWrite(latchPin, HIGH);
    delay(600);
    
}

else if (presentState[7]==0){

    tone(13, NOTE_C4, 100);
    if ( j == 7) { j = -1; }
    j++;
    digitalWrite(latchPin,  LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, colDataMatrix[7]);
    shiftOut(dataPin,clockPin,MSBFIRST,rowDataMatrix[j]);
    digitalWrite(latchPin, HIGH);
    delay(600);
    
}

}
