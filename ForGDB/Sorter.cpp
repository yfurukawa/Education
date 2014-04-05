/**
 * Sorter.cpp<br>
 *
 *  Created on: Apr 5, 2014<br>
 *      Author: yoshi
 */

#include <iostream>
#include <cstdlib>
#include "Sorter.h"

Sorter::Sorter() : numberOfInputData(0), currentPosition(0), inputData(NULL) {
	//! TODO 自動生成されたコンストラクター・スタブ

}

Sorter::Sorter(int argc, char** argv) : numberOfInputData(argc - 1), currentPosition(0), inputData(argv) {
}

Sorter::~Sorter() {
	//! TODO Auto-generated destructor stub
}

void Sorter::sort() {
	prepareInputDataArray();
	processData();
	printResult();
}

void Sorter::prepareInputDataArray() {
	for(int i = 0; i < numberOfInputData; ++i) {
		inputDatas[i] = std::atoi(inputData[i+1]);
	}
}

void Sorter::scootOver(int position) {
	for(int i = currentPosition; i > position; --i) {
		sortedData[i] = sortedData[i-1];
	}
}

void Sorter::insert(int data) {
    int j;
    if (currentPosition == 0) { // 単純に、yが空の場合
    	sortedData[0] = data;
        return;
    }
    // new_yを越える最初の要素に対する位置yの直前に
    // 挿入する必要がある
    for (j = 0; j < currentPosition; j++) {
        if (data < sortedData[j]) {
            // new_yを挿入する前に、
            // y[j], y[j+1],... と右に移動する
            scootOver(j);
            sortedData[j] = data;
            return;
        }
        // もうひとつの場合： new_y > 既存のyの全要素
        sortedData[currentPosition] = data;
    }
}

void Sorter::processData() {
    for (currentPosition = 0; currentPosition < numberOfInputData; ++currentPosition)
        // new y をy[0],...,y[num_y-1]の間の
        // 適切な場所に挿入する
        insert(inputDatas[currentPosition]);
}

void Sorter::printResult() {
	for(int i = 0; i < numberOfInputData; ++i) {
		std::cout << sortedData[i] << std::endl;
	}
}
