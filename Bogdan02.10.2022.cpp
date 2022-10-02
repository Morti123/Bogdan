#include <iostream>
using namespace std;

int main()
{
    // If7.Даны два числа.Вывести порядковый номер меньшего из них.
  /*  int a, b;
    cin >> a >> b;
    if (a < b) {
        cout << 1 << endl;
    }
    else  if (b < a){
        cout << 2 << endl;
    }
    else if (a == b) {
    cout << "=" << endl;
}*/
   // If8◦
       // .Даны два числа.Вывести вначале большее, а затем меньшее из них.
   /* int a, b;
    cin >> a >> b;
    if (a < b) {
        cout << b << endl;
        cout << a << endl;
    }
    else if (a > b) {
    cout << a << endl;
        cout << b << endl;
    }
    else if (a == b){
        cout << "=" << endl;
    }*/
  //  If9.Даны две переменные вещественного типа : A, B.Перераспределить значения данных переменных так, чтобы в A оказалось меньшее из значений,
        //а в B — большее.Вывести новые значения переменных A и B.
  /*  double a, b;
    cin >> a >> b;
    if (a < b) {
        cout << a << " " << b << endl;
    }
    if (a > b) {
        double c = a;
        a = b;
        b = c;

    }
    cout << a << " " << b << endl;
    */
    // If10.Даны две переменные целого типа : A и B.Если их значения не равны,
        //то присвоить каждой переменной сумму этих значений, а если равны,
        //то присвоить переменным нулевые значения.Вывести новые значения
        //переменных A и B.
   /* int a, b;
    cin >> a >> b;
    if (a != b) {
       int sum = a + b;
       a = sum;
       b = sum;
    }
    else {
        a = 0;
        b = 0;
    }
    cout << a << " i " << b << endl;*/
   // If11.Даны две переменные целого типа : A и B.Если их значения не равны, то
      //  присвоить каждой переменной большее из этих значений, а если равны,
       // то присвоить переменным нулевые значения.Вывести новые значения
       // переменных A и B.
   /* int a, b;
    cin >> a >> b;
    if (a != b) {
        if (a > b) {
            b = a;
        }
        else if (b > a) {
            a = b;
        }
    }
    else {
        a = 0;
        b = 0;
    }
        cout << a << " " << b << endl;*/
  //  If12◦
       // .Даны три числа.Найти наименьшее из них.
   /* int a, b, c;
    cin >> a >> b >> c;
    if (a > b && b > c || b > a && a >c) {
        cout << c << endl;
    }
    else if (b > c && c > a || c > b && b > a) {  
        cout << a << endl;
    }
    else if (c > a && a > b || a > c && c > b ) {
        cout << b << endl;
    }*/
   // If13.Даны три числа.Найти среднее из них(то есть число, расположенное
       // между наименьшим и наибольшим).
 /* int a, b, c;
    cin >> a >> b >> c;
    if (a > b && b > c ) {
        cout << b << endl;
    }
    else if (c > b && b > a) {
        cout << b << endl;
    }
    else if ( b > a && a > c ) {
        cout << a << endl;
    }
    else if (c > a && a > b) {
        cout << a << endl;
    }
    else if (b > c && c > a) {
        cout << c << endl;
    }
    else if (a > c && c > b) {
        cout << c << endl;
    }*/
//If14.Даны три числа.Вывести вначале наименьшее, а затем наибольшее из
//данных чисел.
/*int a, b, c;
cin >> a >> b >> c;
if (a > b && b > c) {
    cout << c << endl;
    cout << a << endl;
}
else if (c > b && b > a) {
    cout << a << endl;
    cout << c << endl;
}
else if (b > a && a > c) {
    cout << c << endl;
    cout << b << endl;
}
else if (c > a && a > b) {
    cout << b << endl;
    cout << c << endl;
}
else if (b > c && c > a) {
    cout << a << endl;
    cout << b << endl;
}
else if (a > c && c > b) {
    cout << b << endl;
    cout << a << endl;
}*/
//If15.Даны три числа.Найти сумму двух наибольших из них
//int a, b, c, cym;
//cin >> a >> b >> c;
/*if (a > b && b > c) {
    cym = a + b;
    cout << cym << endl;
}
else if (c > b && b > a) {
    cym = c + b;
    cout << cym << endl;
}
else if (b > a && a > c) {
    cym = b + a;
    cout << cym << endl;
}
else if (c > a && a > b) {
    cym = c + a;
    cout << cym << endl;
}
else if (b > c && c > a) {
    cym = b + c;
    cout << cym << endl;
}
else if (a > c && c > b) {
    cym = a + c;
    cout << cym << endl;
}*/
//If16.Даны три переменные вещественного типа : A, B, C.Если их значения
//упорядочены по возрастанию, то удвоить их; в противном случае заменить значение каждой переменной на противоположное.Вывести новые
//значения переменных A, B, C.
/*int a, b, c;
cin >> a >> b >> c;
if (c > b && b > a ) {
    a = a * 2;
    b = b * 2;
    c = c * 2;
    
}
else {
    a = -a;
    b = -b;
    c = -c;
}
cout << a << " " << b << " " << c << endl;*/
//If17.Даны три переменные вещественного типа : A, B, C.Если их значения
//упорядочены по возрастанию или убыванию, то удвоить их; в противном случае заменить значение каждой переменной на противоположное.
//Вывести новые значения переменных A, B, C.
/*int a, b, c;
cin >> a >> b >> c;
if (c > b && b > a || a > b && b > c) {
    a = a * 2;
    b = b * 2;
    c = c * 2;

}
else {
    a = -a;
    b = -b;
    c = -c;
}
cout << a << " " << b << " " << c << endl;*/
//If18.Даны три целых числа, одно из которых отлично от двух других, равных между собой.Определить порядковый номер числа, отличного от
//остальных.
/*int a, b, c;
cin >> a >> b >> c;
if (c == b) {
    cout << " 1 " << endl;
}
else if (c == a) {
    cout << " 2 " << endl;
}
else if (b == a) {
    cout << " 3 " << endl;;
}
cout << a << " " << b << " " << c << endl;*/







    return 0;
}

