///Dylan Li, Dominico Domistefano
///CS 135
///Final Project image rotations


#include <stdio.h>

#define MAX_SIZE 1000 // Maximum image size

// function prototypes for loading, displaying, opening the editing menu, and doing the actual editing
// standard for loops for dimming and brightening the image, 
// thank god for functions bro
void load_image(int image[MAX_SIZE][MAX_SIZE], int *size);
void display_image(int image[MAX_SIZE][MAX_SIZE], int size);
void edit_image(int image[MAX_SIZE][MAX_SIZE], int size);
void crop_image(int image[MAX_SIZE][MAX_SIZE], int *size);
void dim_image(int image[MAX_SIZE][MAX_SIZE], int size);
void brighten_image(int image[MAX_SIZE][MAX_SIZE], int size);
void save_image(int image[MAX_SIZE][MAX_SIZE], int size);


// main function, do while loop for da menu, case selection for each section, open respective function to respective option
int main() {
    int image[MAX_SIZE][MAX_SIZE];
    int size = 0;
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Load a new image\n");
        printf("2. Display the current image\n");
        printf("3. Edit the current image\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                load_image(image, &size);
                break;
            case 2:
                display_image(image, size);
                break;
            case 3:
                edit_image(image, size);
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

void load_image(int image[MAX_SIZE][MAX_SIZE], int *size) {
    
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
                rotate_image(image, &size);
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
