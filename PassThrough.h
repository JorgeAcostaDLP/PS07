#ifndef _PASS_THROUGH_H
#define _PASS_THROUGH_H

class PassThrough : public BaseEffect {
public:
    PassThrough();

    /* virtual functions */
    virtual ~PassThrough();
    void init(int mode);
    void process(float *ibuf, float *obuf, int num_frames, int num_chn);
};

#endif
