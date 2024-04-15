int numPines[] = {2, 3, 4}; // Array de pines
int constanteDeTiempo = 200;
unsigned long previousMillis = 0;
unsigned long currentMillis = 0;
unsigned long elapsedTime = 0;
int currentState = 0;

void setup() {
  for (int i = 0; i < sizeof(numPines) / sizeof(numPines[0]); i++) {
    pinMode(numPines[i], OUTPUT); // Configurar pines como salida
  }
  previousMillis = millis(); // Tiempo inicial
}

void loop() {
  currentMillis = millis(); // Tiempo actual
  elapsedTime = currentMillis - previousMillis; // Tiempo transcurrido
  
  switch (currentState) {
    case 0: // Rojo
      if (elapsedTime <= (4 * constanteDeTiempo)) {
        digitalWrite(numPines[0], HIGH); // Rojo
        digitalWrite(numPines[1], LOW); // Amarillo
        digitalWrite(numPines[2], LOW); // Verde
      }
      if (elapsedTime >= (4 * constanteDeTiempo) + 1) {
        currentState = 1; // Cambiar a Verde
        previousMillis = currentMillis;
      }
      break;
    case 1: // Verde
      if (elapsedTime <= (4 * constanteDeTiempo)) {
        digitalWrite(numPines[0], LOW); // Rojo
        digitalWrite(numPines[1], LOW); // Amarillo
        digitalWrite(numPines[2], HIGH); // Verde
      }
      if (elapsedTime >= (4 * constanteDeTiempo) + 1) {
        currentState = 2; // Cambiar a Amarillo
        previousMillis = currentMillis;
      }
      break;
    case 2: // Amarillo
      if (elapsedTime <= (constanteDeTiempo)) {
        digitalWrite(numPines[0], LOW); // Rojo
        digitalWrite(numPines[1], HIGH); // Amarillo
        digitalWrite(numPines[2], LOW); // Verde
      }
      if (elapsedTime >= (constanteDeTiempo)) {
        currentState = 0; // Volver a Rojo
        previousMillis = currentMillis;
      }
      break;
  }
}
