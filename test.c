#include <stdio.h>
#include <ctype.h>

int main(){
    char a='a';
int i,j,n;
for(i=1;i<=5;i++){
for(j=4;j>=i;j--){
printf(" ");
}
for(j=1;j<=i;j++){
printf("%d",j);
}
for(j=i-1;j>=1;j--){
printf("%d",j);
}
printf("\n");
}
printf ("%c",toupper(a));

return 0;

}