from machine import Pin
from time import sleep


def ledrun():
    LEDS = [Pin(18,Pin.OUT),Pin(19,Pin.OUT),Pin(20,Pin.OUT)]
    
    while True:
        
        for  LED in LEDS:
             LED.on()
             sleep(0.5)
             
             LED.off()
             sleep(0.5)
             
ledrun()

from machine import Pin, Timer
led = Pin(25, Pin.OUT)
ledG = Pin(18, Pin.OUT)
ledY = Pin(19, Pin.OUT)
ledR = Pin(20, Pin.OUT)
timer = Timer()


def blink(timer):
    led.toggle()
    ledG.toggle()
    ledY.toggle()
    ledR.toggle()
    

timer.init(freq=5, mode=Timer.PERIODIC, callback=blink)