#define BLYNK_PRINT Serial


#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#define ON 255
#define OFF 0
bool isFirstConnect = true;
int pin0= 0;//BY DEFAULT LED OF ESP01 for relay
int pin1= 0;//BY DEFAULT LED OF ESP01 for relay
int pin2= 0;//BY DEFAULT LED OF ESP01 for relay
int pin3= 0;//BY DEFAULT LED OF ESP01 for relay
int pin4= 0;//BY DEFAULT LED OF ESP01 for relay
int pin5= 0;//BY DEFAULT LED OF ESP01 for relay
int pin6= 0;//BY DEFAULT LED OF ESP01 for relay
int pin7= 0;//BY DEFAULT LED OF ESP01 for relay
// You should get Auth Token in the Blynk App.
char auth[] = "aKB49qcMjtN6fxZrO9EcuXg4cCJYRI7v";//AUTHENTICATION TOKEN FROM EMAIL
char ssid[] = "Tech House";// ENTER YOR WIFI NAME
char pass[] = "lenovog50";// ENTER YOR WIFI Password
// in Blynk app writes va1lues to the Button Digital Pin 23

BLYNK_CONNECTED() // runs every time Blynk connection is established
{
    if (isFirstConnect) 
    {
// Request server to re-send latest values for all pins
    Blynk.syncAll();
    isFirstConnect = false;
    }
}
void setup()
{
  // Debug console
  Serial.begin(9600);
pinMode(pin0,OUTPUT);
pinMode(pin1,OUTPUT);
pinMode(pin2,OUTPUT);
pinMode(pin3,OUTPUT);
pinMode(pin4,OUTPUT);
pinMode(pin5,OUTPUT);
pinMode(pin6,OUTPUT);
pinMode(pin7,OUTPUT);
pinMode(12,INPUT_PULLUP); 
pinMode(13,INPUT_PULLUP);
pinMode(14,INPUT_PULLUP); 
pinMode(25,INPUT_PULLUP);
pinMode(26,INPUT_PULLUP); 
pinMode(27,INPUT_PULLUP);
pinMode(32,INPUT_PULLUP); 
pinMode(33,INPUT_PULLUP);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
int pinValue0=digitalRead(12);
int isButtonPressed = !digitalRead(2);

  if (pinValue0==LOW)
  { 
  
     digitalWrite(pin0, LOW);
   
       TurnOn();
   }
 else if (pinValue0==HIGH)
  {
    digitalWrite(pin0, HIGH);
    
       TurnOff();    
  }

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

  int pinValue1=digitalRead(13);
  if (pinValue1==LOW)
  {     
     digitalWrite(pin1, LOW);
     
       TurnOn1();
   }
 else if (pinValue1==HIGH)
  {
    digitalWrite(pin1, HIGH);
       TurnOff1();    
  } 
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
   int pinValue2=digitalRead(14);
  if (pinValue2==LOW)
  {     
     digitalWrite(pin2, LOW);
     
       TurnOn2();
   }
 else if (pinValue2==HIGH)
  {
    digitalWrite(pin2, HIGH);
       TurnOff2();    
  } 
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
   int pinValue3=digitalRead(25);
  if (pinValue3==LOW)
  {     
     digitalWrite(pin3, LOW);
     
       TurnOn3();
   }
 else if (pinValue3==HIGH)
  {
    digitalWrite(pin3, HIGH);
       TurnOff3();    
  }
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
 
   int pinValue4=digitalRead(26);
  if (pinValue4==LOW)
  {     
     digitalWrite(pin4, LOW);
     
       TurnOn4();
   }
 else if (pinValue4==HIGH)
  {
    digitalWrite(pin4, HIGH);
       TurnOff4();    
  }
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
 
   int pinValue5=digitalRead(27);
  if (pinValue5==LOW)
  {     
     digitalWrite(pin5, LOW);
     
       TurnOn5();
   }
 else if (pinValue5==HIGH)
  {
    digitalWrite(pin5, HIGH);
       TurnOff5();    
  }
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
 
   int pinValue6=digitalRead(32);
  if (pinValue6==LOW)
  {     
     digitalWrite(pin6, LOW);
     
       TurnOn6();
   }
 else if (pinValue6==HIGH)
  {
    digitalWrite(pin6, HIGH);
       TurnOff6();    
  }
  //xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
 
   int pinValue7=digitalRead(33);
  if (pinValue7==LOW)
  {     
     digitalWrite(pin7, LOW);
       TurnOn7();
   }
 else if (pinValue7==HIGH)
  {
    digitalWrite(pin7, HIGH);
       TurnOff7();    
  }
 //xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
} // void loop End


         

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx           

void TurnOn()
{
        Blynk.virtualWrite(V0, ON); // virtual LED 
     
    //    Particle.publish("TurnOn state executed : ", String(ON));
}

void TurnOff()
{
        Blynk.virtualWrite(V0, OFF); // virtual LED 
        
  //      Particle.publish("TurnOff state executed : ", String(OFF));
}
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
void TurnOn1()
{
        Blynk.virtualWrite(V1, ON); // virtual LED 
         
    //    Particle.publish("TurnOn state executed : ", String(ON));
}

void TurnOff1()
{
        Blynk.virtualWrite(V1, OFF); // virtual LED 
        
  //      Particle.publish("TurnOff state executed : ", String(OFF));
}
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
void TurnOn2()
{
        Blynk.virtualWrite(V2, ON); // virtual LED 
         
    //    Particle.publish("TurnOn state executed : ", String(ON));
}

void TurnOff2()
{
        Blynk.virtualWrite(V2, OFF); // virtual LED 
        
  //      Particle.publish("TurnOff state executed : ", String(OFF));
}
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
void TurnOn3()
{
        Blynk.virtualWrite(V3, ON); // virtual LED 
         
    //    Particle.publish("TurnOn state executed : ", String(ON));
}

void TurnOff3()
{
        Blynk.virtualWrite(V3, OFF); // virtual LED 
        
  //      Particle.publish("TurnOff state executed : ", String(OFF));
}

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
void TurnOn4()
{
        Blynk.virtualWrite(V4, ON); // virtual LED 
         
    //    Particle.publish("TurnOn state executed : ", String(ON));
}

void TurnOff4()
{
        Blynk.virtualWrite(V4, OFF); // virtual LED 
        
  //      Particle.publish("TurnOff state executed : ", String(OFF));
}
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
void TurnOn5()
{
        Blynk.virtualWrite(V5, ON); // virtual LED 
     
    //    Particle.publish("TurnOn state executed : ", String(ON));
}

void TurnOff5()
{
        Blynk.virtualWrite(V5, OFF); // virtual LED 
        
  //      Particle.publish("TurnOff state executed : ", String(OFF));
}
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
void TurnOn6()
{
        Blynk.virtualWrite(V6, ON); // virtual LED 
         
    //    Particle.publish("TurnOn state executed : ", String(ON));
}

void TurnOff6()
{
        Blynk.virtualWrite(V6, OFF ); // virtual LED 
        
  //      Particle.publish("TurnOff state executed : ", String(OFF));
}
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
void TurnOn7()
{
        Blynk.virtualWrite(V7, ON); // virtual LED 
         
    //    Particle.publish("TurnOn state executed : ", String(ON));
}

void TurnOff7()
{
        Blynk.virtualWrite(V7, OFF); // virtual LED 
        
  //      Particle.publish("TurnOff state executed : ", String(OFF));
}


  
