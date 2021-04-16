#include <iostream>
#include "stabbingLines.h"


void printLineByCoords(LineId lid, Line linesArray[], const
int MaxLnsSize, Point pointsArray[], const int MaxPntsSize)
{
	int x1;
	int y1;
	int x2;
	int y2;
	for(int i=0;i<MaxLnsSize;i++){
		for(int j=0;j<MaxPntsSize;j++){
		if(linesArray[i].Lid==lid){
			if(pointsArray[j].Pid==linesArray[i].p1){
				x1=pointsArray[j].x;
				y1=pointsArray[j].y;
			}
			if(pointsArray[j].Pid==linesArray[i].p2){
				x2=pointsArray[j].x;
				y2=pointsArray[j].y;
			}
			
		}
	}

	}
	cout<<lid<<"[("<<x1<<" , "<<y1<<") , ("<<x2<<" , "<<y2<<")]"<<endl;
};
