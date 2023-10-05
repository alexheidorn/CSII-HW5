/*
* Alex Heidorn
* Teammates: Sam Draeger, Aidan Carlson, Anna Wolf
* Created: 10-3-23
* CS2 HW5
*  
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
        /* Provided code search timing:

        Found 1000 at position 1000
        That search zipped by in 2.5543 milliseconds.
        Found 2000 at position 2000
        That search zipped by in 0.9138 milliseconds.
        Found 3000 at position 3000
        That search zipped by in 1.7079 milliseconds.
        Found 4000 at position 4000
        That search zipped by in 1.4002 milliseconds.
        Found 5000 at position 5000
        That search zipped by in 0.7587 milliseconds.
        Found 6000 at position 6000
        That search zipped by in 0.4111 milliseconds.
        Found 7000 at position 7000
        That search zipped by in 1.1393 milliseconds.
        Found 8000 at position 8000
        That search zipped by in 0.7904 milliseconds.
        Found 9000 at position 9000
        That search zipped by in 1.1263 milliseconds.
        */
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
    /* Binary Search timing First Run:
        Found 1000 at position 1000
        That search zipped by in 1.0905 milliseconds.
        Found 2000 at position 2000
        That search zipped by in 1.0635 milliseconds.
        Found 3000 at position 3000
        That search zipped by in 1.2658 milliseconds.
        Found 4000 at position 4000
        That search zipped by in 1.4534 milliseconds.
        Found 5000 at position 5000
        That search zipped by in 1.0055 milliseconds.
        Found 6000 at position 6000
        That search zipped by in 1.0415 milliseconds.
        Found 7000 at position 7000
        That search zipped by in 1.3224 milliseconds.
        Found 8000 at position 8000
        That search zipped by in 1.4714 milliseconds.
        Found 9000 at position 9000
        That search zipped by in 2.6885 milliseconds.
    */
    /* Binary Search Timing 2nd run:
        Found 1000 at position 1000
        That search zipped by in 1.0632 milliseconds.
        Found 2000 at position 2000
        That search zipped by in 0.5291 milliseconds.
        Found 3000 at position 3000
        That search zipped by in 0.7275 milliseconds.
        Found 4000 at position 4000
        That search zipped by in 0.8177 milliseconds.
        Found 5000 at position 5000
        That search zipped by in 0.9369 milliseconds.
        Found 6000 at position 6000
        That search zipped by in 0.5172 milliseconds.
        Found 7000 at position 7000
        That search zipped by in 0.4487 milliseconds.
        Found 8000 at position 8000
        That search zipped by in 0.4299 milliseconds.
        Found 9000 at position 9000
        That search zipped by in 0.4948 milliseconds.
    */
    /* Binary Search imPROPER IMPLIMENTAION run:
    Binary Search:
    That search zipped by in 0.0071 milliseconds.
    That search zipped by in 0.0005 milliseconds.
    That search zipped by in 0.0005 milliseconds.
    That search zipped by in 0.0005 milliseconds.
    That search zipped by in 0.0006 milliseconds.
    That search zipped by in 0.001 milliseconds.
    That search zipped by in 0.0005 milliseconds.
    That search zipped by in 0.0006 milliseconds.
    That search zipped by in 0.0007 milliseconds.
    */
    
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
        /* Contains test timing:
        */
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
        /* removeAll test timing:
        */
    }

    return 0;
}