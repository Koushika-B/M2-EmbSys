#include "gas.h"

#define sensor A0      
#define load_Res 10      
#define air_factor 9.83    
//float SmokeCurve[3] ={2.3,0.53,-0.44};    // (x, y, slope) x,y coordinate of one point and the slope between two points  
//float Res=0; 

float resistance(int samples, int interval,int adc_value)  
{  
   int i;  
   float res=0;   
   for (i=0;i<samples;i++)   
   {  
      
      res+=((float)load_Res*(1023-adc_value)/adc_value);  
      delay(interval);  
   }  
   res/=samples;  
   return res;  
}  

float SensorCalibration(int adc_value)
{
  int i;
  float val=0;    
  val=resistance(50,500,adc_value);                
  val = val/air_factor;  
  return val; 
}

