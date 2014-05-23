/* Jonathan Kramer */

/* Longer Assignment 1 */

#include <stdio.h>
#include <math.h>

int main(void)
{
/****************************************************************************************/
/*************************************** VARIABLES **************************************/
/****************************************************************************************/

/* counters */
int MAX, i, k, a, b, c, d, e; 

int score1, maxscore1, minscore1, total1, sum1;
float mean1, sigdif1, sigdif_sq1, sigdif_sq_sum1, stdv1, sigdif_stdv1;

int score2, maxscore2, minscore2, total2, sum2; 
float mean2, sigdif2, sigdif_sq2, sigdif_sq_sum2, stdv2, sigdif_stdv2;

int score3, maxscore3, minscore3, total3, sum3;
float mean3, sigdif3, sigdif_sq3, sigdif_sq_sum3, stdv3, sigdif_stdv3;

int score4, maxscore4, minscore4, total4, sum4; 
float mean4, sigdif4, sigdif_sq4, sigdif_sq_sum4, stdv4, sigdif_stdv4;

int score5, maxscore5, minscore5, total5, sum5;
float mean5, sigdif5, sigdif_sq5, sigdif_sq_sum5, stdv5, sigdif_stdv5;

int LOW, HIGH, STDV;
float AVG;

char print_type;

FILE *file1, *file2, *file3, *file4, *file5;
FILE *newfile;
	
/****************************************************************************************/
/******************************** MAX AND MIN VALUES ************************************/
/****************************************************************************************/

/*************************** Find Max Value for group 1 *********************************/                    

file1 = fopen("group1.txt", "r");

maxscore1 = 0;

while(fscanf(file1, "%d", &score1) != EOF) {
	if (score1 > maxscore1) {
		maxscore1 = score1;
	} else {
		maxscore1 = maxscore1;
	}
}

fclose(file1);

/*************************** Find Min Value for group 1 *********************************/

file1 = fopen("group1.txt", "r");

minscore1 = 100;

while(fscanf(file1, "%d", &score1) != EOF) {
	if (score1 < minscore1) {
		minscore1 = score1;
	} else {
		minscore1 = minscore1;
	}
}

fclose(file1);

/*************************** Find Max Value for group 2 *********************************/                    

file2 = fopen("group2.txt", "r");

maxscore2 = 0;

while(fscanf(file2, "%d", &score2) != EOF) {
	if (score2 > maxscore2) {
		maxscore2 = score2;
	} else {
		maxscore2 = maxscore2;
	}
}

fclose(file2);

/*************************** Find Min Value for group 2 *********************************/

file2 = fopen("group2.txt", "r");

minscore2 = 100;

while(fscanf(file2, "%d", &score2) != EOF) {
	if (score2 < minscore2) {
		minscore2 = score2;
	} else {
		minscore2 = minscore2;
	}
}

fclose(file2);										

/*************************** Find Max Value for group 3 *********************************/                    

file3 = fopen("group3.txt", "r");

maxscore3 = 0;

while(fscanf(file3, "%d", &score3) != EOF) {
	if (score3 > maxscore3) {
		maxscore3 = score3;
	} else {
		maxscore3 = maxscore3;
	}
}

fclose(file3);

/*************************** Find Min Value for group 3 *********************************/

file3 = fopen("group3.txt", "r");

minscore3 = 100;

while(fscanf(file3, "%d", &score3) != EOF) {
	if (score3 < minscore3) {
		minscore3 = score3;
	} else {
		minscore3 = minscore3;
	}
}

fclose(file3);										
										
/*************************** Find Max Value for group 4 *********************************/                    

file4 = fopen("group4.txt", "r");

maxscore4 = 0;

while(fscanf(file4, "%d", &score4) != EOF) {
	if (score4 > maxscore4) {
		maxscore4 = score4;
	} else {
		maxscore4 = maxscore4;
	}
}

fclose(file4);

/*************************** Find Min Value for group 4 *********************************/

file4 = fopen("group4.txt", "r");

minscore4 = 100;

while(fscanf(file4, "%d", &score4) != EOF) {
	if (score4 < minscore4) {
		minscore4 = score4;
	} else {
		minscore4 = minscore4;
	}
}

fclose(file4);										

/*************************** Find Max Value for group 5 *********************************/                    

file5 = fopen("group5.txt", "r");

maxscore5 = 0;

while(fscanf(file5, "%d", &score5) != EOF) {
	if (score5 > maxscore5) {
		maxscore5 = score5;
	} else {
		maxscore5 = maxscore5;
	}
}

fclose(file5);

/*************************** Find Min Value for group 5 *********************************/

file5 = fopen("group5.txt", "r");

minscore5 = 100;

while(fscanf(file5, "%d", &score5) != EOF) {
	if (score5 < minscore5) {
		minscore5 = score5;
	} else {
		minscore5 = minscore5;
	}
}

fclose(file1);										

/****************************************************************************************/
/******************************** Standard Deviation ************************************/
/****************************************************************************************/

/************************** Find standard deviation for group 1 *************************/

file1 = fopen("group1.txt", "r");
total1 = 0;
sum1 = 0;

while((fscanf(file1, "%d", &score1) != EOF)) {
	sum1 += score1;
	total1++;
}

mean1 = (float)sum1 / (float)total1;

fclose(file1);

file1 = fopen("group1.txt", "r");
sigdif_sq_sum1 = 0;

while(fscanf(file1, "%d", &score1) != EOF) {
	sigdif1 = score1 - mean1;
	sigdif_sq1 = (sigdif1 * sigdif1);
	sigdif_sq_sum1 += sigdif_sq1;
}

stdv1 = sqrt((1/((float)total1-1)) * sigdif_sq_sum1);

fclose(file1);

/************************** Find standard deviation for group 2 *************************/

file2 = fopen("group2.txt", "r");
total2 = 0;
sum2 = 0;

while(fscanf(file2, "%d", &score2) != EOF) {
	sum2 += score2;
	total2++;
}

mean2 = (float)sum2 / (float)total2;

fclose(file2);

file2 = fopen("group2.txt", "r");
sigdif_sq_sum2 = 0;

while(fscanf(file2, "%d", &score2) != EOF) {
	sigdif2 = score2 - mean2;
	sigdif_sq2 = (sigdif2 * sigdif2);
	sigdif_sq_sum2 += sigdif_sq2;
}

stdv2 = sqrt((1/((float)total2-1)) * sigdif_sq_sum2);

fclose(file2);

/************************** Find standard deviation for group 3 *************************/

file3 = fopen("group3.txt", "r");
total3 = 0;
sum3 = 0;

while(fscanf(file3, "%d", &score3) != EOF) {
	sum3 += score3;
	total3++;
}

mean3 = (float)sum3 / (float)total3;

fclose(file3);

file3 = fopen("group3.txt", "r");
sigdif_sq_sum3 = 0;

while(fscanf(file3, "%d", &score3) != EOF) {
	sigdif3 = score3 - mean3;
	sigdif_sq3 = (sigdif3 * sigdif3);
	sigdif_sq_sum3 += sigdif_sq3;
}

stdv3 = sqrt((1/((float)total3-1)) * sigdif_sq_sum3);

fclose(file3);

/************************** Find standard deviation for group 4 *************************/

file4 = fopen("group4.txt", "r");
total4 = 0;
sum4 = 0;

while(fscanf(file4, "%d", &score4) != EOF) {
	sum4 += score4;
	total4++;
}

mean4 = (float)sum4 / (float)total4;

fclose(file4);

file4 = fopen("group4.txt", "r");
sigdif_sq_sum4 = 0;

while(fscanf(file4, "%d", &score4) != EOF) {
	sigdif4 = score4 - mean4;
	sigdif_sq4 = (sigdif4 * sigdif4);
	sigdif_sq_sum4 += sigdif_sq4;
}

stdv4 = sqrt((1/((float)total4-1)) * sigdif_sq_sum4);

fclose(file4);

/************************** Find standard deviation for group 5 *************************/

file5 = fopen("group5.txt", "r");
total5 = 0;
sum5 = 0;

while(fscanf(file5, "%d", &score5) != EOF) {
	sum5 += score5;
	total5++;
}

mean5 = (float)sum5 / (float)total5;

fclose(file5);

file5 = fopen("group5.txt", "r");
sigdif_sq_sum5 = 0;

while(fscanf(file5, "%d", &score5) != EOF) {
	sigdif5 = score5 - mean5;
	sigdif_sq5 = (sigdif5 * sigdif5);
	sigdif_sq_sum5 += sigdif_sq5;
}

stdv5 = sqrt((1/((float)total5-1)) * sigdif_sq_sum5);

fclose(file5);

/****************************************************************************************/
/********************************* Finding Largest File *********************************/
/****************************************************************************************/

MAX = 0;

if (total1 > MAX) {
	MAX = total1;
} if (total2 > MAX) {
	MAX = total2;
} if (total3 > MAX) {
	MAX = total3;
} if (total4 > MAX) {
	MAX = total4;
} if (total5 > MAX) {
	MAX = total5;
} 

/****************************************************************************************/
/****************************************************************************************/
/*************************************** PRINTING ***************************************/
/****************************************************************************************/
/****************************************************************************************/

newfile = fopen("newfile.txt", "w");

file1 = fopen("group1.txt", "r");
file2 = fopen("group2.txt", "r");
file3 = fopen("group3.txt", "r");
file4 = fopen("group4.txt", "r");
file5 = fopen("group5.txt", "r");

printf("Enter 's' to print to screen or 'f' to print to the file newfile.txt >>> ");
scanf("%c", &print_type);

switch (print_type) {
	case 's':
		
/****************************************************************************************/
/********************************* Print to the screen **********************************/
/****************************************************************************************/


/****************************************************************************************/
/********************************* Printing Top Portion *********************************/
/****************************************************************************************/

printf("     /----------------------------------------------------------------\\\n");
printf("     |----------------------------------------------------------------|\n");
printf("     |   Group1   |   Group2   |   Group3   |   Group4   |   Group5   |\n");
printf("     |------------+------------+------------+------------+------------|\n");
printf("     | SC STDV GR | SC STDV GR | SC STDV GR | SC STDV GR | SC STDV GR |\n");
printf("     |------------+------------+------------+------------+------------|\n");


	i=0;
	a=0;
	b=0;
	c=0;
	d=0;
	e=0;

while(i <= MAX){
	i++;
 
/*************************** Printing the values for group 1 ****************************/
	
	printf("     |");
	
if (a <= total1) {
	a++;

fscanf(file1, "%d", &score1);

	if(score1 == maxscore1) {
		printf("@%d", score1);
	} else if(score1 == minscore1) {
		printf("#%d", score1);
	} else {
		printf(" %d", score1);
	}

	sigdif_stdv1 = (score1 - mean1) / stdv1;
	printf(" %4.1f", sigdif_stdv1);
	
	if(score1 >= 95) {
		printf(" A ");
	} else if((score1 >= 90) && (score1 < 95)) {
		printf(" A-");
	} else if((score1 >= 85) && (score1 < 90)) {
		printf(" B+");
	} else if((score1 >= 80) && (score1 < 85)) {
		printf(" B ");	
	} else if((score1 >= 75) && (score1 < 80)) {
		printf(" B-");	
	} else if((score1 >= 70) && (score1 < 75)) {
		printf(" C+");
	} else if((score1 >= 65) && (score1 < 70)) {
		printf(" C ");
	} else if((score1 >= 60) && (score1 < 65)) {
		printf(" C-");
	} else if((score1 >= 50) && (score1 < 60)) {
		printf(" D ");
	} else {
		printf(" E ");		
	}
} else {
	printf("           ");
}	

/*************************** Printing the values for group 2 ****************************/
	
	printf(" |");
	
	if (b <= total2) {
	b++;
	
fscanf(file2, "%d", &score2);	
	
	if(score2 == maxscore2) {
		printf("@%d", score2);
	} else if(score2 == minscore2) {
		printf("#%d", score2);
	} else {
		printf(" %d", score2);
	}

	sigdif_stdv2 = (score2 - mean2) / stdv2;
	printf(" %4.1f", sigdif_stdv2);
	
	if(score2 >= 95) {
		printf(" A ");
	} else if((score2 >= 90) && (score2 < 95)) {
		printf(" A-");
	} else if((score2 >= 85) && (score2 < 90)) {
		printf(" B+");
	} else if((score2 >= 80) && (score2 < 85)) {
		printf(" B ");	
	} else if((score2 >= 75) && (score2 < 80)) {
		printf(" B-");	
	} else if((score2 >= 70) && (score2 < 75)) {
		printf(" C+");
	} else if((score2 >= 65) && (score2 < 70)) {
		printf(" C ");
	} else if((score2 >= 60) && (score2 < 65)) {
		printf(" C-");
	} else if((score2 >= 50) && (score2 < 60)) {
		printf(" D ");
	} else {
		printf(" E ");		
	}
} else {
	printf("           ");
}

/*************************** Printing the values for group 3 ****************************/
	
	printf(" |");
	
	if (c <= total3) {
	c++;
	
fscanf(file3, "%d", &score3);
	
	if(score3 == maxscore3) {
		printf("@%d", score3);
	} else if(score3 == minscore3) {
		printf("#%d", score3);
	} else {
		printf(" %d", score3);
	}

	sigdif_stdv3 = (score3 - mean3) / stdv3;
	printf(" %4.1f", sigdif_stdv3);
	
	if(score3 >= 95) {
		printf(" A ");
	} else if((score3 >= 90) && (score3 < 95)) {
		printf(" A-");
	} else if((score3 >= 85) && (score3 < 90)) {
		printf(" B+");
	} else if((score3 >= 80) && (score3 < 85)) {
		printf(" B ");	
	} else if((score3 >= 75) && (score3 < 80)) {
		printf(" B-");	
	} else if((score3 >= 70) && (score3 < 75)) {
		printf(" C+");
	} else if((score3 >= 65) && (score3 < 70)) {
		printf(" C ");
	} else if((score3 >= 60) && (score3 < 65)) {
		printf(" C-");
	} else if((score3 >= 50) && (score3 < 60)) {
		printf(" D ");
	} else {
		printf(" E ");		
	}
} else {
	printf("           ");
}
	
/*************************** Printing the values for group 4 ****************************/
	
	printf(" |");
	
	if (d <= total4) {
	d++;
	
fscanf(file4, "%d", &score4);	
	
	if(score4 == maxscore4) {
		printf("@%d", score4);
	} else if(score4 == minscore4) {
		printf("#%d", score4);
	} else {
		printf(" %d", score4);
	}

	sigdif_stdv4 = (score4 - mean4) / stdv4;
	printf(" %4.1f", sigdif_stdv4);
	
	if(score4 >= 95) {
		printf(" A ");
	} else if((score4 >= 90) && (score4 < 95)) {
		printf(" A-");
	} else if((score4 >= 85) && (score4 < 90)) {
		printf(" B+");
	} else if((score4 >= 80) && (score4 < 85)) {
		printf(" B ");	
	} else if((score4 >= 75) && (score4 < 80)) {
		printf(" B-");	
	} else if((score4 >= 70) && (score4 < 75)) {
		printf(" C+");
	} else if((score4 >= 65) && (score4 < 70)) {
		printf(" C ");
	} else if((score4 >= 60) && (score4 < 65)) {
		printf(" C-");
	} else if((score4 >= 50) && (score4 < 60)) {
		printf(" D ");
	} else {
		printf(" E ");		
	}
} else {
	printf("           ");
}
	
/*************************** Printing the values for group 5 ****************************/
	
	printf(" |");
	
	if (e <= total5) {
	e++;
	
fscanf(file5, "%d", &score5);	
	
	if(score5 == maxscore5) {
		printf("@%d", score5);
	} else if(score5 == minscore5) {
		printf("#%d", score5);
	} else {
		printf(" %d", score5);
	}

	sigdif_stdv5 = (score5 - mean5) / stdv5;
	printf(" %4.1f", sigdif_stdv5);
	
	if(score5 >= 95) {
		printf(" A  |\n");
	} else if((score5 >= 90) && (score5 < 95)) {
		printf(" A- |\n");
	} else if((score5 >= 85) && (score5 < 90)) {
		printf(" B+ |\n");
	} else if((score5 >= 80) && (score5 < 85)) {
		printf(" B  |\n");	
	} else if((score5 >= 75) && (score5 < 80)) {
		printf(" B- |\n");	
	} else if((score5 >= 70) && (score5 < 75)) {
		printf(" C+ |\n");
	} else if((score5 >= 65) && (score5 < 70)) {
		printf(" C  |\n");
	} else if((score5 >= 60) && (score5 < 65)) {
		printf(" C- |\n");
	} else if((score5 >= 50) && (score5 < 60)) {
		printf(" D  |\n");
	} else {
		printf(" E  |\n");		
	}
} else {
	printf("            |\n");
}
}	

fclose(file1);	
fclose(file2);	
fclose(file3);	
fclose(file4);	
fclose(file5);	

/****************************************************************************************/
/******************************** Printing Bottom Portion *******************************/
/****************************************************************************************/

printf("     |------------+------------+------------+------------+------------|\n");

/********************************* PRINT NUM ********************************************/


printf("NUM  | %d         | %d         | %d         | %d         | %d         |\n", total1, total2, total3, total4, total5);
	   
/********************************* PRINT LOW ********************************************/	   

printf("LOW  | ");

k=1;

while (k<=5) {
	
	if (k==1) {
		LOW = minscore1;
	} else if (k==2) {
		LOW = minscore2;
	} else if (k==3) {
		LOW = minscore3;
	} else if (k==4) {
		LOW = minscore4;
	} else if (k==5) {
		LOW = minscore5;
	} else {}

printf("%d     ", LOW);
	
if(LOW >= 95) {
		printf(" A ");
	} else if((LOW >= 90) && (LOW < 95)) {
		printf(" A-");
	} else if((LOW >= 85) && (LOW < 90)) {
		printf(" B+");
	} else if((LOW >= 80) && (LOW < 85)) {
		printf(" B ");	
	} else if((LOW >= 75) && (LOW < 80)) {
		printf(" B-");	
	} else if((LOW >= 70) && (LOW < 75)) {
		printf(" C+");
	} else if((LOW >= 65) && (LOW < 70)) {
		printf(" C ");
	} else if((LOW >= 60) && (LOW < 65)) {
		printf(" C-");
	} else if((LOW >= 50) && (LOW < 60)) {
		printf(" D ");
	} else {
		printf(" E ");		
	}
	
printf(" | ");

k++;

}

/********************************* PRINT HIGH *******************************************/

printf("\nHIGH | ");

k=1;

while (k<=5) {
	
	if (k==1) {
		HIGH = maxscore1;
	} else if (k==2) {
		HIGH = maxscore2;
	} else if (k==3) {
		HIGH = maxscore3;
	} else if (k==4) {
		HIGH = maxscore4;
	} else if (k==5) {
		HIGH = maxscore5;
	} else {}

printf("%d     ", HIGH);
	
if(HIGH >= 95) {
		printf(" A ");
	} else if((HIGH >= 90) && (HIGH < 95)) {
		printf(" A-");
	} else if((HIGH >= 85) && (HIGH < 90)) {
		printf(" B+");
	} else if((HIGH >= 80) && (HIGH < 85)) {
		printf(" B ");	
	} else if((HIGH >= 75) && (HIGH < 80)) {
		printf(" B-");	
	} else if((HIGH >= 70) && (HIGH < 75)) {
		printf(" C+");
	} else if((HIGH >= 65) && (HIGH < 70)) {
		printf(" C ");
	} else if((HIGH >= 60) && (HIGH < 65)) {
		printf(" C-");
	} else if((HIGH >= 50) && (HIGH < 60)) {
		printf(" D ");
	} else {
		printf(" E ");		
	}
	
printf(" | ");

k++;

}

/********************************* PRINT AVG ********************************************/

printf("\nAVG  | ");

k=1;

while (k<=5) {
	
	if (k==1) {
		AVG = mean1;
	} else if (k==2) {
		AVG = mean2;
	} else if (k==3) {
		AVG = mean3;
	} else if (k==4) {
		AVG = mean4;
	} else if (k==5) {
		AVG = mean5;
	} else {}

printf("%4.1f   ", AVG);
	
if(AVG >= 95) {
		printf(" A ");
	} else if((AVG >= 90) && (AVG < 95)) {
		printf(" A-");
	} else if((AVG >= 85) && (AVG < 90)) {
		printf(" B+");
	} else if((AVG >= 80) && (AVG < 85)) {
		printf(" B ");	
	} else if((AVG >= 75) && (AVG < 80)) {
		printf(" B-");	
	} else if((AVG >= 70) && (AVG < 75)) {
		printf(" C+");
	} else if((AVG >= 65) && (AVG < 70)) {
		printf(" C ");
	} else if((AVG >= 60) && (AVG < 65)) {
		printf(" C-");
	} else if((AVG >= 50) && (AVG < 60)) {
		printf(" D ");
	} else {
		printf(" E ");		
	}
	
printf(" | ");

k++;

}

/********************************* PRINT STDV *******************************************/

printf("\nSTDV |     %2.1f    |     %2.1f    |     %2.1f    |     %2.1f    |     %2.1f    |\n", stdv1, stdv2, stdv3, stdv4, stdv5);

printf("     \\----------------------------------------------------------------/\n\n\n");

	break;
	case 'f':
	
/****************************************************************************************/
/********************************* Print to the file ************************************/
/****************************************************************************************/


/****************************************************************************************/
/********************************* Printing Top Portion *********************************/
/****************************************************************************************/

fprintf(newfile, "     /----------------------------------------------------------------\\\n");
fprintf(newfile, "     |----------------------------------------------------------------|\n");
fprintf(newfile, "     |   Group1   |   Group2   |   Group3   |   Group4   |   Group5   |\n");
fprintf(newfile, "     |------------+------------+------------+------------+------------|\n");
fprintf(newfile, "     | SC STDV GR | SC STDV GR | SC STDV GR | SC STDV GR | SC STDV GR |\n");
fprintf(newfile, "     |------------+------------+------------+------------+------------|\n");


	i=0;
	a=0;
	b=0;
	c=0;
	d=0;
	e=0;

while(i <= MAX){
	i++;
 
/*************************** Printing the values for group 1 ****************************/
	
	fprintf(newfile, "     |");
	
if (a <= total1) {
	a++;

fscanf(file1, "%d", &score1);

	if(score1 == maxscore1) {
		fprintf(newfile, "@%d", score1);
	} else if(score1 == minscore1) {
		fprintf(newfile, "#%d", score1);
	} else {
		fprintf(newfile, " %d", score1);
	}

	sigdif_stdv1 = (score1 - mean1) / stdv1;
	fprintf(newfile, " %4.1f", sigdif_stdv1);
	
	if(score1 >= 95) {
		fprintf(newfile, " A ");
	} else if((score1 >= 90) && (score1 < 95)) {
		fprintf(newfile, " A-");
	} else if((score1 >= 85) && (score1 < 90)) {
		fprintf(newfile, " B+");
	} else if((score1 >= 80) && (score1 < 85)) {
		fprintf(newfile, " B ");	
	} else if((score1 >= 75) && (score1 < 80)) {
		fprintf(newfile, " B-");	
	} else if((score1 >= 70) && (score1 < 75)) {
		fprintf(newfile, " C+");
	} else if((score1 >= 65) && (score1 < 70)) {
		fprintf(newfile, " C ");
	} else if((score1 >= 60) && (score1 < 65)) {
		fprintf(newfile, " C-");
	} else if((score1 >= 50) && (score1 < 60)) {
		fprintf(newfile, " D ");
	} else {
		fprintf(newfile, " E ");		
	}
} else {
	fprintf(newfile, "           ");
}	

/*************************** Printing the values for group 2 ****************************/
	
	fprintf(newfile, " |");
	
	if (b <= total2) {
	b++;
	
fscanf(file2, "%d", &score2);	
	
	if(score2 == maxscore2) {
		fprintf(newfile, "@%d", score2);
	} else if(score2 == minscore2) {
		fprintf(newfile, "#%d", score2);
	} else {
		fprintf(newfile, " %d", score2);
	}

	sigdif_stdv2 = (score2 - mean2) / stdv2;
	fprintf(newfile, " %4.1f", sigdif_stdv2);
	
	if(score2 >= 95) {
		fprintf(newfile, " A ");
	} else if((score2 >= 90) && (score2 < 95)) {
		fprintf(newfile, " A-");
	} else if((score2 >= 85) && (score2 < 90)) {
		fprintf(newfile, " B+");
	} else if((score2 >= 80) && (score2 < 85)) {
		fprintf(newfile, " B ");	
	} else if((score2 >= 75) && (score2 < 80)) {
		fprintf(newfile, " B-");	
	} else if((score2 >= 70) && (score2 < 75)) {
		fprintf(newfile, " C+");
	} else if((score2 >= 65) && (score2 < 70)) {
		fprintf(newfile, " C ");
	} else if((score2 >= 60) && (score2 < 65)) {
		fprintf(newfile, " C-");
	} else if((score2 >= 50) && (score2 < 60)) {
		fprintf(newfile, " D ");
	} else {
		fprintf(newfile, " E ");		
	}
} else {
	fprintf(newfile, "           ");
}

/*************************** Printing the values for group 3 ****************************/
	
	fprintf(newfile, " |");
	
	if (c <= total3) {
	c++;
	
fscanf(file3, "%d", &score3);
	
	if(score3 == maxscore3) {
		fprintf(newfile, "@%d", score3);
	} else if(score3 == minscore3) {
		fprintf(newfile, "#%d", score3);
	} else {
		fprintf(newfile, " %d", score3);
	}

	sigdif_stdv3 = (score3 - mean3) / stdv3;
	fprintf(newfile, " %4.1f", sigdif_stdv3);
	
	if(score3 >= 95) {
		fprintf(newfile, " A ");
	} else if((score3 >= 90) && (score3 < 95)) {
		fprintf(newfile, " A-");
	} else if((score3 >= 85) && (score3 < 90)) {
		fprintf(newfile, " B+");
	} else if((score3 >= 80) && (score3 < 85)) {
		fprintf(newfile, " B ");	
	} else if((score3 >= 75) && (score3 < 80)) {
		fprintf(newfile, " B-");	
	} else if((score3 >= 70) && (score3 < 75)) {
		fprintf(newfile, " C+");
	} else if((score3 >= 65) && (score3 < 70)) {
		fprintf(newfile, " C ");
	} else if((score3 >= 60) && (score3 < 65)) {
		fprintf(newfile, " C-");
	} else if((score3 >= 50) && (score3 < 60)) {
		fprintf(newfile, " D ");
	} else {
		fprintf(newfile, " E ");		
	}
} else {
	fprintf(newfile, "           ");
}
	
/*************************** Printing the values for group 4 ****************************/
	
	fprintf(newfile, " |");
	
	if (d <= total4) {
	d++;
	
fscanf(file4, "%d", &score4);	
	
	if(score4 == maxscore4) {
		fprintf(newfile, "@%d", score4);
	} else if(score4 == minscore4) {
		fprintf(newfile, "#%d", score4);
	} else {
		fprintf(newfile, " %d", score4);
	}

	sigdif_stdv4 = (score4 - mean4) / stdv4;
	fprintf(newfile, " %4.1f", sigdif_stdv4);
	
	if(score4 >= 95) {
		fprintf(newfile, " A ");
	} else if((score4 >= 90) && (score4 < 95)) {
		fprintf(newfile, " A-");
	} else if((score4 >= 85) && (score4 < 90)) {
		fprintf(newfile, " B+");
	} else if((score4 >= 80) && (score4 < 85)) {
		fprintf(newfile, " B ");	
	} else if((score4 >= 75) && (score4 < 80)) {
		fprintf(newfile, " B-");	
	} else if((score4 >= 70) && (score4 < 75)) {
		fprintf(newfile, " C+");
	} else if((score4 >= 65) && (score4 < 70)) {
		fprintf(newfile, " C ");
	} else if((score4 >= 60) && (score4 < 65)) {
		fprintf(newfile, " C-");
	} else if((score4 >= 50) && (score4 < 60)) {
		fprintf(newfile, " D ");
	} else {
		fprintf(newfile, " E ");		
	}
} else {
	fprintf(newfile, "           ");
}
	
/*************************** Printing the values for group 5 ****************************/
	
	fprintf(newfile, " |");
	
	if (e <= total5) {
	e++;
	
fscanf(file5, "%d", &score5);	
	
	if(score5 == maxscore5) {
		fprintf(newfile, "@%d", score5);
	} else if(score5 == minscore5) {
		fprintf(newfile, "#%d", score5);
	} else {
		fprintf(newfile, " %d", score5);
	}

	sigdif_stdv5 = (score5 - mean5) / stdv5;
	fprintf(newfile, " %4.1f", sigdif_stdv5);
	
	if(score5 >= 95) {
		fprintf(newfile, " A  |\n");
	} else if((score5 >= 90) && (score5 < 95)) {
		fprintf(newfile, " A- |\n");
	} else if((score5 >= 85) && (score5 < 90)) {
		fprintf(newfile, " B+ |\n");
	} else if((score5 >= 80) && (score5 < 85)) {
		fprintf(newfile, " B  |\n");	
	} else if((score5 >= 75) && (score5 < 80)) {
		fprintf(newfile, " B- |\n");	
	} else if((score5 >= 70) && (score5 < 75)) {
		fprintf(newfile, " C+ |\n");
	} else if((score5 >= 65) && (score5 < 70)) {
		fprintf(newfile, " C  |\n");
	} else if((score5 >= 60) && (score5 < 65)) {
		fprintf(newfile, " C- |\n");
	} else if((score5 >= 50) && (score5 < 60)) {
		fprintf(newfile, " D  |\n");
	} else {
		fprintf(newfile, " E  |\n");		
	}
} else {
	fprintf(newfile, "            |\n");
}
}	

fclose(file1);	
fclose(file2);	
fclose(file3);	
fclose(file4);	
fclose(file5);	

/****************************************************************************************/
/******************************** Printing Bottom Portion *******************************/
/****************************************************************************************/

fprintf(newfile, "     |------------+------------+------------+------------+------------|\n");

/********************************* PRINT NUM ********************************************/


fprintf(newfile, "NUM  | %d         | %d         | %d         | %d         | %d         |\n", total1, total2, total3, total4, total5);
	   
/********************************* PRINT LOW ********************************************/	   

fprintf(newfile, "LOW  | ");

k=1;

while (k<=5) {
	
	if (k==1) {
		LOW = minscore1;
	} else if (k==2) {
		LOW = minscore2;
	} else if (k==3) {
		LOW = minscore3;
	} else if (k==4) {
		LOW = minscore4;
	} else if (k==5) {
		LOW = minscore5;
	} else {}

fprintf(newfile, "%d     ", LOW);
	
if(LOW >= 95) {
		fprintf(newfile, " A ");
	} else if((LOW >= 90) && (LOW < 95)) {
		fprintf(newfile, " A-");
	} else if((LOW >= 85) && (LOW < 90)) {
		fprintf(newfile, " B+");
	} else if((LOW >= 80) && (LOW < 85)) {
		fprintf(newfile, " B ");	
	} else if((LOW >= 75) && (LOW < 80)) {
		fprintf(newfile, " B-");	
	} else if((LOW >= 70) && (LOW < 75)) {
		fprintf(newfile, " C+");
	} else if((LOW >= 65) && (LOW < 70)) {
		fprintf(newfile, " C ");
	} else if((LOW >= 60) && (LOW < 65)) {
		fprintf(newfile, " C-");
	} else if((LOW >= 50) && (LOW < 60)) {
		fprintf(newfile, " D ");
	} else {
		fprintf(newfile, " E ");		
	}
	
fprintf(newfile, " | ");

k++;

}

/********************************* PRINT HIGH *******************************************/

fprintf(newfile, "\nHIGH | ");

k=1;

while (k<=5) {
	
	if (k==1) {
		HIGH = maxscore1;
	} else if (k==2) {
		HIGH = maxscore2;
	} else if (k==3) {
		HIGH = maxscore3;
	} else if (k==4) {
		HIGH = maxscore4;
	} else if (k==5) {
		HIGH = maxscore5;
	} else {}

fprintf(newfile, "%d     ", HIGH);
	
if(HIGH >= 95) {
		fprintf(newfile, " A ");
	} else if((HIGH >= 90) && (HIGH < 95)) {
		fprintf(newfile, " A-");
	} else if((HIGH >= 85) && (HIGH < 90)) {
		fprintf(newfile, " B+");
	} else if((HIGH >= 80) && (HIGH < 85)) {
		fprintf(newfile, " B ");	
	} else if((HIGH >= 75) && (HIGH < 80)) {
		fprintf(newfile, " B-");	
	} else if((HIGH >= 70) && (HIGH < 75)) {
		fprintf(newfile, " C+");
	} else if((HIGH >= 65) && (HIGH < 70)) {
		fprintf(newfile, " C ");
	} else if((HIGH >= 60) && (HIGH < 65)) {
		fprintf(newfile, " C-");
	} else if((HIGH >= 50) && (HIGH < 60)) {
		fprintf(newfile, " D ");
	} else {
		fprintf(newfile, " E ");		
	}
	
fprintf(newfile, " | ");

k++;

}

/********************************* PRINT AVG ********************************************/

fprintf(newfile, "\nAVG  | ");

k=1;

while (k<=5) {
	
	if (k==1) {
		AVG = mean1;
	} else if (k==2) {
		AVG = mean2;
	} else if (k==3) {
		AVG = mean3;
	} else if (k==4) {
		AVG = mean4;
	} else if (k==5) {
		AVG = mean5;
	} else {}

fprintf(newfile, "%4.1f   ", AVG);
	
if(AVG >= 95) {
		fprintf(newfile, " A ");
	} else if((AVG >= 90) && (AVG < 95)) {
		fprintf(newfile, " A-");
	} else if((AVG >= 85) && (AVG < 90)) {
		fprintf(newfile, " B+");
	} else if((AVG >= 80) && (AVG < 85)) {
		fprintf(newfile, " B ");	
	} else if((AVG >= 75) && (AVG < 80)) {
		fprintf(newfile, " B-");	
	} else if((AVG >= 70) && (AVG < 75)) {
		fprintf(newfile, " C+");
	} else if((AVG >= 65) && (AVG < 70)) {
		fprintf(newfile, " C ");
	} else if((AVG >= 60) && (AVG < 65)) {
		fprintf(newfile, " C-");
	} else if((AVG >= 50) && (AVG < 60)) {
		fprintf(newfile, " D ");
	} else {
		fprintf(newfile, " E ");		
	}
	
fprintf(newfile, " | ");

k++;

}

/********************************* PRINT STDV *******************************************/

fprintf(newfile, "\nSTDV |     %2.1f    |     %2.1f    |     %2.1f    |     %2.1f    |     %2.1f    |\n", stdv1, stdv2, stdv3, stdv4, stdv5);

fprintf(newfile, "     \\----------------------------------------------------------------/\n\n\n");

	printf("Complete!\n");
	break;
	
/****************************************************************************************/
/****************************************************************************************/
/****************************************************************************************/
	
	default:
		printf("\nOnly 's' (printing to screen) and 'f' (printing to file newfile.txt) are acceptable inputs!\n\n");
		
		
		return (-1);
		
}

return (0);

}
















