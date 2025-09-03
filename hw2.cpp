#include <iostream>
using namespace std;
class Student
{
private:
  char *name;
  char *age;
  char *date;
  char *number;
  char *city;
  char *country;
  char *city_in;
  char *group_num;

public:
  void Print()
  {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Date: " << date << endl;
    cout << "Number: " << number << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
    cout << "City I.: " << city_in << endl;
    cout << "Group Number: " << group_num << endl;
  }
  void Init(const char *n, const char *a, const char *d, const char *num, const char *c, const char *co, const char *ci, const char *gn)
  {
    name = new char[strlen(n) + 1];
    strcpy(name, n);

    age = new char[strlen(a) + 1];
    strcpy(age, a);

    date = new char[strlen(d) + 1];
    strcpy(date, d);

    number = new char[strlen(num) + 1];
    strcpy(number, num);

    city = new char[strlen(c) + 1];
    strcpy(city, c);

    country = new char[strlen(co) + 1];
    strcpy(country, co);

    city_in = new char[strlen(ci) + 1];
    strcpy(city_in, ci);

    group_num = new char[strlen(gn) + 1];
    strcpy(group_num, gn);
  }
  void MyDel()
  {
    delete[] name;
    delete[] age;
    delete[] date;
    delete[] number;
    delete[] city;
    delete[] country;
    delete[] city_in;
    delete[] group_num;
  }
  const char *GetName()
  {
    return name;
  }
  const char *GetAge()
  {
    return age;
  }
  const char *GetDate()
  {
    return date;
  }
  const char *GetNumber()
  {
    return number;
  }
  const char *GetCity()
  {
    return city;
  }
  const char *GetCountry()
  {
    return country;
  }
  const char *GetCityIn()
  {
    return city_in;
  }
  const char *GetGroupN()
  {
    return group_num;
  }
  void SetName(const char *n)
  {
    delete[] name;
    name = new char[strlen(n) + 1];
    strcpy(name, n);
  }
  void SetAge(const char *a)
  {
    delete[] age;
    age = new char[strlen(a) + 1];
    strcpy(age, a);
  }
  void SetDate(const char *d)
  {
    delete[] date;
    date = new char[strlen(d) + 1];
    strcpy(date, d);
  }
  void SetNum(const char *n)
  {
    delete[] number;
    number = new char[strlen(n) + 1];
    strcpy(number, n);
  }
  void SetCity(const char *c)
  {
    delete[] city;
    city = new char[strlen(c) + 1];
    strcpy(city, c);
  }
  void SetCountry(const char *co)
  {
    delete[] country;
    country = new char[strlen(co) + 1];
    strcpy(country, co);
  }
  void SetCI(const char *ci)
  {
    delete[] city_in;
    city_in = new char[strlen(ci) + 1];
    strcpy(city_in, ci);
  }
  void SetGN(const char *gn)
  {
    delete[] group_num;
    group_num = new char[strlen(gn) + 1];
    strcpy(group_num, gn);
  }
};
int main()
{
  Student obj;
  obj.Init("Oleg", "19", "20.10.2006", "+3809767812", "Odesa", "Ukraine", "IT Step", "242");
  obj.Print();
  obj.SetAge("25");
  cout << "Changed: " << obj.GetAge() << endl;
  obj.Print();
  obj.MyDel();
}
