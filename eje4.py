"""Escribe un algoritmo que muestre la velocidad promedio de un automóvil dadas la distancia recorrida en 
kilómetros y el tiempo que se tardó en recorrer esa distancia dado en horas. Una vez realizado el algoritmo crear 
un programa en Python que solucione este problema."""

distance = input("escriba la distancia en Kilometros:")
time = input("escriba su tiempo en horas: ")
vel = float(distance) / float(time)
print("la velocidad es" + str(vel) + " " +"km/hr")

#duda