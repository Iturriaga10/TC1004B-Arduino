"""Escribe un algoritmo que dada una longitud en metros, calcule y muestre su equivalente en pies.
Recuerda que 1 pie = 12 pulgadas, 1 pulgada = 2.54 cm, 1 m = 100 cm. Una vez realizado el algoritmo crear un 
programa en Python que solucione este problema"""

longitud = input("ingrese la longitud: ")
conv_cm = float(longitud) * 100
conv_pulg = conv_cm / 2.5
conv_foot = conv_pulg / 12
print("El resultado en pies es: " + str(conv_foot) )
