from math import dist

x1 = int(input("Ingrese x1: "))
y1 = int(input("Ingrese y1: "))
x2 = int(input("Ingrese x2: "))
y2 = int(input("Ingrese y2: "))

coord1 = [x1, y1]
coord2 = [x2, y2]

distancia = dist(coord1, coord2)
print(f"Distancia entre los 2 puntos: {distancia}")