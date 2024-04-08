// PasechnikovaPR33konsole.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <Windows.h>
#include <iomanip>
#include "cmath"
#include <stdlib.h>
#include "math.h"
#include "vector"
#include <algorithm> 
#include <cstdio>
#include <ctime>
#include <cstdlib>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
//#include <regex>
//#include <sstream>

using namespace std;

//4.1
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    int num;
//    while (true) {
//        cout << endl;
//        cout << "Введите целое число = ";
//        cin >> num;
//        if (num > 1000 || num < 1) {
//            cout << "Целое число должно быть от 1 до 1000" << endl;
//        }
//        else break;
//    }
//    string str;
//    while (true) {
//        cout << endl;
//        cout << "Введите строку = ";
//        cin >> str;
//        if (str.size() > 100|| str.size() < 1) {
//            cout << "Строка должна содержать от 1 до 100 символов" << endl;
//        }
//        else break;
//    }
//    cout << str<<" "<< num << "\n";
//
//}

//4.2
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    int a, b;
//    double c;
//    while (true) {
//        cout << endl;
//        cout << "Целое число A = ";
//        cin >> a;
//        if (a > 1000 || a < 1) {
//            cout << "Целое число A должно быть от 1 до 1000" << endl;
//        }
//        else break;
//    }
//    while (true) {
//        cout << endl;
//        cout << "Целое число B = ";
//        cin >> b;
//        if (b > 1000 || b < 1) {
//            cout << "Целое число B должно быть от 1 до 1000" << endl;
//        }
//        else break;
//    }
//    while (true) {
//        cout << endl;
//        cout << "Число с плавающей точкой C = ";
//        cin >> c;
//        if (c > 1000.0 || c < 1.0) {
//            cout << "Целое число C должно быть от 1.0 до 1000.0" << endl;
//        }
//        else break;
//    }
//
//    cout << endl;
//    cout << "Целое число A = " << a << ", целое число B = " << b << ", число с плавающей точкой C = " << c << "\n";
//
//}


//5
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int num;
//    cout << "Введите целое число = ";
//    cin >> num;
//    cout << "Целое число в шеснадцатиричной = " << hex << num << ", целое число в восьмиричной = " << oct << num ;
//
//}


//6
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    double d, a;
//    cout << "Введите длину и ширину = ";
//    cin >> d >> a;
//    cout << "Площадь прямоугольника = " << fixed << setprecision(2) << d*a ;
//}


//8.1
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int d, a;
//    cout << "Введите два целых числа = ";
//    cin >> d >> a;
//    cout << "Сумма чисел = " << d + a << ", разность чисел = " << d - a;
//}

//8.2
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int d, a, c;
//    while (true) {
//        cout << endl;
//        cout << "Введите два целых числа = ";
//        cin >> d >> a;
//        cin.tie(NULL);
//        if (abs(d) > pow(10, 9) || abs(a) > pow(10, 9)) {
//            cout << "Целое числа должны быть меньше 10^9" << endl;
//        }
//        else break;
//    }
//    c = d;
//    d = a;
//    a = c;
//    cout << d << " " << a << endl;
//}


//9.1
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    double a, b;
//    cout << "Число с плавающей точкой A = ";
//    cin >> a;
//    while (true) {
//        cout << endl;
//        cout << "Число с плавающей точкой B = ";
//        cin >> b;
//        if (b == 0) {
//            cout << "Число с плавающей точкой B должно быть не равно 0" << endl;
//        }
//        else break;
//    }
//    cout << endl;
//    cout << "Результат деления A на B = " << fixed << setprecision(2) << a / b << endl;
//
//}

//9.2
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    double f;
//    while (true) {
//        cout << endl;
//        cout << "Число с плавающей точкой = ";
//        cin >> f;
//        if (abs(f) > pow(10, 9)) {
//            cout << "Число с плавающей точкой должно быть меньше 10^9" << endl;
//        }
//        else break;
//    }
//    cout << endl;
//    cout << "Число в обычном формате = " << fixed << setprecision(2) << f << "\nЧисло в научном формате = " << scientific << f << endl;
//
//}


//10
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    double a, b, c;
//    cout << "Введите три числа: " << endl;
//    cin >> a >> b >> c;
//    cout << "Сумма чисел = " << a+b+c<< endl;
//
//}


//11.1
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    double a, b;
//    cout << "Введите два числа с плавающей точкой: " << endl;
//    cin >> a >> b;
//    cout << "Среднее арифметическое введенных чисел = " << fixed << setprecision(2) << (a+b)/2<< endl;
//
//}

//11.2
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    double a, b, c;
//    cout << "Введите три числа с плавающей точкой: " << endl;
//    cin >> a >> b >> c;
//    cout << "Сумма введенных чисел = " << fixed << setprecision(2) << a+b+c<< endl;
//
//}

//11.3
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    double a, b;
//    cout << "Введите два числа с плавающей точкой: " << endl;
//    cin >> a >> b;
//    cout << "Квадрат длины гипотенузы = " << fixed << setprecision(2) << pow(a, 2)+pow(b, 2) << endl;
//
//}

//11.4
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    double a, b, c;
//    cout << "Введите три числа с плавающей точкой: " << endl;
//    cin >> a >> b >> c;
//    double p = (a + b + c)/2;
//    cout << "Квадрат площади треугольника = " << fixed << setprecision(2) << p*(p-a)*(p-b)*(p-c) << endl;
//
//}

//11.5
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    double r;
//    cout << "Введите радиус окружности: " << endl;
//    cin >> r;
//    cout << "Длина окружности = " << fixed << setprecision(2) << 2*r*3.1415 << "\nПлощадь круга = " << fixed << setprecision(2) << 3.1415*pow(r, 2) << endl;
//
//}


//12.1
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a;
//    cout << "Введите число: " << endl;
//    cin >> a;
//    if (a < 0) cout << "Число отрицательное" << endl;
//    else cout << "Число положительное" << endl;
//}

//12.2
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a;
//    cout << "Введите число: " << endl;
//    cin >> a;
//    if (a % 2 == 0) cout << "Число четное" << endl;
//    else cout << "Число нечетное"<< a*2 << endl;
//}

//12.3
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a;
//    cout << "Введите год: " << endl;
//    cin >> a;
//    if (a % 400 == 0||(a % 4 == 0 && a % 100 != 0)) cout << "Это високосный год" << endl;
//    else cout << "Это не високосный год" << endl;
//}


//13
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a;
//    double b;
//    while (true) {
//        cout << endl;
//        cout << "Введите целое число и число с плавающей точкой: " << endl;
//        cin >> a >> b;
//        if (abs(a) > pow(10, 9)||b<0||b>=1) {
//            cout << "Число должно быть меньше 10^9, а число с плавающей точкой больше 0 и меньше или равно 1" << endl;
//        }
//        else break;
//    }
//    cout << "Сумма в виде целого числа: " << (int)(a+b) << "\nСумма в виде числа с плавающей точкой: " << fixed << setprecision(2) << a+b << endl;
//}


//14
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a;
//    double b;
//    cout << "Введите целое число: " << endl;
//    cin >> a;
//    ++a;
//    cout << "Увеличение на один: " << a << endl;
//}


//15.1
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a, b, c;
//    cout << "Введите два целых числа: " << endl;
//    cin >> a >> b;
//    c = a * b;
//    cout << "Результат умножения: " << c << endl;
//}

//15.2
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int n, k, c;
//    cout << "Введите сколько друзей пригласил Вася: " << endl;
//    cin >> n;
//    cout << "Введите на сколько кусков Вася порезал торт: " << endl;
//    cin >> k;
//    cout << "Количество кусков, доставщееся каждому: " << k/(n+1) << endl;
//}


//16
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int n, z1,z2,z3,z4;
//    cout << "Введите число: ";
//    cin >> n;
//    z1 = n+1;
//    cout << "\nУвеличение на один: "<< z1 << endl;
//    z2 = ~n;
//    cout << "Побитовое унарное отрицание числа: " << z2 << endl;
//    z3 = n<<2;
//    cout << "Побитовый сдвиг числа влево на 2 разряда: " << z3 << endl;
//    z4 = n>>1;
//    cout << "Побитовый сдвиг числа вправо на 1 разряд: " << z4 << endl;
//}


//17.1
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a, b, max;
//    cout << "Введите два числа: ";
//    cin >> a >> b;
//    max = (a > b) ? a : b;
//    cout << "Максимальное: " << max << endl;
//}

//17.2
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a, b, c, min;
//    cout << "Введите три числа: ";
//    cin >> a >> b >> c;
//    min = (a < b) ? a : b;
//    min = (min < c) ? min : c;
//    cout << "Минимальное: " << min << endl;
//}

//17.3
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a;
//    string str;
//    cout << "Введите число: ";
//    cin >> a;
//    str = (a % 2 == 0) ? "Четное" : "Нечетное";
//    cout << str << endl;
//}

//17.4
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a;
//    string str;
//    cout << "Введите год: ";
//    cin >> a;
//    str = (a % 400 == 0 || (a % 4 == 0 && a % 100 != 0)) ? "Год високосный" : "Год не високосный";
//    cout << str << endl;
//}

