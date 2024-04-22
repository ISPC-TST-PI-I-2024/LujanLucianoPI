import machine
import utime 
import time 

print("Hola, Estoy ready!")

led_pin=0
boton_pin=32

led_pin=machine.Pin(led_pin, machine.Pin.OUT)
boton_pin=machine.Pin(boton_pin, machine.Pin.IN)

def encendidoled():
    while True:
        if boton_pin.value()==1:
            led_pin.on()
        elif boton_pin.value()==0:
            led_pin.off()
            time.sleep(0.2)
encendidoled()