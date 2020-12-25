# PP4FPGA FIR

## Introduction
* Implementing Finite Impulse Response (FIR) filter

## Usage
1. Generate IP from HLS source using Vivado HLS
2. Generate `.bit` and `.hwh` using Vivado

## Reference
* [Xilinx/Vivado/2019.2/examples/design](https://xupsh.gitbook.io/pp4fpgas-cn/zheng-wen/02-finite-impulse-response-filters)

## Improvements
1. Additional `#pragma HLS pipeline` for lower latency, while using more FPGA resources