//17.5
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a;
//    cout << "Введите целое число: ";
//    cin >> a;
//    a = (a % 2 == 0) ? a + 1 : a + 2;
//    cout << a;
//}


//18.1
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a;
//    cout << "Введите целое число: ";
//    cin >> a;
//    if (a % 2 == 0) cout << "Четное";
//    else cout << "Нечетное";
//}

//18.2
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a;
//    cout << "Введите возраст: ";
//    cin >> a;
//    if (a >= 18) cout << "Совершеннолетний";
//    else cout << "Несовершеннолетний";
//}

//18.3
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a, b;
//    cout << "Введите два целых числа: ";
//    cin >> a >> b;
//    if (a > b) cout << a;
//    else cout << b;
//}

//18.4
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a, b, c;
//    cout << "Введите три целых числа: ";
//    cin >> a >> b >> c;
//    if (a > b)
//        if (a > c) cout << a;
//        else cout << c;
//    else 
//        if (b > c) cout << b;
//        else cout << c;
//}

//18.5
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a, b;
//    cout << "Введите оценки Васи и Пети: ";
//    cin >> a >> b;
//    if (a > b) cout << "У Васи оценка выше";
//    else
//        if (b > a)cout << "У Пети оценка выше";
//        else cout << "Одинаковые оценки";
//}

//18.6
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a, b, c;
//    cout << "Введите три числа: ";
//    cin >> a >> b >> c;
//    if ((a > b && b > c) || (a < b && b < c)) cout << "Среднее по сортировке = " << b;
//    else if ((b > a && a > c) || (b < a && a < c)) cout << "Среднее по сортировке = " << a;
//    else cout << "Среднее по сортировке = " << c;
//}


//19.1
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a;
//    cout << "Введите номер дня недели: ";
//    cin >> a;
//    switch (a) {
//        case 1: cout << "Понедельник";
//            break;
//        case 2: cout << "Вторник";
//            break;
//        case 3: cout << "Среда";
//            break;
//        case 4: cout << "Четверг";
//            break;
//        case 5: cout << "Пятница";
//            break;
//        case 6: cout << "Суббота";
//            break;
//        case 7: cout << "Воскресенье";
//            break;
//        default: cout << "Ошибка: не верный номер дня";
//    }
//}

//19.2
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a, b;
//    char str;
//    cout << "Введите символ операции(+,-,*,/): ";
//    cin >> str;
//    cout << "Введите два числа: ";
//    cin >> a >> b;
//    switch (str) {
//    case '+': cout << a+b;
//        break;
//    case '-': cout << a-b;
//        break;
//    case '*': cout << a*b;
//        break;
//    case '/': if (b != 0) cout << a/b;
//            else cout << "Ошибка: на ноль делить нельзя";
//        break;
//    default: cout << "Ошибка: не верный символ операции";
//    }
//}

//19.3
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    string str;
//    cout << "Введите команду: ";
//    cin >> str;
//    if (str == "start")
//        cout << "Starting... ";
//    else if (str == "stop")
//        cout << "Stopping...";
//    else if (str == "status")
//        cout << "Showing status... ";
//    else if (str == "restart")
//        cout << "Reatarting... ";
//    else if (str == "help")
//        cout << "Showing help... ";
//    else cout << "Unknown command";
//    
//}


//20.1
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a, b;
//    cout << "Введите два целых числа: ";
//    cin >> a >> b;
//
//    string str = (a + b > 0 && (a + b) % 2 == 0) ? "Yes" : "No";
//    cout << str;
//}

//20.2
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a, b, c;
//    cout << "Введите три целых числа: ";
//    cin >> a >> b >> c;
//
//    string str = (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(c, 2) == pow(b, 2) + pow(a, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2)) ? "Yes" : "No";
//    cout << str;
//}


//for

//21.1
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a;
//    cout << "Введите целое число: ";
//    cin >> a;
//
//    for (int i = 0; i < a; i++) {
//        cout << i+1 << endl;
//    }
//}

//21.2
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a, sum = 0;
//    cout << "Введите целое число: ";
//    cin >> a;
//
//    for (int i = 1; i <= a; i++) {
//        sum += i;
//    }
//    cout << sum << endl;
//}

//21.3
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a, b;
//    cout << "Введите два целых числа: ";
//    cin >> a >> b;
//
//    for (int i = 1; i <= a; i++) {
//        if (i % b == 0)
//        cout << i << " ";
//    }
//}

//21.4
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a, max = 0, b;
//    cout << "Введите количество чисел: ";
//    cin >> a;
//    if (a > 0)
//    {
//        cout << "Введите 1 число: ";
//        cin >> max;
//    }
//
//    for (int i = 2; i <= a; i++) {
//        cout << "Введите " << i << " число: ";
//        cin >> b;
//        if (b > max)
//            max = b;
//    }
//    cout << max;
//}

//21.5
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a, min = 0, b;
//    cout << "Введите количество чисел: ";
//    cin >> a;
//    if (a > 0)
//    {
//        cout << "Введите 1 число: ";
//        cin >> min;
//    }
//
//    for (int i = 2; i <= a; i++) {
//        cout << "Введите " << i << " число: ";
//        cin >> b;
//        if (b < min)
//            min = b;
//    }
//    cout << min;
//}

//21.6
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a, min = 0, b, k;
//    cout << "Введите количество чисел: ";
//    cin >> a;
//    if (a > 0)
//    {
//        cout << "Введите 1 число: ";
//        cin >> min;
//        k = 1;
//    }
//
//    for (int i = 2; i <= a; i++) {
//        cout << "Введите " << i << " число: ";
//        cin >> b;
//        if (b < min)
//        {
//            min = b;
//            k = i;
//        }
//    }
//    cout << min << " " << k;
//}

//21.7
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a, k, sum = 0;
//    cout << "Введите число: ";
//    cin >> a;
//    for (int i = 1; i <= a; i++) {
//        sum += i;
//    }
//    for (int i = 1; i < a; i++) {
//        cin >> k;
//        sum -= k;
//    }
//    cout << "Целое число, которое было пропущено в последовательности: " << sum;
//}

//21.8
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a, k = 0, c = 0;
//    string str;
//    cout << "Введите число: ";
//    cin >> a;
//    for (int i = 1; i <= a; i++) {
//        cin >> k;
//        str += k;
//    }
//    for (int i = 0; i <= a; i++) {
//        c = 0;
//        for (int j = 0; j <= a; j++) {
//            if (str[i] == str[j]) c ++;
//        }
//        if (c == 1) {
//            k = str[i];
//            break;
//        }
//    }
//    cout << "Целое число, которое встречается только один раз: " << k;
//}

//21.9
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a, k = 0, c = 0;
//    string str;
//    cout << "Введите число: ";
//    cin >> a;
//    for (int i = 1; i <= a; i++) {
//        cin >> k;
//        str += k;
//    }
//    for (int i = 0; i <= a; i++) {
//        c = 0;
//        for (int j = 0; j <= a; j++) {
//            if (str[i] == str[j]) c++;
//        }
//        if (c >= a/2) {
//            k = str[i];
//            break;
//        }
//    }
//    cout << "Целое число, которое встречается больше половины раз в последовательности: " << k;
//}

//while

//21.1
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a = 1, sum = 0;
//    while (a != 0) {
//        cout << "Введите число: ";
//        cin >> a;
//        if (a % 3 == 0) sum += a;
//    }
//    cout << "Сумма чисел, которые делятся на 3: " << sum;
//}

//21.2
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a = 1, k = 0;
//    double sr = 0;
//    while (a != -1) {
//        cout << "Введите число: ";
//        cin >> a;
//        if (a > 10) {
//            sr += a;
//            k++;
//        }
//    }
//    sr /= k;
//    cout << "Среднее арифметическое чисел, которые больлше 10: " << sr;
//}

//21.3
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a, o, d;
//    string str, s;
//    cout << "Введите число: ";
//    cin >> a;
//    o = a % 2;
//    d = a / 2;
//    str += to_string(o);
//    while (d != 0) {
//        o = d % 2;
//        d = d / 2;
//        str += to_string(o);
//    }
//    reverse(str.begin(), str.end());
//    cout << str;
//}

//21.4
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a, max1, max2;
//    cout << "Введите число: ";
//    cin >> a;
//    max1 = max2 = a;
//    while (a != 0) {
//        cout << "Введите число: ";
//        cin >> a;
//        if (a >= max1) 
//        {
//            max2 = max1;
//            max1 = a;
//        }
//        else if (a > max1 || a>= max2) max2 = a;
//    }
//    cout << max2;
//}

//21.5
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int x, y, k = 0;
//    double p;
//    cout << "Введите вклад: ";
//    cin >> x;
//    cout << "Введите процент: ";
//    cin >> p;
//    cout << "Введите желаемую сумму: ";
//    cin >> y;
//    while (x < y) {
//        k++;
//        x += x * (p / 100);
//    }
//    cout << k;
//}

//do while

//21.1
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a, sum = 0;
//    do {
//        cout << "Введите число: ";
//        cin >> a;
//        sum += a;
//    } while (a != 0);
//    cout << sum;
//}

