// Answer 1: The call is not ambiguous because the argument scores
// is an int array, so the int version is selected
#include <iostream>
using namespace std;
int sumArray(int arr[], int size = 5);
double sumArray(double arr[], int size = 5);
int countAbove(int arr[], int size, int limit = 50);
int countAbove(double arr[], int size, double limit = 50.0);
void printArray(int arr[], int size, char sep = ' ');
void printArray(double arr[], int size, char sep = ' ');
int main() {
    int scores[5] = { 55, 40, 90, 65, 30 };
    double prices[5] = { 120.5, 45.0, 60.25, 30.0, 99.75 };
    cout << "Scores: ";
    printArray(scores, 5);
    cout << "Prices: ";
    printArray(prices, 5, '|');
    cout << "Sum of scores: " << sumArray(scores) << endl;
    cout << "Sum of first 3 prices: " << sumArray(prices, 3) << endl;
    cout << "Scores above 50: " << countAbove(scores, 5) << endl;
    cout << "Prices above 100: " << countAbove(prices, 5, 100.0) << endl;
    int n;
    int marks[20];
    cout << "How many students? ";
    cin >> n;
    cout << "Enter " << n << " marks: ";
    for (int i = 0; i < n; i++)
        cin >> marks[i];
    cout << "Marks: ";
    printArray(marks, n, ',');
    cout << "Sum: " << sumArray(marks, n) << endl;
    cout << "Above 50: " << countAbove(marks, n) << endl;
    cout << "Above 80: " << countAbove(marks, n, 80) << endl;
    return 0;}
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;}
double sumArray(double arr[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;}
int countAbove(int arr[], int size, int limit) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > limit)
            count++;}
    return count;}
int countAbove(double arr[], int size, double limit) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > limit)
            count++;}
    return count;}
void printArray(int arr[], int size, char sep) {
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1)
            cout << sep;}
    cout << endl;}
void printArray(double arr[], int size, char sep) {
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1)
            cout << sep;}
    cout << endl;
}