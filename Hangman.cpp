#include <iostream>
#include <stdlib.h>
#include <algorithm> 
#include <stdlib.h> 
#include <time.h> 


std::string keyWord();

void render(int attemps, std::string dumpWord);

bool isTrue(std::string coreWord, char guessedLetter){
	for (int i = 0; i < coreWord.length(); i++){
		if (coreWord[i] == guessedLetter) return true;
	}
	return false;
}

void update(std::string & coreWord, std::string & dumpWord, char guessedLetter){
	int pos;
	for (pos = 0; pos < coreWord.length(); pos++){
		if (guessedLetter == coreWord[pos]){
			dumpWord[pos] = guessedLetter;
		}
	}
}

int main()
{
	std::cout << "----------WELCOME TO HANGMAN 0_1----------" << std::endl;
	std::cout << "--------PRESS ANY BUTTON TO START---------" << std::endl;
	char start;
	std::cin >> start;
	char guessedLetter;
    std::string dumpWord = "";
    std::string coreWord = keyWord();
    int attemps = 6;
    for (int i = 0; i < coreWord.length(); i++){
    	dumpWord += '_';
	}
	
	do{
		std::cout << "Your guess: " << std::endl;
		std::cin >> guessedLetter;
		if (isTrue(coreWord, guessedLetter)){
			update(coreWord, dumpWord, guessedLetter);
			render(attemps, dumpWord);
		} else {
			attemps--;
			render(attemps, dumpWord);
		}
	} while (attemps != 0 && dumpWord != coreWord);	
	
	if (dumpWord == coreWord) std::cout << "---CONGRATULATIONS---";
	else if (attemps == 0) 	std::cout << "-------YOU LOSE-------" << std::endl;
}

std::string WORD_LIST[] = {
 "angle", "ant", "apple", "arch", "arm", "army",
 "baby", "bag", "ball", "band", "basin", "basket", "bath", "bed", "bee", "bell", "berry", "bird", "blade", "board", "boat", "bone", "book", "boot", "bottle", "box", "boy",
 "brain", "brake", "branch", "brick", "bridge", "brush", "bucket", "bulb", "button",
 "cake", "camera", "card", "cart", "carriage", "cat", "chain", "cheese", "chest",
 "chin", "church", "circle", "clock", "cloud", "coat", "collar", "comb", "cord",
 "cow", "cup", "curtain", "cushion",
 "dog", "door", "drain", "drawer", "dress", "drop", "ear", "egg", "engine", "eye",
 "face", "farm", "feather", "finger", "fish", "flag", "floor", "fly",
 "foot", "fork", "fowl", "frame", "garden", "girl", "glove", "goat", "gun",
 "hair", "hammer", "hand", "hat", "head", "heart", "hook", "horn", "horse",
 "hospital", "house", "island", "jewel", "kettle", "key", "knee", "knife", "knot",
 "leaf", "leg", "library", "line", "lip", "lock",
 "map", "match", "monkey", "moon", "mouth", "muscle",
 "nail", "neck", "needle", "nerve", "net", "nose", "nut",
 "office", "orange", "oven", "parcel", "pen", "pencil", "picture", "pig", "pin",
 "pipe", "plane", "plate", "plow", "pocket", "pot", "potato", "prison", "pump",
 "rail", "rat", "receipt", "ring", "rod", "roof", "root",
 "sail", "school", "scissors", "screw", "seed", "sheep", "shelf", "ship", "shirt",
 "shoe", "skin", "skirt", "snake", "sock", "spade", "sponge", "spoon", "spring",
 "square", "stamp", "star", "station", "stem", "stick", "stocking", "stomach",
 "store", "street", "sun", "table", "tail", "thread", "throat", "thumb", "ticket",
 "toe", "tongue", "tooth", "town", "train", "tray", "tree", "trousers", "umbrella",
 "wall", "watch", "wheel", "whip", "whistle", "window", "wire", "wing", "worm",
 };

const int WORD_COUNT = sizeof(WORD_LIST) / sizeof(std::string);

std::string keyWord(){
	srand((unsigned) time(0));
	int randomIndex = rand() % WORD_COUNT;
 		return WORD_LIST[randomIndex];
}



