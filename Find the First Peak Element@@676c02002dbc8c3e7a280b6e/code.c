// Your code here...
#include <stdio.h>
int main(){
    int arr[100];
    int n,i;
    int max=arr[0];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}