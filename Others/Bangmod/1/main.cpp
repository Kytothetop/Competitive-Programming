#include <bits/stdc++.h>

using namespace std;
double cal1(double units)
{
	int n = 7;
    double charges[n] = { 2.3488, 2.9882, 3.2405, 3.6237,3.7171,4.2218,4.4217 };
    double range[n] = { 15, 10, 10,65,50,250, INT_MAX };
    double bill = 0;

    for (int i = 0; i < n; i++) {
        if (units <= range[i]) {
            bill += charges[i] * units;
            break;
        }
        else {
            bill += charges[i] * range[i];
            units -= range[i];
        }
    }
    return bill;
}
double cal2(double units)
{
	int n = 3;
    double charges[n] = { 3.2484, 4.2218, 4.4217 };
    double range[n] = { 150,250, INT_MAX };
    double bill = 0;

    for (int i = 0; i < n; i++) {
        if (units <= range[i]) {
            bill += charges[i] * units;
            break;
        }
        else {
            bill += charges[i] * range[i];
            units -= range[i];
        }
    }
    return bill;
}
double pad(double bill)
{
	double re = bill - floor(bill);
	double nbill = floor(bill);


	if(0 <= re and re <= 0.12)
		nbill += 0;
	else if(0.13 <= re and re <= 0.37)
		nbill += 0.25;
	else if(0.38 <= re and re <= 0.62)
		nbill += 0.50;
	else if(0.63 <= re and re <= 0.87)
		nbill += 0.75;
	else
		nbill += 1;

	return nbill;

}


int main()
{
	cout << fixed << setprecision(2);

	int tpe;
	double n, bill; // n = unit
	cin >> tpe;
	cin >> n;
	switch (tpe)
	{
	case 1:
		bill = cal1(n) + 20.48*n/100;
		bill += 8.19;
		bill *= 1.07;
		cout << pad(bill);
		break;
	case 2:
		bill = cal2(n) + 20.48*n/100;
		bill += 24.62;
		bill *= 1.07;
		cout << pad(bill);
		break;
	case 3:
		double cost;
		cin >> cost;
		cout << pad(cost*n);
		break;

	default:
		cout << "error";
		break;
	}
}
