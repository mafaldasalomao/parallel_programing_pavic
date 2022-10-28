#pragma once
#ifndef GPUFUN_H
#define GPUFUN_H
class useGPU
{
public:
	void adding(int* c, const int* a, const int* b, unsigned int size);
};
#endif