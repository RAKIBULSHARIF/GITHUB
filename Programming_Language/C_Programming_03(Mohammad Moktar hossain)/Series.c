//Program file that declare and use global static variable
//Library call 07_30_C Program
static int number;
//Global static variable
series()
{
    number = number +10;
    return(number);
}
void series_start(int start_value)
{
    number = start_value;
}
