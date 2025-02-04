#include <stdio.h>
int main() {
    void th(int num){
        for (i=31,i>=0,i--){
            if((num>>i)&1){
                printf("1");
            }else{
                printf("0");
            }
        }

    }
    printf("\n");
}
int main(){
    int num;
    scanf("%d",&num);
    th(num);

    return 0;
}