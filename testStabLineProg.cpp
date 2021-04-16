#include <iostream>
#include "readPoints.cpp"
#include "readLines.cpp"
#include "printLineByCoords.cpp"
#include "getStabbedLines.cpp"
#include <fstream>
using namespace std ;
Point pArray[8];
int main(){
int numPoints=8;
int NumOfStbLines;
Line lArray[5];
Line stabbedLines[8];
int numLines=5;

ifstream inPutPointFile("points.txt");
ifstream inPutLineFile("lines.txt");
readPoints(inPutPointFile, pArray,8, numPoints);
readLines( inPutLineFile, lArray, 5, numLines);
printLineByCoords(4, lArray, 5, pArray, 8);
getStabbedLines (4, lArray, 5, 5, pArray, 8, stabbedLines, 8, NumOfStbLines);

return 0;
}
