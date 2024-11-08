#include "header.h"

struct point add_points(struct point pt1, struct point pt2) {
	pt1.x += pt2.x;
	pt1.y += pt2.y;
	return pt1;
}

double compute_rectangle_distance(struct rectangle rect) {

	double dist = sqrt( ( double ) ( ( rect.pt1.x - rect.pt2.x) * ( rect.pt1.x - rect.pt2.x) )
						  + ( double ) ( ( rect.pt1.y - rect.pt2.y) * ( rect.pt1.y - rect.pt2.y) ) );
	return dist;

}

struct rectangle make_rectangle(struct point pt1, struct point pt2) {
	struct rectangle rect = { pt1, pt2 };
	return rect;
}

double compute_point_distance(struct point pt1, struct point pt2) {

	double distance = sqrt( ( double ) ( ( pt1.x - pt2.x) * ( pt1.x - pt2.x) )
						  + ( double ) ( ( pt1.y - pt2.y) * ( pt1.y - pt2.y) ) );
	return distance;
}

struct point make_point(int x, int y) {
	struct point pt = {x, y};
	return pt;
}

void print_int_array_2d(int iarray_2d[ROWS][COLS]) {

    printf("int array 2d = \n");
	for(int i = 0; i < ROWS; i++){
		for(int j = 0; j < COLS; j++){
			printf("%d ", iarray_2d[i][j]);
		}
    	printf("\n");
	}
    printf("\n");

}

void print_char_array_2d(char carray_2d[ROWS][COLS]) {

    printf("char array 2d = \n");
	for(int i = 0; i < ROWS; i++){
		for(int j = 0; j < COLS; j++){
			printf("%c ", carray_2d[i][j]);
		}
    	printf("\n");
	}
    printf("\n");

}

void print_int_array_whole(int* iarray) {

    printf("int array whole = ");
	for(int i = 0; i < MAX; i++){
		printf("%d ", *(iarray + i));
    }

    printf("\n");

}

void print_char_array_whole(char* carray) {

    printf("char array whole = ");
	for(int i = 0; i < MAX; i++){
		printf("%c", *(carray + i));
    }

    printf("\n");

}

int get_char_array(char* carray){
    int i = 0;
    char c = getchar();

    while(c != '\n') {
		putchar(c);
		*(carray + i) = c;
		c = getchar();
		i = i + 1;
    }

    *(carray + i) = '\0';

    putchar('\n');

	return i == 0 ? -1 : i;

}

void compute_hypotenuse(double a, double b){

	c = sqrt((a * a) + (b * b));

}

int factorial_iteration(int n) {

	int tim = 1;

	for(int i = n; i > 0; i--){
		tim *= i;
		printf("n = %d, i = %d, tim = %d\n", n, i, tim);
	}

	return tim;

}

int factorial_recursion(int n) {

	if(n > 0) {
		return n * factorial_recursion(n - 1);
	}else{
		return 1;
	}

}

void swap_by_value(int x, int y) {

	printf("Swap by value before: x = %d\n", x);
	printf("Swap by value before: y  = %d\n", y);
	printf("\n");

	int temp = x;
	x = y;
	y = temp;

	printf("Swap by value after: x  = %d\n", x);
	printf("Swap by value after: y  = %d\n", y);
	printf("\n");
}

void swap_by_pointer(int* px, int* py) {

	printf("Swap by pointer before: x = %d\n", *px);
	printf("Swap by pointer before: y = %d\n", *py);
	printf("\n");

	int temp = *px;
	*px = *py;
	*py = temp;

	printf("Swap by pointer after: x  = %d\n", *px);
	printf("Swap by pointer after: y  = %d\n", *py);
	printf("\n");
}

void print_int_pointer(int* pointer){

	printf(" pointer = %p\n", pointer);

	if(pointer != NULL) {
		printf("*pointer = %d\n", *pointer);
	} else {
		printf("*pointer = NULL\n");

	}

	printf("\n");

}

