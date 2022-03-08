#include "gas.h"

#define buzzer 9 
#define sensor A0      
#define load_Res 10    
#define Res 10    
#define air_factor 9.83    
float SmokeCurve[3] ={2.3,0.53,-0.44};    // (x, y, slope) x,y coordinate of one point and the slope between two points        
const int firePin = 2;     
const int buzPin =  12;      
int fireState = 0;         
void setup()  
{   
  pinMode(buzzer, OUTPUT); 
    pinMode(buzPin, OUTPUT);
  
  pinMode(firePin, INPUT); 
}
void loop()  
{   
  fireState = digitalRead(firePin);
  int adc_value=analogRead(sensor);  
  if (fireState == HIGH) {
    digitalWrite(buzPin, HIGH);
  } else {
    digitalWrite(buzPin, LOW);
  } 

   float res=resistance(5,50,adc_value);  
   res/=Res;  
   int result=pow(10,(((log(res)-SmokeCurve[1])/SmokeCurve[2]) + SmokeCurve[0]));   
   if(result>100)  
   {  
      digitalWrite(buzzer, HIGH);  
  
   }  
   else  
   digitalWrite(buzzer, LOW);    
}
