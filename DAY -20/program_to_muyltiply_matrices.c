#include<stdio.h>
int main(){
    int a , b , n , m1[10][10] , m2[10][10] , s[10][10];
    printf("enter rows and colums : ");
    scanf("%d%d",&a,&b);

    printf("enter element of first matrix :");
    for(int i=0 ; i<a ; i++){
        for(int j=0 ; j<b ; j++){
            scanf("%d",&m1[i][j]);
        }
    }
    
     printf("enter element of second  matrix :");

     for(int i=0 ; i<a ; i++){
        for(int j=0 ; j<b ; j++){
            scanf("%d",&m2[i][j]);
        }
    }
     for(int i=0 ; i<a ; i++){
        for(int j=0 ; j<b ; j++){
            for(int k=0 ; k<b ; k++){
                s[i][j] = m1[i][k]*m2[k][j];
            }
        }
    }
    printf("Resultant matrix\n");
     for(int i=0 ; i<a ; i++){
        for(int j=0 ; j<b ; j++){
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }
    
    
return 0 ;

}