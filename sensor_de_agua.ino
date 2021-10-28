const int pinoSensor = A0; //PINO ANALÓGICO UTILIZADO PELO SENSOR
const int pinoLED = 12; //PINO DIGITAL UTILIZADO PELO LED
               
void setup(){
  //Serial.begin(9600); //INICIALIZAÇÃO DA SERIAL
   pinMode(pinoSensor, INPUT); //DEFINE O PINO COMO ENTRADA
   pinMode(pinoLED, OUTPUT); //DEFINE O PINO COMO SAÍDA
}

void loop(){
  if(analogRead(pinoSensor) > 690){ //SE A LEITURA DO PINO FOR MAIOR QUE 690 BITS (PODE SER AJUSTADO), FAZ
      digitalWrite(pinoLED, HIGH); //ACENDE O LED
  }else{ //SENÃO, FAZ
    digitalWrite(pinoLED, LOW); //APAGA O LED
  }
 }
