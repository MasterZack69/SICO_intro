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
	
	MySelf Crezy = {"Crezy","Mr. MeMe","16 saal 10 mahine 15 din","MeMe is his life, Minecraft ka ch*da","Akhand Single"};
	
	MySelf Icekron = {"IceKron","Belial,Pain,Zoro,Roy and many more.......","17","art, gaming, reading","Shadi Shuda"};
	
	MySelf RC =  {"RCBOTSHOT","Shri Shri Shri Nalleshwar Chaudhary","15","Nalla h kuch h nhi krne ko","Phone iski biwi"};
	
	MySelf Star = {"Star","Naruto ka hoda","15","gayming aur anime chhodke kuch nhi krta","iski bandi hoti to kya hi hota ಠ_ಠ"};
	
	MySelf Popoye = {"Popoye","Professor69","24","ek aur gaymer","puchne me sharam a rhi thi ⊙_◎"};
	
	
	std::cout << "                Nallo ke Introductions\n\n";
	RC.intro();
	Crezy.intro();
	Icekron.intro();
	Star.intro();
	Popoye.intro();
	
}
	