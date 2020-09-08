#include <stdio.h>

int main(void) {
char string[80];
printf("Enter your string\n");
scanf("%s",string);
int i = 0;
int count = 0;
while(string[i]=='a'){
  i++;
  count++;
}
if(count==0){
  printf("this is not a valid sentence in the language");
  return 0;
}
while(string[i]=='b'){
  i++;
}
if(i!=2*count){
  printf("This is not a valid sentence in the language");
  return 0;
}
printf("this is a valid sentence in the language");
}
