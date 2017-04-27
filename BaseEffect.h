#ifndef _BASE_EFFECT_H
#define _BASE_EFFECT_H

class BaseEffect {
public:
    BaseEffect();

    /* virtual functions */
    virtual ~BaseEffect();
    virtual void init(int mode) = 0;
    virtual void process(float *ibuf, float *obuf, int num_frames, int num_chn) = 0;
};

#endif
