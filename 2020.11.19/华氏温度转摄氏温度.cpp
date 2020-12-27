/* Converts a Fahrenheit temperature to Celsius */
#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)
  int main(void)
  {
  float fahrenheit,celsius;//变量声明 
  printf("Enter Fahrenheit temperature: ");
  scanf("%f", &fahrenheit);//用百分之f是因为前面用的是float 
  celsius=(fahrenheit-FREEZING_PT)*SCALE_FACTOR;//公式 
  printf("Celsius equivalent: %.1f\n", celsius); //只用显示小数点后一位，即%.1f 
  return 0; 
  }

