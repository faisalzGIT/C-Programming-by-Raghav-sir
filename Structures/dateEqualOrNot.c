#include<stdio.h>
int main(){
    typedef struct Date{
        int tarikh;
		int mahina;
		int saal;
    } DATE; 
    DATE pehli,dusri;

	pehli.tarikh = 12;
	pehli.mahina = 1;
	pehli.saal = 2013;

	dusri.tarikh = 22;
	dusri.mahina = 1;
	dusri.saal = 2013;

	if(pehli.tarikh == dusri.tarikh && pehli.mahina == dusri.mahina && pehli.saal == dusri.saal){
		printf("EQUAL");
	} else{
		printf("UNEQUAL");
	}

    return 0;
}