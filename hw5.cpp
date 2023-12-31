/*
* Alex Heidorn
* Teammates: Sam Draeger, Aidan Carlson, Anna Wolf
* Created: 10-3-23
* CS2 HW5
*  
*/

/* 
Explain what results each of you got for your tests.  
Also, write up what you may have learned from those experiments.

Explanation:
Compared to the simple search, the binary search appears to be a little bit faster.
The binary search is about .3-.9 miliseconds faster for each trial (on alex's machine).
The contains test appears to be the fastest for the smaller numbers because it's 
only doing one comparison for each data member and then can break early as
soon as the target is found. The test slows down a little bit as the number increases
because it needs to look for a longer amount of time.
The removeAll functions is the slowest as it needs to page through the entire bag
every time the operation is called AND move proceeding data forward in the array. 
This operation speeds up a litte bit for a later values in the bag because
there are fewer values that need to be moved forward.


Timings:

Wolf, Anna
Part 1 - copied code output
-----------------------------------------------------------
/Users/wolf/CLionProjects/HW5/cmake-build-debug/HW5
Found 1000 at position 1000
That search zipped by in 0.01825 milliseconds.
Found 2000 at position 2000
That search zipped by in 0.003791 milliseconds.
Found 3000 at position 3000
That search zipped by in 0.005041 milliseconds.
Found 4000 at position 4000
That search zipped by in 0.00625 milliseconds.
Found 5000 at position 5000
That search zipped by in 0.007584 milliseconds.
Found 6000 at position 6000
That search zipped by in 0.008833 milliseconds.
Found 7000 at position 7000
That search zipped by in 0.010417 milliseconds.
Found 8000 at position 8000
That search zipped by in 0.012167 milliseconds.
Found 9000 at position 9000
That search zipped by in 0.013 milliseconds.

Process finished with exit code 0
-----------------------------------------------------------
Part 2 - binary search output
-----------------------------------------------------------
Found 1000 at position 1000
That search zipped by in 0.007922 milliseconds.
Found 2000 at position 2000
That search zipped by in 0.004527 milliseconds.
Found 3000 at position 3000
That search zipped by in 0.07319 milliseconds.
Found 4000 at position 4000
That search zipped by in 0.06605 milliseconds.
Found 5000 at position 5000
That search zipped by in 0.004871 milliseconds.
Found 6000 at position 6000
That search zipped by in 0.006712 milliseconds.
Found 7000 at position 7000
That search zipped by in 0.006119 milliseconds.
Found 8000 at position 8000
That search zipped by in 0.06936 milliseconds.
Found 9000 at position 9000
That search zipped by in 0.05391 milliseconds.

Process finished with exit code 0
-----------------------------------------------------------
Part 3 - Contains output
-----------------------------------------------------------
Contains Test:
Bag contains 1000
That search zipped by in 0.6785 milliseconds.
Bag contains 2000
That search zipped by in 0.2435 milliseconds.
Bag contains 3000
That search zipped by in 0.6748 milliseconds.
Bag contains 4000
That search zipped by in 0.8947 milliseconds.
Bag contains 5000
That search zipped by in 0.9082 milliseconds.
Bag contains 6000
That search zipped by in 0.7728 milliseconds.
Bag contains 7000
That search zipped by in 0.4825 milliseconds.
Bag contains 8000
That search zipped by in 0.5069 milliseconds.
Bag contains 9000
That search zipped by in 0.7854 milliseconds.
Process finished with exit code 0
-----------------------------------------------------------
Part 4 - Removes output
-----------------------------------------------------------
Removed 1000 1 time
That search zipped by in 1.4613 milliseconds.
Removed 2000 1 time
That search zipped by in 1.4867 milliseconds.
Removed 3000 1 time
That search zipped by in 1.0853 milliseconds.
Removed 4000 1 time
That search zipped by in 0.9068 milliseconds.
Removed 5000 1 time
That search zipped by in 1.0094 milliseconds.
Removed 6000 1 time
That search zipped by in 0.5682 milliseconds.
Removed 7000 1 time
That search zipped by in 1.8375 milliseconds.
Removed 8000 1 time
That search zipped by in 0.8776 milliseconds.
Removed 9000 1 time
That search zipped by in 0.4982 milliseconds.

Process finished with exit code 0
-----------------------------------------------------------

Alex:
Provided code Search:
Found 1000 at position 1000
That search zipped by in 1.3883 milliseconds.
Found 2000 at position 2000
That search zipped by in 1.0994 milliseconds.
Found 3000 at position 3000
That search zipped by in 1.0329 milliseconds.
Found 4000 at position 4000
That search zipped by in 1.1136 milliseconds.
Found 5000 at position 5000
That search zipped by in 1.3557 milliseconds.
Found 6000 at position 6000
That search zipped by in 0.5777 milliseconds.
Found 7000 at position 7000
That search zipped by in 0.8085 milliseconds.
Found 8000 at position 8000
That search zipped by in 0.8677 milliseconds.
Found 9000 at position 9000
That search zipped by in 0.6914 milliseconds.

Binary Search:
Found 1000 at position 1000
That search zipped by in 0.4922 milliseconds.
Found 2000 at position 2000
That search zipped by in 0.4527 milliseconds.
Found 3000 at position 3000
That search zipped by in 0.7319 milliseconds.
Found 4000 at position 4000
That search zipped by in 0.6605 milliseconds.
Found 5000 at position 5000
That search zipped by in 0.4871 milliseconds.
Found 6000 at position 6000
That search zipped by in 0.6712 milliseconds.
Found 7000 at position 7000
That search zipped by in 0.6119 milliseconds.
Found 8000 at position 8000
That search zipped by in 0.6936 milliseconds.
Found 9000 at position 9000
That search zipped by in 0.5391 milliseconds.

Contains Test:
Bag contains 1000
That search zipped by in 0.3259 milliseconds.
Bag contains 2000
That search zipped by in 0.2985 milliseconds.
Bag contains 3000
That search zipped by in 0.6553 milliseconds.
Bag contains 4000
That search zipped by in 0.4433 milliseconds.
Bag contains 5000
That search zipped by in 0.5316 milliseconds.
Bag contains 6000
That search zipped by in 0.4991 milliseconds.
Bag contains 7000
That search zipped by in 0.5099 milliseconds.
Bag contains 8000
That search zipped by in 0.6158 milliseconds.
Bag contains 9000
That search zipped by in 0.9282 milliseconds.

removeAll Test:
Removed 1000 1 time(s).
That search zipped by in 2.641 milliseconds.
Removed 2000 1 time(s).
That search zipped by in 1.7788 milliseconds.
Removed 3000 1 time(s).
That search zipped by in 1.8486 milliseconds.
Removed 4000 1 time(s).
That search zipped by in 2.6508 milliseconds.
Removed 5000 1 time(s).
That search zipped by in 1.6082 milliseconds.
Removed 6000 1 time(s).
That search zipped by in 1.2072 milliseconds.
Removed 7000 1 time(s).
That search zipped by in 3.3495 milliseconds.
Removed 8000 1 time(s).
That search zipped by in 1.4771 milliseconds.
Removed 9000 1 time(s).
That search zipped by in 1.4892 milliseconds.
PS C:\Users\alexh\CS2> 




—--------------------------------------SAM DRAGEGER—------------------------------------------------------
/**
C:\Users\getsn\CLionProjects\HW5\cmake-build-debug\HW5.exe
That search zipped by in 0.0008 milliseconds.
That search zipped by in 0.0009 milliseconds.
That search zipped by in 0.0008 milliseconds.
That search zipped by in 0.0012 milliseconds.
That search zipped by in 0.0001 milliseconds.
That search zipped by in 0.0009 milliseconds.
That search zipped by in 0.0015 milliseconds.
That search zipped by in 0.0011 milliseconds.
That search zipped by in 0.0007 milliseconds.
----------------------------------------------------------------------------------
Bag contains 1000
That blew by in 0.5991 milliseconds.
Bag contains 2000
That blew by in 2.4542 milliseconds.
Bag contains 3000
That blew by in 0.9662 milliseconds.
Bag contains 4000
That blew by in 0.6453 milliseconds.
Bag contains 5000
That blew by in 0.4266 milliseconds.
Bag contains 6000
That blew by in 0.4268 milliseconds.
Bag contains 7000
That blew by in 0.3578 milliseconds.
Bag contains 8000
That blew by in 0.3779 milliseconds.
Bag contains 9000
That blew by in 1.2855 milliseconds.
------------------------------------------------------------------------
Removed 1000 1 time
That blew by in 1.2411 milliseconds.
Removed 2000 1 time
That blew by in 0.4701 milliseconds.
Removed 3000 1 time
That blew by in 0.5014 milliseconds.
Removed 4000 1 time
That blew by in 0.8136 milliseconds.
Removed 5000 1 time
That blew by in 0.6746 milliseconds.
Removed 6000 1 time
That blew by in 0.5142 milliseconds.
Removed 7000 1 time
That blew by in 1.1665 milliseconds.
Removed 8000 1 time
That blew by in 0.5702 milliseconds.
Removed 9000 1 time
That blew by in 0.6661 milliseconds.


Process finished with exit code 0

—------------------------------------------------------END SAM DRAEGER—--------------------------------------



Aidan Carlson 
//Original
//Found 1000 at position 1000 That search zipped by in 0.0247 milliseconds.
//Found 2000 at position 2000 That search zipped by in 0.0065 milliseconds.
//Found 3000 at position 3000 That search zipped by in 0.0028 milliseconds.
//Found 4000 at position 4000 That search zipped by in 0.0032 milliseconds.
//Found 5000 at position 5000 That search zipped by in 0.0041 milliseconds.
//Found 6000 at position 6000 That search zipped by in 0.0184 milliseconds.
//Found 7000 at position 7000 That search zipped by in 0.0056 milliseconds.
//Found 8000 at position 8000 That search zipped by in 0.0064 milliseconds.
//Found 9000 at position 9000 That search zipped by in 0.0069 milliseconds.

//Binary Search
//Found 1000 at position 1000 That search zipped by in 0.0246 milliseconds.
//Found 2000 at position 2000 That search zipped by in 0.0007 milliseconds.
//Found 3000 at position 3000 That search zipped by in 0.0005 milliseconds.
//Found 4000 at position 4000 That search zipped by in 0.0005 milliseconds.
//Found 5000 at position 5000 That search zipped by in 0.0004 milliseconds.
//Found 6000 at position 6000 That search zipped by in 0.0006 milliseconds.
//Found 7000 at position 7000 That search zipped by in 0.0005 milliseconds.
//Found 8000 at position 8000 That search zipped by in 0.0006 milliseconds.
//Found 9000 at position 9000 That search zipped by in 0.0005 milliseconds.

//Bag Thing
//contains 1000 That search zipped by in 0.0207 milliseconds.
//contains 2000 That search zipped by in 0.0051 milliseconds.
//contains 3000 That search zipped by in 0.0072 milliseconds.
//contains 4000 That search zipped by in 0.0094 milliseconds.
//contains 5000 That search zipped by in 0.0116 milliseconds.
//contains 6000 That search zipped by in 0.0137 milliseconds.
//contains 7000 That search zipped by in 0.0169 milliseconds.
//contains 8000 That search zipped by in 0.0184 milliseconds.
//contains 9000 That search zipped by in 0.0228 milliseconds.

//Bag Remove
//removed 1000 That search zipped by in 0.1062 milliseconds.
//removed 2000 That search zipped by in 0.0822 milliseconds.
//removed 3000 That search zipped by in 0.0598 milliseconds.
//removed 4000 That search zipped by in 0.0584 milliseconds.
//removed 5000 That search zipped by in 0.0536 milliseconds.
//removed 6000 That search zipped by in 0.0518 milliseconds.
//removed 7000 That search zipped by in 0.0408 milliseconds.
//removed 8000 That search zipped by in 0.0368 milliseconds.
//removed 9000 That search zipped by in 0.0315 milliseconds.
//removed 10000 That search zipped by in 0.0237 milliseconds.

*/

