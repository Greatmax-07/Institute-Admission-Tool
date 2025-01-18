#include <stdio.h>
#include <string.h>
#include <ctype.h>

int course, ans;
char name[100], address[200], phnum[10], input1[100], input2[100];
char extra;

int validnum(const char* x);

int main() {

    printf("*** Welcome to WISDOM COACHING INSTITUTE!! ***\n\n");
    
    // Student Details Input

    printf("Enter Student Details:\n");

    printf("Student name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Address: ");
    fgets(address, sizeof(address), stdin);

    // Telephone Number Input and Validation

    while(1) {
        printf("Enter telephone number: ");
        scanf("%s", &phnum);
        while(getchar() != '\n');  // to remove extra input data remaining (buffer flush)

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

    while(1) {
        printf("Which competitive exam you want to prepare for?\n");
        printf(" 1. JEE\t\t 2. NEET\t 3. CET\n");

        // Course Input Validation

        fgets(input1,sizeof(input1),stdin);           //sscanf will parse the input string and store int in course and char in extra
        int result=sscanf(input1,"%d %c", &course, &extra);   // result!= 1 means sscanf did not scan integer
        if(result!=1 || (course < 1 || course > 3)){
        printf("Invalid Input. Please enter 1 ,2 or 3 only.\n");
        continue;
        }

        if (course == 1 || course == 2 || course == 3) {

            // Reference Book Question

            while(1){
                printf("Do you want reference books?\n");
                printf(" 1. Yes\n 2. No\n");

                // Reference Book Input Validation

                fgets(input2,sizeof(input2),stdin);
                int result = sscanf(input2,"%d %c", &ans, &extra);
                if(result!=1 || (ans < 0 || ans > 3)){
                printf("Invalid Input. Please Enter 1 or 2 only.\n");
                continue;
                }

                if(ans==1 || ans==2){

                    //Display of the final details and fees.

                    for(int i=1;i<150;i++){
                    printf("*");
                    }
                    printf("\n");
                    printf("Student Name: %sContact Number: %s\nStudent Address: %s", name, phnum, address);
                    if(course==1){
                    printf("Course Selected: JEE\n");
                    printf("Tution fees: Rs. 2,50,000\t\t\t\t\t\t\t\t\t\t\t\t\t| 2,50,000 |\n");
                    if(ans==2){
                    printf("Reference Books: No\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\tTotal amount: | Rs. 2,50,000 |\n\n");
                    }
                    else if(ans==1){
                    printf("Reference Books: Yes\n");
                    printf("JEE Reference Books cost Rs. 5000.\t\t\t\t\t\t\t\t\t\t\t\t| +  5,000 |\n\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\tTotal amount: | Rs. 2,55,000 |\n\n");
                    }
                    }

                    else if(course==2){
                    printf("Course Selected: NEET\n");
                    printf("Tution fees: Rs. 2,00,000\t\t\t\t\t\t\t\t\t\t\t\t\t| 2,00,000 |\n");
                    if(ans==2){
                    printf("Reference Books: No\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\tTotal amount: | Rs. 2,00,000 |\n\n");
                    }
                    else if(ans==1){
                    printf("Reference Books: Yes\n");
                    printf("NEET Reference Books cost Rs. 4500.\t\t\t\t\t\t\t\t\t\t\t\t| +  4,500 |\n\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\tTotal amount: | Rs. 2,55,000 |\n\n");
                    }
                    }

                    else if(course==3){
                    printf("Course Selected: CET\n");
                    printf("Tution fees: Rs. 1,75,000\t\t\t\t\t\t\t\t\t\t\t\t\t| 1,75,000 |\n");

                    if(ans==2){
                    printf("Reference Books: No\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\tTotal amount: | Rs. 1,75,000 |\n\n");
                    }
                    else if(ans==1){
                    printf("Reference Books: Yes\n");
                    printf("CET Reference Books cost Rs. 4000.\t\t\t\t\t\t\t\t\t\t\t\t| +  4,500 |\n\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\tTotal amount: | Rs. 1,79,500 |\n");
                    }
                    }

                    for(int i=1;i<150;i++){
                    printf("*");
                    }
                    break;
                }
            }

            break;

        } 
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
