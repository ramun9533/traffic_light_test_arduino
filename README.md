Aquí tienes un ejemplo de archivo README para tu código de semáforo en Arduino:

---

# Control de Semáforos con Arduino

Este es un proyecto de Arduino que implementa el control de dos conjuntos de semáforos independientes utilizando un Arduino Uno.

## Descripción

El código controla dos semáforos, cada uno con luces rojas, amarillas y verdes. Cada semáforo alterna entre los estados de luz roja, amarilla y verde con intervalos de tiempo específicos.

## Componentes

- Arduino Uno (u otro modelo compatible)
- LEDs (3 de cada color por semáforo)
- Resistencias (si es necesario)
- Cables de conexión

## Configuración

### Pines

- **Semáforo 1:**
  - Luz Roja: Pin 12
  - Luz Amarilla: Pin 11
  - Luz Verde: Pin 10

- **Semáforo 2:**
  - Luz Roja: Pin 9
  - Luz Amarilla: Pin 8
  - Luz Verde: Pin 7

### Tiempos de Espera (en milisegundos)

- Luz Roja: 5000 ms
- Luz Amarilla: 2000 ms
- Luz Verde: 5000 ms

## Uso

1. Conecta los LEDs a los pines según la configuración descrita.
2. Carga el código en tu Arduino utilizando el IDE de Arduino.
3. Observa cómo los semáforos alternan entre los estados de luz roja, amarilla y verde.

## Notas

- Asegúrate de ajustar los tiempos de espera según tus preferencias o requisitos específicos.
- Este código utiliza la función `millis()` en lugar de `delay()` para un funcionamiento no bloqueante.

---

