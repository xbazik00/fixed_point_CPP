# Basic fixed point arithmetics for C++.

This class implements fixed point data type that uses basic arithmetic 
and comparison operators based on boost library implementation 
boost::operators<T,U>. The class implements following operators:
* arithmetic: +,-,*,/,++,--,-(unary)
* comparison: <,>,<=,>=,==,!=
* stream operator: << (uses conversion to double)

This class was influenced by the class Fixed Point Class by 
Peter Schregle, 2009.

URL: https://www.codeproject.com/Articles/37636/Fixed-Point-Class