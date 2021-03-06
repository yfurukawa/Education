/**
 * Sorter.cpp<br>
 *
 *  Created on: Apr 5, 2014<br>
 *      Author: yoshi
 */

#include <iostream>
#include <sstream>
//#include <boost/lexical_cast.hpp>
#include "Sorter.h"

Sorter::Sorter() : numberOfInputData(0), currentPosition(0), inputData(NULL) {
	//! TODO 自動生成されたコンストラクター・スタブ

}

Sorter::Sorter(int argc, char** argv) : inputDatas(NULL), sortedData(NULL), numberOfInputData(argc - 1), currentPosition(0), inputData(argv) {
}

Sorter::~Sorter() {
}

void Sorter::sort() {
	prepareInputDataArray();
	processData();
	printResult();
}

void Sorter::prepareInputDataArray() {
	inputDatas = new int[numberOfInputData];
	sortedData = new int[numberOfInputData];
	for(int i = 0; i < numberOfInputData; ++i) {
		inputDatas[i] = stringToInteger(inputData[i+1]);
//		inputDatas[i] = boost::lexical_cast<int> (inputData[i+1]);
	}
}

void Sorter::scootOver(int position) {
	for(int i = currentPosition; i > position; --i) {
		sortedData[i] = sortedData[i-1];
	}
}

void Sorter::insert(int data) {
    int j;
    if (currentPosition == 0) { // 単純に、currentPositionが空の場合
    	sortedData[0] = data;
        return;
    }
    // dataを越える最初の要素に対する位置の直前に
    // 挿入する必要がある
    for (j = 0; j < currentPosition; j++) {
        if (data < sortedData[j]) {
            // dataを挿入する前に、
            // 右に移動する
            scootOver(j);
            sortedData[j] = data;
            return;
        }
        // もうひとつの場合： data > 既存のsortedDataの全要素
        sortedData[currentPosition] = data;
    }
}

void Sorter::processData() {
    for (currentPosition = 0; currentPosition < numberOfInputData; ++currentPosition)
        // data をsortedData[0],...,sortedData[numberOfInputData-1]の間の
        // 適切な場所に挿入する
        insert(inputDatas[currentPosition]);
}

void Sorter::printResult() {
	for(int i = 0; i < numberOfInputData; ++i) {
		std::cout << sortedData[i] << std::endl;
	}
}

int Sorter::stringToInteger(std::string numberOfString) {
	std::istringstream iss(numberOfString);
	int num(0);
	iss >> num;
	return num;
}

