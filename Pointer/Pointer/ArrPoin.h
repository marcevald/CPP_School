#pragma once

class ArrPoin
{
public:
	ArrPoin();
	ArrPoin(int aSize);
	void setIx(int anI, int aV);
	int getIx(int anI);
	~ArrPoin(void);

private:
	int	arraySize;
	int* varSizeArray;
};
