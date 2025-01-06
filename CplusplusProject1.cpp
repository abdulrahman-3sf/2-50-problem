
// #####################################################################################

//                                Abdulrahman Alassaf
//                              github: @abdulrahman-3sf

//          Another 50 easy problem solved in ways that make reading and reuse easy.
//                                  Solved with C++

// #####################################################################################

#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib> // random number
using namespace std;

int readPositiveIntNumber() {
	int number = 0;

	do {
		cout << "Enter a positive integer number: ";
		cin >> number;
	} while (number <= 0);

	return number;
}
int readIntNumberWithMsg(string msg) {
	int number = 0;

	cout << msg;
	cin >> number;

	return number;
}
void readArrayOfInt(int array[], int& lengthOfArray) {
	cout << "Enter number of elements: ";
	cin >> lengthOfArray;

	for (int i = 0; i < lengthOfArray; i++) {
		cout << "Element [" << i << "]: ";
		cin >> array[i];
	}
}
void printArray(int array[], int lengthOfArray) {
	for (int i = 0; i < lengthOfArray; i++) {
		cout << array[i] << " ";
	}
}
void printArray(string array[], int lengthOfArray) {
	for (int i = 0; i < lengthOfArray; i++) {
		cout << array[i] << "\n";
	}
}

// ################################################
//		Multiplication Table from 1 to 10
// ################################################
void headerTable1_10() {
	cout << "\n\n\t\t\t\tMultiplication table from 1 to 10\n\n   ";

	for (int i = 1; i <= 10; i++) {
		cout << '\t' << i;
	}

	cout << "\n________________________________________________________________________________________\n";
}
void bodyTable1_10() {
	for (int i = 1; i <= 10; i++) {
		cout << i << '\t' << '|';
		for (int j = 1; j <= 10; j++) {
			cout << j * i << '\t';
		}
		cout << endl;
	}
}
void printtMultiplicationTaple1_10() {
	headerTable1_10();
	bodyTable1_10();
}

// ################################################
//		Print All Prime Number from 1 to N
// ################################################
// int readPositiveIntNumber()
enum enPrimeOrNot {notPirme=0, prime=1};
enPrimeOrNot isPrime(int number) {
	int mid = round(number / 2);
	for (int i = 2; i <= mid; i++) {
		if (number % i == 0)
			return enPrimeOrNot::notPirme;
	}
	return enPrimeOrNot::prime;
}
void printAllPrimeNumbers(int number) {
	for (int i = 1; i <= number; i++) {
		if (isPrime(i) == enPrimeOrNot::prime)
			cout << i << endl;
	}
}

// ################################################
//		Perfect Number from 1 to N
// ################################################
// int readPositiveIntNumber()
bool isPerfectNumber(int number) {
	int mid = round(number / 2);
	int sum = 1;
	for (int i = 2; i <= mid; i++) {
		if (number % i == 0)
			sum += i;
	}
	return number == sum;
}
void printPerfectNumberFrom1ToN(int number) {
	for (int i = 1; i <= number; i++) {
		if (isPerfectNumber(i))
			cout << i << " is perfect number!\n";
	}
}

// ################################################
//		Print Digits in a Reversed Orderl
// ################################################
// int readPositiveIntNumber()
void printReversedNumber(int number) {
	while (number > 0) {
		cout << (number % 10) << endl;
		number /= 10;
	}
}

// ################################################
//		Sum of Digits
// ################################################
// int readPositiveIntNumber()
int sumOfDigits(int number) {
	int sum = 0, remainder = 0;
	while (number > 0) {
		remainder = number % 10;
		number = number / 10;
		sum += remainder;
	}
	return sum;
}
void printSumOfDigits(int number) {
	cout << "The sum of digits for " << number << " is " << sumOfDigits(number) << endl;
}

// ################################################
//		Reverse Number
// ################################################
// int readPositiveIntNumber()
int reverseNumber(int number) {
	int remainder = 0, reversedNumber = 0;
	while (number > 0) {
		remainder = number % 10;
		number = number / 10;
		reversedNumber = reversedNumber * 10 + remainder;
	}
	return reversedNumber;
}
void printReverseNumber(int number) {
	cout << "The reveres number of " << number << " is " << reverseNumber(number) << endl;
}

