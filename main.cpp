#include <iostream>
using namespace std;

/*class Surface{
    public:
        int color;
        int height;
        int width;
 
        Surface(int color, int sizex, int sizey){
            color = color;
            height = sizey;
            width = sizex;
        };*/
        /*int surf[height][width] = {};
            for (int i = 0; i<height; i = i + 1){
                for (int j = 0; j<width; j = j + 1){
                    surf[i][j] = color;
                };
            };*/

        /*void draw(){
            for (int y= 0; y < 5; y = y + 1){
                for (int x = 0; x < 5; x = x + 1){
                    std::cout << surf[y][x];
                };
                std::cout << "\n";
            };
        };*/
    
    /*void ah(){cout << height;};

};

int main(){
    Surface surf(0, 5, 5);
    return 0;
}*/
class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z) {  // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }
    void ah(){
    cout << brand;
    };
};

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  carObj1.ah();
  return 0;
};