//21.2
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a, sum = 0, o;
//    cout << "Введите число: ";
//    cin >> a;
//    do {
//        o = a % 10;
//        a = a / 10;
//        sum += o;
//    } while (a != 0);
//    cout << sum;
//}

//21.3
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a, k = 0, d = 1;
//    cout << "Введите число: ";
//    cin >> a;
//    do {
//        d++;
//        if (a % d == 0) k = d;
//    } while (k == 0);
//    cout << k;
//}

//Вложенные циклы

//21.1
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a, k = 10, o = 0;
//    cout << "Введите число: ";
//    cin >> a;
//    do {
//        k++;
//        if (a == (k / 10) * (k % 10)) o = k;
//        if (k > 99) o = 1;
//    } while (o == 0);
//    if (k > 99) cout << "No solution";
//    else cout << k;
//}

//21.2
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a;
//    cout << "Введите число: ";
//    cin >> a;
//    for (int i = 1; i <= a; i++) {
//        for (int j = 1; j <= a; j++) {
//            cout << i * j << "\t";
//        }
//        cout << "\n" << endl;
//    }
//}

//21.3
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int n, m;
//    char symb;
//    cout << "Введите ширину, длину и символ: ";
//    cin >> n >> m >> symb;
//    for (int i = 1; i <= m; i++) {
//
//        for (int j = 1; j <= n; j++) {
//            
//            if ( i != 1 && i != m && j != 1 && j != n)
//            {
//                cout <<" ";
//            }
//            else cout << symb;
//        }
//        cout << endl;
//    }
//}

//21.4
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int n, m = 0, y = 0, x = 0;
//    cout << "Введите число: ";
//    cin >> n;
//    while (n != m) {
//        x++;
//        m = 0;
//        for (int i = 1; i <= x; i++) {
//            y = i;
//            while (y != 0) {
//                y = y / 10;
//                m++;
//            }
//        }
//    }
//    cout << x;
//}


//!!!!!!!!!!!!!!!

//21.5
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int n, m;
//    cout << "Введите субсидию: ";
//    cin >> n;
//    cout << "Введите кол-во единиц: ";
//    cin >> m;
//    
//}


//22.1
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int n, m;
//    double d;
//    cout << "Введите координаты: ";
//    cin >> n >> m;
//    d = sqrt(pow(n, 2) + pow(m, 2));
//    cout << fixed << setprecision(1) << d;
//}

//22.2
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int x1, x2, y1, y2, z1, z2;
//    double d;
//    cout << "Введите координаты первой точки: ";
//    cin >> x1 >> y1 >> z1;
//    cout << "Введите координаты второй точки: ";
//    cin >> x2 >> y2 >> z2;
//    d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2) + pow((z2 - z1), 2));
//    cout << fixed << setprecision(2) << d;
//}

//22.3
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a, b, c, p;
//    double s;
//    cout << "Введите длины сторон треугольника: ";
//    cin >> a >> b >> c;
//    p = (a + b + c) / 2;
//    s = sqrt(p * (p - a) * (p - b) * (p - c));
//    cout << fixed << setprecision(2) << s;
//}


//23.1
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int arr[5] = { 10, 20, 30, 40, 50 };
//    int index;
//    cin >> index;
//
//    cout << arr[index];
//}

//23.2
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int arr[5] = { 10, 20, 30, 40, 50 };
//    int index;
//    cin >> index;
//    if (index < 5 || index > 0 ) cout << arr[index];
//    else cout << "Error";
//
//}

//23.3
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int arr[5] = { 10, 20, 30, 40, 50 };
//
//    for (int i = 0; i < 5; i++) {
//        cout << arr[i] << ' ';
//    }
//
//}