// ################################################
//		Digit Frequency
// ################################################
// int readPositiveIntNumber()
int calculateDigitFrequency(short digit, int number) {
	int frequency = 0;
	short lastDigit = 0;
	while (number > 0) {
		lastDigit = number % 10;
		number /= 10;
		if (digit == lastDigit)
			frequency += 1;
	}
	return frequency;
}
void printDigitFrequency(short digit, int number) {
	cout << "Digit " << digit << " Frequency is " << calculateDigitFrequency(digit, number) << " time(s)\n";
}

// ################################################
//		Digit Frequency for All Number in it
// ################################################
// int readPositiveIntNumber()
// int calculateDigitFrequency(short digit, int number)
void printDigitsFrequency(int number) {
	short max = 0, lastDigit = 0;
	int frequency = 0;

	// int tempNumber = number;
	//while (tempNumber > 0) {
	//	lastDigit = tempNumber % 10;
	//	tempNumber /= 10;
	//	if (lastDigit > max)
	//		max = lastDigit;
	//}
	
	for (int i = 0; i <= 9; i++) {
		frequency = calculateDigitFrequency(i, number);
		if (frequency)
			cout << "Digit " << i << " Frequency is " << frequency << endl;
	}
}

// ################################################
//		Print Digits in Order
// ################################################
// int readPositiveIntNumber()
// int reverseNumber(int number)
// void printReversedNumber(int number)
void printNumberInOrder(int number) {
	number = reverseNumber(number);
	printReversedNumber(number);
}

// ################################################
//		Palindrome Number
// ################################################
// int readPositiveIntNumber()
// int reverseNumber(int number)
bool checkPalindromeNumber(int number) {
	return number == reverseNumber(number);
}
void printCheckPalindromeNumber(int number) {
	if (checkPalindromeNumber(number))
		cout << "Yes, it is a palindrome number";
	else
		cout << "No, it is not a palindrome number";
}

// ################################################
//		Inverted Number Pattern 
// ################################################
// int readPositiveIntNumber()
void printInvertedNumberPattern(int number) {
	for (int i = number; i >= 1; i--) {
		for (int j = i; j >= 1; j--) {
			cout << i;
		}
		cout << endl;
	}
}

// ################################################
//		Number Pattern 
// ################################################
// int readPositiveIntNumber()
void printNumberPattern(int number) {
	for (int i = 1; i <= number; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i;
		}
		cout << endl;
	}
}

// ################################################
//		Inverted Letter Pattern 
// ################################################
// int readPositiveIntNumber()
void printInvertedLetterPattern(char number) {
	for (char i = (number + 64); i >= 65; i--) {
		for (char j = 65; j <= i; j++) {
			cout << i;
		}
		cout << endl;
	}
}

// ################################################
//		Letter Pattern 
// ################################################
// int readPositiveIntNumber()
void printLetterPattern(char number) {
	for (char i = 65; i <= (number + 64); i++) {
		for (char j = 65; j <= i; j++) {
			cout << i;
		}
		cout << endl;
	}
}

// ################################################
//		Print Words from AAA to ZZZ
// ################################################
void printAAAtoZZZ() {
	string word = "";
	for (char i = 65; i <= 90; i++) {
		for (char j = 65; j <= 90; j++) {
			for (char k = 65; k <= 90; k++) {
				word += i;
				word += j;
				word += k;
				cout << word << endl;
				word = "";
			}
		}
	}
}

// ################################################
//		Guess a 3 Letter Password
// ################################################
bool guessPassword(string password) {
	string guessPassword = "";
	int trial = 0;

	for (char i = 65; i <= 90; i++) {
		for (char j = 65; j <= 90; j++) {
			for (char k = 65; k <= 90; k++) {
				trial += 1;

				guessPassword += i;
				guessPassword += j;
				guessPassword += k;
				cout << "Trail [" << trial << "]: " << guessPassword << endl;

				if (password == guessPassword) {
					cout << "\nPassword is " << guessPassword << endl;
					cout << "Found after " << trial << " trial(s)" << endl;
					return true;
				}
					
				guessPassword = "";
			}
		}
	}
	return false;
}

