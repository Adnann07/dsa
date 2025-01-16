
//Selection Sort using Binary Search
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the index of the smallest element using binary search
int binarySearchMin(vector<int>& arr, int start, int end) {
    int minIndex = start;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = binarySearchMin(arr, i, n - 1);
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    vector<int> arr = {25, 24, 22, 21, 20, 13};
    selectionSort(arr);
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}



//Quick Sort and Merge Sort


#include <iostream>
#include <vector>
using namespace std;

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        int pi = i + 1;

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    vector<int> arr = {25, 29, 23, 22, 21, 20, 19, 18};
    quickSort(arr, 0, arr.size() - 1);
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}


#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> leftArr(n1), rightArr(n2);
    for (int i = 0; i < n1; i++) leftArr[i] = arr[left + i];
    for (int i = 0; i < n2; i++) rightArr[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k++] = leftArr[i++];
        } else {
            arr[k++] = rightArr[j++];
        }
    }
    while (i < n1) arr[k++] = leftArr[i++];
    while (j < n2) arr[k++] = rightArr[j++];
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    vector<int> arr = {25, 29, 23, 22, 21, 20, 19, 18};
    mergeSort(arr, 0, arr.size() - 1);
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}




//Reorder a Linked List


#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void reorderList(Node*& head) {
    vector<int> values;
    Node* current = head;

    // Step 1: Collect all values in a vector
    while (current) {
        values.push_back(current->data);
        current = current->next;
    }

    // Step 2: Sort the vector
    sort(values.begin(), values.end());

    // Step 3: Update the linked list with sorted values
    current = head;
    for (int val : values) {
        current->data = val;
        current = current->next;
    }
}

int main() {
    // Create linked list: 2 -> 5 -> 6 -> 7 -> 1 -> 2 -> 9
    Node* head = new Node(2);
    head->next = new Node(5);
    head->next->next = new Node(6);
    head->next->next->next = new Node(7);
    head->next->next->next->next = new Node(1);
    head->next->next->next->next->next = new Node(2);
    head->next->next->next->next->next->next = new Node(9);

    cout << "Original List: ";
    printList(head);

    reorderList(head);

    cout << "Sorted List: ";
    printList(head);

    return 0;
}


