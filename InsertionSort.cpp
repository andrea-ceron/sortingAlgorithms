#include <iostream>
using namespace std;

void insertionSort (int startingArray[], int numberOfIteration){
//	accepts an array of integer and a number the algorithm will be run on 
		int key;
//	key is a variable the number at the position j of startingArray (useful for swaps)
		int n;
//	n is a variable used only as an index 
	for(int j=1; j< numberOfIteration; j++){
//	algorithm run for a number which is equal to numberOfIteration
		key = startingArray[j];
//	key is equal to startingArray in j position
		n =  j-1;
//	and n is equal to the j-1 position
		while(j>=0 && startingArray[n] > key){
//	if the conditions matches there's a swap between the two position
//	let's say that n=4 and j=5 and startingArray[n]=15 startingArray[j]=1 we match the condition and enter inside the while
//	we assigne to startingArray[5] (startingArray[n+1]) the value of startingArray[4] (startingArray[n])
			startingArray[n+1] = startingArray[n];
//	and decrease n of one to 3 and we check again in the while if the condition are matched again 
//	if the condition are matched the same two rows will run so we will assign to startingArray[4] (startingArray[n+1]) the value of startingArray[3] (startingArray[n])
//	and decrease n to 2 and so on till we manage to go out from the while loop
			n = n-1;
		}
//	Once we're out we only need to copy the value we memorized at the beginning in key in position we stop looping with the while
//	if we don't do that we will have no ordered array because the position n we got out from and the position n+1 will have the same value
//	for example if we got out from the while loop at position 2 we will be in this situation [0,1,3,3,4,5,6,7,8] (we have two values that are the same)
//	so we need to copy at position two the value we memorized in key. key = 2, so we'll have the end array [0,1,2,3,4,5,6,7,8]
//	and this concludes the swap
		startingArray[n+1] = key;
	}
}

void print (int startingArray[], int numberOfIteration){
//	prints the array 
	for(int i =0; i<numberOfIteration; i++){
		cout << startingArray[i] << "  ";
	}
	cout << endl;
}

int main(){
//	Array of integer with a max 100 numbers accepted
	int startingArray[100] = {};
//	Cursor keeps track memorize the number that the user writes and if it's different from -1 it saves it inside the array at the position i
	int cursor;
//	numberOfIteration keeps track of the how many numbers are added in the array if the user writes less than 100
	int numberOfIteration= 0;
	for(int i=0; i<20; i++){
		cin >> cursor;
		if(cursor == -1){
				cout << endl << endl;	
			cout << "numeri inseriti" << endl;
			break;
		}
		startingArray[i] = cursor;
		numberOfIteration++;
	};
	
	print(startingArray, numberOfIteration);
	insertionSort(startingArray, numberOfIteration);
	cout << endl << endl;
	cout << "risultato" << endl;
	print(startingArray, numberOfIteration);	

}
