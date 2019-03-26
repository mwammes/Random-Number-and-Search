/*
 *        File: extraCreditRandNum.cc
 *      Author: Meredith Wammes
 *        Date: March 25, 2019
 * Description: Creates and displays 20 random integers and allows the user
 *              to find and locate the target in the array
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes
void randomArray (int randArray[]);
int search (const int randArray[], int target);

//************************************************************
// Function: randomArray (int randArray[])
//
// Purpose: Create 20 random integers and stores them into array of integers
//
// Parameters: randArray[] - Array to store integers in
//
// Pre Conditions: numbers stored in array must have valid values
//
// Post Conditions: Returns a full array
//************************************************************
// Function: search (const int randArray[], int target)
//
// Purpose: Finds and locates the target in the array
//
// Parameters: randArray[] - Array to store integers in
//             target - number user enters to find location of
//
// Pre Conditions: numbers stored in array must have valid values
//                 target number must be a valid value
//
// Post Conditions: returns the position the number is in or -1 of not found
//************************************************************


int main(int argc, char const *argv[]) {
//Initialization
    int position;
    int randArray[25];
    int target;
    srand(time(NULL)); //Randomize numbers
    randomArray (randArray); //assign 20 integers to array

// Get target number 
    cout << "Enter a target number to find the location of: ";
    cin >> target;

    position = search (randArray, target); // sequential search function

    if (position == -1){ //If error isn't in array
        cout << endl << "Error: Number not found." << endl;
    }
    else {
    cout << endl << "Number is found in location " << position << "." << endl;
    }
    return 0;
}// main

//Create 20 random integers and stores them into array of integers
void randomArray (int randArray[]){
        for(size_t i = 0; i < 20; i++)
    {
        randArray[i] = rand();
        cout << randArray[i]<< endl;
    }
}

//Finds and locates the target in the array
int search (const int randArray[], int target){
    for (size_t i = 0; i < 20; i++){
        if (target == randArray[i]){
            return (i); // i = position
        }
    }
    return (-1); //If not found
}
