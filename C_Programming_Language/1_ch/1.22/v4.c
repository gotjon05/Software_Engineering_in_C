#include <stdio.h>
#define BUFFER 40
#define COLUMN 14

int find_space(char lines[]);
void column_split(char lines[], int spaces);


//need to learn how to debug
//when you dump relevant information, it makes it easier
//lots of prints statements
//
//current problem is incrementing 
//use another counter that moves up the array


int main()
{
        int i, spaces;
        char lines[BUFFER];
	//char *cursor = lines;

        for(int i = 0; i < BUFFER; ++i){
                lines[i] = 0;
        }
        int c, j;
        j = 0;
        while((c = getchar()) != EOF){
                lines[j] = c;
                ++j;
        }
        lines[j] = '\0';


        int counter;
        counter = 0;
        //walk through t1he entire array
        //call column_split for every 14 characters
        while(counter < BUFFER){
                ++counter;
		//every 14 characters
		if((counter % 14) == 0){
			column_split(lines, find_space(lines));

			//tells me if find_space is working: When it returns the first space before column 14
			printf("find_space receives %s and returns %d\n", lines, find_space(lines));
			
		}
        
	}


}

//tells me where the first space is in input before column 15
//what section of lines is being received?
int find_space(char lines[])
{
        int counter, space;
        space = 0;
        //goes back down array to find first space at or before column 14               
        for(counter = COLUMN; counter >= 0; --counter){
                //finds the first space from index 14
                if(lines[counter] == ' '){
        		return counter;
		}
        }
}

//prints characters until the space before column 15
void column_split(char lines[], int spaces)
{
        printf("array is int: %d string: %s\n", lines, lines);
      
	int c;
        for(c = 0; c <= spaces; c++){
                //printf("%c", lines[c]);
		
        }
}

