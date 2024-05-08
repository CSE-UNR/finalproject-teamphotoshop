///Dylan Li, Domenico DiStefano
///CS 135
///Final Project Erinstagram


#include <stdio.h>

#define MAX_SIZE 100 // Maximum image size
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



void load_image(int image[MAX_SIZE][MAX_SIZE], int *size, char filename[]) {
    FILE* readFilePointer;
    int rowCount, colCount, elementCount, rowArr[MAX_SIZE][MAX_SIZE];
    rowCount = colCount = elementCount = 0;
    
    readFilePointer = fopen(filename, "r");

    if(readFilePointer != NULL){
    	for(int i = 0; i< MAX_SIZE, MAX_SIZE; i++){
    		while(fscanf(readFilePointer, "%d", &i) ==1){
    			elementCount++;
    		}
    	}
    }
    fclose(readFilePointer);
    
    
    readFilePointer = fopen(filename, "r");
    if(readFilePointer != NULL){
    
    }
    if(readFilePointer != NULL){
    	printf("%s", filename);
    	int row = 5;
    	int col = 5;
    	int num;
    	for(int i = 0; i < row; i++){
    		for(int j = 0; j < col; j++){
    			image[i][j] = num;
    			printf("%d", image[i][j]);
    		}
    		printf("\n");
    	}
    }
    else{
    	printf("ERROR");
    }
    
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
     int new_size, i, j;

    printf("Enter new size: ");
    scanf("%d", &new_size);

    if (new_size > *size || new_size <= 0) {
        printf("Invalid size.\n");
        return;
    }

    *size = new_size;
}

void dim_image(int image[MAX_SIZE][MAX_SIZE], int size) {
        int i, j;

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (image[i][j] > 0) {
                image[i][j]--;
            }
        }
    }
}

void brighten_image(int image[MAX_SIZE][MAX_SIZE], int size) {
       int i, j;

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (image[i][j] < 4) {
                image[i][j]++;
            }
        }
    }
}


void save_image(int image[MAX_SIZE][MAX_SIZE], int size) {
     FILE *file;
    char filename[100];
    int i, j;

    printf("Enter filename to save: ");
    scanf("%s", filename);

    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error creating file.\n");
        return;
    }

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
