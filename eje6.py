"""Escribir un programa que pregunte al usuario por el número de horas trabajadas y el coste por hora. Después debe 
mostrar por pantalla la paga que le corresponde."""

horas = input ("ingrese las horas trabajas: ")
coste = input ("ingrese el costo por hora: ")

paga = float(horas) * float(coste)

print(f"la paga seria de: " + str(paga)
