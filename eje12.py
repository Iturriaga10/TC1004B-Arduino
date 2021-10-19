"""Imagina que acabas de abrir una nueva cuenta de ahorros que te ofrece el 4% de interés al año. Estos ahorros de‐
bido a intereses, que no se cobran hasta finales de año, se te añaden al balance final de tu cuenta de ahorros. Es‐
cribir un programa que comience leyendo la cantidad de dinero depositada en la cuenta de ahorros, introducida 
por el usuario. Después el programa debe calcular y mostrar por pantalla la cantidad de ahorros tras el primer, se‐ 
gundo y tercer años. Redondear cada cantidad a dos decimales"""

inversion = float(input("Introduca la inversion: "))
interes = 0.04
pvalor = inversion * (1 + interes)
print("El resultado del balance en el primer año es: " + str(round(pvalor, 2)))
svalor = inversion * (2 + interes)
print("El resulatado del balance en el segundo año es: " + str(round(svalor, 2)))
tvalor = inversion * (3 +  interes)
print("El resultado del balance en el tercer año es: " + str(round(tvalor ,2)))




