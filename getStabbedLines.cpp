#include <iostream>
#include "stabbingLines.h"

void getStabbedLines (const int xcoord, Line linesArray[], const
int MaxLnsSize, const int NumLines, Point pointsArray[],
const int MaxPtsSize, Line stabbedLines[],
const int MaxStbSize, int& NumOfStbLines)
{
	
	for(int i=0;i<MaxLnsSize;i++){
		int x1;
	int x2;
		for(int j=0;j<MaxPtsSize;j++){
			if(pointsArray[j].Pid==linesArray[i].p1){
				x1=pointsArray[j].x;
			}
			
			if(pointsArray[j].Pid==linesArray[i].p2){
				x2=pointsArray[j].x;
				
		}
	}
	
		if(x2>=xcoord && x1<=xcoord){ 
		NumOfStbLines++;
			
				stabbedLines[i]=linesArray[i];
				cout<<stabbedLines[i].Lid<<endl;

				
			}
		
		
	
	}
	


}

	
 


;

