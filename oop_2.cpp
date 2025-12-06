// A constructor has no return type, and its name is same as the class name.
#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel
{
public:
    string Name;
    string OwnerName;
    int SubscriberCount;
    list<string> PublishedVideos;

    // This is a constructor
    YoutubeChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubscriberCount = 0;
    }

    void getInfo()
    {
        cout << "Name: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "SubscriberCount: " << SubscriberCount << endl;
        cout << "Videos: " << endl;
        for (string video : PublishedVideos)
            cout << video << endl;
        cout << endl;
    }
};

int main()
{
    YoutubeChannel ytChannel("TechWithArpit", "Arpit Neewaliya");
    YoutubeChannel ytChannel2("ArpitGaming", "Arpit Neewaliya");

    ytChannel.PublishedVideos.push_back("Arduino Programming");
    ytChannel.PublishedVideos.push_back("C for beginners");

    ytChannel.getInfo();
    ytChannel2.getInfo();

    return 0;
}
