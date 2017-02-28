#LINCEDUINO
Desarrollo de linceduino, ayuda electrónica del lince.
![ ](images/linceduino 2.jpg  "Linceduino 2")
##Objetivo
El objetivo de linceduino es proporcionar una herramienta que ayude al piloto y al equipo del LINCE a tener información en tiempo real y guardada en fichero de parámetros del vehículo como: tiempo transcurrido, velocidad instantánea, velocidad media, distancia, nº de vuelta y pulsación del botón de encendido de motor. Los datos se muestran en pantalla del piloto (lcd 20x4) se guardan en tarjeta SD y se transmiten mediante radiofrecuencia a PC.
##Hardware
Elementos físicos y conexionado:
- Arduino Mega.
- SD Shield.
- [Emisor de radiofrecuencia tipo 3DR Robotics](https://www.amazon.es/SODIAL-Telemetria-Quadcopter-Multirotor-robotica/dp/B0171NHADI/ref=sr_1_3?ie=UTF8&qid=1488274897&sr=8-3&keywords=3dr+robotic)   (con receptor a PC): rojo (5v), negro (gnd), amarillo (pin 17 RX2), verde (pin 16 TX2). 
![ ](images/emisor_receptor_radiofrecuencia.jpg  "Emisor receptor radiofrecuencia")
- LCD I2C 20x4: GND (gnd), VCC (5v), SDA (pin 20), SCL (pin 21).
![ ](images/lcd20x4_i2c.jpg  "lc2 20x4 i2c")
- Pulsador de marcha con resistencia de 10 K en serie: pata de pulsador a 5V, la otra a pin 19, resistencia una pata a pin 19 y la otra a GND.
- Conmutador de grabación y resistencia de 10K: Conmutador común a pin 7, otra pata del conmutador a 5v, resistencia de 10 K a pin y la otra pata de la resistencia a GND.
- Sensor magnético Hall: Negro a pin 2, marrón a 5V y azul a GND.
![ ](images/sensor hall.jpg  "Sensor Hall")
Además hemos comprado para realizar un conexionado más seguro un shield conectar y listo (tienda electan) con cables para que el conexionado de todos los elementos sea mucho más seguro.
![ ](images/shield conectar y listo.png  "Shield Conectar y listo")
###Montaje de Linceduino
<iframe width="854" height="480" src="https://www.youtube.com/embed/O8orDAbzBl0" frameborder="0" allowfullscreen></iframe>
##Software
Antes de nada tener un ordenador con ubuntu instalado.
Instalar en el las aplicaciones arduino, kst y Gtkterm, estas aplicaciones están en el centro de software.
Descripción de aplicaciones:
- Arduino: software para programar nuestro arduino Mega.
- Gtkterm: grabador y visualizador de comunicaciones por puerto serie, puerto por el que manda y recibe datos nuestro emisor y receptor de radiofrecuencia.
- KST: representador de datos en tiempo real a través de los datos recogidos en un fichero por Gtkterm.
En nuestro arduino además debemos de agregar una librería para poder operar con nuestro lcd 20x4 (20 columnas 2 filas) de tipo I2C (sólo necesita 4 cables, 2 de alimentación y 2 de datos).
###Programa de Arduino
##Manual de uso
###LCD
![ ](images/lcd linceduino.png  "LCD linceduino")
- 1ª Fila: Velocidad instántanea, caracter de guardado (N o G) según como esté el conmutador de grabación
- 2ª fila: Velocidad media
- 3ª FIla: tiempo en h/m/s
- 4ª Fila: distancia, nº de vuelta (indica final si es la última)
### Secuencia de uso
1. Se inserta SD limpia
2. Se alimenta a Linceduino. El tiempo empieza a contar en LCD pero no computa. Cuando la rueda da la primera vuelta (pasa por el sensor) el tiempo se pone a 0 y empieza a contar el verdadero tiempo de computo.
3. Con el conmutador de guardado puedo elegir que guarde y transmita datos o que no lo haga, caracteres N o G del LCD.
### Visualización de datos de SD
En breve
### Visualización de datos en tiempo real
En breve
##Vídeos Linceduino
Os enlazamos veos de interés sobre linceduino.
- [Linceduino 1](https://www.youtube.com/watch?v=OVWAux1UXQ8)
- [Linceduino 2 dispositvos y telemetría](https://www.youtube.com/watch?v=JQcPb2iFT0I) 
- [Software telemetría Linceduino 2](https://www.youtube.com/watch?v=axf5u40hDhU) 
- [Montaje Linceduino 2](https://www.youtube.com/watch?v=O8orDAbzBl0) 

