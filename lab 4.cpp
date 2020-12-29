// lab 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
#include "Tech.h"


using namespace std;

int main()
{

    Microfridge microfridge;

    microfridge.vvod();
    cout << endl << endl;
    microfridge.print();








    //cout << endl;



    //int fh, fc;
    //string b, p;
    //cout << "Fridge height: ";
    //cin >> fh;
    //cout << endl;
    //cout << "Fridge count: ";
    //cin >> fc;
    //cout << endl;
    //cout << "Fridge brand: ";
    //cin >> b;
    //cout << endl;
    //cout << "Fridge place: ";
    //cin >> p;
    //cout << endl;
    //Tech tech(b,p);
    //Fridge fridge(b, p, fh, fc);

    //cout << endl;

    //int mv;
    //string mc;
    //cout << endl;
    //cout << "Microwave brand: ";
    //cin >> b;
    //cout << endl;
    //cout << "Microwave place: ";
    //cin >> p;
    //cout << endl;
    //cout << "Microwave voltage: ";
    //cin >> mv;
    //cout << endl;
    //cout << "Microwave color: ";
    //cin >> mc;

    //
    //Microwave microwave(b,p,mv,mc);

    //cout << endl;



    //string tt;
    //int tdiag;
    //cout << endl;
    //cout << "TV brand: ";
    //cin >> b;
    //cout << endl;
    //cout << "TV place: ";
    //cin >> p;
    //cout << endl;
    //cout << "TV type display: ";
    //cin >> tt;
    //cout << endl;
    //cout << "TV diagonal: ";
    //cin >> tdiag;
    //TV tv(b, p, tt, tdiag);
    //cout << endl;

    //mass[0] = &tv;
    //mass[1] = &fridge;
    //mass[2] = &microwave;

    //for (int i = 0; i < 3; i++)
    //{
    //    mass[i]->print();
    //}
    Tech** mass = new Tech*[3];

  /*  cout << "TV Brand: " << tv.brand << endl << "place: " << tv.place << endl << "type display: " << tv.type_display << endl << "diagonal: " << tv.diagonal << endl << endl;
    cout << "Fridge Brand: " << fridge.brand << endl << "place: " << fridge.place << endl << "Fridge height: " << fridge.height<< endl << "Fridge count: " << fridge.count_p << endl << endl;
    cout << "Microwave Brand: " << microwave.brand << endl << "place: " << microwave.place << endl << "volage: " << microwave.voltage << endl << "count: " << microwave.color << endl << endl;*/

   /* cout << "Brand: " << endl;
    cin >> brand;
    cout << endl << "Mesto ispolzovaniya: " << endl;
    cin >> place;
    cout << "TV" << endl
    cout << "type display: " << endl;
    cin >> tv.type_display;
    cout << endl << "Diagonal: " << endl;
    cin >> tv.diagonal;
    cout << endl << "Brand: " << brand << " Mesto: " << place << " Type display: " << tv.type_display << " Diagonal: " << tv.diagonal << endl;
*/

    //tv.vvod();

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
