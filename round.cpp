//
//  main.cpp
//  Kris
//
//  Created by Нина Альхимович on 9.09.22.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    double number, result = 0.0;
    int digit, temp, last_digit;
    
    cout << "Введите число: \n";
    cin >> number;
    
    cout << "Введите разряд, до которого нужно округлить число: \n";
    cin >> digit;
    
    temp = number * pow(10, digit+1);
    last_digit = temp % 10;
    if(last_digit >= 5 and last_digit <= 9)
        number += 1 * pow(10, (-1) * digit);
       
    result += (int)number;
    for(int i=1; i<digit+1; i++)
        result += (((int)(number * pow(10, i))) % 10) * pow(10, (-1) * i);

    cout << endl << "Результат: " << result << endl << endl;
}
