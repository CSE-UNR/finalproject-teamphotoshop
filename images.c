///Dylan Li, Dominico Domistefano
///CS 135
///Final Project image rotations


#include <stdio.h>

#define MAX_SIZE 1000 // Maximum image size
#define READ_FILENAME "in_data.txt"

// function prototypes for loading, displaying, opening the editing menu, and doing the actual editing
// standard for loops for dimming and brightening the image, 
// thank god for functions bro
void load_image(int image[MAX_SIZE][MAX_SIZE], int size, char filename[MAX_SIZE]);
void display_image(int image[MAX_SIZE][MAX_SIZE], int size);
void edit_image(int image[MAX_SIZE][MAX_SIZE], int size);
void crop_image(int image[MAX_SIZE][MAX_SIZE], int *size);
void dim_image(int image[MAX_SIZE][MAX_SIZE], int size);
void brighten_image(int image[MAX_SIZE][MAX_SIZE], int size);
void save_image(int image[MAX_SIZE][MAX_SIZE], int size);



void load_image(int image[MAX_SIZE][MAX_SIZE], int *size, char filename[MAX_SIZE]) {
    FILE* readFilePointer;
    
    readFilePointer = fopen(filename, "r");
    if(readFilePointer == NULL){
    	printf("Cannot open image file");
    }
    printf("%s", filename);
    //int row = 5, int col = 5, int num;
    //for(int i = 0; i < row; i++){
    //	for(int j = 0; j < col; j++){
    //		image[i][j] = num;
    //	}
    //}
    fclose(readFilePointer);
    
}

void display_image(int image[MAX_SIZE][MAX_SIZE], int size) {

}

void edit_image(int image[MAX_SIZE][MAX_SIZE], int size) {
    int choice;

    do {
        printf("\nEdit Menu:\n");
        printf("1. Crop\n");
        printf("2. Dim\n");
        printf("3. Brighten\n");
        printf("4. Rotate 90 degrees\n");
        printf("5. Save edited image\n");
        printf("6. Back to main menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                crop_image(image, &size);
                display_image(image, size);
                break;
            case 2:
                dim_image(image, size);
                display_image(image, size);
                break;
            case 3:
                brighten_image(image, size);
                display_image(image, size);
                break;
            case 4:
                //rotate_image(image, &size);
                display_image(image, size);
                break;
            case 5:
                save_image(image, size);
                break;
            case 6:
                return;
        }
    } while (1);
}

void crop_image(int image[MAX_SIZE][MAX_SIZE], int *size) {
 
}

void dim_image(int image[MAX_SIZE][MAX_SIZE], int size) {
    
}

void brighten_image(int image[MAX_SIZE][MAX_SIZE], int size) {
   
}

void rotate_image(int image[MAX_SIZE][MAX_SIZE], int *size) {

}

void save_image(int image[MAX_SIZE][MAX_SIZE], int size) {
}

// main function, do while loop for da menu, case selection for each section, open respective function to respective option
int main() {
    int image[MAX_SIZE][MAX_SIZE];
    int size = 0;
    int choice;
    char filename[MAX_SIZE];

    do {
        printf("\nMenu:\n");
        printf("1. Load a new image\n");
        printf("2. Display the current image\n");
        printf("3. Edit the current image\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d%*c", &choice);

        switch (choice) {
            case 0:
                printf("\nBye!\n");
                return 0;
            case 1:
            	printf("What is the name of the file? ");
    		fgets(filename, MAX_SIZE, stdin);
    		
                load_image(image, &size, filename);
                //break;
            case 2:
                display_image(image, size);
                break;
            case 3:
                edit_image(image, size);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}
