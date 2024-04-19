#include<SoftwareSerial.h> 
SoftwareSerial bt_ser(4,5); //connected to RX and TX pins for serial data communication 
char c[6]; 
int i=0,speed_value=0,send_value; 
#define pwm1     9   //input 2 
#define pwm2    10   //input 1 
boolean motor_dir = 0; 
void setup() 
{ 
	Serial.begin(9600); 
	bt_ser.begin(9600); 
	pinMode(pwm1,   OUTPUT); 
	pinMode(pwm2,   OUTPUT); 
} 
void loop() 
{ 
	 while(bt_ser.available())   //when data is transmitted 
	   { 
	     if(bt_ser.available()>0) 
	     { 
	       c[i] = bt_ser.read();   //reading the string sent from master device 
	       Serial.print(c[i]);  
	       i++;   
	     } 
	     if(c[i-1]=='N')    //if button is pressed 
	      { 
	        motor_dir = !motor_dir;     //toggle direction variable 
	        if(motor_dir)               //setting direction, pwm1 and pwm2 are opposites 
	          digitalWrite(pwm2, 0); 
	        else 
	          digitalWrite(pwm1, 0);  
	      } 
	    } 
	     speed_value = (c[1]-48)*100+(c[2]-48)*10+(c[3]-48)*1;  //interpreting speed from string 
	     if(motor_dir)   //for a given direction 
	        { 
	          if(c[i-1]=='#'){   //if data has been transmitted from slider 
	            analogWrite(pwm1, speed_value-100);  //-100 so that when slider is on "0" speed is 0 
	            i=0; 
	          } 
	        } 
	      else{       //for opposite direction 
	        if(c[i-1]=='#'){ 
	          analogWrite(pwm2, speed_value-100); 
	          i=0; 
	        } 
	      } 
}    
