#include <stdio.h>
int isPrime(int a){
    int c=0;
for(i=1;i<=a;i++){
    (i%a==0)
    c++;
}
if(c==2){
    return 1;
}
else{
    return 0;
}
}

