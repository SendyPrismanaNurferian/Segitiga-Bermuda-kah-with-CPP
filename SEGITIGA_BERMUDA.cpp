#include<stdio.h>
#include<math.h>
int main()
{
    int n = 5, m;
    for(int i=1;i<=n;i++){
        for(int j=(2*n);j>=0;j--){
            m = abs(n-j); // j start 10,9,8,7,6,5,4,3,2,1,0
            if(i-1>=m){//j start (5)i=1;(6,5,4)i=2;(7,6,5,4,3)i=3;
                       //(8,7,6,5,4,3,2)i=4;(9,8,7,6,5,4,3,2,1)i=5.
                printf(" * ");    
            }else{
                printf(" 1 ");
            }
        }
        printf("\n");
    }
    return 0;
    
}