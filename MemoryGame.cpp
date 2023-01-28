/*
Author: Kazi Sameen Anwar 
Course: CSCI-135
Instructor: Tong Yi
Assignment: Memory Game Project

comments
comments
comments
*/

#include "MemoryGame.hpp"
#include <cstdlib> //srand, rand
#include <ctime>
#include <iomanip> //setw
#include <iostream> //std
using namespace std;

int* randomize(int numSlots); //function to randomize layout
void swap(int* arr, int i, int j);
void displaySeparateLine(int numSlots);

//TODO: implement by students
MemoryGame::MemoryGame() //default constructor, 
    //set numPairs = 3, numSlots = 2 * numPairs + 2,
    //put 3 pairs of randomly generated ints in [0, 1000)
    //randomly in numSlots blocks. 
    //Note that 2 added after 2 * numPairs means number of 
    //two extra blocks without actual data.
{
    //srand(time(NULL)); //TODO: uncomment this line to see
        //different layouts of numbers in different runnings.
        //time(NULL) is the current running time.
        //use the current running time to grow random sequence
        //Since running time differs,
        //the random sequence looks different
        //at different running time.
    srand(1); //TODO: add this before submitting to gradescope,
        //or autograde script cannot handle random input.

    //TODO: your code here
	numPairs = 3;
    numSlots = 8;
    int* nums = new int[numPairs];
    for(int i = 0; i < numPairs; i++){
        nums[i] = rand() % 1000;
    }
    int* arr = randomize(numSlots);
    values = new string[numSlots];
    
    for (int i = 0; i < numSlots; i++){
	    if (i < numPairs*2){
	        values[arr[i]] = to_string(nums[i/2]);
	    }
	    else{
	        values[arr[i]] = "";
	    }
	}	

    delete[] nums;
	nums = nullptr;
	delete[] arr;
	arr = nullptr;
}

//TODO: implement by students
MemoryGame::~MemoryGame()
{
    //When an object is no longer in need,
    //release dynamically allocated memory by 
    //data members of the current object.
	delete[] values;
	values = nullptr;

}

//TODO: implement by students
//randomize is not a member function,
//so there is no MemoryGame:: before function name randomize.
//Return an array of randomly allocated 0, 1, .., size-1
//In constructors, randomly assign the data in dataVector 
//to array values
int* randomize(int size)
{
    //idea to randomize 0, 1, 2, 3, 4, 5,
    //generate a random int in [0, 6), say 3,
    //then move arr[3] to the end,
    //say, 0, 1, 2, 5, 4, 3
    //generate a random int in [0, 5), say 3 again,
    //then swap arr[3], which is 5 now, with arr[4], 
    //get 0, 1, 2, 4, 5, 3
    //generate a random int in [0, 4), say 2,
    //swap arr[2] with the current arr[3]
    //get 0, 1, 4, 2, 5, 3
    //continue to randomize arr[0..2].
    //afterwards, continue to randomize arr[0..1].

    int* arr = new int[size];
    for(int i = 0; i < size; i++){
        arr[i] = i;
    }

    int num;

    while(size > 0){
        num = rand() % size;
        swap(arr, num, size-1);
        size -= 1;
    }

    return(arr);
}

// implement by students
//int* arr means int array arr, which implies the address
//of the first element of array arr.
//swap arr[i] and arr[j] in array of ints arr.
void swap(int *arr, int i, int j)
{
	swap(arr[i],arr[j]);
}

//Display -----+ for numSlots times.
//Add an extra + when for the first block (when index i is 0).
//So suppose numSlots is 8, we get
//+-----+-----+-----+-----+-----+-----+-----+-----+
//followed by a new line.
void displaySeparateLine(int numSlots)
{
    for (int i = 0; i < numSlots; i++)
    {
        if (i == 0)
           cout << "+";
        cout << "-----+";
    }
    cout << endl;
}

//TODO: implement by students
//display the items in values array where bShown is true.
void MemoryGame::display(bool* bShown)
{
    cout << " ";
	for (int i = 0; i < numSlots; i++){ //create the numbers on top
	    cout << setw(3) << i;
	    cout << setw(3) << " ";
	}

    cout << endl;
	displaySeparateLine(numSlots); //create the +-----+ pattern
    cout << "|";

    for (int i = 0; i < numSlots; i++){
    //if bShown[i] == true , create 5 spaces and 
    //reveal the value in that space, else, reveal "", then draw "|"
	    if (bShown[i] == true){
	        cout << setw(5) << values[i];
        }
	    else{
            cout << setw(5) << "";
	    }
        cout << "|";
	}

	cout << endl;
	displaySeparateLine(numSlots);
}


//TODO: implement by students
//rules for a round
//(1) pick a number, flip it
//(2) pick a second number, if the number is the same as
//    previous pick, display the second number,
//    otherwise, unflip the previous pick.
//(3) Finish until every pair are chosen correctly.
void MemoryGame::play()
{   
	bool* bShown = new bool[numSlots];
	for (int i = 0; i < numSlots; i++){
	    bShown[i] = false;
	}
    display(bShown);
	int index;
	int first;
	int numFlips = 0;
	int pairsFound = 0;
	while (pairsFound < numPairs){ //numPairs = 3
	    cout << "Pick a cell to flip: ";
	    cin >> index;
	    while (index < 0 || index >= numSlots || bShown[index] == true){  //if index is out of range or if already selected...
	        if (index < 0 || index >= numSlots){  //if inputted index if out of range
	            cout << "Index needs to be in the range [0, " << numSlots << "]." <<endl;  //print this
	        }
	        else{  //if inputted index is already revealed...
	            cout << "The cell indexed at " << index << " is shown." << endl;  //print this
	        }
	        cout << "Re-enter an index: ";  
	        cin >> index;
	    }
	    if (numFlips % 2 == 0){  //while numFlips = 0 or 2
	        bShown[index] = true;  //make bShown true at the inputted index
	        first = index;  //save selected index in variable first to remember it
	    }
	    else{   //while numFlips = 1;
	        if (values[first] == values[index] && values[first] != ""){  //if the already indexed value = the newly indexed value 
            //AND the first indexed value isn't a string
	            bShown[index] = true; //make bShown in second inputted index true
	            pairsFound++; //increase pairsFound
	        }
	        else{   //if the first inputted index and second inputted index are not the same
	            bShown[first] = false; //unflip the first inputted index
	        }
	    }
	    display(bShown); //reveal value at selected index
	    numFlips += 1; //increase  numFlips
	}
	cout << "Congratulations! Take " << numFlips << " steps to find all matched pairs." << endl;
	delete[] bShown;
	bShown = nullptr; 
}