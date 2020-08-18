/*Program Name : program to Start
Author : Mr.Sereephap Dangpatlaew
Date : 8/1863
*/
#include<stdio.h>//link from library stdio.h
void message();//function prototype declaration section
void cat();//function prototype declaration section

//Sub function : message
void message(){
    printf("We can take mor sub function\n");
}
//Sub function : message
void cat(){
    printf("I Love My Cat");
}

//Main function
void main(){
    int animal=5;//variable declaration
    printf("Hello World\n");//executetable part
    printf("%i",animal);//executetable part
    message();//function call
    cat();//function call
}
