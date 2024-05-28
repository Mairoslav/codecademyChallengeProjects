#include <iostream>
#include <string>
#include <limits>
#include <fstream>

void printASCII(const std::string& fileName) {
    std::string line;
    std::ifstream inFile;
    inFile.open(fileName); // Open the file with the given fileName

    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            std::cout << line << std::endl; // Print each line to the console
        }
        inFile.close(); // Close the file
    } else {
        std::cout << "File with ASCIIart not loaded" << std::endl;
    }
}

int main() {
    
    // array to store options
    std::string optionsStart[2] = {
        "1. Yes I am curious",
        "2. No I am already clever enough"
    };
    
    std::cout << "\nAre you prepared for wild wisdom?\n\n";
    
    // provide options to start or terminate
    for (int i = 0; i < 2; i++) {
        std::cout << optionsStart[i] << std::endl;
    }
    
    int start;
    
    // get feedback from user and validate it
    do {
        std::cout << std::endl << "Enter number 1 or 2: ";
        std::cin >> start;
        if (std::cin.fail() || start < 1 || start > 2) {
            std::cin.clear(); // clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear the input buffer
            std::cout << std::endl << "Invalid input, please enter number 1 or 2: \n";
        } else {
            break;
        }
    } while (true);
    
    // Terminate the program if startOption2
    if (start == 2) {
        std::cout << "\nTake it easy, come back if you change your mind\n\n";
        return 0;  
    }
    
    // array to store options
    std::string optionsElements[5] = { 
        "1. Air", 
        "2. Earth",
        "3. Water",
        "4. Fire",
        "5. Ether"
    };            
    
    std::cout << "\nIn what element do you feel like at home?\n\n";
    
    // provide element options
    for (int i = 0; i < 5; i++) { 
        std::cout << optionsElements[i] << std::endl;
    }
    
    int element;
       
    // get feedback from user and validate it
    do {
        std::cout << std::endl << "Enter number 1 to 5: ";
        std::cin >> element;
        if (std::cin.fail() || element < 1 || element > 5) {
            std::cin.clear(); // clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear the input buffer
            std::cout << std::endl << "Invalid input, please enter number from 1 to 5: ";
        } else {
            break;
        }
    } while (true);
    
    // Declare the arrays outside the switch statement
    std::string optionsAir[3], optionsEarth[3], optionsWater[3], optionsFire[3], optionsEther[3];
            
    switch (element) {
        case 1: // ..............................................................................
            optionsAir[0] = "1. focus, determination and independence"; // eagle
            optionsAir[1] = "2. energy, resilience and adaptability"; // hummingbird
            optionsAir[2] = "3. intelligence, learning and sociability"; // parrot        
    
            std::cout << std::endl << "What resonates the most in respect of your desired growth?\n" << std::endl;
    
            for (int i = 0; i < 3; i++) { // give options
                std::cout << optionsAir[i] << std::endl;
            }
    
            int animalAir;
            
            do {
                std::cout << std::endl << "Enter number 1 to 3: ";
                std::cin >> animalAir; // get feed from user
                std::cout << std::endl;
                if (std::cin.fail() || animalAir < 1 || animalAir > 3) {
                    std::cin.clear(); // clear the error flag
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear the input buffer
                    std::cout << "Invalid input, please enter number from 1 to 3:" << std::endl;
                } else {
                    break;
                }
            } while (true);
            
            if (animalAir == 1) {
				std::string fileName = "eagle.txt"; // the name of the text file
				printASCII(fileName); // call the function to print ASCII art
                std::cout << "Get inpired by Eagle. Eagles are known for their focus when hunting, symbolizing a person’s ability to stay determined and goal-oriented. Eagle: Symbolizes focus, determination, and independence with its keen eyesight and powerful flight.\n" << std::endl;
            } else if (animalAir == 2) {
				std::string fileName = "hummingbird.txt"; 
				printASCII(fileName); 
                std::cout << "Get inspired by Hummingbird. Hummingbirds symbolize high energy and resilience, as they can travel long distances during migration. Their ability to maneuver precisely and quickly can relate to a person’s adaptability and quick thinking in various situations. Hummingbird: Represents energy, resilience, and adaptability with its agility and rapid wing beats.\n" << std::endl;
            } else {
				std::string fileName = "parrot.txt"; 
				printASCII(fileName); 
                std::cout << "Get inpired by Parrot. Parrots are highly intelligent and capable of learning complex tasks, reflecting human traits of intelligence and learning ability. Parrots are often social creatures that thrive on interaction, paralleling humans' need for social connections and communication. Parrot: Reflects intelligence, learning, and sociability with its ability to mimic sounds and bright, attractive plumage.\n" << std::endl;
            } 
            
            break;
            
        case 2: // ..............................................................................
            optionsEarth[0] = "1. memory, intelligence, empathy and social bonds"; // elephant
            optionsEarth[1] = "2. team mentality, leadership and strategy"; // wolf
            optionsEarth[2] = "3. cooperation, organization, diligence and hard work"; // ant        
    
            std::cout << std::endl << "What resonates the most in respect of your desired growth?\n" << std::endl;
    
            for (int i = 0; i < 3; i++) { 
                std::cout << optionsEarth[i] << std::endl;
            }
    
            int animalEarth;
            
            do {
                std::cout << std::endl << "Enter number 1 to 3: ";
                std::cin >> animalEarth; 
                std::cout << std::endl;
                if (std::cin.fail() || animalEarth < 1 || animalEarth > 3) {
                    std::cin.clear(); // clear the error flag
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear the input buffer
                    std::cout << "Invalid input, please enter number from 1 to 3:" << std::endl;
                } else {
                    break;
                }
            } while (true);
            
            if (animalEarth == 1) {
				std::string fileName = "elephant.txt"; 
				printASCII(fileName); 
                std::cout << "Get inpired by Elephant. Elephants are known for their excellent memory and high intelligence. They form close social bonds and exhibit behaviors that suggest empathy and mourning. Elephant: Represents strength, memory, intelligence, empathy, and social bonds.\n" << std::endl;
            } else if (animalEarth == 2) {
				std::string fileName = "wolf.txt"; 
				printASCII(fileName); 
                std::cout << "Get inspired by Wolf. Wolves live and hunt in packs, showing the importance of teamwork and social structure. Within a pack, there are defined roles, highlighting leadership and strategic planning. Wolf: Embodies endurance, speed, sharp senses, teamwork, leadership, and strategy.\n" << std::endl;
            } else {
				std::string fileName = "ant.txt"; 
				printASCII(fileName); 
                std::cout << "Get inpired by Ant. Ant colonies operate with high levels of organization and cooperation. Ants are industrious and persistent, often working tirelessly for the colony. Ant: Reflects strength relative to size, efficiency, cooperation, organization, diligence, and hard work.\n" << std::endl;
            } 
            
            break;

        case 3: // ...............................................................................
            optionsWater[0] = "1. intelligence, problem solving and social interaction"; // dolphin
            optionsWater[1] = "2. curiosity, exploration and ability for overcoming limitations or constraints in life"; // octopus
            optionsWater[2] = "3. persistence, endurance and calm demeanor"; // sea turtle
        
            std::cout << std::endl << "What resonates the most in respect of your desired growth?\n" << std::endl;
    
            for (int i = 0; i < 3; i++) { 
                std::cout << optionsWater[i] << std::endl;
            }
    
            int animalWater;
            
            do {
                std::cout << std::endl << "Enter number 1 to 3: ";
                std::cin >> animalWater; 
                std::cout << std::endl;
                if (std::cin.fail() || animalWater < 1 || animalWater > 3) {
                    std::cin.clear(); // clear the error flag
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear the input buffer
                    std::cout << "Invalid input, please enter number from 1 to 3:" << std::endl;
                } else {
                    break;
                }
            } while (true);
            
            if (animalWater == 1) {
				std::string fileName = "dolphin.txt"; 
				printASCII(fileName); 
                std::cout << "Get inpired by Dolphin. Dolphins are highly intelligent and capable of complex problem-solving. They are social animals, often living in pods and showing cooperative behaviors. Dolphin: Symbolizes agility, intelligence, problem-solving, and social interaction.\n" << std::endl;
            } else if (animalWater == 2) {
				std::string fileName = "octopus.txt"; 
				printASCII(fileName); 
                std::cout << "Get inspired by Octopus. Octopuses are curious creatures, often exploring their environment with great interest. They are known for their ability to escape enclosures, reflecting resourcefulness and adaptability. Octopus: Highlights camouflage, flexibility, curiosity, resourcefulness, and adaptability.\n" << std::endl;
            } else {
				std::string fileName = "turtle.txt";
				printASCII(fileName);
                std::cout << "Get inpired by Sea Turtle. Sea turtles travel long distances across oceans, demonstrating persistence and endurance. They often exhibit a calm and composed behavior, even in challenging environments. Sea Turtle: Represents longevity, navigation skills, persistence, endurance, and a calm demeanor.\n" << std::endl;
            } 
            
            break;
            
        case 4: // ..............................................................................
            optionsFire[0] = "1. courage, confidence and protectiveness"; // lion
            optionsFire[1] = "2. resilience, renewal and eternal spirit"; // phoenix
            optionsFire[2] = "3. wisdom, knowledge, ambition and willpower"; // dragon        
    
            std::cout << std::endl << "What resonates the most in respect of your desired growth?\n" << std::endl;
    
            for (int i = 0; i < 3; i++) { 
                std::cout << optionsFire[i] << std::endl;
            }
    
            int animalFire;
            
            do {
                std::cout << std::endl << "Enter number 1 to 3: ";
                std::cin >> animalFire;
                std::cout << std::endl;
                if (std::cin.fail() || animalFire < 1 || animalFire > 3) {
                    std::cin.clear(); // clear the error flag
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear the input buffer
                    std::cout << "Invalid input, please enter number from 1 to 3:" << std::endl;
                } else {
                    break;
                }
            } while (true);
            
            if (animalFire == 1) {
				std::string fileName = "lion.txt"; 
				printASCII(fileName); 
                std::cout << "Get inpired by Lion. Lions are brave and fearless creatures, embodying qualities of courage and confidence. Lions are protective of their pride, reflecting a sense of loyalty and responsibility. Lion: Represents strength, power, courage, confidence, protectiveness, and leadership.\n" << std::endl;
            } else if (animalFire == 2) {
				std::string fileName = "phoenix.txt";
				printASCII(fileName);
                std::cout << "Get inspired by Phoenix. The phoenix embodies the ability to overcome adversity and emerge stronger, reflecting resilience and renewal. The phoenix is often portrayed as immortal, symbolizing the enduring nature of the human spirit. Phoenix: Embodies resilience, renewal, immortality, and eternal spirit.\n" << std::endl;
            } else {
				std::string fileName = "dragon.txt";
				printASCII(fileName);
                std::cout << "Get inpired by Dragon. Dragons are often portrayed as wise and intelligent creatures, possessing ancient knowledge and insight. Dragons are driven by their desires and ambitions, reflecting qualities of determination and willpower. Dragon: Symbolizes protection, freedom, wisdom, knowledge, ambition, and willpower.\n" << std::endl;
            } 
            
            break;
            
        case 5: // ..............................................................................
            optionsEther[0] = "1. wisdom, knowledge, introspection and observation"; // owl
            optionsEther[1] = "2. transformation, adaptation, freedom and lightness"; // butterfly
            optionsEther[2] = "3. deep emotions and spiritual connection"; // whale
            
            std::cout << std::endl << "What resonates the most in respect of your desired growth?\n" << std::endl;
    
            for (int i = 0; i < 3; i++) { 
                std::cout << optionsEther[i] << std::endl;
            }
    
            int animalEther;
            
            do {
                std::cout << std::endl << "Enter number 1 to 3: ";
                std::cin >> animalEther; // get feed from user
                std::cout << std::endl;
                if (std::cin.fail() || animalEther < 1 || animalEther > 3) {
                    std::cin.clear(); // clear the error flag
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear the input buffer
                    std::cout << "Invalid input, please enter number from 1 to 3:" << std::endl;
                } else {
                    break;
                }
            } while (true);
            
            if (animalEther == 1) {
				std::string fileName = "owl.txt";
				printASCII(fileName);
                std::cout << "Get inpired by Owl. Owls are often associated with wisdom and knowledge in various cultures, representing intelligence and intuition. Owls are observant creatures, suggesting qualities of introspection, reflection, and keen observation in humans. Owl: Represents wisdom, knowledge, perception, intuition, introspection, and observation.\n" << std::endl;
            } else if (animalEther == 2) {
				std::string fileName = "butterfly.txt";
				printASCII(fileName);
                std::cout << "Get inspired by Butterfly. Butterflies symbolize personal growth, transformation, and the ability to adapt to change. Butterflies flit and flutter with ease, suggesting qualities of freedom, joy, and lightness of being. Butterfly: Embodies transformation, beauty, creativity, adaptability, freedom, and lightness.\n" << std::endl; 
            } else {
				std::string fileName = "whale.txt";
				printASCII(fileName);
                std::cout << "Get inpired by Whale. Whales are known for their complex social structures and emotional depth, suggesting qualities of empathy, compassion, and understanding. Whales are revered in many cultures for their spiritual significance, symbolizing a connection to the mysteries of the universe and the depths of the subconscious. Whale: Symbolizes strength, power, depth, empathy, compassion, spiritual connection, and emotional depth.\n" << std::endl;
            } 
            break;
    }
    return 0;
}

/* to address the issue with the infinite loop caused by invalid input, we need to clear the input buffer whenever the user provides invalid input. This will ensure that any extra characters entered by the user are removed from the input buffer, preventing the program from getting stuck in a loop. 

Changes made:

	1. After detecting invalid input using std::cin.fail(), the error flag is cleared using std::cin.clear().

	2. The input buffer is cleared using std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n') to ensure any leftover input is removed.

	3. After valid input, the input buffer is also cleared to handle any extra characters the user might have entered.

These changes will help prevent the program from getting stuck in an infinite loop due to invalid input. */



