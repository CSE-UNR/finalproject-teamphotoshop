///Dylan Li, Dominico Domistefano
///CS 135
///Final Project image rotations


#include <stdio.h>

#define MAX_SIZE 1000 // Maximum image size

// Function prototypes
void load_image(int image[MAX_SIZE][MAX_SIZE], int *size);
void display_image(int image[MAX_SIZE][MAX_SIZE], int size);
void edit_image(int image[MAX_SIZE][MAX_SIZE], int size);
void crop_image(int image[MAX_SIZE][MAX_SIZE], int *size);
void dim_image(int image[MAX_SIZE][MAX_SIZE], int size);
void brighten_image(int image[MAX_SIZE][MAX_SIZE], int size);
void save_image(int image[MAX_SIZE][MAX_SIZE], int size);
