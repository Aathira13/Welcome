#include<stdio.h>                                                                
                                                                                
void main()                                                                     
{                                                                               
  int days, weeks, months, weeks_rem_days, months_rem_days, years, years_rem_days;;
  printf("Enter the number of days: ");                                         
  scanf("%d", &days);                                                           
  weeks = days/7;                                                               
  weeks_rem_days = days % 7;                                                    
  months = days / 30;                                                           
  years = days / 365;                                                           
  weeks_rem_days = days % 7;                                                    
  months_rem_days = days % 30;                                                  
  years_rem_days = days % 365;                                                  
                                                                                
  printf("\nWeeks: %d weeks and %d days,", weeks, weeks_rem_days);              
  printf("\nMonthss: %d months and %d days,", months, months_rem_days);         
  printf("\nYears: %d years and %d days,", years, years_rem_days);              
}                                                                                
