#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
public:

    int getAge();
    char getSex();
    std::string getId();

    void setAge(int sAge);
    void setSex(char sSex);
    void setId(std::string sId);

protected:

private:
    int age;
    char sex;
    std::string id;
};

#endif // ANIMAL_H
