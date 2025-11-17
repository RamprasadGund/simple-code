#include <stdio.h>
#include<string.h>

int main() {
   char cities[5][30]={
       "Delhi","Mumbai","Kolkata","Chennai","Hydrabad"
   };
    char foods[5][30]={
        "Chole_bhature","Vada_pav","Fish_curry","Idli_Sambar","Biryani"
    };
  
 char searchcity[30];
int i,found=0;


printf("=======CITY FOOD SEARCH=======\n");
printf("Enter city name to search:");
scanf("%s",searchcity);

for(i=0 ; i<5 ; i++)
if(strcmp(cities[i],searchcity)==0){
    printf("\n city:%s \nfamous food: %s\n",cities[i],foods[i]);
    found=1;
}

if (found==0)
  {
        printf("\n Error,city not found!");
    }
  
    return 0;
}
