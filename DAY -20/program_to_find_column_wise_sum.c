#include<stdio.h>
int main(){
    int a , b , m1[10][10] ,m2[10][10] , s = 0 ;
    printf("enter rows and colums : ");
    scanf("%d%d",&a,&b);

    printf("enter elements :");
    for(int i=0 ; i<a ; i++){
        for(int j=0 ; j<b ; j++){
            scanf("%d",&m1[i][j]);
        }
    }  
     printf("matrix\n");
     for(int i=0 ; i<a ; i++){
        for(int j=0 ; j<b ; j++){
            printf("%d\t",m1[i][j]);
        }
        printf("\n");
    }

     for(int i=0 ; i<a ; i++){
        for(int j=0 ; j<b ; j++){
            m2[i][j] = m1[j][i];
        }
    }
        
    printf("colum wise sum of matrix\n");
    for(int i=0 ; i<b ; i++){
        for(int j=0 ; j<a ; j++){
           s= s+m2[i][j]; 
        }
        printf("%d\n",s);
        s = 0 ;
    }

    return 0 ;
    

}