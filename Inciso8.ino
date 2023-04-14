void setup()
{
}

void Azules(int Azul1, int Azul2){
  pinMode(Azul1, OUTPUT);
  pinMode(Azul2, OUTPUT);
  digitalWrite(Azul1, HIGH);
  digitalWrite(Azul2, HIGH);
  delay(1000);
  digitalWrite(Azul1, LOW);
  digitalWrite(Azul2, LOW);
}

void Verdes(int Verde1, int Verde2){
  pinMode(Verde1, OUTPUT);
  pinMode(Verde2, OUTPUT);
  digitalWrite(Verde1, HIGH);
  digitalWrite(Verde2, HIGH);
  delay(2000);
  digitalWrite(Verde1, LOW);
  digitalWrite(Verde2, LOW);
}

void loop()
{
	Azules(5, 6);
  Verdes(3, 4);
}