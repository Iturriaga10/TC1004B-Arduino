"""Ejercicio 13
Una panadería vende barras de pan a 3.49€ cada una. El pan que no es el día tiene un descuento del 60%. Escri‐
bir un programa que comience leyendo el número de barras vendidas que no son del día. Después el programa 
debe mostrar el precio habitual de una barra de pan, el descuento que se le hace por no ser fresca y el coste final 
total"""

numero = int(input("Introdusca el numero de barra: "))
barra = 3.49
descu = 0.6
total = barra * (descu * (numero))
print("El costo de una barra es de: " + str(round(barra * numero, 2)) + "Є")
print("El descuento de barra por no ser el dia es de:" + str(int(descu * 100)) + "%")
print("El descuento final a pagar es: " + str(round(total, 2))) 