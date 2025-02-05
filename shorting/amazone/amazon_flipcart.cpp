#include <iostream>
using namespace std;

class mob{

       
    public:
        string name;
        string madel;
        int price;
        int qty;
        void setMob(string com, string mod, int rs, int q)
        {
            name = com;
            madel = mod;
            price = rs;
            qty = q;
        }
        void showMob()
        {
            cout<<"Company: "<<name<<"\t Model: "<<madel<<"\t Price: "<<price<<"\t QTY: "<<qty<<endl<<endl;
        }
};

class buymob
{
    public:
        void buy(mob &obj, int qt)
        {
            if(qt<obj.qty)
        {
       
    cout<<"Your purchess: "<<obj.name<<" "<<  obj.madel <<" "<<obj.price<<" "<<"QRY "<<qt<<" Price "<<qt*obj.price<<endl;
   
    obj.qty = obj.qty - qt;
    }
    else
    {
        cout<<"out of stock"<<endl;
    }
}
};

int main()
{
    mob m1, m2;
    m1.setMob("OPPO", "OM2", 17999,12);
    m2.setMob("MyMob", "MyModel", 12000, 20);
   
    m1.showMob();
    m2.showMob();
   
    buymob bm1;
    bm1.buy(m2, 6);
    m2.showMob();
    buymob bm2;
    bm2.buy(m2, 15);
    m2.showMob();
   
    return 0;
}
