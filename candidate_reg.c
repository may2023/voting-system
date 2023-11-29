#include "candidate_reg.h"
#include <stdlib.h>
#include <string.h>
#include<stdio.h>

void candidate_reg(Bio_Data* memory){


    printf("please fill in your detail inorder to run for an office");
    candidate_data_t candidate_info;
    //candidate_info.name = (char*)malloc(50 * sizeof(char) );
    // candidate_info.office = (char*)malloc(25 * sizeof(char));
    // candidate_info.ID_num = (int*)malloc(36 * sizeof(int));

    printf("enter full name: ");
    char buffer[MAX_STRING_INPUT];
    fgets(buffer, MAX_STRING_INPUT, stdin );
    size_t buff_size= strlen(buffer);
    candidate_info.name = (char*)malloc(buff_size * sizeof(char) );
    memcpy(candidate_info.name,buffer,buff_size);
    printf("enter office: ");
    fgets(buffer, MAX_STRING_INPUT, stdin );
    buff_size= strlen(buffer);
    candidate_info.office = (char*)malloc(buff_size * sizeof(char) );
    memcpy(candidate_info.office,buffer,buff_size);
    printf("enter full ID: ");
    fgets(buffer, MAX_STRING_INPUT, stdin );
    buff_size= strlen(buffer);
    candidate_info.ID_num = (char*)malloc(buff_size * sizeof(char) );
    memcpy(candidate_info.ID_num,buffer,buff_size);
    printf("enter age: ");
    scanf("%d",&candidate_info.age);
    // printf("Enter age: ");
    // scanf("%d", candidate_info.age);



}