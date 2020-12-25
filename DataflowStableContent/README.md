# xdesign dataflow_stable_content

## Introduction
* Given two arrays A and B, calculate the summation of `A[B[i]]` where `B[i] != 0`

## Interface
* 2 AXI4-Stream input (in1, in2)
* 1 AXI4-Stream output (out)
* AXI4-Lite control registers

## Usage
1. Generate IP from HLS source using Vivado HLS
2. Generate `.bit` and `.hwh` using Vivado
3. Run `dataflow.ipynb` on ZedBoard

## Reference
* Xilinx/Vivado/2019.2/examples/design

## Improvements
1. Change from hls_stream to AXI4-Stream
2. Add software simulation for results verfication in HLS testbench
3. Change `#pragma HLS pipeline` position to achieve `II=1`
