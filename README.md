# {Proyecto: Paletizado usando el brazo robotico UR5}
![MIT License](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)![Not Maintained](https://img.shields.io/badge/status-not_maintained-lightgrey?style=for-the-badge)
![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white)







Este proyecto utiliza un robot UR5 para una sola línea de producción automatizada, con el objetivo de optimizar el proceso de empacado. Los sensores integrados en el sistema tienen la capacidad de detectar si los materiales son metálicos o no metálicos. Dependiendo de la detección, un servomotor guiará el objeto hacia la ruta adecuada en el proceso de paletizado. El robot UR5 es responsable de manipular los materiales, garantizando que cada uno se procese correctamente y se coloque en el pallet correspondiente, mejorando la eficiencia y precisión del sistema.

---

## 📋 Requisitos Previos

- Conocimientos necesarios: uso basico de herramientas mecanicas y electronicas, conocimientos basicos de programacion, preferentemente en lenguajes como C/C++ para Arduino y lenguajes de programacion de control de robots, conocimiento en electronica, sistemas de control y automatizacion industrial.

- Herramientas requeridas: cautín para soldadura de componentes electrónicos, maquinaria de manufactura, herramientas basicas (destornillador, pinzas, etc.).

- Componentes electrónicos o mecánicos necesarios: Arduino Mega, sensores inductivo y capacitivo, servomotores, motor de DC, resistencias.

- Software necesario: Arduino IDE, SolidWorks, URSIM.

---

## 📖 Introducción

El propósito de este proyecto es replicar una línea de empacado automatizada utilizando un robot UR5, con el objetivo de optimizar el proceso de paletizado en entornos industriales. En esta línea, los sensores detectan si los materiales son metálicos o no metálicos, y dependiendo de la detección, un servomotor dirige el material a la ruta adecuada. Este sistema automatizado mejora la eficiencia, precisión y seguridad al reducir la intervención humana, asegurando que los materiales se procesen correctamente y se coloquen en los pallets de forma ordenada y efectiva.

Nuestra motivación para construir este proyecto es poder ver de forma física el funcionamiento de una línea automatizada y llevar el concepto a la práctica. Al integrar el robot UR5, los sensores y los servomotores, buscamos aplicar nuestros conocimientos en robótica y automatización para entender mejor los procesos industriales. Además, este proyecto tiene aplicaciones en sectores como la manufactura, la logística y la industria automotriz, y proporciona una valiosa experiencia en el diseño, implementación y optimización de sistemas robotizados en entornos reales.

---

## 🔩 Materiales

Lista detallada de componentes y materiales con cantidades aproximadas:

- 1x Microcontrolador (Arduino UNO o mega)

- 1x Servo motor MG966R

- 1x Servo motor MG996R-2

- Cable Dupont (macho-macho y macho-hembra)

- 1x cable USB tipo A a tipo B

- 1x sensor infrarrojo E18-D80NK

- 1x sensor inductivo LJ12A3-4-Z/BX

- 1x Motor DC (24V)

- 20x cubos de aluminio

- 20x cubos de PLA

- 1x Protoboard

- Tornillos M5 x 12mm (x20)

- Tuercas M5 (x20)

- Tornillos M4 x 12mm (x20)

- Tuercas M4 (x20)

- Tornillos M3 x 12mm(x10)

- Tuercas M3 (x20)

- Fuente de alimentación (24V)

- Fuente de alimentación (7V)

- Maquinaria de manufactura

- Robot UR5

---
## 💾 Instalación de Software

**Descargar el Arduino IDE:**
- Ve al sitio web oficial de Arduino: https://www.arduino.cc/en/software.

- Selecciona el sistema operativo que estás usando (Windows, macOS, Linux).

- Haz clic en el botón de descarga correspondiente. Si usas Windows, puedes elegir entre el instalador o el archivo comprimido.

**Instalar el Arduino IDE:**

**En Windows:**

- Si descargaste el instalador: Haz doble clic en el archivo .exe descargado para iniciar la instalación.

- Acepta los términos de uso.

- Elige la carpeta de instalación y haz clic en "Install".

- Espera a que la instalación termine y haz clic en "Finish" para finalizar.

- Si descargaste el archivo comprimido:

- Extrae el contenido del archivo ZIP en una carpeta de tu elección.

- Dentro de la carpeta extraída, encontrarás el archivo arduino.exe. Haz doble clic para abrir el IDE.

Tambien se utilizo el software de SolidWorks para el diseño de las piezas, para hacer uso del software es necesario una licencia.

---

## ⚙️ Montaje y Ensamblado

Pasos detallados para ensamblar el dispositivo, incluir diagramas y fotos del proceso

**Paso 1:** Ensamblar la base

**Paso 2:** Conectar los motores al microcontrolador

**Paso 3:** Asegurar los componentes en la carcasa

### 🔌 Conexiones Eléctricas

Diagrama esquemático y tabla de conexiones entre componentes:

![](https://github.com/EnriqueM11/Proyecto_final_robotica_industrial/blob/main/media/images/Proyecto%20final%20robotica%20industrial.png)

Porque el diagrama se hizo mediante thinkercad, no cuenta con los sensores correspondientes pero el sensor llamado "PIR2" seria el sensor inductivo

Tabla de conexiones entre componentes

Alimentacion:
![](https://github.com/EnriqueM11/Proyecto_final_robotica_industrial/blob/main/media/images/Tabla_voltajes.png)

Datos:

![](https://github.com/EnriqueM11/Proyecto_final_robotica_industrial/blob/main/media/images/Tabla_datos.png)

---

## 💻 Programación

**Tutorial de como usar el wizard de paletizado en el teach pendant del robot fisico**

- **Paso 1:** Al momento de iniciar el robot, tiene que salir la siguiente pantalla y se tiene que presionar al boton "Program robot" que esta encerrado en rojo

  ![](https://github.com/EnriqueM11/Proyecto_final_robotica_industrial/blob/main/media/images/Paso1.png)
- **Paso 2:** Saldra la siguiente ventan y se presiona "Empty program"

  ![](https://github.com/EnriqueM11/Proyecto_final_robotica_industrial/blob/main/media/images/Paso2.png)

- **Paso 3:** Lo mandara a la ventana del teach pendant del robot para utilizar el wizard del paletizado tiene que presionar Structure -> Wizards -> Pallet

  ![](https://github.com/EnriqueM11/Proyecto_final_robotica_industrial/blob/main/media/images/paso3.png)

- **Paso 4:** Le saldra la siguiente ventana, en el cual le preguntara el tipo de patron que va a llenar el pallet. En este caso se selecciono el de linea.

![](https://github.com/EnriqueM11/Proyecto_final_robotica_industrial/blob/main/media/images/Paso4.png)

- **Paso 5:** El wizard le preguntara cuantas cajas va a acomodar, aqui se puede el valor que quiera el usuario.

  ![](https://github.com/EnriqueM11/Proyecto_final_robotica_industrial/blob/main/media/images/paso5.png)

- **Paso 6:** Despues tendra que mover el robot para marcarle el punto de inicio del paletizado

  ![](https://github.com/EnriqueM11/Proyecto_final_robotica_industrial/blob/main/media/images/paso6.png)

- **Paso 7:** De igual manera tendra que mover el robot para marcar el punto final del paletizado

  ![](https://github.com/EnriqueM11/Proyecto_final_robotica_industrial/blob/main/media/images/paso7.png)

- **Paso 8:** En las secciones de "Approach_1" y "Pattern point_1" el waypoint es el mismo que se utiliza en el paso 6

  ![](https://github.com/EnriqueM11/Proyecto_final_robotica_industrial/blob/main/media/images/paso8.png)
- **Paso 9:** En las secciones "Set" y "Wait" es para declarar acciones. En el caso de set es para que realice una accion antes de seguir con el codigo y en el caso de wait es para que el robot espere cierto tiempo antes de seguir con el codigo.

  ![](https://github.com/EnriqueM11/Proyecto_final_robotica_industrial/blob/main/media/images/paso9.png)

- **Paso 10:** En la seccion de "Exit_1" aqui se declara un punto en el cual el robot va a ir despues de haber colocado una caja.

  ![](https://github.com/EnriqueM11/Proyecto_final_robotica_industrial/blob/main/media/images/paso10.png)
  
¡Listo! Ya esta configurado el pallet solo queda en dar RUN al programa

**Explicacion breve del funcionamiento del codigo en Arduino**

Este apartado solamente se hablara sobre las partes importantes del codigo del funcionamiento de la banda de produccion, para mas detalles puede ver el codigo llamado "banda_de_produccion.ino" dentro de la carpeta src.


- Aqui detecta el estado de los sensores para verificar si ha habido algun cambio. El sensor inductivo esta bajo la variable llamada "sensorNPN" y el sensor infrarrojo esta bajo la variable llamada "sensorPNP".
```
bool pnpDetecta = digitalRead(sensorPNP) == LOW; 
bool npnDetecta = digitalRead(sensorNPN) == LOW;
```


- Cuando solo el sensor PNP detecta, el sistema activa únicamente el servo2, que realiza un movimiento de 0° a 90° y regresa. Este podría representar una ruta de clasificación específica para ese tipo de material.
```
if (pnpDetecta && !npnDetecta) {
    
    Serial.println("Solo PNP detecta - Servo 2");

    delay(7000);

    for (int pos = 0; pos <= 90; pos++) {
      servo2.write(pos);
      delay(5);
    }

    delay(100);

    for (int pos = 90; pos >= 0; pos--) {
      servo2.write(pos);
      delay(5);
    }

  } 
```

- Si ambos sensores detectan simultáneamente, el sistema considera un caso especial, para este caso detecta que es un objeto metalico. Primero actúa el servo2, luego el servo1, y al final ambos regresan a la posición inicial.

```
else if (pnpDetecta && npnDetecta) {
    
    Serial.println("Ambos sensores - Servos 1 y 2");

    delay(50);

   
    for (int pos = 0; pos <= 90; pos++) {
      servo2.write(pos);
      delay(4);
    }

    delay(8000);

   
    for (int pos = 0; pos <= 90; pos++) {
      servo1.write(pos);
      delay(5);
    }

    delay(8000);

    
    for (int pos = 90; pos >= 0; pos--) {
      servo1.write(pos);
      servo2.write(pos);
      delay(5);
    }
  } 
```
---

## ✅ Conclusión

Este proyecto demostró la exitosa implementación de un sistema automatizado de clasificación y direccionamiento de materiales en una línea de empaquetamiento. Mediante la integración de un Arduino, sensores de proximidad (PNP y NPN) y servomotores, se logró distinguir eficazmente entre objetos metálicos y plásticos, desviando cada tipo hacia conductos específicos.
Este sistema híbrido, que combina la versatilidad y la capacidad de detección del Arduino con la precisión y la manipulación avanzada del robot industrial UR5, representa una solución eficiente y adaptable para optimizar los procesos de empaquetamiento. La automatización de la clasificación inicial mediante sensores y actuadores controlados por Arduino permitió un flujo de trabajo continuo y una preparación adecuada para la etapa de paletizado robótico. La implementación de este tipo de sistemas contribuye significativamente a la mejora de la productividad, la reducción de errores y la optimización de los recursos en entornos de producción industrial.


---

## 🔜 Mejoras futuras

- Integración de Sensor de Color: Ampliar la capacidad de clasificación para incluir la discriminación de materiales plásticos basada en su color, permitiendo una segregación más granular.
- Implementación de Visión Artificial: Incorporar un sistema de visión basado en cámaras y procesamiento de imágenes para analizar la forma, el tamaño y el tipo específico de los objetos, incrementando la precisión de la clasificación.
- Control de Velocidad Variable de la Banda Transportadora: Implementar un sistema que ajuste dinámicamente la velocidad de la banda en función del tipo de material y la demanda del sistema de paletizado, optimizando el flujo de producción
- Mecanismo de Desviación Mejorado: Rediseñar o modificar el sistema de desviación para asegurar una manipulación más suave de los objetos, minimizando el riesgo de daños, especialmente en materiales frágiles.
- Comunicación Bidireccional Robusta: Establecer un protocolo de comunicación más complejo entre el Arduino y el robot UR5 para el intercambio de información detallada sobre las características de los materiales (tipo, orientación) y el estado del proceso de paletizado
- Desarrollo de una Interfaz Hombre-Máquina (HMI): Implementar una interfaz gráfica intuitiva para facilitar la supervisión del sistema, la visualización de datos de producción, la configuración de parámetros y el diagnóstico de posibles fallos.


## ⚠️ Advertencia

Como se indica en la licencia MIT, este software/hardware se proporciona **sin ningún tipo de garantía**. Por lo tanto, ningún colaborador es responsable de **cualquier daño a tus componentes, materiales, PC, etc..**.

---

## 📚 Recursos Adicionales

Craig, J. J. (2014). Introduction to robotics: Mechanics and control (4th ed.). Pearson Education.​

Siciliano, B., & Khatib, O. (Eds.). (2016). Springer handbook of robotics (2nd ed.). Springer. https://doi.org/10.1007/978-3-319-32552-1​

Universal Robots. (2024). UR5e Technical specifications. Recuperado de https://www.universal-robots.com/products/ur5-robot/​

RoboDK. (2024). Robot simulation and offline programming documentation. Recuperado de https://robodk.com/documentation/​

Niku, S. B. (2020). Introduction to robotics: Analysis, control, applications (3rd ed.). Wiley

---

## 👥 Autores del proyecto

Enrique Mendoza Sánchez

Edgar Jiménez Guridi

Carlos Uriel Herrera Cuahuizo

---

## 📬 Contacto

¿Tienes dudas o sugerencias?

- 📧 Correo electrónico: cesar.martinez@udlap.mx

---

