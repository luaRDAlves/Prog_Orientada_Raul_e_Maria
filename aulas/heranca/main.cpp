#include <iostream>

using namespace std;

class Shape {
public:
	Shape(int w, int h) {
		cout << "<<" << this << ">> Shape::constructed(int w = " << w << ", int h = " << h << " )!" << endl;
		_width = w;
		_height = h;
	}

protected:
	int width() { return _width; }
	int height() { return _height; }

private:
	int _width;
	int _height;

};

class PaintCost {
public:
	PaintCost(int c): _cost_per_m2(c) {
		cout << "<<" << this << ">> PaintCost constructed(int c = " << c << ")!" << endl;
	}

	int getCost(int area) { return area * _cost_per_m2; }

private:
	int _cost_per_m2;

};

class Rectangle: public Shape, public PaintCost {
public:
	Rectangle(int side): Shape(side, side), PaintCost(70) { 
		cout << "<<" << this << ">> Rectangle::constructed(int side = " << side << ")!" << endl;
	}
	Rectangle(int w, int h, int cost = 70): Shape(w, h), PaintCost(cost) { 
		cout << "<<" << this << ">> Rectangle::constructed(int w = " << w << ", int h = " << h << " )!" << endl;
	}
	int getArea() { return width() * height(); }

};


int main (int argc, char* argv[]) {
	cout << "Hello heranca !" << endl;

	Rectangle r1(5, 7);
	Rectangle r2(6, 5, 120);

	cout << "Rectangle r1 area = " << r1.getArea() << ", cost = " << r1.getCost(r1.getArea()) << endl;
	cout << "Rectangle r2 area = " << r2.getArea() << endl;

	return 0;
}
