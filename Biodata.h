#ifndef _BIODATA_H_
#define _BIODATA_H_

typedef enum {
    REGISTRATION= 1,
    VOTE = 2,
    RESULT= 3,


}voting_state;

typedef struct 
{
    char* name;
    int age;
    char* office;
    char* ID_num;

}candidate_data_t;


typedef struct
{
    char Name [40];
    char DOB [10];
    int Age;
}voter_data;

typedef struct 
{
    char Name [50];
    int code;
    int vote;
}voter_result;

typedef struct 
{
    voter_data * info;
}Bio_Data;
#endif



