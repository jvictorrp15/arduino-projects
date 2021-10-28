// **************************************************************************************************************************************************************************
//                                                                               Projeto do, re, mi, fa
//      Bem vindo ao projeto, foi utilizado um buzzer, protoboard e um aduino uno. O intuito desse projeto é fazer com que o buzzer toque as notas musicais em loop.
// **************************************************************************************************************************************************************************


int buzzer = 8;//Atribui o valor 8 a variavel buzzer, que representa o pino digital 8, onde o buzzer está conectado

void setup() 
{
pinMode(buzzer,OUTPUT);//Definindo o pino buzzer como de saída.
}

void loop()
{
    tone(buzzer,262,200);//Frequência e duração da nota Dó
    delay(200);//Intervalo de 200 milissegundos
    tone(buzzer,294,300);//Frequência e duração da nota Ré
    delay(200);//Intervalo de 200 milissegundos
    tone(buzzer,330,300);//Frequência e duração da nota Mi
    delay(200);//Intervalo de 200 milissegundos
    tone(buzzer,349,300);//Frequência e duração da nota Fá
    delay(300);//Intervalo de 300 milissegundos
    tone(buzzer,349,300);//Frequência e duração da nota Fá
    delay(300);//Intervalo de 300 milissegundos
    tone(buzzer,349,300);//Frequência e duração da nota Fá
    delay(300);//Intervalo de 300 milissegundos
    tone(buzzer,262,100);//Frequência e duração da nota Dó
    delay(200);//Intervalo de 200 milissegundos
    tone(buzzer,294,300);//Frequência e duração da nota Ré
    delay(200);//Intervalo de 200 milissegundos
    tone(buzzer,262,100);//Frequência e duração da nota Dó
    delay(200);//Intervalo de 200 milissegundos
    tone(buzzer,294,300);//Frequência e duração da nota Ré
    delay(300);//Intervalo de 300 milissegundos
    tone(buzzer,294,300);//Frequência e duração da nota Ré
    delay(300);//Intervalo de 300 milissegundos
    tone(buzzer,294,300);//Frequência e duração da nota Ré
    delay(300);//Intervalo de 300 milissegundos
    tone(buzzer,262,200);//Frequência e duração da nota Dó
    delay(200);//Intervalo de 200 milissegundos
    tone(buzzer,392,200);//Frequência e duração da nota Sol
    delay(200);//Intervalo de 200 milissegundos
    tone(buzzer,349,200);//Frequência e duração da nota Fá
    delay(200);//Intervalo de 200 milissegundos
    tone(buzzer,330,300);//Frequência e duração da nota Mi
    delay(300);//Intervalo de 300 milissegundos
    tone(buzzer,330,300);//Frequência e duração da nota Mi
    delay(300);//Intervalo de 300 milissegundos
    tone(buzzer,330,300);//Frequência e duração da nota Mi
    delay(300);//Intervalo de 300 milissegundos
    tone(buzzer,262,200);//Frequência e duração da nota Dó
    delay(200);//Intervalo de 200 milissegundos
    tone(buzzer,294,300);//Frequência e duração da nota Ré
    delay(200);//Intervalo de 200 milissegundos
    tone(buzzer,330,300);//Frequência e duração da nota Mi
    delay(200);//Intervalo de 200 milissegundos
    tone(buzzer,349,300);//Frequência e duração da nota Fá
    delay(300);//Intervalo de 300 milissegundos
    tone(buzzer,349,300);//Frequência e duração da nota Fá
    delay(300);//Intervalo de 300 milissegundos
    tone(buzzer,349,300);//Frequência e duração da nota Fá
    delay(2500);//Intervalo de 2,5 segundos 
}
