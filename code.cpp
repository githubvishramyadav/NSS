// int LED =13;
// void setup()
// {
// pinMode(LED, OUTPUT);
// Serial.begin(9600);
// }

// void loop()
// {
// digitalWrite(LED, HIGH);
// Serial.println('LED ON');
// delay(1000);

// digitalWrite(LED, LOW);
// Serial.println('LED OFF');
// delay(1000);
// }

// RGB

// int PIN_RED   = 5;
// int PIN_GREEN = 6;
// int PIN_BLUE  = 7;

// void setup() {
//   pinMode(PIN_RED,   OUTPUT);
//   pinMode(PIN_GREEN, OUTPUT);
//   pinMode(PIN_BLUE,  OUTPUT);
// }

// void loop() {
  
//   digitalWrite(PIN_RED,   HIGH);
//   digitalWrite(PIN_GREEN, LOW);
//   digitalWrite(PIN_BLUE,  LOW);

//   delay(1000); 

  
//   digitalWrite(PIN_RED,   LOW);
//   digitalWrite(PIN_GREEN, HIGH);
//   digitalWrite(PIN_BLUE,  LOW);

//   delay(1000); 

  
//   digitalWrite(PIN_RED,   LOW);
//   digitalWrite(PIN_GREEN, LOW);
//   digitalWrite(PIN_BLUE,  HIGH);

//   delay(1000); 
  
//     digitalWrite(PIN_RED,   HIGH);
//   digitalWrite(PIN_GREEN, HIGH);
//   digitalWrite(PIN_BLUE,  HIGH);

//   delay(1000); 
// }




//  PIR Sensor

// int LED = 13;
// int obsticlePin = 8;
// int buzz =7;
// int green = 6;
// int hasObstacle = HIGH;

// void setup()
// {
// pinMode(LED, OUTPUT);
// pinMode(obsticlePin, INPUT);
// pinMode(buzz, OUTPUT);
// pinMode(green, OUTPUT);
// Serial.begin(9600);
// }

// void loop() {

// hasObstacle = digitalRead(obsticlePin); //Reads the output of the obstacle sensor from the 7th PIN of t if (hasobstacle == HIGH) //HIGH means something is ahead, so illuminates the 13th Port connected LED
// if(hasObstacle == HIGH)
// {
// Serial.println("Stop something is ahead!!"); 
// digitalWrite(LED, HIGH);//Illuminates the 13th Port LED

// digitalWrite(buzz, HIGH);

// digitalWrite(green, LOW);
// }
// else
// {
// Serial.println("Fath is clear"); digitalWrite (LED, LOW);
// digitalWrite(buzz, LOW); digitalWrite(green, HIGH);
// }
// delay(1000);
// }

// Distance 

// long duration;
// int distanceCm;

// void setup() {
// pinMode (trigpin, OUTPUT);
// pinMode (echopin, INPUT); 
// Serial.begin(9600);
// void loop()
// {
// digitalWrite(trigpin, LOW); delayMicroseconds (2);
// digitalWrite (trigpin, HIGH); elayMicroseconds (10); 
// igitalWrite(trigpin, LOW); uration-pulse In (echopin, HIGH); 
// istanceCm-duration*0.034/2;
// rial.print ("Distance in Cm"); rial.println("distanceCm");




// Bulb And Sensor control System

// #include<Servo.h>
// Servo pintu;
// int lampu = 9;
// int ok;

// void setup()
// {
//   Serial.begin(9600);
//   pintu.attach(8);
//   pintu.write(0);
//   pinMode(lampu,OUTPUT);
// }
//  void loop()
//  {
//    if(Serial.available()>0)
//    {
//      ok = Serial.read();
//      Serial.print(ok);
//      Serial.print("");
//      Serial.println();
//      delay(100);
//      if(ok=='a')
//      {
//        digitalWrite(lampu,HIGH);
//         Serial.print("Bulb ON");
//      }
//      else if(ok=='b')
//      {
//        digitalWrite(lampu,LOW);
//         Serial.print("Bulb OFF");
//      }
//       else if(ok=='d')
//      {
//        pintu.write(0);
//        Serial.print("Fan OFF");
//      }
//       else if(ok=='c')
//      {
//         pintu.write(70);
//         Serial.print("Fan ON");
//      }
//    }
//  }




// char data =0;
// int red =13;
// int yellow = 12;
// int green =11;
// void setup(){

// }

// data =Serial.read();
