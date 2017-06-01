// MartixManipulation.cpp : 定义控制台应用程序的入口点。
//

//#include <iostream>
//#include "Matrix.hpp"
//#include <windows.h>
//#include <string>
//#include <fstream>
//using namespace GPSDCurriculumDesign;


//int main()
//{
//	std::string dataPath = "..\\data\\";
//	std::string filename = "Matrix.txt";
//	std::ifstream fin(dataPath + filename);
//	std::string oneLineOfFile;
//	int rows = 0;
//	int cols = 0;
//	Matrix<double> matrix;
//	while (!fin.eof()) {
//		std::getline(fin, oneLineOfFile);
//		if (std::strcmp(oneLineOfFile.c_str(), "MATRIXROW") == 0) {
//			std::getline(fin, oneLineOfFile);
//			sscanf(oneLineOfFile.c_str(), "%d", &rows);
//		}
//		else if (std::strcmp(oneLineOfFile.c_str(), "MATRIXCOL") == 0) {
//			std::getline(fin, oneLineOfFile);
//			sscanf(oneLineOfFile.c_str(), "%d", &cols);
//		}
//		else if (std::strcmp(oneLineOfFile.c_str(), "MATRIXDATA") == 0) {
//			if (rows == 0 || cols == 0) {
//				std::cout << "File Format wrong" << std::endl;
//				return -1;
//			}
//			matrix = Matrix<double>(rows, cols);
//			//Matrix<double> matrix(rows, cols);
//			for (int i = 0; i < rows * cols; i++) {
//				fin >> oneLineOfFile;
//				double oneData = 0;
//				sscanf(oneLineOfFile.c_str(), "%lf", &oneData);
//				matrix.ChangeElement(i / rows, i % rows, oneData);
//			}
//			break;
//		}
//	}
//	fin.close();
//
//	std::cout << matrix << std::endl;
//
//	system("pause");
//	return 0;
//}