void render(int attemps, std::string dumpWord){
	switch(attemps){
			case 6:
			{
				std::cout << " 					   " << std::endl;
				std::cout << "|                    " << std::endl;
				std::cout << "|                    " << std::endl;
				std::cout << "|                    " << std::endl;
				std::cout << "|                    " << std::endl;
				std::cout << "|                    " << std::endl;
				std::cout << "|                    " << std::endl;
				std::cout << "|            	       " << std::endl;
				std::cout << "|____________________ \n\n\n" << std::endl;
				std::cout << "The answer: " << dumpWord << std::endl;
				std::cout << "Your attemps left: " << attemps << "\n\n\n\n\n\n\n\n\n";
				break;
			}
			case 5:
			{
				std::cout << " ____________________" << std::endl;
				std::cout << "|            |       " << std::endl;
				std::cout << "|                    " << std::endl;
				std::cout << "|                    " << std::endl;
				std::cout << "|          		   " << std::endl;
				std::cout << "|          		   " << std::endl;
				std::cout << "|           		   " << std::endl;
				std::cout << "|        			   " << std::endl;
				std::cout << "|____________________\n\n\n" << std::endl;
				std::cout << "The answer: " << dumpWord << std::endl;
				std::cout << "Your attemps left: " << attemps << "\n\n\n\n\n\n\n\n\n";
				break;
			}
			
			case 4:
			{
				std::cout << " ____________________" << std::endl;
				std::cout << "|            |       " << std::endl;
				std::cout << "|            0       " << std::endl;
				std::cout << "|                    " << std::endl;
				std::cout << "|           	       " << std::endl;
				std::cout << "|          		   " << std::endl;
				std::cout << "|           		   " << std::endl;
				std::cout << "|          		   " << std::endl;
				std::cout << "|____________________\n\n\n" << std::endl;
				std::cout << "The answer: " << dumpWord << std::endl;
				std::cout << "Your attemps left: " << attemps << "\n\n\n\n\n\n\n\n\n";	
				break;
			}
			
			case 3:
			{
				std::cout << " ____________________" << std::endl;
				std::cout << "|            |       " << std::endl;
				std::cout << "|            0       " << std::endl;
				std::cout << "|           /|       " << std::endl;
				std::cout << "|               	   " << std::endl;
				std::cout << "|           	       " << std::endl;
				std::cout << "|           	       " << std::endl;
				std::cout << "|                    " << std::endl;
				std::cout << "|____________________\n\n\n" << std::endl;
				std::cout << "The answer: " << dumpWord << std::endl;
				std::cout << "Your attemps left: " << attemps << "\n\n\n\n\n\n\n\n\n";	
				break;
			}
			
			case 2:
			{
				std::cout << " ____________________" << std::endl;
				std::cout << "|            |       " << std::endl;
				std::cout << "|            0       " << std::endl;
				std::cout << "|           /|\\     " << std::endl;
				std::cout << "|               	   " << std::endl;
				std::cout << "|          		   " << std::endl;
				std::cout << "|                    " << std::endl;
				std::cout << "|                    " << std::endl;
				std::cout << "|____________________\n\n\n" << std::endl;
				std::cout << "The answer: " << dumpWord << std::endl;
				std::cout << "Your attemps left: " << attemps << "\n\n\n\n\n\n\n\n\n";	
				break;
			}
			
			case 1:
			{
				std::cout << " ____________________" << std::endl;
				std::cout << "|            |       " << std::endl;
				std::cout << "|            0       " << std::endl;
				std::cout << "|           /|\\     " << std::endl;
				std::cout << "|           /    	   " << std::endl;
				std::cout << "|                    " << std::endl;
				std::cout << "|                    " << std::endl;
				std::cout << "|          	       " << std::endl;
				std::cout << "|____________________\n\n\n" << std::endl;
				std::cout << "The answer: " << dumpWord << std::endl;	
				std::cout << "Your attemps left: " << attemps << "\n\n\n\n\n\n\n\n\n";
				break;
			}
			
			case 0:
			{
				std::cout << " ____________________" << std::endl;
				std::cout << "|            |       " << std::endl;
				std::cout << "|            0       " << std::endl;
				std::cout << "|           /|\\     " << std::endl;
				std::cout << "|           / \\ 	   " << std::endl;
				std::cout << "|             	   " << std::endl;
				std::cout << "|             	   " << std::endl;
				std::cout << "|          		   " << std::endl;
				std::cout << "|____________________\n\n\n" << std::endl;
				std::cout << "The answer: " << dumpWord << std::endl;
				std::cout << "Your attemps left: " << attemps << "\n\n\n\n\n\n\n\n\n";
				break;
			}
			
			default: {
				std::cout << "If you see this line, you fuck up the whole thing??" << std::endl;
				break;
		}
	}
}
