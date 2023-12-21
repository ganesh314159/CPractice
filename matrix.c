#include <stdio.h>

int main()
{   
    // Declaring initial matrices
    int i, j;
    int matA[3][3] = {
        {1, 1, 1},
        {1, 1, 5},
        {1, 1, 1}
        };
    int matB[3][3] = {
        {2, 1, 2},
        {2, 2, 2},
        {2, 2, 2}
        };

    // Addition of Matrices
    int matC[3][3];
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            matC[i][j] = matA[i][j] + matB[i][j];
        }
    };

    // Subtarction of Matrices
    int matD[3][3];
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            matD[i][j] = matA[i][j] - matB[i][j];
        }
    };

    // Multiplication of Matrices
    int matE[3][3];
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            matE[i][j] = matA[i][0] * matB[0][j] + matA[i][1] * matB[1][j] + matA[i][2] * matB[2][i];
        }
    };

    // Finding inverse of Matrix (Not completed yet)
    // int matF[3][3];
    // for (i=0; i<3; i++){
    //     for (j=0; j<3; j++){
            
    //     }
    // };

    // Printing Matrix on Console.
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%d ", matE[i][j]);
        }
        printf("\n");
    };

    return 0;
}

