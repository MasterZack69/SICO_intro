#include <iostream>

struct MySelf {
	std::string a;
	std::string name;
	std::string age;
	std::string hobby;
	std::string status;
	
	void intro() {
		std::cout << "|| " << a << " ||"<< "\n";
		std::cout << "Full Name : " << name << "\n";
		std::cout << "Age       : " << age << "\n";
		std::cout << "Hobbies   : " << hobby << "\n";
		std::cout << "Status    : " << status << "\n\n";
	}
};

int main() {
	MySelf Kirti = {"Kk","Kirtikumar Sharma","26 i think.......","Saxx, Nashe, ladki patana","Engaged"};
	
	MySelf HB = {"HB Gayming Master","Privacy ke nam pe demoot kr dega hb ;-;","20","Part Time Mistri","Single(shayad)"};
	
	MySelf Firangi = {"Furangi","Nallo ke nam yad nhi rakhte ham ","17 or 18 ( nallo ka age bhi yad nhi rakhte)","Hip Hop, Mujik", "SiNgLe"};
	
	MySelf Zack = {"Zacku","Zackie~kun","15 ho jaunga finally","Koding,playing stone age games, photugurafi","F off u all"};
	
	MySelf Leo = {"Leoda","Leo the Lewd","i think it was 17","GFX Designing, sOmE illegal stuff","2 bar break up ho chuka jabse mai janta"};
	
	MySelf Rishy = {"Rishouta","Anushka Mehra","18 hone wala","Gayming, Gayming aur Gayming","Mingle"};
	
	MySelf Dead = {"Dead_♡","Shreya didi","around 18","idk","Mingle"};
	
	MySelf Baba = {"BaBa Yoga","Sayaka~Chan","20","Koding, watching loli anime(Bachiya door rhe) ","Single"};
	

	std::cout << "                 Admins' Introduction\n\n";
	
	Kirti.intro();
	Firangi.intro();
	HB.intro();
	Zack.intro();
	Baba.intro();
	
	
	std::cout << "               Honorable Mentions\n\n";
	
	Leo.intro();
	Rishy.intro();
	Dead.intro();
	std::cout << " Becuz of Lack of information, Nawed was left behind :/";

}
	