#include "MyBag_StringHW5.cpp"
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;
int bSrchHelper(int v, int A[], int low, int hgh) {
  if (low > hgh) { return -1; }
  int mid = (low + hgh) / 2;
  if (A[mid] < v) { return bSrchHelper(v,A,mid+1,hgh); }
  if (A[mid] > v) { return bSrchHelper(v,A,low,mid-1); }
  return mid;
}
int bSrch(int v, int A[], int N) {
  return bSrchHelper(v, A,0,N-1);
}

int main() {
    const int ARRAY_SIZE = 10000;
    int myNumbers[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        myNumbers[i] = i;
    }

    /* Provided code search:*/
    cout << "\nProvided code Search:\n";
    for (int findN = 1000; findN < 10000; findN += 1000) {
        high_resolution_clock::time_point startTime = high_resolution_clock::now();
        int i = 0;
        while (i < ARRAY_SIZE) {
            if (myNumbers[i] != findN) {
                i++;
            }
            else {
                cout << "Found " << findN << " at position " << i << "\n";
                break;
            }
        }       
        high_resolution_clock::time_point stopTime = high_resolution_clock::now();
        duration<double, std::milli> timeTaken = (stopTime - startTime);
        cout << "That search zipped by in " << timeTaken.count() << " milliseconds.\n";
    }
    
    /* Binary Search*/
    cout << "\nBinary Search:\n";
    for (int findN = 1000; findN < 10000; findN += 1000) {
        high_resolution_clock::time_point startTime = high_resolution_clock::now();
        int index = bSrch(findN, myNumbers, ARRAY_SIZE);
        cout << "Found " << findN << " at position " << index << "\n";
        high_resolution_clock::time_point stopTime = high_resolution_clock::now();
        duration<double, std::milli> timeTaken = (stopTime - startTime);
        cout << "That search zipped by in " << timeTaken.count() << " milliseconds.\n";
    }

    MyBag_String myBag(ARRAY_SIZE);
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        string s = to_string(i);
        myBag.add(s);
    }

    /* contains test:*/
    cout << "\nContains Test:\n";
    for (int findN = 1000; findN < 10000; findN += 1000) {
        string findS = to_string(findN);
        high_resolution_clock::time_point startTime = high_resolution_clock::now();
        int i = 0;
        if (myBag.contains(findS)){
            cout << "Bag contains " << findS << "\n";
        }
        else {
            cout << "Bag does not contain " << findS << endl;
        }
        high_resolution_clock::time_point stopTime = high_resolution_clock::now();
        duration<double, std::milli> timeTaken = (stopTime - startTime);
        cout << "That search zipped by in " << timeTaken.count() << " milliseconds.\n";
    }

    /* removeAll test:*/
    cout << "\nremoveAll Test:\n";
    for (int findN = 1000; findN < 10000; findN += 1000) {
        string findS = to_string(findN);
        high_resolution_clock::time_point startTime = high_resolution_clock::now();
        int i = myBag.removeAll(findS);
        cout << "Removed " << findS << " " << i << " time(s).\n";
        high_resolution_clock::time_point stopTime = high_resolution_clock::now();
        duration<double, std::milli> timeTaken = (stopTime - startTime);
        cout << "That search zipped by in " << timeTaken.count() << " milliseconds.\n";
    }

    return 0;
}
