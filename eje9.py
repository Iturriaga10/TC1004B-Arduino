"""Ejercicio 9
Escribir un programa que pida al usuario dos números enteros y muestre por pantalla la <n> entre 
<m> da un cociente <c> y un resto <r> donde <n> y <m> son los números introducidos por el 
usuario, y <c> y <r> son el cociente y el resto de la división entera respectivamente"""

n = float(input("Ingrese el primer numero: "))
m = float(input("Ingrese el segundo numero: "))

resul = n / m
resto = n % m

print("El resultado es" + str(int(resul)) + "y el cociente es " + str(resto))

