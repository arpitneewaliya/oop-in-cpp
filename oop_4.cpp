// ------------------------------------- Inheritance -----------------------------------------
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

class TravellingYoutubeChannel : public YoutubeChannel
{
public:
    TravellingYoutubeChannel(string name, string ownerName):YoutubeChannel(name, ownerName) {}
};

int main()
{
    TravellingYoutubeChannel ytTravel("Travel with Arpit", "Arpit Neewaliya");
    ytTravel.PublishVideo("Tokyo Vlog");
    ytTravel.PublishVideo("Dubai Vlog");
    ytTravel.getInfo();
    return 0;
}
