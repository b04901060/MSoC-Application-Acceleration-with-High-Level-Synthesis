// 67d7842dbbe25473c3c32b93c0da8047785f30d78e8a024de1b57352245f9689
#include <iostream>
#include <vector>
#include <stdlib.h>
#include "example.h"

void example(stream_t &in1, stream_t &in2, stream_t &out);

int main()
{
  // Declare streams
  stream_t in1, in2, out;


  value_t valDataCtrl;
  valDataCtrl.data = 0;
  valDataCtrl.keep = 0xF;
  valDataCtrl.strb = 0xF;
  valDataCtrl.user = 0;
  valDataCtrl.last = 0;
  valDataCtrl.id   = 0;
  valDataCtrl.dest = 0;

  // Write data into a and b
  std::vector<int> a, b;
  for (int i = 0; i < 10; i++)
  {
    valDataCtrl.data = rand() % 10;
    a.push_back(valDataCtrl.data);
    in1.write(valDataCtrl);
    valDataCtrl.data = rand() % 10;
    b.push_back(valDataCtrl.data);
    in2.write(valDataCtrl);
  }

  example(in1, in2, out);

  int sum0 = 0;
  for (int i = 0; i < 10; i++)
  {
    if (b[i] != 0) {
      sum0 += a[b[i]];
    }
  }

  int sum1 = out.read().data;

  std::cout << "sum (sim) = " << sum0 << std::endl;
  std::cout << "sum (hls) = " << sum1 << std::endl;

  return 0;
}
