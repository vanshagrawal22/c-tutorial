#include<stdio.h>
void printstring(char arr[]);
int main(){
    // create a string fname and sname to store details of user and print all character
    char fname[]="vansh";
    char sname[]="agrawal";
    printstring(fname);
    printstring(sname);
    return 0;
}
void printstring(char arr[]){
    int i;
    for(i=0; arr[i]!='\0'; i++){
        printf("%c",arr[i]);
        // printf("\n");
    }
    printf("\n");
}