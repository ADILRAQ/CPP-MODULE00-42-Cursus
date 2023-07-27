#include <iostream>
#include <vector>

int   main()
{
   int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) );
   typedef std::vector<int>  ints_t;

   ints_t   amount(amounts, amounts + amounts_size);
   // ints_t::iterator  beg = amount.begin();
   // ints_t::iterator  end = amount.end();

   int   i = 0;
   while (i < 8)
      std::cout << amount[i++] << " ";
   std::cout << std::endl;
   ints_t::iterator  it = amount.begin();
   while (it != amount.end())
   {
      std::cout << "huh " << *(it++) << std::endl;
      // it++;
   }
}