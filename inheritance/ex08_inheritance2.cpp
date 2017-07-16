

#include <cstdio>
#include <string>

using namespace std;

//Base class
class Vehicle {
	string _name;
	string _type;
	string _sound;
	bool _isMoving = true;
	Vehicle(){};
	friend const string & getName(const Vehicle & n);
protected:
	Vehicle(const string & n, const string & t, const string & s)
		: _name(n), _type(t), _sound(s) {};

public:
	const string & name() const { return _name; }
	const string & type() const { return _type; }
	const string & sound() const { return _sound; }
	bool isMoved(){ return _isMoving; }

	void start() const;
	void stop();
};
void Vehicle::start() const {
	printf(" %s! %s!!,  says %s the %s\n", _sound.c_str(), _sound.c_str(), _name.c_str(), _type.c_str());

}
void Vehicle::stop(){
	_isMoving = false;
	printf("%s the %s just STOPPED\n", _name.c_str(), _type.c_str());

}


//Base class to demonstrate multiple inheritance
class Wings{
	string _type;
	Wings(){};
protected:
	Wings(const string & w) : _type(w){};
public:
	const string & type() const{ return _type; }
};


//Derived class 1 with multiple inheritance
class Car :public Vehicle, Wings {
	int doors;
public:
	Car(string n, int d) : Vehicle(n, "car", "Rooov"), Wings("Angels-F"), doors(d){}
	void carStat() { printf("%s has %d doors\n", name().c_str(), doors); }
	string carname() const;
	void flight() const;
};
void Car::flight() const {
    printf ("%s can also fly using %s wings\n",
             Vehicle::name().c_str(), Wings::type().c_str()); }
string Car::carname() const { return name() + "-n"; }


//Derived class 2
class Motobike :public Vehicle{
	int wheels;
public:
	Motobike(string n, int w) : Vehicle(n, "bike", "Eeeenv"), wheels(w){}
	void bikeStat(){ printf("%s has %d wheels\n", name().c_str(), wheels); }
	void stop ()const{printf("bike Stops\n");}
};


//Derived class 3
class Boat :public Vehicle{
	const string & engine;
public:
	Boat(string n, const string & e) : Vehicle(n, "boat", "Swwoooh"), engine(e){}
	void boatStat() { printf("%s has %s engine\n", name().c_str(), engine.c_str()); }

};
const string & getName(const Vehicle & n){ return n._sound; }


//Main entry point
int main(int argc, char ** argv)
{
	Car c("RavFX", 10);
	Motobike m("GT-ok-MOTO", 1);
	Boat b("Glorie SEA", "45d Submerge");

	c.start();
	m.start();
	b.start();

	c.stop();
	m.stop();
	b.stop();

//    Vehicle *ap[] = {&c, &m, &b};
//    for (Vehicle *v : ap){
//        v->stop();
//    }

	c.carStat();
	c.flight();
	printf("%s is the car name\n", c.carname().c_str());
	printf("%s is friend name\n", getName(m).c_str());
	m.bikeStat();
	b.boatStat();
	return 0;

}

