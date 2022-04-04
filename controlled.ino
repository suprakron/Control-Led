#include <cvzone.h>

SerialData serialData(2, 1); //(numOfValsRec,digitsPerValRec)
// no of values recieved : 1:(0-1);2(1-99)
//here we take 2 as we have range between 1-5
int valsRec[1]; // array of int with size numOfValsRec 

void setup() {
  serialData.begin();
  pinMode(3, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(13, OUTPUT);
  
  
}

void off(){
  if(valsRec[0]==5){
    digitalWrite(13, LOW);
    digitalWrite(7, LOW);
    digitalWrite(3, LOW);
  }
}

void loop(){
  int v;
   serilData.Get(valsRec);//get value from python code

  v=valsRec[0];//take the first element of array
  if(v==1){
    
    off(); 
    digitalWrite(3, HIGH);
  }
  else if(v==2){
    
    off(); 
    digitalWrite(7, HIGH);
  }
  else if(v==3){
    
    off(); 
    digitalWrite(13, HIGH);
  }
  else{
    off();
  }
}