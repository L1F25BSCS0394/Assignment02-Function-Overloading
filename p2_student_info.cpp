#include <iostream>
#include <string>
using namespace std;
void printInfo(string name) {
    cout << "Name: " << name << endl;}
void printInfo(string name, int rollNo) {
    cout << "Name: " << name << " | Roll No: " << rollNo << endl;}
void printInfo(int rollNo, string name) {
    cout << "Roll No: " << rollNo << " | Name: " << name << endl;}
void printInfo(string name, double cgpa) {
    cout << "Name: " << name << " | CGPA: " << cgpa << endl;}
void printInfo(char grade) {
    cout << "Grade: " << grade << endl;}
int main() {
    printInfo("Ali");
    printInfo("Ali", 12);
    printInfo(12, "Ali");
    printInfo("Ali", 3.5);
    printInfo('A');
    printInfo("Sara", 'B');
    return 0;
}