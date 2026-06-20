#include<stdio.h>
int main(){
    int a , b , m1[10][10] ,m2[10][10] , ismatrix = 0;
    printf("enter rows and colums : ");
    scanf("%d%d",&a,&b);

    printf("enter elements :");
    for(int i=0 ; i<a ; i++){
        for(int j=0 ; j<b ; j++){
            scanf("%d",&m1[i][j]);
        }
    }

     for(int i=0 ; i<a ; i++){
        for(int j=0 ; j<b ; j++){
            m2[i][j] = m1[j][i];
        }
    }
        printf("transpose of matrix\n");
         for(int i=0 ; i<b ; i++){
           for(int j=0 ; j<a ; j++){
            printf("%d\t",m2[i][j]);
        }
        printf("\n");
    }

     for(int i=0 ; i<b ; i++){
        for(int j=0 ; j<a ; j++){
            if(m1[i][j]!=m2[i][j]){
                ismatrix++;
                break;
            }
        }
    }
    if(ismatrix!=0){
        printf("matrix is not symmetric matrix ");
    }
    else{
        printf("symmetric matrix");
    }

    return 0 ;
    

}