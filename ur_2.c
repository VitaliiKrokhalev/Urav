
int main(int argc, char *argv[])
{
  
    long d = 0, n;
    double x, y1, y2;
    
    while(d != 2){
        printf("\n1) Решение квадратного уравнения\n2) Выход \n\n");
        scanf ("%ld", &d);
        
        switch(d){
            case 1:
                urav();
            break;
            case 2:
            break;
            default:
               printf ( "\nошибка! \n" );
            break;
        }
    }
}
