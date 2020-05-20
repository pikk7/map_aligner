#ifndef MAPALIGN__H
#define MAPALIGN__H

#include <iostream>
#include <functional>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <typeinfo>

template <class Key, class  T,class Comp = std::less<Key> >

class map_aligner
{
private:

    std::vector<std::map<Key,T,Comp> > data;
    T filler;
    bool is_filler=false;
public:

    // map_aligner(/* args */);
    // ~map_aligner();

    void add(const std::map<Key,T,Comp>& a)
    {
    this->data.push_back(a);
    }

    void set_filler(T filler)
    {
        this->filler=filler;
        this->is_filler=true;
    }

void align()
{         std::cout<< typeid(this).name()<<std::endl;

    std::set<Key> retval;
    for(std::map<Key,T,Comp>const& el :data)
    {
        for (auto const& element : el) {
            // std::cout<< typeid(element).name()<<std::endl;
            // std::cout<<element.first<<std::endl;
            retval.insert(element.first);
            //ossze key kigyujtese
        }
    }
            // auto print = [](const Key& n) { std::cout << " " << n; };

            // std::for_each(retval.begin(),retval.end(),print) ;

 for(int i=0;i<data.size();++i)
    {


        for (auto const&  element : retval) 
        {

                if(data[i].find(element)==data[i].end()){
                     data[i][element]=data[i][element];
                }else
                {
                 data[i][element];

                }
            
            
        }

    }

    int i=0;
 for(std::map<Key,T,Comp>const& el :data)
    {
        std::cout<<i<<" valtozo"<<std::endl;

        for (auto const& element : el) {
            std::cout<<" map kulcs "<<element.first<<" ertek: "<<element.second <<std::endl;
        }
        i++;
    }

}



 map_aligner& operator+=(const std::map<Key,T,Comp>& a) {
     this->add(a);
     return *this;
 }


void erase(const Key &b){  
    for(std::map<Key,T,Comp>const& el :data)
    {
        for (auto const& element : el) {

            if(element.first==b){
                std::cout<<element.first<<std::endl;

            }
        }
    }

    }



int count(){

    return data.size();
}


};













#endif