#include <Arduino.h>

int led_7_doan[8]={0x06,0x5B,0x40,0x66,0x6D,0x7D,0x07,0x7F};
int led_a = 2;
int led_b = 3;
int led_c = 4;
int led_d = 5;
int led_e = 6;
int led_f = 7;
int led_g = 8;
int led_dp =9;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
pinMode(led_a,OUTPUT);
pinMode(led_b,OUTPUT);
pinMode(led_c,OUTPUT);
pinMode(led_d,OUTPUT);
pinMode(led_e,OUTPUT);
pinMode(led_f,OUTPUT);
pinMode(led_g,OUTPUT);
pinMode(led_dp,OUTPUT);

}

void loop(){
  
}
void dem_tang_dan()
{
  digitalWrite(led_a,LOW);
  digitalWrite(led_b,LOW);
  digitalWrite(led_c,LOW);
  digitalWrite(led_d,LOW);
  digitalWrite(led_e,LOW);
  digitalWrite(led_f,LOW);
  digitalWrite(led_g,HIGH);
  digitalWrite(led_dp,LOW);
  delay(1000);

  digitalWrite(led_a,HIGH);
  digitalWrite(led_b,HIGH);
  digitalWrite(led_c,HIGH);
  digitalWrite(led_d,HIGH);
  digitalWrite(led_e,HIGH);
  digitalWrite(led_f,HIGH);
  digitalWrite(led_g,LOW);
  digitalWrite(led_dp,HIGH);
  delay (1000);
}