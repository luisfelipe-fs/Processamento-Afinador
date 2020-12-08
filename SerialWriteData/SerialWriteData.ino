const int MAX_ITERATIONS = 5000; // 5 segundos / Delay(1) s = 5000; 
int count = 0;

void setup() {
  Serial.begin(9600); // Nota: Baud < Frequência de captura (1ms+FLOPS)
  pinMode(A0, INPUT); // = CONECTE A SAÍDA DO FILTRO EM A0
}

void loop() {
  long t = millis();
  int x = analogRead(A0);
  Serial.println(String(t) + " " + String(x));
  delay(1);
  count += 1;
}