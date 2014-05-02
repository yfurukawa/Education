/**
 * Sorter.h<br>
 *
 *  Created on: Apr 5, 2014<br>
 *      Author: yoshi
 */

#include <string>

#ifndef SORTER_H_
#define SORTER_H_

class Sorter {
private:
	int* inputDatas;
	int* sortedData;
	int numberOfInputData;
	int currentPosition;
	char** inputData;

public:
	Sorter(int argc, char** argv);
	virtual ~Sorter();
	void sort();
private:
	Sorter();
	void prepareInputDataArray();
	void scootOver(int position);
	void insert(int data);
	void processData();
	void printResult();
	int stringToInteger(std::string numberOfString);
};

#endif /* SORTER_H_ */