// ################################################
//		Encrypt/Decrypt Text
// ################################################
string readString() {
	string str = "";

	cout << "Enter a string: ";
	cin >> str;
	
	return str;
}
string encrypt(string str, short key) {
	string encryptedString = "";

	for (int i = 0; i < str.length(); i++) {
		encryptedString += char((int) str[i] + key);
	}

	return encryptedString;
}
string decrypt(string str, short key) {
	string decryptedString = "";

	for (int i = 0; i < str.length(); i++) {
		decryptedString += char((int) str[i] - key);
	}

	return decryptedString;
}

// ################################################
//		Random Number from 1 to 10
// ################################################
// In the main function write this
// srand((unsigned)time(NULL)); // Seeds the random number generator in C++, called only once
int randomNumber(int from, int to) {
	return rand() % (to - from + 1) + from;
}

// ################################################################################################
//		Random Small Letter, Capital Letter, Special Char and Digit in Order
// ################################################################################################
// int randomNumber(int from, int to)
enum enCharType {smallLetter = 1, capitalLetter, specialChar, digit};
char getRandomChar(enCharType charType) {
	switch (charType) {
	case enCharType::smallLetter:
		return char(randomNumber(97, 122));
	case enCharType::capitalLetter:
		return char(randomNumber(65, 90));
	case enCharType::specialChar:
		return char(randomNumber(33, 47));
	case enCharType::digit:
		return char(randomNumber(48, 57));
	}
}

// ################################################
//		Generate Keys
// ################################################
// int readPositiveIntNumber()
// int randomNumber(int from, int to)
// enum enCharType {smallLetter = 1, capitalLetter, specialChar, digit};
// char getRandomChar(enCharType charType)
string generateWord(enCharType charType, int length) {
	string word = "";
	for (int i = 1; i <= length; i++) {
		word += getRandomChar(charType);
	}
	return word;
}
string generateKey() {
	string key = "";

	for (int i = 1; i <= 4; i++) {
		key += generateWord(enCharType::capitalLetter, 4);
		if (i != 4)
			key += '-';
	}

	return key;
}
void printNumberOfKeys(int number) {
	for (int i = 1; i <= number; i++) {
		cout << "Key[" << i << "]: " << generateKey() << endl;
	}
}

// ################################################
//		Repeated Elements Count in Array
// ################################################
// int readIntNumberWithMsg(string msg)
// void printArray(int array[], int lengthOfArray)
int countCheckSpecificNumber(int checkNumber, int array[100], int lengthOfArray) {
	int count = 0;
	for (int i = 0; i < lengthOfArray; i++) {
		if (checkNumber == array[i])
			count += 1;
	}
	return count;
}

// #######################################################
//		Fill Array with random numbers from 1 to 100
//		Fill Array with random numbers from -100 to 100
// #######################################################
// int readIntNumberWithMsg(string msg)
// int randomNumber(int from, int to)
// void printArray(int array[], int lengthOfArray)
void fillRandomNumbersToArray(int array[100], int length) {
	for (int i = 0; i < length; i++) {
		array[i] = randomNumber(1, 100);
	}
}
void fillRandomNumbersToArrayFromMin100ToPlus100(int array[100], int length) {
	for (int i = 0; i < length; i++) {
		array[i] = randomNumber(-100, 100);
	}
}

// ################################################
//		Max Number of Random Array
// ################################################
// int readIntNumberWithMsg(string msg)
// void fillRandomNumbersToArray(int array[100], int length)
// void printArray(int array[], int lengthOfArray)
int maxNumberInAnArray(int array[100], int length) {
	int max = array[0];
	for (int i = 1; i < length; i++) {
		if (array[i] > max)
			max = array[i];
	}
	return max;
}

// ################################################
//		Min Number of Random Array
// ################################################
// int readIntNumberWithMsg(string msg)
// void fillRandomNumbersToArray(int array[100], int length)
// void printArray(int array[], int lengthOfArray)
int minNumberInAnArray(int array[100], int length) {
	int min = array[0];
	for (int i = 1; i < length; i++) {
		if (array[i] < min)
			min = array[i];
	}
	return min;
}

