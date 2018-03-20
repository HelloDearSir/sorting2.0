#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <fstream>
using namespace std;

int i; 

void bubble(int num[], int);
void print(int num[], int);
fstream write; 

int main(void)
{
	

	srand (NULL()); //random genador
	int SIZE;
	cout << endl << "How big you want the  array ? : "; //this allow me to go up to 10,000 
	cin >> SIZE; // stores the array size. 
	int* num = new int[SIZE];  

	for (int i = 0; i < SIZE; i++)  //the for loop for being up the size with random numbers from 0 - 999 
	{
		num[i] = rand() % 1000;//numbers will all be all random. 
	}
	
	write.open("sort.txt", ios::out); //getting the right .txt and doing ios::out to write to the file. 
	
	if (write.fail())  //if this fails, print out File cant be found. 
	{
		cout << "Fils cant be found" << endl; 
	}
	else {
		write << " Numbers  in original order:" << endl; //writes the original order in the file 
		print(num, SIZE); //Prints out the original order 

		bubble(num, SIZE); // sorts out the list 

		write << "\Number in the right  order:" << endl; // Then writes the right order into the file. 
		print(num, SIZE);  // prints out the new order. 


	} 
	write.close(); //closes the file. 
	_getch();  //keep the console lop up until I press any key 
	return 0;
}


void print(int num[], int SIZE)
{
	for (i = 0; i < SIZE; ++i)
	{
		write << num[i] << endl;
	}
}

void bubble(int num[], int SIZE)
{
	int temp;
	for (int n = 0; n < SIZE; ++n) {
	for (int n = 0; n < SIZE; ++n) {
		for (int i = 0; i < SIZE - 1; ++i) {
			if (num[i] > num[i + 1]) {
				temp = num[i];
				num[i] = num[i + 1];
				num[i + 1] = temp;
			}
		}
	}
}