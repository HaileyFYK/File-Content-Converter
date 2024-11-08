#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 3

#define ROWS 2
#define COLS 3

double c;

struct point {
	int x;
	int y;
};
struct rectangle {
	struct point pt1;
	struct point pt2;
};

struct key {
	char* word;
	int count;
};

typedef struct key_node* Pointer;
typedef struct key_node {
	char* word;
	int count;
	Pointer next;
} Node;

struct point add_points(struct point pt1, struct point pt2);
double compute_rectangle_distance(struct rectangle rect);
struct rectangle make_rectangle(struct point pt1, struct point pt2);
double compute_point_distance(struct point pt1, struct point pt2);
struct point make_point(int x, int y);
void print_int_array_2d(int iarray_2d[ROWS][COLS]);
void print_char_array_2d(char carray_2d[ROWS][COLS]);
void print_int_array_whole(int* iarray);
void print_char_array_whole(char* carray);
int get_char_array(char* carray);
void compute_hypotenuse(double a, double b);
int factorial_iteration(int n);
int factorial_recursion(int n);
void swap_by_value(int x, int y);
void swap_by_pointer(int* px, int* py);
void print_int_pointer(int* pointer);