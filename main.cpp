//Max Landis
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
  
  ifstream inData;
  
  string firstName, lastName;
  string filename;
  double baseSalary, comissionPercent, totalSales, employeeExpenses, comission, total;

  cout << "Which filename would you like to open?" << endl;
  cin >> filename >> endl;
  inData.open(filename);

  cout << fixed << setprecision(2);

  inData >> firstName >> lastName >> baseSalary >> comissionPercent >> totalSales >> employeeExpenses;

  comission = (totalSales*comissionPercent)/100;

  total = baseSalary+comission+employeeExpenses;

  cout << "Payroll data for" << " " << firstName << " " << lastName << endl;
  cout << " " << endl;
  cout << "Base Salary: " << setw(12) << baseSalary << endl;
  cout << "Comission: " << setw(14) << comission << endl;
  cout << "Expenses: " << setw(15) << employeeExpenses << endl;
  cout << setw(25) << "--------" << endl;
  cout << "Total: " << setw(18) << total << endl;

}
