/*
    ASCII VALUE (character value)  LOWERCASE OR NOT
*/

#include<stdio.h>

void main(){
    char ch;
    printf("Enter the character: \n");
    scanf("%c", &ch);
    printf("The character is %c\n", ch);
    printf("The character is %d\n", ch);
    // 97, 122
    if(ch>=97 && ch<=122)
      printf("Character is lowercase");
    else
      printf("Character is upper case");  

}