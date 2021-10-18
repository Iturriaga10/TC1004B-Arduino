"""Escribir un programa que lea un entero positivo, n, introducido por el usuario y después muestre en pantalla la 
suma de todos los enteros desde 1 hasta n. La suma de los n primeros enteros positivos puede ser calculada de 
la siguiente forma:"""
#suma = (n ( n+ 1) ) /2


n_cantidad = int(input("escriba un numero entero: "))

resultado = (n_cantidad *(n_cantidad +1) / 2)
print(resultado)
