#include<stdio.h>
#include <stdlib.h>
#include "Biodata.h"
#include "reg.h"
#include "vote.h"
#include "result.h"
#include<stdbool.h>

static candidate_data_t candidate_info[5];
static voter_result voting_operation;


int main(){
    

    printf("Main Menu\n");
    printf("Enter 1 to Register\n");
    printf("Enter 2 to Vote\n");
    printf("Enter 3 to Check result\n");
    printf("Enter 4 to register as a candidate\n");

  
    Bio_Data memory;
    voting_state choice;

    bool end_program = false;
    
    do {
        printf("Enter a number: ");
        scanf("%d", &choice);

        switch (choice) {
            case REGISTRATION:
                registration(&memory);
                break;
            case VOTE:
                voters(&memory);
                break;
            case RESULT:
                results(&memory);
                break;
            default:
                printf("Invalid choice. Please enter a valid number.\n");
                break;
        }

        printf("Enter Y/N to go to the main menu or exit the program: \n");
        char input;
        scanf(" %c", &input); 
        
        if (input == 'N' || input == 'n') {
            end_program = true;
        } else if (input == 'Y' || input == 'y') {
            end_program = false;
        } else {
            printf("Invalid input. Exiting the program.\n");
            end_program = true;
        }

    } while (!end_program);
    
   
}    
    
    
    