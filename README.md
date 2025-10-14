# Sensor de CO₂ con Arduino Uno

> Un dispositivo para monitorear la concentración de Dióxido de Carbono en tiempo real utilizando un sensor MH-Z19B, un Arduino Uno y una pantalla LCD.

Este proyecto fue desarrollado por miembros de la Academia de Física Experimental del Instituto Nacional de Chile, como parte de un estudio sobre los efectos de la concentración de CO₂ en el ambiente de aprendizaje y su posible impacto en el rendimiento académico de los estudiantes.

## ✨ Características Principales

  * **Monitoreo en Tiempo Real**: Mide la concentración de CO₂ en Partes Por Millón (PPM).
  * **Visualización Instantánea**: Muestra los datos en una pantalla LCD de 16x2.
  * **Plataforma Abierta**: Basado en Arduino Uno, una plataforma fácil de usar y modificar.
  * **Fácil de Replicar**: Utiliza componentes comunes y de bajo costo.

-----

## 🛠️ Componentes Necesarios

| Componente | Cantidad | Descripción |
| :--- | :---: | :--- |
| Arduino Uno | 1 | Placa microcontroladora principal. |
| Sensor de CO₂ MH-Z19B | 1 | Sensor NDIR para medir CO₂. |
| Pantalla LCD I2C 16x2 | 1 | Muestra los datos de PPM. |
| Protoboard (Placa de Pruebas) | 1 | Para montar el circuito sin soldar. |
| Cables Jumper (Macho-Hembra) | Varios | Para realizar las conexiones. |

-----

## 🔌 Conexiones

Para ensamblar el proyecto, realiza las siguientes conexiones con cuidado.

### Conexión del Display LCD I2C

| Pin del LCD | Pin del Arduino Uno |
| :---: | :---: |
| GND | GND |
| VCC | 5V |
| SDA | A4 |
| SCL | A5 |

### Conexión del Sensor de CO₂ MH-Z19B

El punto más importante es **cruzar los pines de datos**: el transmisor (TX) del sensor se conecta al receptor (RX) del Arduino, y viceversa.

| Pin del Sensor | Pin del Arduino Uno |
| :---: | :---: |
| VCC | 5V |
| GND | GND |
| **TX** | **A0** |
| **RX** | **A1** |

## 👥 Autores y Agradecimientos

Este proyecto fue creado con fines educativos y de investigación por:

  * Felipe Colli Olea
  * Benjamin Contreras
  * Manuel Pastenes
  * Pablo Cruzat

Somos miembros de la **Academia de Física Experimental** del **Instituto Nacional de Chile**. Agradecemos a la academia por el apoyo y los recursos proporcionados.

## 📜 Licencia

Este proyecto es de dominio público o se puede licenciar bajo la **Licencia MIT**, que permite su libre uso, modificación y distribución.
