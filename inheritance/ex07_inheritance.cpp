
#include <cstdio>
#include <string>

using namespace std;

//Base class

class Animal{
    string _name;
    string _type;
    string _sound;
    //this will prevent the construction of the base class
    Animal(){};
protected:
    //Protected constructor for use by derived classes
    Animal(const string &n, const string &t, const string &s )
    :_name(n), _type(t), _sound(s){}

public:
    void speak() const;
    const string &name() const {return _name;}
    const string &type() const {return _type;}
    const string &sound() const {return _sound;}
};

//speak method of class Animal
void Animal::speak() const{
    printf("%s the %s says %s\n", _name.c_str(), _type.c_str(), _sound.c_str());
}

//Dog class - derived from Animal
class Dog : public Animal {
    int walked;

public:
    Dog(string n) : Animal(n, "dog", "woof"), walked(0) {};
    int walk() {return ++walked;}
};

class Pig : public Animal{
    int bathed;
    int fed;
    bool isDirty = true;
public:
    Pig(n): Animal(n, "pig","snoth" ), bathed(0),fed(0){}
    int bath();
    void play();
    int feed(string &food_name);
};

int Pig::bath(){
  if(isDirty)
    {
    printf("Bath the Pig %s", name());
    isDirty = false;
    return ++bathed;
    }
}

void Pig::play()
{
    printf("Noook! nook!! pig play..Dirty");
        isDirty = true;
}

int Pig::feed(string &food_name)
{
    printf("Feeding %s with %s", name(), food_name.c_str);
    return ++fed;s
}


int main(int argc, char ** argv)
{
    Dog d("Rover");
    Pig p("Arnold");

    d.speak();
    c.speak();
    p.speak();

    printf("the dog has been walked %d times\n", d.walk());
    printf("the pig has been fed %d times\n", p.feed());
}
