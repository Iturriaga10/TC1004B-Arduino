"""Ejercicio 8
Escribir un programa que pida al usuario su peso (en kg) y estatura (en metros), calcule el índice de masa corpo‐ ral y lo almacene en una variable, y muestre por pantalla la frase Tu índice de masa corporal es <imc> donde 
<imc> es el índice de masa corporal calculado redondeado con dos decimales"""
#peso en kg -- metros
#almacenar en una variable
#"tu indice de masa corporal es" (redondeando con 2 decimales)

peso = float(input(("introdusca su peso: ")))
estatura = float(input("intrdusca su estatura en metros:"))

imc = (peso / (estatura ** 2))
print("tu imc es de " + str(round(imc)))

