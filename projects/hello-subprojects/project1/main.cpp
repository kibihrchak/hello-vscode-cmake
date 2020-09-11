#include <iostream>

int main(int, char **)
{
  int a;

#if defined(FOO)
  a = 2;
#elif defined(BAR)
  a = 3;
#else
  static_assert("Neither FOO nor BAR defined");
#endif

  std::cout << "Hello, project1! a is: " << a << "\n";
}
