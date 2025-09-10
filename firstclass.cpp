#include <iostream>
using namespace std;

class smallobj {
	public:
		int data;
		void setdata(int d) { data = d; }
		void showdata() { cout << "Значение поля равно " << data << endl; }
};

int main() {
	smallobj s1, s2;
	s1.data = 5;
	s1.showdata();
	s1.setdata(105);
	s2.setdata(97);

	s1.showdata();
	s2.showdata();

	return 0;
}
