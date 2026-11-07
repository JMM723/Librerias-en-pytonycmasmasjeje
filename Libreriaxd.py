
import numpy as np  # Importamos NumPy para poder trabajar con matrices.

# Aqui guardamos los valores de la primera matriz 
A = np.array([[1, 2],
              [3, 4]])

# Esta es la segunda matriz con la que vamos a 
B = np.array([[5, 6],
              [7, 8]])

# Multiplicamos las dos matrices y guardamos nuestro resultadoooooosiosiso
resultado = np.matmul(A, B)

# Mostramos el nombre de mi programita
print("Multiplicacion de matrices")

# Imprimimos la primera matriz para ver que valores tienen
print("Matriz A:")
print(A)

# Ahora mostramos nuesstra segunda matriza
print("Matriz B:")
print(B)

# Finalmente mostramos el resultado de la multiplicacion de las dos matrices :DDDDD
print("Resultado:")
print(resultado)
