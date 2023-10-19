//hc-sr04
#include <Ultrasonic.h>

#define pino_trigger 11
#define pino_echo 12



int motor_r2 = 9;
int motor_r1 = 10;

int motor_l2 = 5;
int motor_l1 = 6;

int speed = 150;

int L_S = A0; //sincer L
int R_S = A1; //sincer R

Ultrasonic ultrasonic(pino_trigger, pino_echo);

void setup(){

  pinMode (13, OUTPUT);

  Serial.begin(9600);
  Serial.println("Lendo dados do sensor...");
 

 pinMode(motor_l1, OUTPUT);
 pinMode(motor_l2, OUTPUT);
 
 pinMode(motor_r1, OUTPUT);
 pinMode(motor_r2, OUTPUT);
 
 pinMode(L_S, INPUT);
 pinMode(R_S, INPUT);
 
 delay(1000);
 }

void loop(){

  //Le as informacoes do sensor, em cm e pol
  float cmMsec;
  long microsec = ultrasonic.timing();
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
  //Exibe informacoes no serial monitor
  Serial.print("\nDistancia em cm: ");
  Serial.print(cmMsec);
  delay(1);

  if (cmMsec <= 10.00) {

    digitalWrite (13, HIGH);
    delay(100);
    digitalWrite (13, LOW);
    delay(100);
    stop();
    
  }

  else {
  if ((digitalRead(L_S) == 0)&&(digitalRead(R_S) == 0)){forword();}

  if ((digitalRead(L_S) == 0)&&(digitalRead(R_S) == 1)){turnRight();}

  if ((digitalRead(L_S) == 1)&&(digitalRead(R_S) == 0)){turnLeft();}

  if ((digitalRead(L_S) == 1)&&(digitalRead(R_S) == 1)){stop();}

  digitalWrite (13, LOW);
  }
  

}


void stop(){
 analogWrite(motor_l1, 0);
 analogWrite(motor_l2, 0);
 analogWrite(motor_r1, 0);
 analogWrite(motor_r2, 0);  
}

void forword(){
 analogWrite(motor_l1, speed);
 analogWrite(motor_l2, 0);
 analogWrite(motor_r1, 0);
 analogWrite(motor_r2, speed);  
}

void backword(){
 analogWrite(motor_l1, 0);
 analogWrite(motor_l2, speed);
 analogWrite(motor_r1, speed);
 analogWrite(motor_r2, 0);   
}


void turnRight(){
analogWrite(motor_l1, 0);
analogWrite(motor_l2, speed);
analogWrite(motor_r1, 0);
analogWrite(motor_r2, speed);  
}

void turnLeft(){
analogWrite(motor_l1, speed);
analogWrite(motor_l2, 0);
analogWrite(motor_r1, speed);
analogWrite(motor_r2, 0);   
}

