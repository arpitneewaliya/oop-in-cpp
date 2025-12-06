// Encapsulation means binding the data and methods together.
#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel
{
private:
    string Name;
    string OwnerName;
    int SubscriberCount;
    list<string> PublishedVideos;

public:
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

    void Subscribe() { SubscriberCount++; }
    void Unsubscribe() { SubscriberCount--; }
    void PublishVideo(string title) { PublishedVideos.push_back(title); }
};

int main()
{
    YoutubeChannel ytChannel("TechWithArpit", "Arpit Neewaliya");
    YoutubeChannel ytChannel2("ArpitGaming", "Arpit Neewaliya");

    ytChannel.PublishVideo("Arduino Programming");
    ytChannel.PublishVideo("C for beginners");

    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Subscribe();

    ytChannel.Unsubscribe();

    ytChannel.getInfo();
    ytChannel2.getInfo();

    return 0;
}
