"""Escribir un programa que pregunte al usuario una cantidad a invertir, el interés anual y el número de años, y mues‐
tre por pantalla el capital obtenido en la inversión."""

invertir = float(input("¿Cual es la cantidad que desea invertir?: "))
inter = float(input("¿Ingrese el interes anual?:"))
año = float(input("ingrese el numero de años:"))
print("El capital obtenido es " + str(round(invertir *(inter / 100) * (round(año ,2)))))