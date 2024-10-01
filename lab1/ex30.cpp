#include <iostream>
#include <sstream>

using namespace std;

int main(){
	stringstream info; 
	info<<"https://x.com\nhttps://youtube.com\nhttps://grabcad.com\nhttps://instagram.com\nhttps://facebook.com\nhttps://debian.org\nhttps://archlinux.org\nhttps://kali.org\nhttps://python.org\nhttps://gnome.org\nhttps://kde.org\nhttps://qbittorrent.org\nhttps://twiter.com\nhttps://redhat.com"<<endl;
	cout<<info.str();
}
