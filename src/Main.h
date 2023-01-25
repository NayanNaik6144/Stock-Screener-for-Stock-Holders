#pragma once 
#include<stdlib.h>
#include"struct.h"

// select choice for calculate avg of record of that stock  //step 1
extern void selectChoice(FILE ** fptr); // extern to access other .c file from same folder


// its load data from selected file  //step 2
extern void loadStockData(FILE ** fptr);

//step 3
// its show rcmondentaion about   //step 3
extern void showReco(struct NODE *head);