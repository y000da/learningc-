#include <iostream>

using namespace std;

class EngDist {
  private:
    int feet;
    float inches;
  public:
    EngDist() : feet(0), inches(0.0) { }

    EngDist(float fltfeet) {
      feet = int(fltfeet);
      inches = 12 * (fltfeet - feet);
    }

    EngDist(int ft, float in) : feet(ft), inches(in) { }
    

    void showdist() {
      cout << feet << "\' " << inches << '\"' << endl; 
    }

    friend EngDist operator+(EngDist d1, EngDist d2) {
      int f = d1.feet + d2.feet;
      float i = d1.inches + d2.inches;
      if (i >= 12.0) { i -= 12.0; f++; }
      return EngDist(f, i);
    }
};

int main() {
  EngDist d1 = 2.5;
  EngDist d2 = 1.25;
  EngDist d3;

  cout << endl << "d1 = "; d1.showdist();
  cout << endl << "d2 = "; d2.showdist();

  d3 = d1 + 10.0;
  cout << endl << "d3 = "; d3.showdist();

  d3 = 10.1 + d2;
  cout << endl << "d3 = "; d3.showdist();

  return 0;
}