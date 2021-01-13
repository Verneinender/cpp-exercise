// 4.7.cpp: 定义控制台应用程序的入口点。
//


#include <iostream>

struct William
{
    char brand[20];
    float diameter;
    float weight;
};

int main()
{
    using namespace std;

    William* example = new William;
    cout << "Please enter your pizza's information: " << endl;
    cout << "Brand: ";
    cin.getline(example->brand, 20);
    cout << "Diameter: ";
    cin >> example->diameter;
    cout << "Weight: ";
    cin >> example->weight;

    cout << "So the following is your pizza's information:" << endl;
    cout << "Brand: " << example->brand << ".\n";
    cout << "Diameter: " << example->diameter << "cm.\n";
    cout << "Weight: " << example->weight << "kg.\n";
    delete example;
    system("pause");
    return 0;
}