//23.4
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int arr[14] = { 10, 121, 123, 4, 41, 342,
//        4234, 42, 789042, 32, 423, 3523, 523, 52367};
//    int k = 0;
//    for (int i = 0; i < 14; i++) {
//        if (arr[i] % 13 == 0) k++;
//    }
//    cout << k;
//
//}


//24.1
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a;
//    cout << "Введите размер массива: ";
//    cin >> a;
//    int* arr = new int[a];
//    for (int i = 0; i < a; i++) {
//        cin >> arr[i];
//        if (i % 2 == 1) cout << arr[i] << " ";
//    }
//}

//24.2
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a;
//    cout << "Введите размер массива: ";
//    cin >> a;
//    int* arr = new int[a];
//    for (int i = 0; i < a; i++) {
//        cin >> arr[i];
//        if (arr[i] >= 0) cout << arr[i] << " ";
//    }
//}

//24.3
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int n, m, sum = 0;
//    cout << "Введите размер массива: ";
//    cin >> n >> m;
//    int* arr = new int[n, m];
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            cin >> arr[i, j];
//            if ((i + j) % 2 == 1) sum += arr[i, j];
//        }
//    }
//    cout << sum;
//}

//24.4
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int n;
//    cout << "Введите размер массива: ";
//    cin >> n;
//    cout << endl;
//    int* arr = new int[n, n];
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            arr[i, j] = i + j;
//            cout << arr[i, j] << " ";
//        }
//        cout <<"\n" << endl;
//    }
//}


//25.1
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a;
//    cout << "Введите размер вектора: ";
//    cin >> a;
//    vector<int> arr(a);
//    for (int i = 0; i < a; i++) {
//        cin >> arr[i];
//        if (i % 2 == 0) cout << arr[i] << " ";
//    }
//}

//25.2
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a;
//    cout << "Введите размер вектора: ";
//    cin >> a;
//    vector<int> arr(a);
//    for (int i = 0; i < a; i++) {
//        cin >> arr[i];
//        if (arr[i] < 0) cout << arr[i] << " ";
//    }
//}

//25.3
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int n, m, sum = 0;
//    cout << "Введите размер вектора: ";
//    cin >> n >> m;
//    vector<vector<int>> arr(n, vector<int> (m));
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            cin >> arr[i][j];
//            if ((i + j) % 2 == 0) sum += arr[i][j];
//        }
//    }
//    cout << sum;
//}

//25.4
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int n, sum = 0;
//    cout << "Введите размер вектора: ";
//    cin >> n;
//    cout << endl;
//    vector<vector<int>> arr(n, vector<int>(n));
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            arr[i][j] = i - j;
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            cout << arr[i][j] << "\t";
//        }
//        cout << "\n" << endl;
//    }
//}

//25.5
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a;
//    cout << "Введите размер вектора: ";
//    cin >> a;
//    vector<int> arr(a);
//    for (int i = 0; i < a; i++) {
//        cin >> arr[i];
//    }
//    sort(arr.begin(), arr.end());
//    for (int i = 0;i < a;i++)
//        cout << arr[i] << " ";
//}


//26
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a;
//    vector<int> arr = {30, 20, 25};
//    vector<int> ::iterator it1;
//    vector<int> ::iterator it2;
//
//    it1 = arr.begin();
//    it2 = arr.end();
//    
//    for (it1; it1 != it2; it1++)
//        cout << *it1 << " ";
//}


//27.1
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int n, m = 0;
//
//    cout << "Введите размер вектора: ";
//    cin >> n;
//    vector<vector<int>> arr(n, vector<int>(n));
//    for (int i = n - 1; i >= 0; i--)
//    {
//        arr[i][m] = 1;
//        m++;
//
//    }
//    int k = n-1;
//    for (int i = n - 1; i >= 0; i--)
//    {
//        if (arr[i][k] != 1) arr[i][k] = 2;
//        else i = 0;
//        if (i == 0) {
//            if (k != 0) {
//                k = k - 1;
//                i = n;
//            }
//        }
//    }
//    for (int i = 0; i < n; i++){
//        for (int j = 0; j < n; j++) {
//            if (arr[i][j] == 2) cout << "\x1b[36m2\x1b[0m" << " ";
//            else if (arr[i][j] == 1) cout << "\x1b[33m1\x1b[0m" << " ";
//            else cout << "\x1b[31m0\x1b[0m" << " ";
//        }
//        cout << endl;
//    }
//}

//27.2
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int n, k = 0;
//
//    cout << "Введите размер вектора: ";
//    cin >> n;
//    vector<vector<int>> arr(n, vector<int>(n));
//    for (int i = n - 1; i >= 0; i--)
//    {   
//        for (int j = n - 1;j >= 0;j--) {
//            cin >> arr[i][j];
//            /*if(i != 0 && i != n-1)
//                if (!(arr[i][i-1] == arr[i][i+1]))
//                {
//                    k = 1;
//                    break;
//                }*/
//
//        }
//
//    }
//    if (k == 0) cout << "Yes";
//    else cout << "No";
//    
//}

//27 НЕ ДОДЕЛАНО 27.2 НЕ ЗАКОНЧЕНО

//29.1
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int k = 0;
//    string str1, str2;
//    cin >> str1;
//    cin >> str2;
//    for (int i=0; i < str1.length(); i++) {
//        if (str2.find(str1[i]) > 1000)
//            k++;
//
//    }
//    if (k == 0) cout << "Yes";
//    else cout << "No";
//}

//29.2
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    
//    string str1, str2 ="";
//    cin >> str1;
//    transform(str1.begin(), str1.end(), str1.begin(), tolower);
//    for (int i = str1.length()-1; i >=0 ; i--) {
//        str2 += str1[i];
//    }
//    if (str1 == str2) cout << "Yes";
//    else cout << "No";
//}

//29.3
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    
//    string str1, str2 ="";
//    cin >> str1;
//    transform(str1.begin(), str1.end(), str1.begin(), toupper);
//    str2 = str1;
//    transform(str1.begin(), str1.end(), str1.begin(), tolower);
//    cout << endl;
//    cout << str1 << endl;
//    cout << str2 << endl;
//}

//29.4
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    
//    string str1, str2="";
//    getline(cin, str1);
//    for (int i = str1.length()-1; i >= 0 ; i--) {
//        str2 += str1[i];
//    }
//    cout << endl;
//    cout << str2 << endl;
//}

//29.5
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    string str1 = "", max = "";
//    getline(cin, str1);
//    istringstream input{str1};
//    vector<string> arr;
//
//    while (!input.eof()) {
//        string substring;
//        input >> substring;
//        arr.push_back(substring);
//    }
//
//    for (const string& substring : arr) {
//        if (substring.length() > max.length()) max = substring;
//    }
//    
//    cout << endl;
//    cout << "Самое длинное слово в строке: " << max << endl;
//}

//29.6
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    string str1 = "", str2 = "", rez, d, m, year;
//    getline(cin, str1);
//    for (int i = 0 ; i < str1.length(); i++)
//        if (str1[i] == '.') str2 += ' ';
//        else str2 += str1[i];
//
//    istringstream input{ str2 };
//    vector<string> arr;
//    
//    while (!input.eof()) {
//        string substring;
//        input >> substring;
//        arr.push_back(substring);
//    }
//    
//    rez = arr[2] + "-" + arr[1] + "-" + arr[0];
//    cout << rez << endl;
//}


//Функции

//30.1
//bool primeNumber(int n) {
//    for (int i = 2; i < n - 1; i++)
//        if (n % i == 0) return false;
//    return true;
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
// 
//    cout << "Введите число: ";
//    int n;
//    cin >> n;
//    if (primeNumber(n)) cout << n << " - является простым числом";
//    else cout << n << " - не является простым числом";
//    
//}

//30.2
//int calculateFactorial(int n) {
//    int f = 1;
//    for (int i = 1; i <= n; i++) f *= i;
//    return f;
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    
//    int n;
//    do {
//        cout << "Введите число от 0 до 12: ";
//        cin >> n;
//    } while (n > 12 || n < 0);
//
//    cout << n << "! = " << calculateFactorial(n);
//    
//}

//30.3
//bool isPalindrome(string str) {
//    string str2;
//    transform(str.begin(), str.end(), str.begin(), tolower);
//    for (int i = 1; i < str.length(); i++) {
//        if (!isalpha(str[i]), i--) {
//            str.erase(i, 1);
//        }
//    }
//    for (int i = str.length() - 1; i >= 0; i--) {
//        str2 += str[i];
//    }
//    if (str == str2) return true;
//    else return false;
//    
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    
//    string str;
//    getline(cin, str);
//    if (isPalindrome(str))
//        cout << "Это полиндром";
//    else cout << "Это не полиндром";
//    
//}

//30.4
//int countVowels(string str) {
//    char words[6] = { 'a', 'o', 'u', 'i', 'e', 'y' };
//    int count = 0;
//    transform(str.begin(), str.end(), str.begin(), tolower);
//    for (int i = 0; i < 6; i++) {
//        for (int j = 0; j < str.length(); j++) {
//            if (tolower(str[j]) == words[i]) count++;
//        }
//    }
//    return count;
//    
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    
//    string str;
//    getline(cin, str);
//    cout << countVowels(str) << " - гласных в строке";
//    
//}

//30.5
//string reverseDigits(string n) {
//    string r = "";
//    for (int i = n.length() - 1; i >= 0;i--) {
//        r += n[i];
//    }
//    return r;
//    
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    
//    string n;
//    cin >> n;
//    cout << reverseDigits(n);
//    
//}

//30.6
//int sumDigits(int n) {
//    int sum = 0;
//    do {
//        sum += n % 10;
//        n /= 10;
//    } while (n != 0);
//    return sum;
//
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    int n;
//    cin >> n;
//    cout << sumDigits(n);
//
//}

//30.7
//bool isPalindromeNumber(int n) {
//    int s = 0, h;
//    h = n;
//    do {
//        s += n % 10;
//        n /= 10;
//        s *= 10;
//    } while (n != 0);
//    s /= 10;
//    if (h == s) return true;
//    return false;
//
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    int n;
//    cin >> n;
//    if (isPalindromeNumber(n)) cout << "Это полидром";
//    else cout << "Это не полидром";
//
//}

//Передача аргументов по значению

//30.1
//void isPerfectNumber(int n) {
//    int s = 0;
//    for (int i = 1;i < n;i++) {
//        if (n % i == 0) s += i;
//    }
//    if (s == n) cout << "Это совершенное число";
//    else cout << "Это не совершенное число";
//
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int n;
//    cin >> n;
//    isPerfectNumber(n)
//
//}

//30.2
//void my_swap(int &n1, int &n2) {
//    int s = 0;
//    s = n1;
//    n1 = n2;
//    n2 = s;
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    int n1, n2;
//    cin >> n1 >> n2;
//    my_swap(n1, n2);
//    cout << n1 << " " << n2;
//
//}

//Массивы как параметры функций

//30.1
//void reverseArray(int* arr, int size) {
//    int c;
//    for (int i = 0; i < size/2; ++i) {
//        c = arr[i];
//        arr[i] = arr[size - 1 - i];
//        arr[size - 1 - i] = c;
//    }
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    int n;
//    cin >> n;
//    int* arr = new int[n];
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    reverseArray(arr, n);
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//}

//30.2
//void findLargestElement(int* arr, int size) {
//    int c, max = arr[0];
//    for (int i = 0; i < size; ++i) {
//        if (arr[i] > max) max = arr[i];
//    }
//    cout << max << " ";
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    int n;
//    cin >> n;
//    int* arr = new int[n];
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    findLargestElement(arr, n);
//}

//Перегрузка функций

//30.1
//int sumNumders(int num1, int num2) {
//    return num1 + num2;
//}
//int sumNumders(int num1, int num2, int num3) {
//    return num1 + num2 + num3;
//}
//int sumNumders(int num1, int num2, int num3, int num4) {
//    return num1 + num2 + num3 + num4;
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    int num1, num2, num3, num4, n;
//    cin >> n;
//    switch (n) {
//        case 2:
//            cin >> num1 >> num2;
//            cout << sumNumders(num1, num2);
//            break;
//        case 3:
//            cin >> num1 >> num2 >> num3;
//            cout << sumNumders(num1, num2, num3);
//            break;
//        case 4:
//            cin >> num1 >> num2 >> num3 >> num4;
//            cout << sumNumders(num1, num2, num3, num4);
//            break;
//    }
//}

//30.2
//double calculatePerimeter(int side) {
//    return side * side;
//}
//double calculatePerimeter(int length, int width) {
//    return length * width;
//}
//double calculatePerimeter(int side1, int side2, int side3) {
//    int p = (side1 + side2 + side3) / 2;
//    return abs(p * (p - side1) * (p - side2) * (p - side3));
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    int side1, side2, side3, n;
//    cin >> n;
//    switch (n) {
//        case 1:
//            cin >> side1;
//            cout << calculatePerimeter(side1);
//            break;
//        case 2:
//            cin >> side1 >> side2;
//            cout << calculatePerimeter( side1, side2);
//            break;
//        case 3:
//            cin >> side1 >> side2 >> side3;
//            cout << calculatePerimeter(side1, side2, side3);
//            break;
//    }
//}

//Рекурсивные функции

//30.1
//double calculateFactorial(int n, double f) {
//    if (n != 1) f *= n;
//    else return f;
//    n--;
//    return calculateFactorial(n, f);
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    double f = 1;
//    int n;
//    cin >> n;
//    cout << calculateFactorial(n, f);
//}

//30.2
//double calculateFibonacci(int n) {
//    if (n == 2 || n == 1) return 1;
//    return calculateFibonacci(n - 1) + calculateFibonacci(n - 2);
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    int n;
//    cin >> n;
//    cout << calculateFibonacci(n);
//}

//30.3
//double countDigits(int n, int k) {
//    if (n / 10 != 0) {
//        n /= 10;
//        k++;
//    }
//    else return k;
//    return countDigits(n, k);
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    int n, k = 1;
//    cin >> n;
//    cout << countDigits(n, k);
//}

//30.4
//double calculatePower(double base, int exponent) {
//    if (!exponent) return 1;
//    if (exponent < 0) return 1/calculatePower(base, -exponent);
//    return calculatePower(base, --exponent) * base;
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    double base;
//    int exponent;
//    cin >> base >> exponent;
//    cout << calculatePower(base, exponent);
//}
//

//30.5
//void hanoiTowers(int n, int from, int to, int buf) {
//    
//    if (n > 0) { 
//        hanoiTowers(n - 1, from, buf, to);
//        cout << "Переместите диск с " << from << " на " << to << endl;
//        hanoiTowers(n - 1, buf, to, from);
//    }
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    int n;
//    cin >> n;
//    hanoiTowers(n, 1, 2, 3);
//}


//Линейный поиск

//31.1
//int linearSearch(int* arr, int n, int isk) {
//    for (int i = 0; i < n; i++) {
//        if (isk == arr[i]) return i;
//    }
//    return -1;
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    int n, isk;
//    cin >> n;
//    int* arr = new int[n];
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    cin >> isk;
//    cout << linearSearch(arr, n, isk);
//}

//31.2
//void findMinMax(int* arr, int n) {
//    int max = arr[0], min = arr[0];
//    for (int i = 0; i < n; i++) {
//        if (arr[i] > max) max = arr[i];
//        if (arr[i] < min) min = arr[i];
//    }
//    cout << min << endl;
//    cout << max << endl;
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    int n, isk;
//    cin >> n;
//    int* arr = new int[n];
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    findMinMax(arr, n);
//}

//31.3
//int findMostFrequentElement(int* arr, int n) {
//    int ch = arr[0];
//    for (int i = 0; i < n; i++) {
//        if (ch == arr[i]) return ch;
//    }
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    int n, isk;
//    cin >> n;
//    int* arr = new int[n];
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    cout << findMostFrequentElement(arr, n);
//}

//!!!!!!!!!!

//31.4
//int findMostFrequentElement(int* arr, int n) {
//    int ch = arr[0];
//    for (int i = 0; i < n; i++) {
//        if (ch == arr[i]) return ch;
//    }
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    int n, isk;
//    cin >> n;
//    int* arr = new int[n];
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    cout << findMostFrequentElement(arr, n);
//}

//!!!!!!!!!!

//Бинарный поиск

//31.1
//string findMostFrequentElement(string* arr, int left, int right, string isk) {
//    if (left <= right) {
//        int mid = left + (right - left) / 2;
//        if (arr[mid] == isk) {
//            return "YES";
//        }
//        else if (arr[mid] < isk) {
//            return findMostFrequentElement(arr, mid + 1, right, isk);
//        }
//        else {
//            return findMostFrequentElement(arr, left, mid - 1, isk);
//        }
//    }
//    return "NO";
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    int n;
//    string isk;
//    cin >> n;
//    string* arr = new string[n];
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    cin >> isk;
//    cout << findMostFrequentElement(arr, 0, n, isk);
//}

//31.2
//int findElement(vector<int> arr, int left, int right, int isk) {
//    if (left <= right) {
//        int mid = left + (right - left) / 2;
//        if (arr[mid] > isk) {
//            return mid;
//        }
//        else if (arr[mid] < isk) {
//            return findElement(arr, mid + 1, right, isk);
//        }
//        else {
//            return findElement(arr, left, mid - 1, isk);
//        }
//    }
//    return arr.size();
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    int n;
//    cin >> n;
//    vector<int> arr(n);
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    sort(arr.begin(), arr.end());
//    int k, r;
//    cin >> k;
//    for (int i = 0; i < k; i++) {
//        cout << endl;
//        cin >> r;
//        cout<< "-------\n" << findElement(arr, 0, n, r) << "\n-------" << endl;
//    }
//}

//31.3
//string findMostFrequentElement(vector<int> arr, int left, int right, int isk) {
//    if (left <= right) {
//        int mid = left + (right - left) / 2;
//        if (arr[mid] == isk) {
//            return "YES";
//        }
//        else if (arr[mid] < isk) {
//            return findMostFrequentElement(arr, mid + 1, right, isk);
//        }
//        else {
//            return findMostFrequentElement(arr, left, mid - 1, isk);
//        }
//    }
//    return "NO";
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    int n;
//    int isk;
//    cin >> n;
//    vector<int> arr(n);
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    cin >> isk;
//    sort(arr.begin(), arr.end());
//    cout << findMostFrequentElement(arr, 0, n, isk);
//}

//31.4
//string findMostFrequentElement(vector<int> arr, int left, int right, int isk) {
//    if (left <= right) {
//        int mid = left + (right - left) / 2;
//        int low = lower_bound(arr.begin(), arr.end(), isk);
//        
//        if (arr[mid] < isk) {
//            return findMostFrequentElement(arr, mid + 1, right, isk);
//        }
//        else {
//            return findMostFrequentElement(arr, left, mid - 1, isk);
//        }
//    }
//    return "NO";
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    
//    int n;
//    int isk;
//    cin >> n;
//    vector<int> arr(n);
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    cin >> isk;
//    sort(arr.begin(), arr.end());
//    cout << findMostFrequentElement(arr, 0, n, isk);
//}

//!!!!!!!!!!!!

//31
//double SquareRoot(int y) {
//    double l = 0, r = 1e9;
//
//    while (r - l > 1e-6) { 
//        double m = (l + r) / 2;
//        double cur = m * m;
//
//        if (cur < y) {
//            l = m;
//        }
//        else if (cur > y) {
//            r = m;
//        }
//        else {
//            return m;
//        }
//    }
//
//    return l;
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    int n;
//    cin >> n;
//    cout << fixed << setprecision(3) << SquareRoot(n);
//}


//32
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    srand(42);
//    int n, k = 0;
//    cin >> n;
//    for (int i = 0; i < n;++i) {
//        if (rand() % 100 > 50) k++;
//    }
//    cout << k;
//}


//34.1
//struct Product {
//    string name;
//    double cost;
//    int quantity;
//};
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    vector<Product> product;
//    int l = 0;
//    for (int i = 0; i < 5;++i) {
//        string name;
//        cout << "Введите название продукта: \n";
//        cin >> name;
//        double cost;
//        cout << "Введите цену продукта: \n";
//        cin >> cost;
//        int quantity;
//        cout << "Введите количество продукта: \n";
//        cin >> quantity;
//        product.push_back({ name, cost, quantity });
//        if (cost > l) l = i;
//        cout << "----------" << endl;
//    }
//    cout << "----------" << endl;
//    cout << "Название товара:" << product[l].name << endl;
//    cout << "Стоимость:" << product[l].cost << endl;
//    cout << "Количество:" << product[l].quantity << endl;
//}

//34.2
//struct Product {
//    string name;
//    double cost;
//    int quantity;
//};
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    vector<Product> product;
//    double l = 0;
//    for (int i = 0; i < 5;++i) {
//        string name;
//        double cost;
//        int quantity;
//        cin >> name >> cost >> quantity;
//        product.push_back({ name, cost, quantity });
//        l += cost*quantity;
//    }
//    cout << fixed << setprecision(1) << l << endl;
//}

//34.3
//struct Student {
//    string name;
//    vector<int> scores;
//};
//vector<int> scor(vector<int> scores) {
//    while(true){
//        try {
//            int o;
//            cin >> o;
//            scores.push_back(o);
//        }
//        catch (...) { 
//            break; 
//        }
//    }
//    return scores;
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int n;
//    vector<Student> students;
//    cin >> n;
//    double l = 0;
//    for (int i = 0; i < n;++i) {
//
//        cout << "Введите имя студента:" << endl;
//        string name;
//        cin >> name;
//        vector<int> scores;
//        cout << "Введите оценки:" << endl;
//        scores = scor(scores);
//        
//        students.push_back({ name, scores});
//    }
//    for (int i = 0; i < n; i++) {
//        cout << "Студент:" << students[i].name << endl;
//        for (int j=0; j < students[i].scores.size(); j++) {
//            cout << students[i].scores[j];
//        }
//    }
//}

//!!!!!!!!!!!!!

//34.4
//string scor(vector<string> scores) {
//    string rez = scores[0];
//    int m = scores[0].size();
//    for (int i = 0; i < scores.size(); i++) {
//        if (scores[i].size() > rez.size()) {
//            rez = scores[i];
//            rez += " ";
//            m = scores[i].size();
//        }
//    }
//    return rez +" "+ to_string(m);
//    
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int n;
//    cout << "Введите кол-во строк:" << endl;
//    cin >> n;
//    vector<string> str(n);
//    cin.ignore();
//    for (int i = 0; i < n;i++) {
//        cout << "Введите " << i+1 <<" строку: " << endl;
//        getline(cin, str[i]);
//    }
//    cout << scor(str) << endl;
//}

//Классы

//34.1
//class Circle {
//private:
//    double radius;
//public:
//    void setRadius(double _radius) {
//        radius = _radius;
//    }
//    double getRadius() const {
//        return radius;
//    }
//    void Square() {
//        double s = M_PI * pow(radius, 2);
//        cout << "Площадь: " << fixed << setprecision(2) << s << endl;
//    }
//    void Length() {
//        double d = 2 * M_PI * radius;
//        cout << "Длина окружности: " << fixed << setprecision(2) << d << endl;
//    }
//};
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    double r;
//    Circle circle;
//    cin >> r;
//    circle.setRadius(r);
//    circle.Square();
//    circle.Length();
//}

//34.2
//class Triangle {
//private:
//    double a, b, c;
//public:
//    void set_a(double _a) {
//        a = _a;
//    }
//    double get_a() const {
//        return a;
//    }
//    void set_b(double _b) {
//        b = _b;
//    }
//    double get_b() const {
//        return b;
//    }
//    void set_c(double _c) {
//        c = _c;
//    }
//    double get_c() const {
//        return c;
//    }
//    void Square() {
//        double p = P() / 2, s = sqrt(p * (p - a) * (p - b) * (p - c));
//        cout << "Площадь: " << fixed << setprecision(2) << s << endl;
//    }
//    double P(){
//        return a+b+c;
//    }
//    void Perimeter() {
//        cout << "Периметр: " << fixed << setprecision(2) << P() << endl;
//    }
//};
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    double a, b, c;
//    Triangle triangle;
//    cin >> a >> b >> c;
//    triangle.set_a(a);
//    triangle.set_b(b);
//    triangle.set_c(c);
//    triangle.Square();
//    triangle.Perimeter();
//}

//34.3
//class _Rectangle {
//private:
//    double xnl, ynl, a, b;
//public:
//    void set_xynl(double _xnl, double _ynl) {
//        xnl = _xnl;
//        ynl = _ynl;
//    }
//    double get_xnl() const {
//        return xnl;
//    }
//    double get_ynl() const {
//        return ynl;
//    }
//    void set_ab(double _a, double _b) {
//        a = _a;
//        b = _b;
//    }
//    double get_a() const {
//        return a;
//    }
//    double get_b() const {
//        return b;
//    }
//
//    void Search(double x, double y) {
//        if (xnl+a >= x && ynl+b >= y && xnl <= x && ynl <= y)
//            cout << "YES" << endl;
//        else cout << "NO" << endl;
//    }
//};
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    double xnl, ynl, a, b, x, y;
//    _Rectangle rectangle;
//    cin >> xnl >> ynl;
//    cin >> a >> b;
//    cin >> x >> y;
//    rectangle.set_xynl(xnl, ynl);
//    rectangle.set_ab(a, b);
//    rectangle.Search(x, y);
//}

//34.4
//class Soda {
//private:
//    string additive;
//public:
//    void set_additive(string _additive) {
//        additive = _additive;
//    }
//    string get_xnl() const {
//        return additive;
//    }
//    void showMyDrink() {
//        bool bukv = true;
//        for (int i = 0; i < additive.length(); i++) {
//            if (!isalpha(additive[i])) { 
//                bukv = false;
//                break; }
//        }
//        if (bukv) cout << "Газировка со вкусом \""<< additive << "\"" << endl;
//        else cout << "Обычная газировка\n";
//    }
//};
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    string str = "";
//    cin >> str;
//    Soda soda;
//    soda.set_additive(str);
//    soda.showMyDrink();
//}

//34.5
//class TriangleChecker {
//private:
//    int a, b, c;
//public:
//    void set_abc(int _a, int _b, int _c) {
//        a = _a;
//        b = _b;
//        c = _c;
//    }
//    int get_a() const {
//        return a;
//    }
//    int get_b() const {
//        return b;
//    }
//    int get_c() const {
//        return c;
//    }
//    void isTriangle() {
//        if (a + b > c && b + c > a && a + c > b) cout << "Ура, можно построить треугольник!";
//        else if (a < 0 || b < 0 || c < 0) cout << "С отрицательными числами ничего не выйдет!";
//        else cout << "Жаль, но из этого треугольник не сделать(";
//    }
//};
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a, b, c;
//    cin >> a >> b >> c;
//    TriangleChecker triangleChecker;
//    triangleChecker.set_abc(a, b, c);
//    triangleChecker.isTriangle();
//}

//34.6
//class Kitten {
//private:
//    string name;
//    string color;
//    string owner;
//public:
//    Kitten(string _c) :Kitten("Рыжик", _c) {}
//    Kitten(string _n, string _c) :Kitten(_n, _c, "Неизвестно") {}
//    Kitten(string _n, string _c, string _o) {
//        name = _n;
//        color = _c;
//        owner = _o;
//    }
//    void printInfo() {
//        cout << color << " " << name << ". Хозяин - " << owner;
//    }
//};
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    string str;
//    getline(cin, str);
//    int k = 0, v = 0;
//    string prom, name, color, owner;
//    for (int i = 0; i < str.size(); i++) {
//        prom = "";
//        if (str[i] == ' ' || (v != 3&&i == str.size() - 1)) {
//            v++;
//            for (int j = k; j < i+1; j++) {
//                if (str[j] != ' ') prom += str[j];
//            }
//            k = i + 1;
//            if (v == 1) name = prom;
//            if (v == 2) color = prom;
//            if (v == 3) owner = prom;
//        }
//    }
//    if (v == 3) {
//        Kitten kitten(name, color, owner);
//        kitten.printInfo();
//    }
//    if (v == 2) {
//        Kitten kitten(name, color);
//        kitten.printInfo();
//    }
//    if (v == 1) {
//        Kitten kitten(name);
//        kitten.printInfo();
//    }
//}

//34.7
//class Changer {
//private:
//    bool isFromDigitToWord;
//public:
//    void set(int i)
//    {
//        if (i == 1) isFromDigitToWord = true;
//        else isFromDigitToWord = false;
//    }
//    void change(string str) {
//        string str2 = "";
//        if (isFromDigitToWord) {
//            for (int i = 0; i < str.size(); i++) {
//                if (isalpha(str[i])) str2 += str[i];
//                else {
//                    switch (str[i])
//                    {
//                    case '1':
//                        str2 += "one";
//                        break;
//                    case '2':
//                        str2 += "two";
//                        break;
//                    case '3':
//                        str2 += "three";
//                        break;
//                    case '4':
//                        str2 += "four";
//                        break;
//                    case '5':
//                        str2 += "five";
//                        break;
//                    case '6':
//                        str2 += "six";
//                        break;
//                    case '7':
//                        str2 += "seven";
//                        break;
//                    case '8':
//                        str2 += "eight";
//                        break;
//                    case '9':
//                        str2 += "nine";
//                        break;
//                    case '0':
//                        str2 += "zero";
//                        break;
//                    default:
//                        break;
//                    }
//                }
//            }
//        }
//        else {
//            for (int i = 0; i < str.size(); i++) {
//                if (!isalpha(str[i])) str2 += str[i];
//                else {
//                    int k = i;
//                    string word = "";
//                    while (isalpha(str[i])||i == str.size()-1) {
//                        word += str[i];
//                        i++;
//                        if (word == "one") {
//                            str2 += "1";
//                            word = "";
//                        }
//                        if (word == "two") {
//                            str2 += "2";
//                            word = "";
//                        }
//                        if (word == "three") {
//                            str2 += "3";
//                            word = "";
//                        }
//                        if (word == "four") {
//                            str2 += "4";
//                            word = "";
//                        }
//                        if (word == "five") {
//                            str2 += "5";
//                            word = "";
//                        }
//                        if (word == "six") {
//                            str2 += "6";
//                            word = "";
//                        }
//                        if (word == "seven") {
//                            str2 += "7";
//                            word = "";
//                        }
//                        if (word == "eight") {
//                            str2 += "8";
//                            word = "";
//                        }
//                        if (word == "nine") {
//                            str2 += "9";
//                            word = "";
//                        }
//                        if (word == "zero") {
//                            str2 += "0";
//                            word = "";
//                        }
//                    }
//                    i--;
//                }
//            }
//            cout << str2;
//        }
//    }
//};
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    int i;
//    string str;
//    Changer changer;
//    cin >> i >> str;
//    changer.set(i);
//    changer.change(str);
//}

//34.8
//class Pupil {
//private:
//    string name;
//    vector<vector<int>> marks;
//public:
//    void set_marks(vector<vector<int>> _marks)
//    {
//        marks.assign(_marks.begin(), _marks.end());
//    }
//    void set_name(string _name) {
//        name = _name;
//    }
//    double getMark(int quarter) {
//        double sr = 0;
//        for (int i = 0; i < marks[quarter].size(); i++)
//            sr += marks[quarter][i];
//        return sr / marks[quarter].size();
//    }
//    double getMark() {
//        return (getMark(0) + getMark(1) + getMark(2) + getMark(3)) / 4;
//    }
//    string getInfo() {
//        string str = "\nI: ";
//        str += to_string(round(getMark(0)*10) / 10);
//        str += "\nII: ";
//        str += to_string(round(getMark(1) * 10) / 10);
//        str += "\nIII: ";
//        str += to_string(round(getMark(2) * 10) / 10);
//        str += "\nIV: ";
//        str += to_string(round(getMark(3) * 10)/ 10);
//        str += "\nTotal for ";
//        str += name;
//        str += ": ";
//        str += to_string(round(getMark() * 10) / 10);
//        for (int i = 1; i < str.length(); i++) {
//            if (str[i] == '0' && str[i - 1] != '.') str[i] = ' ';
//        }
//        return str;
//    }
//};
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    string name, str;
//    vector<vector<int>> marks(4);
//    marks[0].resize(0);
//    marks[1].resize(0);
//    marks[2].resize(0);
//    marks[3].resize(0);
//    Pupil pupil;
//    cin >> name;
//    cin.ignore();
//    bool ogr = false;
//    do{
//        if (ogr) { 
//            cout << "Введите оценки еще раз, \nони могут быть только числами от 1 до 5:" << endl; 
//            marks[0].resize(0);
//            marks[1].resize(0);
//            marks[2].resize(0);
//            marks[3].resize(0);
//        }
//        else cout << "Введите оценки:" << endl;
//        ogr = false;
//        for (int i = 0; i < marks.size(); i++) {
//            getline(cin, str);
//            for (int j = 0; j < str.size(); j++) {
//                if (str[j] != ' ') {
//                    marks[i].push_back(str[j] - '0');
//                    if (str[j] - '0' > 5 || str[j] - '0' < 1 ) ogr = true;
//                }
//            }
//        }
//    } while (ogr);
//    
//    pupil.set_marks(marks);
//    pupil.set_name(name);
//    cout << pupil.getInfo() << endl;
//}

//Перегрузка операций

//34.1
//class Complex {
//public:
//    double real;
//    double imag;
//
//    Complex(double r, double i) : real(r), imag(i){}
//
//    Complex operator+(const Complex& other) const {
//        return Complex(real + other.real, imag + other.imag);
//    }
//    Complex operator-(const Complex& other) const {
//        return Complex(real - other.real, imag - other.imag);
//    }
//};
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    double a1, b1, a2, b2;
//    cin >> a1 >> b1;
//    cin >> a2 >> b2;
//    Complex complex1(a1, b1);
//    Complex complex2(a2, b2);
//
//    Complex sum = complex1 + complex2;
//    Complex raz = complex1 - complex2;
//    if (sum.imag >= 0) cout << "Сумма: " << sum.real << " + " << sum.imag << "i" << endl;
//    else cout << "Сумма: " << sum.real << " - " << sum.imag*-1 << "i" << endl;
//    if (raz.imag >= 0) cout << "Разность: " << raz.real << " + " << raz.imag << "i" << endl;
//    else cout << "Разность: " << raz.real << " - " << raz.imag * -1 << "i" << endl;
//}

//34.2
//class Vector {
//public:
//    double x, y, z;
//
//    Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {}
//    
//    double operator*(const Vector& other) const {
//        return x * other.x + y * other.y + z * other.z;
//    }
//};
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    double x1, y1, z1, x2, y2, z2;
//    cin >> x1 >> y1 >> z1;
//    cin >> x2 >> y2 >> z2;
//    Vector vector1(x1, y1, z1);
//    Vector vector2(x2, y2, z2);
//
//    double pr = vector1 * vector2;
//    cout << "Произведение: " << pr << endl;
//}


//35.1
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int N;
//    cin >> N;
//
//    int* arr = new int[N];
//    for (int i = 0;i < N;i++) {
//        cin >> arr[i];
//    }
//
//    for (int i = 0; i < N-1 ; i++) {
//        for (int j = 0; j < N - 1 - i; j++) {
//            if (arr[j] > arr[j + 1]) {
//                int tmp;
//                tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//
//    for (int i = 0;i < N;i++) {
//        cout << arr[i] << ' ';
//    }
//}

//Сортировка вставками

//35.1
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int N;
//    cin >> N;
//
//    int* arr = new int[N];
//    for (int i = 0;i < N;i++) {
//        cin >> arr[i];
//    }
//
//    for (int i = 1; i < N; i++) {
//        for (int j = i; (j > 0) && (arr[j] < arr[j - 1]); j--) {
//            int tmp;
//            tmp = arr[j];
//            arr[j] = arr[j - 1];
//            arr[j - 1] = tmp;
//        }
//    }
//
//    for (int i = 0;i < N;i++) {
//        cout << arr[i] << ' ';
//    }
//}

//35.2
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int n;
//    cin >> n;
//
//    int* arr = new int[n];
//    for (int i = 0;i < n;i++) {
//        cin >> arr[i];
//    }
//
//    for (int i = 1; i < n; i++) {
//        for (int j = i; (j > 0) && (arr[j] < arr[j - 1]); j--) {
//            int c;
//            c = arr[j];
//            arr[j] = arr[j - 1];
//            arr[j - 1] = c;
//        }
//    }
//
//    for (int i = 0;i < n;i++) {
//        cout << arr[i] << ' ';
//    }
//}

//Сортировка выбором

//35.1
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int N;
//    cin >> N;
//
//    int* arr = new int[N];
//    for (int i = 0;i < N;i++) {
//        cin >> arr[i];
//    }
//
//    for (int i = 0; i < N - 1; i++) {
//        for (int j = i + 1; j < N; j++) {
//            if (arr[i] > arr[j]) {
//                int tmp;
//                tmp = arr[j];
//                arr[j] = arr[i];
//                arr[i] = tmp;
//            }
//        }
//    }
//
//    for (int i = 0;i < N;i++) {
//        cout << arr[i] << ' ';
//    }
//}

//35.2
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int n;
//    cin >> n;
//
//    int* arr = new int[n];
//    for (int i = 0;i < n;i++) {
//        cin >> arr[i];
//    }
//
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (arr[i] > arr[j]) {
//                int c;
//                c = arr[j];
//                arr[j] = arr[i];
//                arr[i] = c;
//            }
//        }
//    }
//
//    for (int i = 0;i < n;i++) {
//        cout << arr[i] << ' ';
//    }
//}

//Встроенная сортировка sort()

//35.1
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int n;
//    cin >> n;
// 
//    vector<int> vector(n);
//    for (int i = 0;i < n;i++) {
//        cin >> vector[i];
//    }
//
//    sort(vector.rbegin(), vector.rend());
//
//    for (int i = 0;i < n;i++) {
//        cout << vector[i] << ' ';
//    }
//}

//35.2
//bool comp(int a, int b) {
//    return a > b;
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int n;
//    cin >> n;
//
//    int* arr = new int[n];
//    for (int i = 0;i < n;i++) {
//        cin >> arr[i];
//    }
//
//    sort(arr, arr + n, comp);
//
//    for (int i = 0;i < n;i++) {
//        cout << arr[i] << ' ';
//    }
//}


//36.1
//bool comp(int a, int b) {
//    return a < b;
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int n;
//    cin >> n;
//    int* arr = new int[n];
//    for (int i = 0;i < n;i++) {
//        cin >> arr[i];
//    }
//    sort(arr, arr + n, comp);
//
//    int k;
//    cin >> k;
//    int* arr2 = new int[k];
//    for (int i = 0;i < k;i++) {
//        cin >> arr2[i];
//    }
//    sort(arr2, arr2 + k, comp);
//
//    list<int> myList;
//    for (int i = 0; i < n; i++) {
//        myList.push_back(arr[i]);
//    }
//    for (int i = 0; i < k; i++) {
//        myList.push_back(arr2[i]);
//    }
//    myList.sort();
//    for (const auto& element : myList) {
//        cout << element << ' ';
//    }
//}

//Очередь

//36.1
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int n;
//    cin >> n;
//
//    queue<int> nQueue;
//    queue<int> oQueue;
//
//
//    for (int i = 0;i < n;i++) {
//        int n, o;
//        cin >> n >> o;
//        nQueue.push(n);
//        oQueue.push(o);
//    }
//    cout << "\n" << nQueue.front() << endl;
//    int c = oQueue.front() + nQueue.front();
//    nQueue.pop();
//    do {
//        oQueue.pop();
//        if (nQueue.front() > c) {
//            cout << nQueue.front() << endl;
//            c = oQueue.front() + nQueue.front();
//        }
//        else {
//            cout << c << endl;
//            c = oQueue.front() + c;
//        }
//        nQueue.pop();
//    } while (!nQueue.empty());
//}

//36.2
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int n, k = 0;
//    cin >> n;
//    cin.ignore();
//    string rez = "";
//    queue<int> queue;
//
//    for (int i = 0;i < n;i++) {
//        string str;
//        getline(cin, str);
//        if (str[0] == 'A' && str[1] == 'D' && str[2] == 'D') {
//            if (str[str.size() - 1] == str[4]) {
//                k = str[4] - '0';
//                queue.push(k);
//            }
//            else {
//                k = str[4] - '0';
//                k += str[5] - '0';
//                queue.push(k);
//            }
//        }else
//        if (str[0] == 'N' && str[1] == 'E' && str[2] == 'X' && str[3] == 'T') {
//            queue.pop();
//            if (!queue.empty()) {
//                rez += to_string(queue.front());
//                rez += "\n";
//            }
//            else
//            {
//                rez += "Queue is empty";
//                rez += "\n";
//            }
//        }else
//        if (str[0] == 'C' && str[1] == 'O' && str[2] == 'U' && str[3] == 'N' && str[4] == 'T') {
//            rez += to_string(queue.size());
//            rez += "\n";
//        }
//    }
//
//    cout << "\n" << rez << endl;
//}

//Стек

//36.1
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int n;
//    cin >> n;
//    cin.ignore();
//    string rez = "";
//    stack<int> myStack;
//
//    for (int i = 0;i < n;i++) {
//        string str;
//        getline(cin, str);
//        if (str[0] == 'P' && str[1] == 'U' && str[2] == 'S' && str[3] == 'H' && str[4] == ' ') {
//            if (str[str.size() - 1] == str[5]) {
//                myStack.push(stoi(to_string(str[5])));
//            }
//            else {
//                myStack.push(stoi(to_string(str[5]) + to_string(str[6])));
//            }
//        }else
//        if (str[0] == 'P' && str[1] == 'O' && str[2] == 'P') {
//            myStack.pop();
//            if (myStack.empty()) {
//                rez += "Stack is empty";
//                rez += "\n";
//            }
//        }else
//        if (str[0] == 'T' && str[1] == 'O' && str[2] == 'P') {
//            if (myStack.empty()) {
//                rez += "Queue is empty";
//                rez += "\n";
//            }
//            else { 
//                rez += myStack.top(); 
//                rez += "\n";
//            }
//        }
//        else
//        if (str[0] == 'S' && str[1] == 'I' && str[2] == 'Z' && str[3] == 'E') {
//            rez += to_string(myStack.size());
//            rez += "\n";
//        }else cout << "Такой команды нет" << endl;
//    }
//
//    cout << "\n" << rez << endl;
//}

//36.2
//bool balanced(const string& s) {
//    stack<char> stack;
//    for (char c : s) {
//        switch (c)
//        {
//            case '(': stack.push(')');
//                break;
//            case '[': stack.push(']');
//                break;
//            case '{': stack.push('}');
//                break;
//            case ')':
//            case ']':
//            case '}':
//                if (stack.empty() || stack.top() != c) {
//                    return false;
//                }
//                stack.pop();
//                break;
//            default:
//                break;
//        }
//    }
//    return stack.empty();
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    string str;
//    cin >> str;
//
//    cout << (balanced(str) ? "yes" : "no") << endl;
//}

//36.3
//bool polidrom(string& s) {
//    stack<char> stack;
//    transform(s.begin(), s.end(), s.begin(), tolower);
//    for (int i = 1; i < s.length(); i++) {
//        if (!isalpha(s[i]), i--) {
//            s.erase(i, 1);
//        }
//    }
//    for (int i = 0; i < s.size() / 2; i++) {
//        stack.push(s[i]);
//    }
//    for (int i = s.size() - (s.size() / 2); i < s.size(); i++) {
//        if (s[i] == stack.top()) stack.pop();
//        else return false;
//    }
//    return true;
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    string str;
//    getline(cin, str);
//
//    cout << (polidrom(str) ? "yes" : "no") << endl;
//}

//36.4
//int znach(const string& s) {
//    stack<int> stack;
//    int num1, num2;
//    for (int i = 0; i < s.size(); i++) {
//
//        switch (s[i])
//        {
//            case '1':
//            case '2':
//            case '3':
//            case '4':
//            case '5':
//            case '6':
//            case '7':
//            case '8':
//            case '9':
//            case '0':
//                if (s[i + 1] == ' ') {
//                    stack.push(s[i]-'0');
//                }
//                else {
//                    int prom = 0;
//                    while (s[i] != ' ') {
//                        prom += s[i] - '0';
//                        prom *= 10;
//                        i++;
//                    }
//                    prom /= 10;
//                    stack.push(prom);
//                }
//                break;
//            case '+':
//                num2 = stack.top();
//                stack.pop();
//                num1 = stack.top();
//                stack.pop();
//                stack.push(num1 + num2);
//                break;
//            case '-':
//                num2 = stack.top();
//                stack.pop();
//                num1 = stack.top();
//                stack.pop();
//                stack.push(num1 - num2);
//                break;
//            case '/':
//                num2 = stack.top();
//                stack.pop();
//                num1 = stack.top();
//                stack.pop();
//                stack.push(num1 / num2);
//                break;
//            case '*':
//                num2 = stack.top();
//                stack.pop();
//                num1 = stack.top();
//                stack.pop();
//                stack.push(num1 * num2);
//                break;
//            default:
//                break;
//        }
//    }
//    return stack.top();
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    string str;
//    getline(cin, str);
//
//    cout << znach(str) << endl;
//}

//

//Множество

//36.1
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    set<int> set;
//    int n, k=0;
//    cin >> n;
//    int* arr = new int[n];
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//        if (!set.empty())
//        {
//            if (!(set.find(arr[i]) != set.end())) {
//                k++;
//                set.insert(arr[i]);
//            }
//        }
//        else { 
//            set.insert(arr[i]); 
//            k++;
//        }
//    }
//    cout << k << endl;
//}

//36.2
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    string s = "";
//    set<int> set;
//    int n, k=0;
//    cin >> n;
//    int* arr = new int[n];
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//        set.insert(arr[i]);
//    }
//    int w;
//    cin >> w;
//    int* arr2 = new int[w];
//    for (int i = 0; i < w; i++) {
//        cin >> arr2[i];
//        if (set.find(arr2[i]) != set.end()) {
//            s += to_string(arr2[i]);
//            s += " ";
//        }
//    }
//    cout << s << endl;
//}

//Мультимножество

//
//36.1
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int n, k = 0, t = 0;
//    cin >> n;
//    cin.ignore();
//    multiset<int> mult;
//    string rez = "";
//
//    for (int i = 0;i < n;i++) {
//        string str;
//        getline(cin, str);
//        transform(str.begin(), str.end(), str.begin(), tolower);
//        str += " ";
//        if (str[0] == 'a' && str[1] == 'd' && str[2] == 'd') {
//            t = 4, k = 0;
//            if (str.size() - 2 == 4) {
//                k = str[4] - '0';
//                mult.insert(k);
//            }
//            else {
//                while (str[t] != ' ') {
//                    k *= 10;
//                    k += str[t] - '0';
//                    t++;
//                }
//                mult.insert(k);
//            }
//        }
//        else
//            if (str[0] == 'r' && str[1] == 'e' && str[2] == 'm' && str[3] == 'o' && str[4] == 'v' && str[5] == 'e') {
//                t = 7;
//                if (str.size() - 2 == 7) {
//                    k = str[7] - '0';
//                    mult.erase(k);
//                }
//                else {
//                    while (str[t] != ' ') {
//                        k *= 10;
//                        k = str[t] - '0';
//                        t++;
//                    }
//                    mult.erase(k);
//                }
//            }
//            else
//                if (str[0] == 'm' && str[1] == 'a' && str[2] == 'x' && str[3] == '_' && str[4] == 'f' && str[5] == 'r' && str[6] == 'e' && str[7] == 'q') {
//                    int max = 0, maxEl{};
//                    for (const auto& element : mult) {
//                        if (mult.count(element) >= max) {
//                            max = mult.count(element);
//                            maxEl = element;
//                        }
//                    }
//                    rez += to_string(maxEl);
//                    rez += " ";
//                    rez += to_string(max);
//                    rez += "\n";
//                }
//    }
//    cout << rez;
//}

//Словарь

//36.1
//class Produkt {
//public:
//    string name;
//    int count;
//    Produkt(string n, int c) : count(c), name(n) {}
//};
//
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int n;
//    cin >> n;
//    cin.ignore();
//    map< int, Produkt> map;
//    string rez = "";
//    for (int i = 0; i < n; i++) {
//        string str = "";
//        getline(cin, str);
//        str += ";";
//        int id = 0, count = 0, l = 2;
//        string name;
//        while (str[l] != ' ' && str[l] != ';') {
//            id *= 10;
//            id += str[l] - '0';
//            l++;
//        }
//        l++;
//        if (str[0] == '1') {
//            while (str[l] != ' ') {
//                name += str[l];
//                l++;
//            }
//            l++;
//            while (str[l] != ';') {
//                count *= 10;
//                count += str[l] - '0';
//                l++;
//            }
//            Produkt pr{name, count};
//            map.insert(make_pair(id, pr));
//        }
//        if (str[0] == '2') {
//            while (str[l] != ';') {
//                count *= 10;
//                count += str[l] - '0';
//                l++;
//            }
//            auto it = map.find(id);
//            if (it != map.end()) {
//                it->second.count = count;
//            }
//            else { 
//                cout << "Такого id нет" << endl;
//                n++;
//            }
//        }
//        if (str[0] == '3') {
//            auto it = map.find(id);
//            if (it != map.end()) {
//                rez += "Name: ";
//                rez += it->second.name;
//                rez += ", Quantity: ";
//                rez += to_string(it->second.count);
//                rez += "\n";
//            }
//            else {
//                cout << "Такого id нет" << endl;
//                n++;
//            }
//        }
//    }
//    cout << rez;
//}

//36.2
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//
//    map< string, int > map;
//    for (int i = 0; i < 6; i++) {
//        int mapI;
//        string mapS;
//        cin >> mapI >> mapS;
//        map.insert(make_pair(mapS, mapI));
//    }
//    cout << endl;
//    for (const auto& pair : map) {
//        if (pair.second == 9) cout << pair.second << " " << pair.first << endl;
//    }
//    for (const auto& pair : map) {
//        if (pair.second == 10) cout << pair.second << " " << pair.first << endl;
//    }
//    for (const auto& pair : map) {
//        if (pair.second == 11) cout << pair.second << " " << pair.first << endl;
//    }
//}

//Мультисловарь(43)


