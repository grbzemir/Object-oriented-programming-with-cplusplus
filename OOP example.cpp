#include<iostream>
#include<string>

using namespace std;


class Hayvan
{

   protected: 
 
   int boy;
   int kilo;

  public:
  string ad;


  void Sesver()
  {
   
    cout<<" Hayvan ses veriyor.. " <<endl;
  
  }

};

class Kopek : public Hayvan
{

  public:
  void setBoy( int a)
  {

    boy = a;

  }

  int getBoy()
  {
    
    return boy;

  }

   void setKilo( int a)
   {

        kilo = a;
    
   }

    int getKilo()
    {
     
     return kilo;
    
    }

    void sesver()
    {
     
     cout<<" Hav Hav.. " <<endl;
    
    }
 
  
  public:
  string cinsi;
 
};

class kedi : public Hayvan
{
    
    public:
    string gozRengi;

    void sesver()
    {
     
     cout<<" Miiyav Miiyav.. " <<endl;
    
    }

    void setBoy( int a)
  {

    boy = a;

  }

  int getBoy()
  {
    
    return boy;

  }

   void setKilo( int a)
   {

        kilo = a;
    
   }

    int getKilo()
    {
     
     return kilo;
    
    }


};

class Kus : public Hayvan
{
   
   public:
   int kanatHizi;

    void sesver()
    {
     
     cout<<" Cik Cik.. " <<endl;
    
    }

    void setBoy( int a)
  {

    boy = a;

  }

  int getBoy()
  {
    
    return boy;

  }

   void setKilo( int a)
   {

        kilo = a;
    
   }

    int getKilo()
    {
     
     return kilo;
    
    }


};


int main()
{
 // OOP : sarmalama(get() , set()) , kalıtım , çok biçimlilik

    Kopek nesK;

    nesK.ad="Murphy";
    nesK.cinsi="Terriyer";
    nesK.setBoy(5);
    nesK.setKilo(15); 
    
    cout<<"Terriyer Cinsli Kopege ait bilgiler : " <<endl;
    cout<<"Adi : " <<nesK.ad<<endl;
    cout<<"Cinsi : " <<nesK.cinsi<<endl;
    cout<<"kilo : " <<nesK.getKilo()<<endl;
    cout<<"Boy : " <<nesK.getBoy()<<endl;
    
    nesK.sesver();

    kedi nesK1;

    nesK1.ad="Pigilet";
    nesK1.gozRengi="Kahverengi";
    nesK1.setBoy(3);
    nesK1.setKilo(20);

    cout<<"Kediye ait bilgiler : " <<endl;
    cout<<"Adi : " <<nesK1.ad<<endl;
    cout<<"Goz Rengi : " <<nesK1.gozRengi<<endl;
    cout<<"kilo : " <<nesK1.getKilo()<<endl;
    cout<<"boy : " <<nesK1.getBoy()<<endl;
   
    nesK1.sesver();


    Kus nesK2;

    nesK2.ad="Logar";
    nesK2.kanatHizi=20;
    nesK2.setBoy(2);
    nesK2.setKilo(5);

    cout<<"Kus Cinsli Hayvana ait bilgiler : " <<endl;
    cout<<"Adi : " <<nesK2.ad<<endl;
    cout<<"Kanat Hizi : " <<nesK2.kanatHizi<<endl;
    cout<<"kilo : " <<nesK2.getKilo()<<endl;
    cout<<"boy : " <<nesK2.getBoy()<<endl;
    
    nesK2.sesver();

    system("color 4");

    return 0;
}
