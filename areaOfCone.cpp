#include <iostream> 
#include <cmath>

using namespace std;
 
 class Shape {
    protected: 
        double length = 0, height = 0, base = 0;
        double radius = base / 2; 

        public: 
            void getDimension();
 };

void Shape::getDimension() {
    if (length > 0) {
        cout << "The length is " << length << endl; 
    }
    if (height > 0) {
        cout << "The height is " << height << endl; 
    }
    if (base > 0) {
        cout << "The base is " << base << endl; 
    }
    if (radius > 0) {
        cout << "The radius is " << radius << endl; 
    }
}

class Cone:public Shape {
    public: 
    Cone(double r, double h);
    void Cone_Vol();
    void Cone_Area();
}; 

Cone::Cone (double r, double h) {
    radius = r; 
    height = h; 
};

void Cone::Cone_Vol() {
    double Vol = 0; 
    Vol = 3.1415926 * (radius * radius * height) / 3;
    cout << "The volume of the cone is: " << Vol << endl;
}

void Cone::Cone_Area() {
    double slantHeight = sqrt((radius * radius ) + (height * height));
    double area = 3.1415926 * radius * (radius + slantHeight);
    cout << "The surface area of the cone is: " << area << endl;
}

int main() {
    Cone bigCone(5, 2);
    bigCone.getDimension();
    bigCone.Cone_Vol();
    bigCone.Cone_Area();

    return 0;
}