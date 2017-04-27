#include "BaseEffect.h"
#include "PassThrough.h"

PassThrough::PassThrough(void) {}

PassThrough::~PassThrough() {}

void PassThrough::init(int mode) {}

void PassThrough::process(float *ibuf, float *obuf, int num_frames, int num_chn) {
    /* copy input to output */
    for (int i=0; i<num_frames; i++) {
        for (int j=0; j<num_chn; j++) {
            obuf[i*num_chn + j] = ibuf[i*num_chn +j];
        }
    }
}
