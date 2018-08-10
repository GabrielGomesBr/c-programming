#include <stdlib.h>
#include <stdio.h>

struct _retire_info{
  int months;
  double contribution, rate_of_return;
};

typedef struct  _retire_info retire_info;

double calculateBalance(int age, int startMonth, int numMonth, double rate_of_return, double contribution, double balance){
  for(int n = 0; n < numMonth; n++){
    printf("Age %3d month %2d you have $%.2lf\n", age+(n+startMonth)/12, (n+startMonth)%12, balance);
    balance = balance*rate_of_return + balance + contribution;
  }
  return balance;
}
void retirement (int startAge, double initial, retire_info working, retire_info retired){
  double balance = initial;
  int startMonth;
  startMonth = startAge;
  startAge /= 12;
  startMonth = startMonth-startAge*12;
  balance = calculateBalance(startAge, startMonth, working.months, working.rate_of_return, working.contribution, balance);
  startAge += (startMonth+working.months)/12;
  startMonth = (startMonth + working.months%12)%12;
  calculateBalance(startAge, startMonth, retired.months, retired.rate_of_return, retired.contribution, balance);
}

int main (void){
  retire_info working, retired;
  working.months = 489;
  working.contribution = 1000;
  working.rate_of_return = 4.5/1200;
  retired.months = 384;
  retired.contribution = -4000;
  retired.rate_of_return = 1.0/1200;
  retirement(327,21345,working,retired);
  
}
