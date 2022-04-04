from cvzone.SerialModule import SerialObject
from time import sleep

arduino = SerialObject()#port inside like "com6"
while True:
    arduino.sendData([1])#sending array/list
    sleep(3)#delay
    arduino.sendData([0])
    sleep(1)