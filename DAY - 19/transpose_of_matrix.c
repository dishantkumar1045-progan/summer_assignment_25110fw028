#include<stdio.h>
int main(){
    int a , b , m1[10][10] ,m2[10][10];
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
    
         for(int i=0 ; i<b ; i++){
        for(int j=0 ; j<a ; j++){
            printf("%d\t",m2[i][j]);
        }
        printf("\n");
    }

    return 0 ;
    

}