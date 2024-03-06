#include<stdio.h>

void main(){
    // int PrintMat(int *, int *);
    int i,j,m,n;
    AskRC(&i,&j,&m,&n);
    int a[i][j],b[m][n];
    AskMat(a,b);
    printf("Matrix 1 is\n");
    PrintMat(a);
    printf("Matrix 2 is\n");
    PrintMat(b);
    Evaluate(a,b);
}

// Printing Matrix on Console.
void PrintMat(int mat[3][3]){
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            printf("%d ", &mat[i][j]);
        }
        printf("\n");
    }
}

// Ask Row and Column as input
void AskRC(int* i, int* j, int* m, int* n){
    printf("Enter number of rows for Mat1 : ");
    scanf("%d",i);
    printf("Enter number of columns for Mat1 : ");
    scanf("%d",j);
    printf("Enter number of rows for Mat2 : ");
    scanf("%d",m);
    printf("Enter number of columns for Mat2 : ");
    scanf("%d",n);
}

// Ask Matrix as input
void AskMat(int a,int b){
    int s1 = sizeof(a[0])/sizeof(a[0]);
    int s2 = sizeof(b[0])/sizeof(b[0]);
    printf("\n%d",s1);
    printf("\n%d",s2);
}
