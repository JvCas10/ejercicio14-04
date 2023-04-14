int sol = 330;
int la = 349;
int si = 370;

void setup()
{ 
}

void funcion1(int pinBuzzer, int nota1, int nota2, int nota3, int nota4, int nota5){
  const int frecuencias[] = {nota1, nota2, nota3, nota4, nota5};
  const int numFrecuencias = 5;
  for (int i = 0; i < 5; i++)
  {
   tone(pinBuzzer, frecuencias[i]);
   delay(500);
   noTone(pinBuzzer);
  }
}

void funcion2(int pin){
  pinMode(pin, OUTPUT);
  digitalWrite(pin, HIGH);
  delay(5000);
  digitalWrite(pin, LOW);
}

void loop(){
  funcion1(5, si, la, sol, la, si);
  funcion2(3);
}