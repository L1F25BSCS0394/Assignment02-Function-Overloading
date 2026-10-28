#include <iostream>
#include <fstream>
using namespace std;
double fare(double km, double ratePerKm = 40.0);
double fare(double km, double ratePerKm, bool peakHour);
double fare(double km, char vehicle);
double fare(double km, char vehicle, int promoPercent);
int main() {
    cout << "fare(10) = " << fare(10) << endl;
    cout << "fare(10, 30.0) = " << fare(10, 30.0) << endl;
    cout << "fare(10, 30.0, true) = " << fare(10, 30.0, true) << endl;
    cout << "fare(8, 'B') = " << fare(8, 'B') << endl;
    cout << "fare(8, 'C') = " << fare(8, 'C') << endl;
    cout << "fare(8, 'C', 10) = " << fare(8, 'C', 10) << endl;
    int n;
    cout << "How many rides? ";
    cin >> n;
    ofstream outFile("rides.txt");
    double total = 0;
    for (int i = 1; i <= n; i++) {
        char vehicle;
        double km;
        int promo;
        cout << "Ride " << i << " vehicle (B/R/C), km, promo %: ";
        cin >> vehicle >> km >> promo;
        double amount;
        if (promo == 0)
            amount = fare(km, vehicle);
        else
            amount = fare(km, vehicle, promo);
        outFile << "Ride " << i << " (" << vehicle << "), "
            << km << " km -> Rs. " << amount << endl;
        total += amount;}
    outFile << "Total collected: Rs. " << total << endl;
    outFile.close();
    return 0;}
double fare(double km, double ratePerKm) {
    return 100 + km * ratePerKm;}
double fare(double km, double ratePerKm, bool peakHour) {
    double amount = fare(km, ratePerKm);
    if (peakHour)
        amount *= 1.20;
    return amount;}
double fare(double km, char vehicle) {
    if (vehicle == 'B')
        return fare(km, 25.0);
    else if (vehicle == 'R')
        return fare(km, 35.0);
    else if (vehicle == 'C')
        return fare(km, 50.0);
    else
        return 0;
}
double fare(double km, char vehicle, int promoPercent) {
    double amount = fare(km, vehicle);
    return amount * (100 - promoPercent) / 100.0;
}