// Your code here...
#include <stdio.h>
int main(){
    int n;
    int arr[100];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int odd=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count++;
        }
        else{
            odd++;
        }
        printf("%d %d",count,odd);
    }
    return 0;
}