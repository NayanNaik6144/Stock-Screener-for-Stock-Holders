#include<stdio.h>
#include"Main.h"
#include"struct.h"

int main()
{
    FILE * fp=NULL;  // gest memeory allocation at some location 

    selectChoice(&fp); // step 1 select file which u want 
    
    loadStockData(&fp); // step 2 load data from that file 

    return 0;
}





