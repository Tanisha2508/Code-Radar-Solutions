// Your code here...
#include <stdio.h>
int main(){
    char ch[20];
    scanf("%s",ch);
int size=0;
int i=0;
while(ch<20){
    size++;
    i++;
}
for(int k=0;l<size-1;k++;l--){
    char temp=str[k];
    str[k]=str[l];
    str[l]=char temp;
    printf("%s",str);
}
return 0;
} 