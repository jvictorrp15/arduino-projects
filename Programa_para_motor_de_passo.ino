// Programa para motor de passo
// ========================================================================================================
// --- Bibliotecas Auxiliares ---
#include <Stepper.h>   //biblioteca para controle de motor de passo


// ========================================================================================================
// --- Mapeamento de Hardware ---
#define   in1   8      //entrada 1 do ULN2003
#define   in2   9      //entrada 2 do ULN2003
#define   in3  10      //entrada 3 do ULN2003
#define   in4  11      //entrada 4 do ULN2003


// ========================================================================================================
// --- Constantes Auxiliares ---
const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution


// ========================================================================================================
// --- Declaração de Objetos ---
Stepper myStepper(stepsPerRevolution, in1,in3,in2,in4); 



// ========================================================================================================
// --- Configurações Iniciais ---
void setup() 
{
    // set the speed at 60 rpm:
  myStepper.setSpeed(60);
  

} //end setup


// ========================================================================================================
// --- Loop Infinito ---
void loop() 
{
  
  
  myStepper.step(stepsPerRevolution);
  


/*
  // step one revolution in the other direction:
  Serial.println("counterclockwise");
  myStepper.step(-stepsPerRevolution);
  delay(1500);
  
*/
} //end loop
