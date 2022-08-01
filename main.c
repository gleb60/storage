#include <stdio.h>

int main(){
int a;
char b;
if (scanf("%d%c", &a, &b) == 2 && b == '\n') {
printf("Integer");
}  else  {
printf("n/a"); }
return 0;
}
