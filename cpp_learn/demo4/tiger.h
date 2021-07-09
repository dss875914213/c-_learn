#pragma once
#include"animal.h"
class tiger:public animal
{
public:
	void eat() override;
	void move() override final;

};

