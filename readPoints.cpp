#include <iostream>
#include "stabbingLines.h"
#include <fstream>
void readPoints(ifstream& inPutPointFile, Point pointsArray[],
const int MaxPntsSize, int& numPoints)
{
	
//Check for error
if(inPutPointFile.fail()){
	cerr<<"Error opening file"<<endl;
	exit(1);
}

while(!inPutPointFile.eof()){
	Point pt;
for(int i=0;i<numPoints;i++ ){
	int p;
	int x;
	int y;
	inPutPointFile>>p>>x>>y;
		
pt.Pid=p;
pt.x=x;
pt.y=y;
pointsArray[i]=pt;
}
inPutPointFile.close();
}
};

