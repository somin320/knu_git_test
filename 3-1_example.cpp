#include <iostream>
using namespace std;

class Circle {  //circle �����
public:
	int radius;
	double getArea();
};

double Circle::getArea() { //circle ������
	return 3.14 * radius * radius;
}

int main() {
	Circle donut; //��ü donut ����
	donut.radius = 2; // donut�� ��� ���� ����, donut ��ü�� �������� 1�� ����
	double area = donut.getArea(); // donut�� ��� �Լ� ȣ��, donut ��ü�� ���� �˾Ƴ���
	cout << "donut ������ " << area << endl;

	Circle pizza;
	pizza.radius = 30; //pizza ��ü�� �������� 30���� ����
	area = pizza.getArea(); //pizza ��ü�� ���� �˾Ƴ���
	cout << "pizza ������ " << area << endl;
}