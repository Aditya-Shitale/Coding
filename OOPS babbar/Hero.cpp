class Hero{
   public: 
    char name[100];
    int health;
    char level;

    //getters
    int getHealth(){
        return health;
    }
    int getLevel(){
        return level;
    }
    //setters
    void setHealth(int h){
        health=h;
    }
    void setLevel(char ch){
        level=ch;
    }

};