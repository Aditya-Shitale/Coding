#include<bits/stdc++.h>
#include"Hero.cpp"
using namespace std;

int main(){
    Hero shakti;
    shakti.health=70;
    shakti.level=2;
    cout<<shakti.health<<endl<<shakti.level<<endl;

    Hero bhakti;
    bhakti.setHealth(40);
    bhakti.setLevel('A');
    cout<<bhakti.getHealth()<<endl<<bhakti.getLevel()<<endl;
    return 0;
}