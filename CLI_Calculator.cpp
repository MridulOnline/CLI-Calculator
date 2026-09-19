#include <iostream>
using namespace std;
int main()
{
  bool invalid_op=true, calc=true;
  double num1,num2,ans;
  char op, ct;
  while (calc)
  {
    cout << "**********CLI CALCULATOR**********" << '\n';
    cout << "Enter the first number: ";
    cin >> num1;
    while (invalid_op)
    {
      cout << "Enter the operation you want to perform (+, -, *, /): ";
      cin >> op;
      switch (op)
        {
          case '+':
          cout << "Enter the second number: ";
          cin >> num2;
          cout << "Your answer is: " << num1+num2;
          invalid_op=false;
          break;

          case '-':
          cout << "Enter the second number: ";
          cin >> num2;
          cout << "Your answer is: " << num1-num2;
          invalid_op=false;
          break;

          case '*':
          cout << "Enter the second number: ";
          cin >> num2;
          cout << "Your answer is: " << num1*num2;
          invalid_op=false;
          break;

          case '/':
          cout << "Enter the second number: ";
          cin >> num2;
          if (num2==0)
          {
            cout << "Division with 0 is not possible! Try again." << '\n';
            break;
          }
          cout << "Your answer is: " << (double)num1/num2;
          invalid_op=false;
          break;
  
          default:
          cout << "Invalid operator! Try again." << '\n';
        }
    }
    invalid_op=true;
    while (calc)
    {
      cout << '\n' << "Continue? (Y/N): ";
      cin >> ct;
      if (ct=='Y' || ct=='y')
        break;
      else if (ct=='N' || ct=='n')
        calc=false;
      else 
      {
        cout << "Invalid input! Press Y or N." << '\n';
        continue;
      }
    }
  }
  return 0;
}