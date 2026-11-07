//
// Created by joeli on 7/11/2026.
//

#include <iostream> // Nos permite mostrar resultados en pantalla.
#include <Eigen/Dense> // La usamos para trabajar con matrices.

using namespace std;

int main() {

    // Creamos la primera matriz con LOS valorendors xd
    Eigen::Matrix2d A;
    A << 1, 2,
         3, 4;

    // Creamos la second matriz
    Eigen::Matrix2d B;
    B << 5, 6,
         7, 8;

    // Multiplicamos las dos matrices
    Eigen::Matrix2d resultado = A * B;

    // Mostramos las matrices y resultados :v
    cout << "Matriz A:" << endl;
    cout << A << endl;

    cout << "Matriz B:" << endl;
    cout << B << endl;

    cout << "Resultado:" << endl;
    cout << resultado << endl;

    return 0;
}
