#include<iostream>
using namespace std;
class Invoice{
private:
     string partNumber;
     string partDescription;
     int quantity;
     double price_per_item;
public:
     //constructor
     Invoice(string pno, string desc, int q, double price){
        partNumber=pno;
        partDescription=desc;
        if(q<0)
        quantity=0;
        else
        quantity=q;
        if(price<0)
        price_per_item=0;
        else
        price_per_item=price;
     } 
     void setPartNumber(string pno){
        partNumber=pno;
     }
     string getPartNumber(){
        return partNumber;
     } 
     void setPartDescription(string desc){
        partDescription=desc;
     }  
     string getPartDescription(){
        return partDescription;
     } 
     void setQuantity(int q){
        if(q<0)
        quantity=0;
        else
        quantity=q;
     }
     int getQuantity(){
        return quantity;
     }
     void setPrice(double price){
        if(price<0)
        price_per_item=0;
        else
        price_per_item=price;
     }
     double getPrice(){
        return price_per_item;
     }
     double getInvoiceAmount(){
        return quantity*price_per_item;
     }

};
int main(){
    Invoice i("101", "keyboard", 2, 500);
    cout<<"Part Number :"<<i.getPartNumber()<<endl;
    cout<<"Description :"<<i.getPartDescription()<<endl;
    cout<<"Quantity :"<<i.getQuantity()<<endl;
    cout<<"Price :"<<i.getPrice()<<endl;
    cout<<"Invoice amount :"<<i.getInvoiceAmount()<<endl;
    return 0;
}