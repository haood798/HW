//11430038林豪安
#include <iostream>
#include <vector>
using namespace std;
class MenuItem
{
    protected:
        string food;
        int money;
    public:
        MenuItem(string food, int money)
        {
            this->food = food;
            if(money<0)
            {
                this->money=0;
            }
            else
            {
                this->money = money;
            }

        }
    virtual void display()
    {
        cout<< this->food << " : $" << this->money << endl;
    }

    int funsum()
    {
        return money;
    }
};

class Order
{
    private:
        vector<MenuItem> items;
    public:
        void addItem(MenuItem item)
        {
            items.push_back(item);
        }

        void showOrder(bool st)
        {
            int sum=0;
            for(int i=0; i<items.size(); i++)
            {
                items[i].display();
                sum = sum+items[i].funsum();
            }
            if(st == true)
            {
                sum = sum*0.9;
            }
            cout<< "總金額:" << sum <<endl;
        }
};

class Drink: public MenuItem
{
    private:
        string sugar;
    public:
        Drink(string food, int money, string sugar) : MenuItem(food,money), sugar(sugar){}
        void display(void) override
        {
            cout << food << " : $" << money <<" (" << sugar << ")" << endl;
        }
};

class MOrder
{
    private:
        vector<MenuItem*> items;
    public:
        void addItem(MenuItem* item)
        {
            items.push_back(item);
        }
        
        void showOrder(bool st)
        {
            int sum=0;
            cout<<"-------訂單明細--------"<<endl;
            for(int i=0; i<items.size(); i++)
            {
                items[i]->display();
                sum = sum+items[i]->funsum();
            }
            if(st == true)
            {
                sum = sum*0.9;
            }
            cout<< "總金額:" << sum <<endl;
        }
};
int main() {
    cout << "=== 階段 4 測試：虛擬函式與多型 ===" << endl;

    MOrder finalOrder;

    // 在主記憶體中建立不同型態的物件
    MenuItem burger("勁辣雞腿堡", 75);
    Drink coke("可口可樂", 35, "正常糖");
    MenuItem fries("大包薯條", 55);
    Drink tea("四季春茶", 40, "微糖");

    // 重點：使用 & 符號傳入物件的記憶體地址
    finalOrder.addItem(&burger);
    finalOrder.addItem(&coke);
    finalOrder.addItem(&fries);
    finalOrder.addItem(&tea);

    // 檢查明細中，可樂與綠茶後面有沒有自動出現 (正常糖) 與 (微糖)
    finalOrder.showOrder(true); 

    return 0;
}

    