// ################################################
//		Sum Numbers of Random Array
// ################################################
// int readIntNumberWithMsg(string msg)
// void fillRandomNumbersToArray(int array[100], int length)
// void printArray(int array[], int lengthOfArray)
int sumNumbersInAnArray(int array[100], int length) {
	int sum = 0;
	for (int i = 0; i < length; i++) {
		sum += array[i];
	}
	return sum;
}

// ################################################
//		Average Numbers of Random Array
// ################################################
// int readIntNumberWithMsg(string msg)
// void fillRandomNumbersToArray(int array[100], int length)
// int sumNumbersInAnArray(int array[100], int length)
// void printArray(int array[], int lengthOfArray)
float averageOfNumberInAnArray(int array[100], int length) {
	return (float)sumNumbersInAnArray(array, length) / length;
}

// ################################################
//		Copy Array
// ################################################
// int readIntNumberWithMsg(string msg)
// void fillRandomNumbersToArray(int array[100], int length)
// void printArray(int array[], int lengthOfArray)
void copyArray(int array[100], int array2[100], int length) {
	for (int i = 0; i < length; i++) {
		array2[i] = array[i];
	}
}

// ################################################
//		Copy Only Prime Numbers
// ################################################
// int readIntNumberWithMsg(string msg)
// void fillRandomNumbersToArray(int array[100], int length)
// void printArray(int array[], int lengthOfArray)
// enum enPrimeOrNot { notPirme = 0, prime = 1 };
// enPrimeOrNot isPrime(int number)
void copyPrimeNumbers(int array[100], int array2[100], int length, int& length2) {
	for (int i = 0; i < length; i++) {
		if (isPrime(array[i]) == enPrimeOrNot::prime) {
			array2[length2] = array[i];
			length2++;
		}
	}
}

// ################################################
//		Sum of 2 Arrays to a Third One
// ################################################
// int readIntNumberWithMsg(string msg)
// void fillRandomNumbersToArray(int array[100], int length)
// void printArray(int array[], int lengthOfArray)
void sumOfTwoArraysInThirdOne(int array[100], int array2[100], int array3[100], int length) {
	for (int i = 0; i < length; i++) {
		array3[i] = array[i] + array2[i];
	}
}

// ################################################
//		Shuffle Ordered Array
// ################################################
// int readIntNumberWithMsg(string msg)
// int randomNumber(int from, int to)
void fillOrderdArray(int array[100], int length) {
	for (int i = 0; i < length; i++) {
		array[i] = i + 1;
	}
}
void shuffleArray(int array[100], int length) {
	int temp, first, second;
	for (int i = 0; i < length; i++){
		first = randomNumber(0, length - 1);
		second = randomNumber(0, length - 1);

		temp = array[first];
		array[first] = array[second];
		array[second] = temp;
	}
}

 // ################################################
//		Copy Array in Reverse Order
// ################################################

void copyArrayInReverseOrder(int array[100], int array2[100], int length) {

	// for (int i = length - 1, j = 0; i >= 0; i--, j++) {
	// 	array2[j] = array[i];
	// }

	for (int i = 0; i < length; i++) {
		array2[i] = array[length - 1 - i];
	}
}

// ################################################
//		Fill Array With Keys
// ################################################
// int readIntNumberWithMsg(string msg)
// int randomNumber(int from, int to)
// enum enCharType {smallLetter = 1, capitalLetter, specialChar, digit};
// char getRandomChar(enCharType charType)
// string generateKey()
void fillArrayWithKeys(string array[100], int length) {
	for (int i = 0; i < length; i++) 
		array[i] = generateKey();
}

// ################################################
//		Return Number index in Array
// ################################################
int findIndex(int array[100], int length, int searchNumber) {
	for (int i = 0; i < length; i++) {
		if (searchNumber == array[i])
			return i;
	}
	return -1;
}

// ################################################
//		Check Number In Array 
// ################################################
// int findIndex(int array[100], int length, int searchNumber)
bool isElementInArray(int array[100], int length, int searchNumber) {
	return (findIndex(array, length, searchNumber) != -1);
}

