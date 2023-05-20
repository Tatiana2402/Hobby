def suma_triangular_pascal(n):
    # Inicializa la estructura de datos
    triangle = [[1]]
    # Inicializa la variable acumuladora
    total = 1
    
    # Crea el triángulo de Pascal
    for i in range(1, n):
        row = [1]
        for j in range(1, i):
            val = triangle[i-1][j-1] + triangle[i-1][j]
            row.append(val)
            total += val
        row.append(1)
        triangle.append(row)
        total += 2
    print(triangle)
    # Devuelve la suma total
    return total

print(suma_triangular_pascal(5))