// Your code here...
#include <stdio.h>
int main(){
    int i,n;
    char arr[87];
    scanf("%d",&n);
    int odd=0;
    int count=0;
    for(i=0;i<n;i++){
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