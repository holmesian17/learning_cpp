#include <iostream>
// This is a comment
/*
  * and this is a multi-line comment.
  * See?
*/

int main()
{
  std::cout << "Enter two numbers:" << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  std::cout << "The division of " << v1 << " by " << v2 << " divided is "
            << v1 / v2 << " with a remainder of " << v1 % v2 << "."<< std::endl;
  std::cout << "The product of " << v1 << " and "<< v2 << " is "
            << v1 * v2 << "." << std::endl;
  std::cout << "The remainder of " << v1 << " minus "<< v2 << " is "
            << v1 - v2 << "." << std::endl;
  std::cout << "The sum of " << v1 << " and "<< v2 << " is "
            << v1 + v2 << "." << std::endl;

  return 0;
}
