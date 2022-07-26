// test file - do not modify
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <ctime>
using namespace std;

#include "Lab4.cpp"

void fillTestArr(int arr[], int size) {
    srand(time(0));
    for(int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}
void printTestArr(int arr[], int size) {
    cout << "[";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}


TEST_CASE("printArray", "[pointers]") {
    int A[5] = { 2, 55, 7, 44, 11 };
    int B[7];
    fillTestArr(B, 7);

    cout << "array values: ";
    printTestArr(A, 5);
    cout << endl;
    cout << "function output: "; 
    printArray(&A[4], 5);
    cout << endl;

    cout << "array values: ";
    printTestArr(B, 7);
    cout << endl;
    cout << "function output: "; 
    printArray(&B[6], 7);
    cout << endl;
};

TEST_CASE("incrementArray", "[pointers]") {
    int A[5] = { 2, 55, 7, 44, 11 };
    int Acopy[5] = { 2, 55, 7, 44, 11 };
    // random B array
    int B[7];
    int Bcopy[7];
    fillTestArr(B, 7); 
    for(int i = 0; i < 7; i++) {Bcopy[i] = B[i];}

    //increment
    incrementArray(&A[0], 5, 2);
    incrementArray(&B[0], 7, 3);

    // test each element
    for(int i = 0; i < 5; i++) {
        CHECK((Acopy[i] + 2) == A[i]);
    }
    for(int i = 0; i < 7; i++) {
        CHECK((Bcopy[i] + 3) == B[i]);
    }
};

TEST_CASE("checkPalindrome_String", "[palindrome]") {
    CHECK(checkPalindrome_String("HANNAH") == true);
    CHECK(checkPalindrome_String("BOB") == true);
    CHECK(checkPalindrome_String("ERIK") == false);
    CHECK(checkPalindrome_String("GREG") == false);
};

TEST_CASE("checkPalindrome_Integer", "[bonus]") {
    CHECK(checkPalindrome_Integer(123456) == false);
    CHECK(checkPalindrome_Integer(919) == true);
    CHECK(checkPalindrome_Integer(127363721) == true);
    CHECK(checkPalindrome_Integer(912319) == false);
};