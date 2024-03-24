// Definición de pines para el primer semáforo
const int redPin1 = 12;
const int yellowPin1 = 11;
const int greenPin1 = 10;

// Definición de pines para el segundo semáforo
const int redPin2 = 9;
const int yellowPin2 = 8;
const int greenPin2 = 7;

// Definición de pines para el tercer semáforo
const int redPin3 = 6;
const int yellowPin3 = 5;
const int greenPin3 = 4;

// Definición de pines para el cuarto semáforo
const int redPin4 = 3;
const int yellowPin4 = 2;
const int greenPin4 = 1;

// Tiempos de espera (en milisegundos)
const unsigned long redTime = 5000;
const unsigned long yellowTime = 2000;
const unsigned long greenTime = 5000;

unsigned long previousMillis = 0;
int currentState = 0;

void setup() {
  // Configurar los pines como salidas
  pinMode(redPin1, OUTPUT);
  pinMode(yellowPin1, OUTPUT);
  pinMode(greenPin1, OUTPUT);
  
  pinMode(redPin2, OUTPUT);
  pinMode(yellowPin2, OUTPUT);
  pinMode(greenPin2, OUTPUT);
  
  pinMode(redPin3, OUTPUT);
  pinMode(yellowPin3, OUTPUT);
  pinMode(greenPin3, OUTPUT);
  
  pinMode(redPin4, OUTPUT);
  pinMode(yellowPin4, OUTPUT);
  pinMode(greenPin4, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= redTime) {
    previousMillis = currentMillis;
    switch (currentState) {
      case 0: // Semáforo 1: Encender luz roja
        digitalWrite(greenPin1, LOW);
        digitalWrite(redPin1, HIGH);
        currentState++;
        break;
      case 1: // Semáforo 1: Encender luz amarilla
        digitalWrite(redPin1, LOW);
        digitalWrite(yellowPin1, HIGH);
        currentState++;
        break;
      case 2: // Semáforo 1: Apagar luz amarilla, encender luz verde
        digitalWrite(yellowPin1, LOW);
        digitalWrite(greenPin1, HIGH);
        currentState++;
        break;
      case 3: // Semáforo 1: Apagar luz verde
        digitalWrite(greenPin1, LOW);
        currentState++;
        break;
      case 4: // Semáforo 2: Encender luz roja
        digitalWrite(greenPin2, LOW);
        digitalWrite(redPin2, HIGH);
        currentState++;
        break;
      case 5: // Semáforo 2: Encender luz amarilla
        digitalWrite(redPin2, LOW);
        digitalWrite(yellowPin2, HIGH);
        currentState++;
        break;
      case 6: // Semáforo 2: Apagar luz amarilla, encender luz verde
        digitalWrite(yellowPin2, LOW);
        digitalWrite(greenPin2, HIGH);
        currentState++;
        break;
      case 7: // Semáforo 2: Apagar luz verde
        digitalWrite(greenPin2, LOW);
        currentState++;
        break;
      case 8: // Semáforo 3: Encender luz roja
        digitalWrite(greenPin3, LOW);
        digitalWrite(redPin3, HIGH);
        currentState++;
        break;
      case 9: // Semáforo 3: Encender luz amarilla
        digitalWrite(redPin3, LOW);
        digitalWrite(yellowPin3, HIGH);
        currentState++;
        break;
      case 10: // Semáforo 3: Apagar luz amarilla, encender luz verde
        digitalWrite(yellowPin3, LOW);
        digitalWrite(greenPin3, HIGH);
        currentState++;
        break;
      case 11: // Semáforo 3: Apagar luz verde
        digitalWrite(greenPin3, LOW);
        currentState++;
        break;
      case 12: // Semáforo 4: Encender luz roja
        digitalWrite(greenPin4, LOW);
        digitalWrite(redPin4, HIGH);
        currentState++;
        break;
      case 13: // Semáforo 4: Encender luz amarilla
        digitalWrite(redPin4, LOW);
        digitalWrite(yellowPin4, HIGH);
        currentState++;
        break;
      case 14: // Semáforo 4: Apagar luz amarilla, encender luz verde
        digitalWrite(yellowPin4, LOW);
        digitalWrite(greenPin4, HIGH);
        currentState++;
        break;
      case 15: // Semáforo 4: Apagar luz verde
        digitalWrite(greenPin4, LOW);
        currentState = 0;
        break;
    }
  }
}
