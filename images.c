///Dylan Li, Domenico DiStefano
///CS 135
///Final Project Erinstagram


#include <stdio.h>

#define MAX_SIZE 100 // Maximum image size
#define READ_FILENAME "in_data.txt"

// function prototypes for loading, displaying, opening the editing menu, and doing the actual editing
// standard for loops for dimming and brightening the image, 
// thank god for functions bro
void load_image(int *rowSize, int *colSize, int image[][MAX_SIZE], int *size, char filename[]);
void display_image(int *rowSize, int *colSize, int image[][MAX_SIZE]);
void crop_image(int *size);
void dim_image(int *rowSize, int *colSize, int image[][MAX_SIZE]);
void brighten_image(int *rowSize, int *colSize, int image[][MAX_SIZE]);
void save_image(int *size);




void load_image(int *rowSize, int *colSize, int image[][MAX_SIZE], int *size, char filename[]) {
    FILE* file;
    int rowCount = 0, colCount = 0, col1 = 0, row1 = 0;
    char charFromFile;
    
    file = fopen(filename, "r");
    if (file != NULL) {
        
        while ((charFromFile = fgetc(file)) != EOF) {
            
            if (charFromFile >= '0' && charFromFile <= '9') {
                image[rowCount][colCount] = charFromFile - '0'; 
                colCount++;
            }
            
            else if (charFromFile == '\n') {
                rowCount++;
                *colSize = colCount; 
                colCount = 0;
            }
        }
        rowCount++;
        *rowSize = rowCount; 
        *size = rowCount * (*colSize); 
        fclose(file);
    } 
   else {
        printf("ERROR: Cannot open file.\n");
    }
    

    file = fopen(filename, "r");
    if (file != NULL) {
        for (int row = 0; row < *rowSize; row++) {
            for (int col = 0; col < *colSize; col++) {
                if (fscanf(file, "%1d", &image[row][col]) == 1) {
                    rowCount++;
                }
            }
        }
        *size = rowCount;
        printf("\nImage Loaded Successfully\n");
    } 
    else {
        printf("ERROR: Cannot open file.\n");
    }
    

}

void display_image(int *rowSize, int *colSize, int image[][MAX_SIZE]) {

    for (int i = 0; i < *rowSize; i++) {
    	for (int j = 0; j < *colSize; j++) {
    		if(image[i][j] == 0){
    			printf(" ");
    		}
    		else if(image[i][j] == 1){
    			printf(".");
    		}
    		else if(image[i][j] == 2){
    			printf("o");
    		}
    		else if(image[i][j] == 3){
    			printf("O");
    		}
    		else if(image[i][j] == 4){
    			printf("0");
    		}
    	}
    	printf("\n");
    }
    printf("row: %d col:%d", *rowSize, *colSize);
}

void crop_image(int *size) {
//     int new_size, i, j;
//
//    printf("Enter new size: ");
//    scanf("%d", &new_size);
//
//    if (new_size > *size || new_size <= 0) {
//        printf("Invalid size.\n");
//        return;
//    }

//    *size = new_size;
}

void dim_image(int *rowSize, int *colSize, int image[][MAX_SIZE]) {
    for (int i = 0; i < *rowSize; i++) {
    	for (int j = 0; j < *colSize; j++) {
    		if(image[i][j] == 0){
    			printf(" ");
    			image[i][j] = 0;
    		}
    		else if(image[i][j] == 1){
    			printf(" ");
    			image[i][j] = 0;
    		}
    		else if(image[i][j] == 2){
    			printf(".");
    			image[i][j] = 1;
    		}
    		else if(image[i][j] == 3){
    			printf("o");
    			image[i][j] = 2;
    		}
    		else if(image[i][j] == 4){
    			printf("O");
    			image[i][j] = 3;
    		}
    	}
    	printf("\n");
    }
    printf("row: %d col:%d", *rowSize, *colSize);
}

void brighten_image(int *rowSize, int *colSize, int image[][MAX_SIZE]) {
    for (int i = 0; i < *rowSize; i++) {
    	for (int j = 0; j < *colSize; j++) {
    		if(image[i][j] == 0){
    			printf(".");
    			image[i][j] = 1;
    		}
    		else if(image[i][j] == 1){
    			printf("o");
    			image[i][j] = 2;
    		}
    		else if(image[i][j] == 2){
    			printf("O");
    			image[i][j] = 3;
    		}
    		else if(image[i][j] == 3){
    			printf("0");
    			image[i][j] = 4;
    		}
    		else if(image[i][j] == 4){
    			printf("0");
    			image[i][j] = 5;
    		}
    	}
    	printf("\n");
    }
    printf("row: %d col:%d", *rowSize, *colSize);
}

void save_image(int image[MAX_SIZE][MAX_SIZE], int size) {
//     FILE *file;
//    char filename[100];
//    int i, j;
//
//    printf("Enter filename to save: ");
//    scanf("%s", filename);
//
//    file = fopen(filename, "w");
//    if (file == NULL) {
//        printf("Error creating file.\n");
//        return;
//    }
}

// Main: Menu
int main() {
    int image[MAX_SIZE][MAX_SIZE];
    char imageDisplay[MAX_SIZE][MAX_SIZE];
    int size = 0;
    int choice;
    char filename[MAX_SIZE];
    int i = 0;
    int rowSize, colSize;

    do {
        printf("\nMenu:\n");
        printf("1. Load a new image\n");
        printf("2. Display the current image\n");
	printf("3. Crop\n");
        printf("4. Dim\n");
        printf("5. Brighten\n");
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
    		while (filename[i] != '\n' && filename[i] != '\0') {
    			i++;
    		}
    		filename[i] = '\0';
                load_image(&rowSize, &colSize, image, &size, filename);
                break;
            case 2:
                display_image(&rowSize, &colSize, image);
   //		dim_image(&rowSize, &colSize, image);
                break;
            case 3:
//                crop_image(image, size);
//                display_image(image, size);
                break;
            case 4:
                dim_image(&rowSize, &colSize, image);
//                display_image(image, size);
		printf("nice choice\n");
                break;
            case 5:
                brighten_image(&rowSize, &colSize, image);
//                display_image(image, size);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
            }
       } while (choice != 0);

    
    return 0;
}
