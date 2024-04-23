#include <iostream>
#include <string>

// Base class Person
class Person {
protected:
    std::string name;

public:
    Person(const std::string& name) : name(name) {}

    void introduce() const {
        std::cout << "My name is " << name << ". ";
    }
};

// Derived class Son
class Son : public Person {
public:
    Son(const std::string& name) : Person(name) {}

    void introduce() const {
        Person::introduce();
        std::cout << "I am the son." << std::endl;
    }
};

// Derived class Grandson
class Grandson : public Son {
public:
    Grandson(const std::string& name) : Son(name) {}

    void introduce() const {
        Son::introduce();
        std::cout << "I am the grandson." << std::endl;
    }
};

int main() {
    Person father("John");
    Son son("Alex");
    Grandson grandson("Mike");

    father.introduce();
    std::cout << std::endl;

    son.introduce();
    std::cout << std::endl;

    grandson.introduce();
    std::cout << std::endl;

    return 0;
}

