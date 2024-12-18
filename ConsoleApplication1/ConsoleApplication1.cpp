

#include <iostream>
using namespace std;

class mobilePhone {
protected:
	bool canOn;
	bool canCall;
public:
	virtual void phone() = 0;
	virtual void Info() {
		cout << "Has turn on" << canOn << endl;
		cout << "Call me babe" << canCall << endl;
	}

};

class SmartPhone : public mobilePhone {
public:
	SmartPhone() {
		canOn = true;
		canCall = true;
	}
	void Info() {
		cout << "Sensory Screen" << endl;
	}
	void phone() {
		cout << "Play video games" << endl;
	}

};
class CameraPhone : public mobilePhone {
public:
	CameraPhone() {
		canOn = true;
		canCall = true;
	}
	void Info() {
		cout << "Got cool camera" << endl;
	}
	void phone() {
		cout << "make tokitoks" << endl;
	}

};
int main()
{
	mobilePhone* obj = new SmartPhone();

	obj->Info();
	obj->phone();

	obj = new CameraPhone();

	obj->Info();
	obj->phone();


	
}

