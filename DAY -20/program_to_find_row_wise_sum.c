#include<stdio.h>
int main(){
    int a , b , m1[10][10] , s = 0;
    printf("enter rows and colums : ");
    scanf("%d%d",&a,&b);

    printf("enter elements :");
    for(int i=0 ; i<a ; i++){
        for(int j=0 ; j<b ; j++){
            scanf("%d",&m1[i][j]);
        }
    }
    printf("sum of matrix row wise\n");
    for(int i=0 ; i<a ; i++){
        for(int j=0 ; j<b ; j++){
            s = s + m1[i][j];
        }
        printf("%d\n", s);
        s = 0 ;
    }
    return 0 ;
}
