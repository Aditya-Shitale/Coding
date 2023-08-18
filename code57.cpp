#include <iostream>
using namespace std;
class CWA
{
protected:
    string title;
    float rating;

public:
    CWA(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() {}
};
class CWAVideo : public CWA
{
    float videoLength;

public:
    CWAVideo(string s, float r, float vl) : CWA(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videoLength << " minutes" << endl;
    }
};
class CWAText : public CWA
{
    int words;

public:
    CWAText(string s, float r, int wc) : CWA(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
        cout << "No of words in this text tutorial is: " << words << " words" << endl;
    }
};

int main(){
    string title;
    float rating, vlen;
    int words;

    // for Code With Adi Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWAVideo djVideo(title, rating, vlen);

    // for Code With Adi Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWAText djText(title, rating, words);

    CWA* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}

// Rules for virtual functions
// 1. They cannot be static
// 2. They are accessed by object pointers
// 3. Virtual functions can be a friend of another class
// 4. A virtual function in the base class might not be used.
// 5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class