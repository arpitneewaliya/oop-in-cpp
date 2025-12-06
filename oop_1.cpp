#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel
{
public:
    string Name;
    string OwnerName;
    int subscriberCount;
    list<string> PublishedVideos;
};

int main()
{
    YoutubeChannel ytChannel;
    
    ytChannel.Name = "TechWithArpit";
    ytChannel.OwnerName = "Arpit Neewaliya";
    ytChannel.subscriberCount = 5000;
    ytChannel.PublishedVideos = {"C for beginners", "Arduino Programming", "React Tutorials"};

    cout << "Name: " << ytChannel.Name << endl;
    cout << "OwnerName: " << ytChannel.OwnerName << endl;
    cout << "subscriberCount: " << ytChannel.subscriberCount << endl;
    cout << "Videos: " << endl;
    for(string video : ytChannel.PublishedVideos) {
        cout << video << endl;
    }
    return 0;
}
