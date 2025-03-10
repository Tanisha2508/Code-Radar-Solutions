// Your code here...
#include <stdio.h>
int main(){
    int i,n;
    char arr[87];
    scanf("%d",&n);
    int count=0;
    for(i=0;i<n;i++){
        if(i%2==0){
            count++;
            i++;
        }
    }
    return 0;
}