# {Proyecto: Nombre del proyecto Hardware}
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

- 1x Microcontrolador (Arduino mega)

- 1x Servo motor MG966R

- 1x Servo motor MG996R-2

- Cable Dupont (macho-macho y macho-hembra)

- 1x cable USB tipo A a tipo B

- 1x sensor capacitivo LJC18A3-B-Z/BY

- 1x sensor inductivo LJ12A3-4-Z/BX

- 1x Motor DC (24V)

- 20x cubos de aluminio

- 20x cubos de PLA

- 1x Protoboard

- Tornillos M3 x 12mm (x6)

- Fuente de alimentación (24V)

- Fuente de alimentación (7V)

- Maquinaria de manufactura

- Robot UR5

- Opcional: Caja impresa en 3D (se puede incluir STL)

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

---

## ⚙️ Montaje y Ensamblado

Pasos detallados para ensamblar el dispositivo, incluir diagramas y fotos del proceso

**Paso 1:** Ensamblar la base

**Paso 2:** Conectar los motores al microcontrolador

**Paso 3:** Asegurar los componentes en la carcasa

### 🔌 Conexiones Eléctricas

Diagrama esquemático y tabla de conexiones entre componentes:

---

## 💻 Programación

**Tutorial de como usar el wizard de paletizado en el teach pendant del robot fisico**

- **Paso 1:** Al momento de iniciar el robot, tiene que salir la siguiente pantalla y se tiene que presionar al boton "Program robot" que esta encerrado en rojo

  ![](https://github.com/EnriqueM11/Proyecto_final_robotica_industrial/blob/main/media/images/Paso1.png)
- **Paso 2:** Saldra la siguiente ventan y se presiona "Empty program"

  ![](https://github.com/EnriqueM11/Proyecto_final_robotica_industrial/blob/main/media/images/Paso2.png)

- **Paso 3:** Lo mandara a la ventana del teach pendant del robot para utilizar el wizard del paletizado tiene que presionar Structure -> Wizard -> Pallet

  ![](https://github.com/EnriqueM11/Proyecto_final_robotica_industrial/blob/main/media/images/paso3.png)

---

## ✅ Conclusión

Resumen de lo que se logró construir, aprendizajes obtenidos y posibles mejoras o versiones futuras del proyecto.

---

## 🔜 Mejoras futuras

- Enlistar las mejoras a realizar

## ⚠️ Advertencia

Como se indica en la licencia MIT, este software/hardware se proporciona **sin ningún tipo de garantía**. Por lo tanto, ningún colaborador es responsable de **cualquier daño a tus componentes, materiales, PC, etc..**.

---

## 📚 Recursos Adicionales

---

## 👥 Autores del proyecto

Enrique Mendoza Sánchez

---

## 📬 Contacto

¿Tienes dudas o sugerencias?

- 📧 Correo electrónico: ejemplo@udlap.mx

---

