#include <stdio.h>
#include <string.h>
#include <ctype.h>

int course;
char name[100], address[200], phnum[10];

int validnum(const char* x);

int main() {

    printf("*** Welcome to WISDOM COACHING INSTITUTE!! ***\n\n");
    
    // Student Details Input

    printf("Enter Student Details:\n");

    printf("Student name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Address: ");
    fgets(address, sizeof(address), stdin);

    // Telephone Number Validation

    while(1) {
        printf("Enter telephone number: ");
        scanf("%s", phnum);

        int size = strlen(phnum);
        if (size > 10) {
            printf("Please enter a valid 10-digit telephone number.\n");
            continue;
        }

        if (validnum(phnum)) {
            break;
        } else {
            printf("Please enter a valid 10-digit telephone number.\n");
        }
    }

    // Course Selection

    char ans[1];
    while(1) {
        printf("Which competitive exam you want to prepare for?\n");
        printf(" 1. JEE\t\t 2. NEET\t 3. CET\n");

        if (scanf("%d", &course) != 1) {
            printf("Invalid input. Please enter only 1, 2 or 3.\n");
            while (getchar() != '\n'); 
            continue;
        }

        if (course == 1 || course == 2 || course == 3) {
            printf("Do you want reference books?\n");
            printf(" 1. Yes\n 2. No\n");
            scanf("%s", ans);

            if (*ans == '2') {
                break;
            }

            break;
        } 
        
        else {
            printf("Invalid Input. Please enter 1, 2 or 3 only.\n");
        }
    }

    //Display of the final details and fees.

    for(int i=1;i<150;i++){
    printf("*");
    }
    printf("\n");
    printf("Student Name: %sContact Number: %s\nStudent Address: %s", name, phnum, address);
    if(course==1){
        printf("Course Selected: JEE\n");
        printf("Tution fees: Rs. 2,50,000\t\t\t\t\t\t\t\t\t\t\t\t\t| 2,50,000 |\n");
        if(*ans=='2'){
        printf("Reference Books: No\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\tTotal amount: | Rs. 2,50,000 |\n\n");
    }
    else if(*ans=='1'){
        printf("Reference Books: Yes\n");
        printf("JEE Reference Books cost Rs. 5000.\t\t\t\t\t\t\t\t\t\t\t\t| +  5,000 |\n\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\tTotal amount: | Rs. 2,55,000 |\n\n");
    }
    }

    else if(course==2){
        printf("Course Selected: NEET\n");
        printf("Tution fees: Rs. 2,00,000\t\t\t\t\t\t\t\t\t\t\t\t\t| 2,00,000 |\n");
        if(*ans=='2'){
        printf("Reference Books: No\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\tTotal amount: | Rs. 2,00,000 |\n\n");
    }
    else if(*ans=='1'){
        printf("Reference Books: Yes\n");
        printf("NEET Reference Books cost Rs. 4500.\t\t\t\t\t\t\t\t\t\t\t\t| +  4,500 |\n\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\tTotal amount: | Rs. 2,55,000 |\n\n");
    }
    }

    else if(course==3){
        printf("Course Selected: CET\n");
        printf("Tution fees: Rs. 1,75,000\t\t\t\t\t\t\t\t\t\t\t\t\t| 1,75,000 |\n");

        if(*ans=='2'){
        printf("Reference Books: No\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\tTotal amount: | Rs. 1,75,000 |\n\n");
    }
    else if(*ans=='1'){
        printf("Reference Books: Yes\n");
        printf("CET Reference Books cost Rs. 4000.\t\t\t\t\t\t\t\t\t\t\t\t| +  4,500 |\n\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\tTotal amount: | Rs. 1,79,500 |\n\n");
    }
    }

    for(int i=1;i<150;i++){
    printf("*");
    }

    return 0;
}

// Function to Validate Telephone Number

int validnum(const char* x) {
    for (int i = 0; i < 10; i++) {
        if (!isdigit(x[i])) {
            return 0;
        }
    }
    return 1;
}