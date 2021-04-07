#include <iostream>
#include<iomanip>
#include <string>
using namespace std;

class CD {
public:
	CD(string name, string songs[]);
	string getSinger();         // 获得歌手的名称
	string getSong(int index); // 获得某首歌的歌名
	void listSongs();           // 列出CD的内容
private:
	string singer;		// 歌手的名字。
	string songs[6];		// 每张专辑6首歌的名字。
};

CD::CD(string name, string asongs[]) {
	singer = name;
	for (int i = 0; i < 6; i++) {
		songs[i] = asongs[i];
	}
}

string CD::getSinger() {
	return singer;
}

string CD::getSong(int index) {
	return songs[index];
}

void CD::listSongs() {
	cout << "Singer: " << getSinger() << endl;
	for (int i = 0; i < 6; i++) {
		cout << " " << i+1 << ". " << getSong(i) << endl;
	}
	cout << endl;
}

class CDPlayer {
public:
	CDPlayer();

	/*提供给用户一个菜单，通过这个菜单，用户可以选择：
	1. 插入CD
	2. 播放CD
	3. 弹出CD
	0. 关机   */
	void showMenu();

	/*插入CD. void insertCD(CD* cd)，形参是指向CD对象的指针。如果CDPlayer中已经有CD，提示先取出CD；如果CDPlayer中没有CD，显示插入了哪位歌星的CD。*/
	void insertCD(CD* acd);

	/*弹出CD. CD *ejectCD()，返回值是指向该CD对象的指针。如果CDPlayer中已经有CD，显示弹出了哪位歌星的CD，返回该CD的指针；如果CDPlayer中没有CD，提示CDPlayer中没有CD，返回NULL。*/
	CD* ejectCD();
	/*播放CD。如果CDPlayer中已经有CD，显示正在播放哪位歌星的CD，并打印CD中歌曲的清单；如果CDPlayer中没有CD，显示CDPlayer中没有CD，并提示用户插入CD。*/
	void play();
private:
	/* 插入CDPlayer中的CD，它是指向CD对象的指针。没有CD时，为null。使用指针，很好地模拟 了CD对象不是播放器的一部分，播放器只是读取放入其中的CD的内容。*/
	CD* cd = NULL;
	bool cdIn = 0;  // CDPlayer中是否已经插入CD
};

CDPlayer::CDPlayer() {

}

void CDPlayer::showMenu() {
	for (int i = 0; i < 20; i++)
		cout << "*";
	cout << endl;
	cout << "* 1. 插入CD             *" << endl;
	cout << "* 2. 播放CD             *" << endl;
	cout << "* 3. 弹出CD             *" << endl;
	cout << "* 0. 关机               *" << endl;
	for (int i = 0; i < 20; i++)
		cout << "*";
	cout << endl;
	cout << endl;
}

void CDPlayer::insertCD(CD* acd) {
	if (cdIn == 0) {
		cout << "插入了" << acd->getSinger() << "的CD......" << endl;
		cd = acd;
		cdIn = 1;
	}
	else {
		cout << "正在取出CD......" << endl;
		cd = NULL;
		cout << "插入了" << acd->getSinger() << "的CD......" << endl;
		cd = acd;
	}
	cout << endl;
}

CD* CDPlayer::ejectCD() {
	if (cdIn == 0) {
		cout << "CDplayer中没有CD!" << endl;
		cout << endl;
		return NULL;
	}
	else {
		cout << "弹出了" << cd->getSinger() << "的CD......" << endl;
		cout << endl;
		return cd;
	}
}

void CDPlayer::play() {
	if (cdIn == 0) {
		cout << "Please insert CD first !" << endl;
		cout << endl;
	}
	else {
		cout << "正在播放" << cd->getSinger() << "的CD......" << endl;
		cd->listSongs();
		cout << endl;
	}
}

void input(string songs[],int n) {
	// 输入该歌手的六首歌名（青花瓷、菊花台、双节棍等）
	for (int i = 0; i < 6; i++) {
		cout << "  song" << (i + 1) << "#: ";
		cin >> songs[i];
	}
	cout << endl;
}

int main() {
	string name1, name2;
	string songs1[6], songs2[6];
	int button = 0, decideCD = 0;

	cout << "制造CD1......" << endl;
	// 输入歌手名字
	cout << "  Singer's Name: ";
	cin >> name1;  // 输入：周杰伦
	input(songs1, 1);
	cout << "制造CD2......" << endl;
	// 输入歌手名字
	cout << "  Singer's Name: ";
	cin >> name2;
	input(songs2, 2);

	CD cd1(name1, songs1);   //制造CD
	CD cd2(name2, songs2);  //制造CD
	cd1.listSongs();       //显示CD的内容
	CDPlayer player;      //制造CDplayer
	player.showMenu();    //生成播放机的按钮

	cout << "请选择：";
	cin >> button;
	while (button != 0) {
		switch (button) {
		case 1:/* 插入CD */
			if (decideCD == 0) {
				player.insertCD(&cd1); //打印：插入了周杰伦的CD......
				decideCD++;
			}
			else {
				player.insertCD(&cd2); //打印：插入了周杰伦的CD......
				decideCD++;
			}
			break;
		case 2:/* 播放 */
			player.play();         //1.打印：Please insert CD first  //2.打印：正在播放周杰伦的CD......
			break;
		case 3:/* 弹出 */
			player.ejectCD();      //打印：弹出了周杰伦的CD......
			break;
		}
		cout << "请选择：";
		cin >> button;
	}
	cout << "正在关机......" << endl;
	
	return 0;
}
