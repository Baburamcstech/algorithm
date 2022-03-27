#include <stdio.h>
#include <stdlib.h>
// void strassen(int A[][],int B[][],int n){

int main()
{
    int A[2][2], B[2][2], C[2][2];
    // int n=2;
    int P, Q, R, S, T, U, V;
    printf("Enter the element of A:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            scanf("%d", &A[i][j]);
    }

    printf("Enter the element of B:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            scanf("%d", &B[i][j]);
    }
    P = (A[0][0] + A[1][1]) * (B[0][0] + B[1][1]);
    Q = (A[1][0] + A[1][1]) * B[0][0];
    R = A[0][0] * (B[0][1] - B[1][1]);
    S = A[1][1] * (B[1][0] - B[0][0]);
    T = (A[0][0] + A[0][1]) * B[1][1];
    U = (A[1][0] - A[0][0]) * (B[0][0] + B[0][1]);
    V = (A[0][1] - A[1][1]) * (B[1][0] + B[1][1]);
    //  for(int i=0;i<2;i++){
    //         for(int j=0;j<2;j++)

    C[0][0] = P + S - T + V;
    C[0][1] = R + T;
    C[1][0] = Q + S;
    C[1][1] = P + R - Q + U;
    printf("multiplication is:\n");
    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
            printf("%d\t", C[i][j]);
        printf("\n");
    }
}