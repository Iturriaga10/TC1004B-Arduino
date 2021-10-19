"""Ejercicio 11
Una juguetería tiene mucho éxito en dos de sus productos: payasos y muñecas. Suele hacer venta por correo y la 
empresa de logística les cobra por peso de cada paquete así que deben calcular el peso de los payasos y muñe‐
cas que saldrán en cada paquete a demanda. Cada payaso pesa 112 g y cada muñeca 75 g. Escribir un progra‐
ma que lea el número de payasos y muñecas vendidos en el último pedido y calcule el peso total del paquete que 
será enviado"""
#el numero de payasos peso 122g ,muñecas 75g vendidas en el ultimo pedido ,peso toal de paquete enviado

P_payaso = 122
P_muñeca = 75
payaso = int(input("¿Ingrese la cantidad de payasos que desea pedir?"))
muñeca = int(input("¿Ingrese la cantidad de muñecas que desea pedir?"))

total= P_payaso * payaso + P_muñeca * muñeca

print("El peso total del pedido es " + str(total))
