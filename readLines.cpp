#include <iostream>
#include "stabbingLines.h"
#include <fstream>
void readLines(ifstream& inPutLineFile, Line linesArray[],
const int MaxLnsSize, int& numLines)
{

//Check for error
if(inPutLineFile.fail()){
	cerr<<"Error opening file"<<endl;
	exit(1);
}
Line ln;
while(!inPutLineFile.eof()){
for(int i=0;i<numLines;i++ ){
	int p;
	int x;
	int y;
	inPutLineFile>>p>>x>>y;
		
ln.Lid=p;
ln.p1=x;
ln.p2=y;
linesArray[i]=ln;
}
inPutLineFile.close();
}	
};
