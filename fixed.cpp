/**
 * Benchmark for fixed point class Fixed<T,X>.
 */

#include "fixed.h"
#include <cmath>
#include <random>

#include <sys/time.h>
typedef unsigned long long timestamp_t;

/**
 * Gets timestamp from unix time.
 */
static timestamp_t get_timestamp ()
{
  struct timeval now;
  gettimeofday (&now, NULL);
  return  now.tv_usec + (timestamp_t)now.tv_sec * 1000000;
}

int main(){
  typedef numeric::Fixed<int16_t ,4> fixed;
  
  double full = 0;

  fixed a = 0.5;
  fixed b = 0.5;
  int af = 2;
  int bf = 1;
  
  for(int i = 0; i < 100000000; i++){
    timestamp_t t0 = get_timestamp(); 
    fixed c = 0.5;
    timestamp_t t1 = get_timestamp();
    full += (t1 - t0)/ 1000000.0L;
  }
  std::cout << "Conversion: " << full << std::endl;
  full = 0;

  for(int i = 0; i < 100000000; i++){
    timestamp_t t0 = get_timestamp(); 
    a + b;
    timestamp_t t1 = get_timestamp();
    full += (t1 - t0)/ 1000000.0L;
  }
  std::cout << "Addition-fixed: " << full << std::endl;
  full = 0;

  for(int i = 0; i < 100000000; i++){
    timestamp_t t0 = get_timestamp(); 
    af + bf;
    timestamp_t t1 = get_timestamp();
    full += (t1 - t0)/ 1000000.0L;
  }
  std::cout << "Addition-float: " << full << std::endl;
  full = 0;

  for(int i = 0; i < 100000000; i++){
    timestamp_t t0 = get_timestamp(); 
    a * b;
    timestamp_t t1 = get_timestamp();
    full += (t1 - t0)/ 1000000.0L;
  }
  std::cout << "Multiplication-fixed: " << full << std::endl;
  full = 0;

  for(int i = 0; i < 100000000; i++){
    timestamp_t t0 = get_timestamp(); 
    af * bf;
    timestamp_t t1 = get_timestamp();
    full += (t1 - t0)/ 1000000.0L;
  }
  std::cout << "Multiplication-float: " << full << std::endl;
  full = 0;

  for(int i = 0; i < 100000000; i++){
    timestamp_t t0 = get_timestamp(); 
    a / b;
    timestamp_t t1 = get_timestamp();
    full += (t1 - t0)/ 1000000.0L;
  }
  std::cout << "Division-fixed: " << full << std::endl;
  full = 0;

  for(int i = 0; i < 100000000; i++){
    timestamp_t t0 = get_timestamp(); 
    af / bf;
    timestamp_t t1 = get_timestamp();
    full += (t1 - t0)/ 1000000.0L;
  }
  std::cout << "Division-float: " << full << std::endl;
}