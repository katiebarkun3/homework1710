#include <iostream>
#include <cmath>
using namespace std;
int main() {
	//Boolean16◦
	//.Дано целое положительное число.Проверить истинность высказывания :
	//«Данное число является четным двузначным».
	/*int a;
	bool res;
	cin >> a;
	res = a > 9 && a < 100 && a % 2 == 0;
	cout << boolalpha << res << endl;
*/


/*Boolean17◦
	.Дано целое положительное число.Проверить истинность высказывания :
«Данное число является нечетным трехзначным».*/
	/*int a;
	bool res;
	cin >> a;
	res = a > 99 && a < 1000 && a % 2 == 1;
	cout << boolalpha << res << endl;*/


	/*Boolean21◦
		.Дано трехзначное число.Проверить истинность высказывания :
	«Цифры данного числа образуют возрастающую последовательность».*/
	/*int a;
	bool res;
	cin >> a;
	res = abs(a);
	res=((a / 100) < (a % 100 / 10)) && ((a % 100 / 10) < (a % 10));
	cout << boolalpha << res << endl;*/


	//Boolean25◦
	//	.Даны числа x, y.Проверить истинность высказывания : «Точка с
	//	координатами(x, y) лежит во второй координатной четверти».
	/*int x, y;
	bool res;
	cout << "vvedite x i y" << endl;
	cin >> x >> y;
	res = x < 0 && y > 0 ;
	cout << boolalpha << res << endl;*/


	/*Boolean29◦
		.Даны числа x, y, x1, y1, x2, y2.Проверить истинность высказывания :
		«Точка с координатами(x, y) лежит внутри прямоугольника, левая
		верхняя вершина которого имеет координаты(x1, y1), правая нижняя —
		(x2, y2), а стороны параллельны координатным осям».*/
	int x, y, x1, y1, x2, y2;
	bool res;
	cout << "levaya verhnyaya vershina imeet koordinaty x1 i y1, pravaya nizhnyaya vershina imeet koordinaty x2 i y2 " << endl;
	cout << "vvedite x, y, x1, y1, x2, y2" << endl;
	cin >> x >> y >> x1 >> y1 >> x2 >> y2;
	x1 < x2;
	y1 > y2;
	res = x > x1 && x < x2 && y < y1 && y > y2 ;
	cout << boolalpha << res << endl;
	return 0;
}