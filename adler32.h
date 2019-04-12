/*
 *  adler32.h
 *
 *  copyright (c) 2019 Xiongfei Shi
 *
 *  author: Xiongfei Shi <jenson.shixf(a)gmail.com>
 *  license: Apache2.0
 *
 *  https://github.com/shixiongfei/adler32
 */

#ifndef __ADLER32_H__
#define __ADLER32_H__

#ifdef __cplusplus
extern "C" {
#endif

unsigned int adler32(unsigned int adler, const void *buffer, int len);
unsigned int adler32_combine(unsigned int adler1, unsigned int adler2,
                             int len2);
unsigned int adler32_rolling(unsigned int adler, unsigned char inbyte,
                             unsigned char outbyte, int window_size);

#ifdef __cplusplus
};
#endif

#endif /* __ADLER32_H__ */
