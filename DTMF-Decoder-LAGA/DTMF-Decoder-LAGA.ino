int ModuleQ1 = 8;
int ModuleQ2 = 9;
int ModuleQ3 = 10;
int ModuleQ4 = 11;
int ModuleSTD = 7;
int ModuleVCC = 6;

void setup()
{
  Serial.begin(9600);
  Serial.println("DTMF-Decoder - By LAGA");
  pinMode(ModuleVCC, OUTPUT);
  pinMode(ModuleQ1, INPUT);
  pinMode(ModuleQ2, INPUT);
  pinMode(ModuleQ3, INPUT);
  pinMode(ModuleQ4, INPUT);
  pinMode(ModuleSTD, INPUT);
  Serial.println("Iniciando Modulo DTMF");
  digitalWrite(ModuleVCC, HIGH);
  Serial.println("Esperando Tono");
}

void loop()
{
  // Tono 1
  if (digitalRead(ModuleSTD) == HIGH && digitalRead(ModuleQ4) == LOW && digitalRead(ModuleQ3) == LOW && digitalRead(ModuleQ2) == LOW && digitalRead(ModuleQ1) == HIGH)
  {
    Serial.println("Tono Detectado: 1");
    delay(600);
  }
  //
  // Tono 2
  if (digitalRead(ModuleSTD) == HIGH && digitalRead(ModuleQ4) == LOW && digitalRead(ModuleQ3) == LOW && digitalRead(ModuleQ2) == HIGH && digitalRead(ModuleQ1) == LOW)
  {
    Serial.println("Tono Detectado: 2");
    delay(600);
  }
  //
  // Tono 3
  if (digitalRead(ModuleSTD) == HIGH && digitalRead(ModuleQ4) == LOW && digitalRead(ModuleQ3) == LOW && digitalRead(ModuleQ2) == HIGH && digitalRead(ModuleQ1) == HIGH)
  {
    Serial.println("Tono Detectado: 3");
    delay(600);
  }
  //
  // Tono 4
  if (digitalRead(ModuleSTD) == HIGH && digitalRead(ModuleQ4) == LOW && digitalRead(ModuleQ3) == HIGH && digitalRead(ModuleQ2) == LOW && digitalRead(ModuleQ1) == LOW)
  {
    Serial.println("Tono Detectado: 4");
    delay(600);
  }
  //
  // Tono 5
  if (digitalRead(ModuleSTD) == HIGH && digitalRead(ModuleQ4) == LOW && digitalRead(ModuleQ3) == HIGH && digitalRead(ModuleQ2) == LOW && digitalRead(ModuleQ1) == HIGH)
  {
    Serial.println("Tono Detectado: 5");
    delay(600);
  }
  //
  // Tono 6
  if (digitalRead(ModuleSTD) == HIGH && digitalRead(ModuleQ4) == LOW && digitalRead(ModuleQ3) == HIGH && digitalRead(ModuleQ2) == HIGH && digitalRead(ModuleQ1) == LOW)
  {
    Serial.println("Tono Detectado: 6");
    delay(600);
  }
  //
  // Tono 7
  if (digitalRead(ModuleSTD) == HIGH && digitalRead(ModuleQ4) == LOW && digitalRead(ModuleQ3) == HIGH && digitalRead(ModuleQ2) == HIGH && digitalRead(ModuleQ1) == HIGH)
  {
    Serial.println("Tono Detectado: 7");
    delay(600);
  }
  //
  // Tono 8
  if (digitalRead(ModuleSTD) == HIGH && digitalRead(ModuleQ4) == HIGH && digitalRead(ModuleQ3) == LOW && digitalRead(ModuleQ2) == LOW && digitalRead(ModuleQ1) == LOW)
  {
    Serial.println("Tono Detectado: 8");
    delay(600);
  }
  //
  // Tono 9
  if (digitalRead(ModuleSTD) == HIGH && digitalRead(ModuleQ4) == HIGH && digitalRead(ModuleQ3) == LOW && digitalRead(ModuleQ2) == LOW && digitalRead(ModuleQ1) == HIGH)
  {
    Serial.println("Tono Detectado: 9");
    delay(600);
  }
  //
  // Tono 0
  if (digitalRead(ModuleSTD) == HIGH && digitalRead(ModuleQ4) == HIGH && digitalRead(ModuleQ3) == LOW && digitalRead(ModuleQ2) == HIGH && digitalRead(ModuleQ1) == LOW)
  {
    Serial.println("Tono Detectado: 0");
    delay(600);
  }
  //
  // Tono *
  if (digitalRead(ModuleSTD) == HIGH && digitalRead(ModuleQ4) == HIGH && digitalRead(ModuleQ3) == LOW && digitalRead(ModuleQ2) == HIGH && digitalRead(ModuleQ1) == HIGH)
  {
    Serial.println("Tono Detectado: *");
    delay(600);
  }
  //
  // Tono #
  if (digitalRead(ModuleSTD) == HIGH && digitalRead(ModuleQ4) == HIGH && digitalRead(ModuleQ3) == HIGH && digitalRead(ModuleQ2) == LOW && digitalRead(ModuleQ1) == LOW)
  {
    Serial.println("Tono Detectado: #");
    delay(600);
  }
  //
}