// ################################################
//		Add Array Element Simi Dynamic
// ################################################
// int readIntNumberWithMsg(string msg)
int dynamicArray(int array[100], int& length) {
	int number, check;
	length = 0;

	do {
		number = readIntNumberWithMsg("\nEnter a number: ");
		array[length] = number;
		length++;

		check = readIntNumberWithMsg("Add more number (0)No (1)yes: ");
	} while (check == 1);

	return length;
}

// ################################################################
//		Copy Odd Numbers
// ################################################################
void copyOddNumbers(int array[100], int array2[100], int length, int& length2) {
	for (int i = 0; i < length; i++) {
		if (array[i] % 2 != 0) {
			array2[length2] = array[i];
			length2 += 1;
		}
	}
}

// ################################################################
//		Copy Distinct Numbers
// ################################################################
void copyDistinctNumbers(int array[100], int array2[100], int length, int& length2) {
	for (int i = 0; i < length; i++) {
		if (findIndex(array2, length2, array[i]) == -1) {
			array2[length2] = array[i];
			length2++;
		}
	}
}

// ################################################################
//		Is Palindrome Array
// ################################################################
bool isPalindromeArray(int array[100], int length) {
	for (int i = 0; i < length; i++) {
		if (array[i] != array[length - 1 - i])
			return false;
	}
	return true;
}

// ################################################################
//		Count Odd Numbers in Array
// ################################################################
int countOddNumberInArray(int array[100], int length) {
	int countOddNumbers = 0;
	for (int i = 0; i < length; i++) {
		if (array[i] % 2 != 0)
			countOddNumbers++;
	}
	return countOddNumbers;
}

// ################################################################
//		Count Even Numbers in Array
// ################################################################
int countEvenNumberInArray(int array[100], int length) {
	int countEvenNumbers = 0;
	for (int i = 0; i < length; i++) {
		if (array[i] % 2 == 0)
			countEvenNumbers++;
	}
	return countEvenNumbers;
}

// ################################################################
//		Count Positive Numbers in Array
// ################################################################
// fillRandomNumbersToArrayFromMin100ToPlus100
int countPositiveNumberInArray(int array[100], int length) {
	int countPositiveNumber = 0;
	for (int i = 0; i < length; i++) {
		if (array[i] > 0)
			countPositiveNumber++;
	}
	return countPositiveNumber;
}

// ################################################################
//		Count Negative Numbers in Array
// ################################################################
// fillRandomNumbersToArrayFromMin100ToPlus100
int countNegativeNumberInArray(int array[100], int length) {
	int countNegativeNumber = 0;
	for (int i = 0; i < length; i++) {
		if (array[i] < 0)
			countNegativeNumber++;
	}
	return countNegativeNumber;
}

// ################################################################
//		myABS
// ################################################################
int myABS(int number) {
	if (number >= 0)
		return number;
	return number * -1;
}

// ################################################################
//		myRound
// ################################################################
float getFractionPart(float number) {
	return number - int(number);
}
int myRound(float number) {
	int intNumber = int(number);
	float fracNumber = getFractionPart(number);

	if (abs(fracNumber) >= 0.5) { // myABS return int not a float so it will give us wrong answers
		if (number > 0)
			return ++intNumber;
		else
			return --intNumber;
	}
	else {
		return intNumber;
	}

	/*int remainder = number * 10;
	remainder = remainder % 10;

	if (remainder > 0) {
		if (remainder >= 5)
			return int(number + 1);
		return int(number);
	}
	else {
		if (remainder <= -5)
			return int(number - 1);
		return int(number);
	}*/
}

// ################################################################
//		myFloor
// ################################################################
int myFloor(float number) {
	if (getFractionPart(number) == 0)
		return (int)number;
	else
		if (number > 0)
			return (int)number;
		else
			return (int)number - 1;
}

// ################################################################
//		myCeil
// ################################################################
int myCeil(float number) {
	if (getFractionPart(number) == 0)
		return (int)number;
	else
		if (number > 0)
			return (int)number + 1;
		else
			return (int)number;
}

// ################################################################
//		mySqrt
// ################################################################
float mySqrt(int number) {
	return pow(number, 0.5);
}


int main() {
}