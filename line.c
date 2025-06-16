#include <stdio.h>                  /*line 1*/    
                                    /*line 2*/
int main() {                        /*line 3*/
                                    /*line 4*/
    printf("Hi, Aaryan!\n");        /*line 5*/
    //print current line            /*line 6*/
    printf("Line:%d\n",__LINE__);   /*line 7, __LINE__ --> macro*/ 
    //reset the line number 36      /*line 8*/
    #line 36 /*reseting*/           /*line 9, pretend the next line is 36*/
    //print current line            /*line 36*/
    printf("Line:%d\n",__LINE__);   /*line 37*/
    printf("Bye bye!!\n");          /*line 39*/
                                    /*line 40*/
    return 0;                       /*line 41*/    
}                                   /*line 42*/