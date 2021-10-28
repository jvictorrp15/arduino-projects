// **************************************************************************************************************************************************************************
//                                                   Projeto ativação de motor de passo através da do sensor de umidade e temperatura
//      Bem vindo ao projeto, foi utilizado um motor de passo, um sensor de umidade, protoboard e um arduino uno. O intuito desse projeto é fazer com que o motor de passo
// seja acionado através da umidade captada do ambiente pelo sensor de umidade.
// **************************************************************************************************************************************************************************

#include "dht.h" //INCLUSÃO DE BIBLIOTECA
#include <Stepper.h>   //biblioteca para controle de motor de passo

#define   in1   8      //entrada 1 do ULN2003
#define   in2   9      //entrada 2 do ULN2003
#define   in3  10      //entrada 3 do ULN2003
#define   in4  11      //entrada 4 do ULN2003

const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution
const int pinoDHT11 = A2; //PINO ANALÓGICO UTILIZADO PELO DHT11

dht DHT; //VARIÁVEL DO TIPO DHT
Stepper myStepper(stepsPerRevolution, in1,in3,in2,in4); 

void setup(){
  myStepper.setSpeed(30);
  Serial.begin(9600); //INICIALIZA A SERIAL
  delay(2000); //INTERVALO DE 2 SEGUNDO ANTES DE INICIAR
}
 
void loop(){
  DHT.read11(pinoDHT11); //LÊ AS INFORMAÇÕES DO SENSOR
  Serial.print("Umidade: "); //IMPRIME O TEXTO NA SERIAL
  Serial.print(DHT.humidity); //IMPRIME NA SERIAL O VALOR DE UMIDADE MEDIDO
  Serial.print("%"); //ESCREVE O TEXTO EM SEGUIDA
  Serial.print(" / Temperatura: "); //IMPRIME O TEXTO NA SERIAL
  Serial.print(DHT.temperature, 0); //IMPRIME NA SERIAL O VALOR DE UMIDADE MEDIDO E REMOVE A PARTE DECIMAL
  Serial.println("*C"); //IMPRIME O TEXTO NA SERIAL
  //delay(1000); //INTERVALO DE 2 SEGUNDOS * NÃO DIMINUIR ESSE VALOR
  if(DHT.humidity >= 50){
    myStepper.step(stepsPerRevolution);
    };
}//end loop
   
