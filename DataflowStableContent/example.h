// 67d7842dbbe25473c3c32b93c0da8047785f30d78e8a024de1b57352245f9689
#ifndef __MSOC_EXAMPLE_H__
#define __MSOC_EXAMPLE_H__

#include <hls_stream.h>
#include <ap_axi_sdata.h>

typedef ap_axiu<32,1,1,1> value_t;
typedef hls::stream<value_t> stream_t;

#endif
