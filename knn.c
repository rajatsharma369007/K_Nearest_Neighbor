// this is a program to implement k nearest neighbor 
// Author: Rajat Sharma
// Date: march, 2018

#include<stdio.h>
#include<stdlib.h>

struct flowers
{
    float x_weight;
    float y_weight;
    char category[30];
}flower[100];

int size=0,temp1=0, temp2=0;

void storing_data(char *str){
    int i=0,k;

    FILE *fp = fopen(str,"r");
    if(fp == NULL)
    {
        printf("No such file\n");
        exit(1);
    }

    while(!feof(fp)){
        fscanf(fp,"%f %f %f %f %s",&flower[i].x_weight, &flower[i].y_weight, &temp1, &temp2, flower[i].category);
        size++;
        i++;
    }
}

main()
{
    int i;
    storing_data("Iris_data.txt");
    for(i=0;i<size-1;i++)
        printf("%f %f %f %f %s",&flower[i].x_weight, &flower[i].y_weight, &temp1, &temp2, flower[i].category);
}

