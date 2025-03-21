// Your code here...
#include <stdio.h>
int main(){
    int arr[90];
    int n;
    scanf("%d",&n);
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("%d",max);
    printf("%d",min);
}