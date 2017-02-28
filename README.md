#LINCEDUINO
Desarrollo de linceduino, ayuda electrónica del lince.
##Hardware
Elementos físicos y conexionado:
- Arduino Mega.
- SD Shield.
- [Emisor de radiofrecuencia tipo 3DR Robotics](https://www.amazon.es/SODIAL-Telemetria-Quadcopter-Multirotor-robotica/dp/B0171NHADI/ref=sr_1_3?ie=UTF8&qid=1488274897&sr=8-3&keywords=3dr+robotic)   (con recepetor a PC): rojo (5v), negro (gnd), amarillo (pin 17 RX2), verde (pin 16 TX2). 
![ ](/home/pedro/CloudStation/git/linceduino/images/emisor_receptor_radiofrecuencia.jpg  "Emisor recpetor radiofrecuencia")
- LCD I2C 20x4: GND (gnd), VCC (5v), SDA (pin 20), SCL (pin 21).
![ ](/home/pedro/CloudStation/git/linceduino/images/lcd20x4_i2c.jpg  "lc2 20x4 i2c")
- Pulsador de marcha con resistencia de 10 K en serie: pata de pulsador a 5V, la otra a pin 19, resistencia una pata a pin 19 y la otra a GND.
- Conmutador de grabación y resistencia de 10K: Conmutador común a pin 7, otra pata del conmutador a 5v, resistencia de 10 K a pin y la otra pata de la resistencia a GND.
- Sensor magnético Hall: Negro a pin 2, marrón a 5V y azul a GND.
