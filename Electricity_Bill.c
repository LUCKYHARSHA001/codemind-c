#include<stdio.h>
int main(){
    float x;
    scanf("%f",&x);
    if(x<199){
        printf("Units Consumed: %.0f
",x);
        printf("Cost per Unit: %.2f
",1.20);
        printf("Bill: %.2f
",x*1.20);
        printf("Surcharge: %.2f
",0.00);
        printf("Total Amount: %.2f
",x*1.20); 
    }
    else if(x>=200 && x<400){
    printf("Units Consumed: %.0f
",x);
        printf("Cost per Unit: %.2f
",1.40);
        printf("Bill: %.2f
",x*1.40);
        printf("Surcharge: %.2f
",0.00);
        printf("Total Amount: %.2f
",x*1.40); 
}
    else if(x>=400 && x<600){
    printf("Units Consumed: %.0f
",x);
        printf("Cost per Unit: %.2f
",1.60);
        printf("Bill: %.2f
",x*1.60);
        printf("Surcharge: %.2f
",x*1.60*0.15);
        printf("Total Amount: %.2f
",(x*1.60)+(x*1.60*0.15)); 
}
 else if(x>=600 && x<800){
    printf("Units Consumed: %.0f
",x);
        printf("Cost per Unit: %.2f
",1.80);
        printf("Bill: %.2f
",x*1.80);
        printf("Surcharge: %.2f
",x*1.80*0.15);
        printf("Total Amount: %.2f
",(x*1.80)+(x*1.80*0.15)); 
}
       else if(x>=800){
    printf("Units Consumed: %.0f
",x);
        printf("Cost per Unit: %.2f
",2.00);
        printf("Bill: %.2f
",x*2.00);
        printf("Surcharge: %.2f
",x*2.00*0.15);
        printf("Total Amount: %.2f
",(x*2.00)+(x*2.00*0.15)); 
}
    

}