#include <iostream>

using namespace std;

// Max Heap
void maxHeapify(int arr[], int i, int arrSize);
void BuildMaxHeap(int arr[], int arrSize);
void heapSortAscending(int arr[], int arrSize);

// Min Heap
void minHeapify(int arr[], int i, int arrSize);
void BuildMinHeap(int arr[], int arrSize);
void heapSortDescending(int arr[], int arrSize);

// Print Functions
void printHeap(int arr[], int arrSize);
int printHead(int arr[], int arrSize);
////int printMinHead(int arr[], int arrSize);


int parent(int i);

void insertMax(int arr[], int val, int& arrSize); // ref because we are changing size here
//void insertMin


/****************************************~MAIN~**************************************************/

int main() {

	int myArr[] = { 5, 3, 10, 1 };//= {4,6,3,2,9};//= { 9, 4, 2, 7, 1, 3, 8 };
	// = { 10, 20, 30, 40, 50, 60, 70 };
	int arrSize = sizeof(myArr) / sizeof(int); // /sizeof(int OR myArr[0])
	cout << arrSize << endl;

	char userInput;

	cout << "Would you like to use ascending order?" << endl;
	cout << "[Y - Ascending | N - Descending]" << endl;
	cin >> userInput;
	//cin.ignore();

	if (userInput == 'Y' || userInput == 'y') {
		printHeap(myArr, arrSize);

		heapSortAscending(myArr, arrSize);

		printHeap(myArr, arrSize);

		cout << "\n\nMax-Heap Root: " << printHead(myArr, arrSize);

	}
	else {
		printHeap(myArr, arrSize);

		heapSortDescending(myArr, arrSize);

		printHeap(myArr, arrSize);

		cout << "\n\nMin-Heap Root: " << printHead(myArr, arrSize);

	}

	
	//printHeap(myArr, arrSize);
	//cout << "\n" << arrSize << endl;

	insertMax(myArr, 20, arrSize); // fix this

	//cout << arrSize << endl;
	//printHeap(myArr, arrSize);


	return 0;
}


/***************************************** ~END MAIN~ *************************************************/

/****************************************** PRINT FUNCTIONS ************************************/
void printHeap(int arr[], int arrSize) {

	cout << "\n";

	for (int i = 0; i < arrSize; i++) {

		cout << arr[i] << " ";
	}


}

int printHead(int arr[], int arrSize) {

	return arr[arrSize - 1];

}

/****************************************** END PRINT FUNCTIONS ************************************/

void maxHeapify(int arr[], int i, int arrSize) { // i = index
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	int largestNode = i;

	if (left < arrSize && arr[left] > arr[largestNode]) {
		largestNode = left;

	}

	if (right < arrSize && arr[right] > arr[largestNode]) {
		largestNode = right;

	}

	if (largestNode != i) {
		int temp;
		temp = arr[i];
		arr[i] = arr[largestNode];
		arr[largestNode] = temp;
		maxHeapify(arr, largestNode, arrSize);
	}

}
void BuildMaxHeap(int arr[], int arrSize) {
	int lastNonLeaf;
	lastNonLeaf = (arrSize / 2) - 1;
	for (int i = lastNonLeaf; i >= 0; i--) {
		maxHeapify(arr, i, arrSize);
	}
}

void heapSortAscending(int arr[], int arrSize) {

	BuildMaxHeap(arr, arrSize);

	for (int i = arrSize - 1; i >= 0; i--) {
		int temp;
		temp = arr[i];
		arr[i] = arr[0];
		arr[0] = temp;
		maxHeapify(arr, 0, i);

	}

}

/************************************  ENDING OF ASCENDING *****************************/
/************************************  BEGINNING OF DESCENDING *****************************/

void minHeapify(int arr[], int i, int arrSize) {
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	int smallestNode = i;

	if (left < arrSize && arr[left] < arr[smallestNode]) {
		smallestNode = left;

	}

	if (right < arrSize && arr[right] < arr[smallestNode]) {
		smallestNode = right;

	}

	if (smallestNode != i) {
		int temp;
		temp = arr[i];
		arr[i] = arr[smallestNode];
		arr[smallestNode] = temp;
		minHeapify(arr, smallestNode, arrSize);
	}

}
void BuildMinHeap(int arr[], int arrSize) {
	int lastNonLeaf;
	//lastNonLeaf = (arrSize / 2) - 1;

	for (int i = (arrSize / 2) - 1; i >= 0; i--) {
		minHeapify(arr, i, arrSize);
	}
}

void heapSortDescending(int arr[], int arrSize) {

	BuildMinHeap(arr, arrSize);

	for (int i = arrSize - 1; i >= 0; i--) {
		int temp;
		temp = arr[i];
		arr[i] = arr[0];
		arr[0] = temp;
		minHeapify(arr, 0, i);

	}

}


/************************************  ENDING OF DESCENDING ****************************/


int parent(int i) {
	int p = (i - 1) / 2;
	return p;
}

void insertMax(int arr[], int val, int& arrSize) {
	arrSize = arrSize + 1;

	arr[arrSize - 1] = val;


	maxHeapify(arr, arrSize - 1, arrSize);

}
