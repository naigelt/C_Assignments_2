#include <iostream>

int Assignemnt1();
int Assignment2();     

int main() {

	Assignemnt1();
	Assignment2();

	return 0;
}

int Assignemnt1(){
	std::cout << "Assignment 1" << std::endl;
	std::cout << "Size of char : " << sizeof(char) << " byte" << std::endl;
	std::cout << "Size of int : " << sizeof(int) << " byte" << std::endl;
	std::cout << "Size of unsigned int : " << sizeof(unsigned int) << " byte" << std::endl;
	std::cout << "Size of float : " << sizeof(float) << " byte" << std::endl;
	std::cout << "Size of double : " << sizeof(double) << " byte" << std::endl;
	std::cout << "Size of bool : " << sizeof(bool) << " byte \n" << std::endl;

	return 0;
}

int Assignment2() {
	int x = 10;
	int* y = &x;

	std::cout << "Assignment 2" << std::endl;
	std::cout << "Address of variable x: " << &x << std::endl;
	std::cout << "Value of variable x: " << x << std::endl;

	std::cout << "Value of variable y (points to x): " << y << std::endl;
	std::cout << "Address of variable y: " << &y << std::endl;

	std::cout << "Value pointed to by y: " << *y << std::endl;

	return 0;
}

// Assignment 3 //

/*
//int x = 15; =   X on 15
2. int* y; =   X on 15
4. * y = *y + 3; =   X on 18
5. int z = 2; =   X on 18
6. int* w;  =   X on 18
7. w = y; =   X on 18
8. y = 0; =   X on 18
9. y = &z; =   X on 18
10. * w = *w + *y; =   X on 20
11. int t[] = { 9, 10 }; =   X on 20
12. y = t;  =   X on  20
13. * w += *y;  =   X on 29
14. y++;  =   X on 29
15. * w += *y;  =   X on 39
*/
