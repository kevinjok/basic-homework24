#include <stdio.h>
#include <stdlib.h>
struct course

{

	char name[10];  

	int calculus51;

	int computer51;

	int programming;

} p;



int main(void)

{

    FILE *pFile;

	printf("          �ΰ�Ū�Ҧ�Ū��couse.txt        \n");


	printf("Ū�����e���G\n");

	pFile=fopen("24.txt", "r");

        

    if (pFile==NULL)

    {

        printf("�ɮ׶}�ҥ���!!\n");

        exit(1);

	}   

    else

    {
		
		fscanf(pFile, "%[^,],%d,%d,%d", p.name, &p.calculus51, &p.computer51, &p.programming);
		printf("%s\t %d\t %d\t %d", p.name, p.calculus51, p.computer51, p.programming); 
		fscanf(pFile, "%[^,],%d,%d,%d", p.name, &p.calculus51, &p.computer51, &p.programming);
		printf("%s\t %d\t %d\t %d", p.name, p.calculus51, p.computer51, p.programming); 
		fscanf(pFile, "%[^,],%d,%d,%d", p.name, &p.calculus51, &p.computer51, &p.programming);
		printf("%s\t %d\t %d\t %d", p.name, p.calculus51, p.computer51, p.programming); 
		fscanf(pFile, "%[^,],%d,%d,%d", p.name, &p.calculus51, &p.computer51, &p.programming);
		printf("%s\t %d\t %d\t %d", p.name, p.calculus51, p.computer51, p.programming); 
		fscanf(pFile, "%[^,],%d,%d,%d", p.name, &p.calculus51, &p.computer51, &p.programming);
		printf("%s\t %d\t %d\t %d", p.name, p.calculus51, p.computer51, p.programming); 
		fscanf(pFile, "%[^,],%d,%d,%d", p.name, &p.calculus51, &p.computer51, &p.programming);
		printf("%s\t %d\t %d\t %d", p.name, p.calculus51, p.computer51, p.programming); 
		fscanf(pFile, "%[^,],%d,%d,%d", p.name, &p.calculus51, &p.computer51, &p.programming);
		printf("%s\t %d\t %d\t %d", p.name, p.calculus51, p.computer51, p.programming); 
	}

	printf("\n");

    fclose(pFile);

    system("pause");

    return 0;

}
