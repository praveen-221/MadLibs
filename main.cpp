/* A MAD LIBS game using C++
   This is a console application
*/

#include <iostream>       //preprocessing directive

using namespace std;

/* Code to make words bold
   Works in LINUX/UNIX terminal but not in Windows

std::ostream& bold_on(std::ostream& os)
{
    return os << "\e[1m";
}

std::ostream& bold_off(std::ostream& os)
{
    return os << "\e[0m";
}*/

//declaration of functions
void story_1();
void story_2();
void story_3();

int main()
{
    cout << "                      Mad Libs \n";
    cout << "\n\n";

    char c;
    do {
        int a;
        cout << "Select a Story: \n" << endl;
        cout << "       1) Alexander the Great\n";
        cout << "       2) Computer Speak\n";
        cout << "       3) Speaking of Speaking\n\n";

        //select an index and executing using switch
        cout << "Enter the Story Index: ";
        cin >> a;
        getwchar();
        cout << "\n\n";

        switch (a)
        {
            case 1:
                story_1();
                break;

            case 2:
                story_2();
                break;

            case 3:
                story_3();
                break;

            default :
                cout << "     Invalid Input :(\n";
                cout << "     Enter a valid Input and try...\n";
                if (!a) {
                    getwchar();
                }
                break;
        }
        cout << "\n\n";
        cout << "Ready to read another story ? (Y/N): ";
        cin >> c;
        getwchar();
    }
    while (c == 'Y' || c == 'y');

    if (c != 'Y' || c != 'y') {
        cout << "\n";
        cout << "     Thank you :) \n";
        cout << "     See you soon... \n";
    }
    return 0;
}

void story_1()
{
    string place,c1,c2,n1,n2,n3,n4,part_of_body,p1,p2,word,liquid;

    cout << "Enter the following:\n";
    cout << "    1) Place: ";
    getline(cin, place);
    cout << "    2) Celebrity 1: ";
    getline(cin, c1);
    cout << "    3) Celebrity 2: ";
    getline(cin, c2);
    cout << "    4) Noun 1: ";
    getline(cin, n1);
    cout << "    5) Noun 2: ";
    getline(cin, n2);
    cout << "    6) Noun 3: ";
    getline(cin, n3);
    cout << "    7) Noun 4: ";
    getline(cin, n4);
    cout << "    8) Part of Body: ";
    getline(cin, part_of_body);
    cout << "    9) Plural Noun 1: ";
    getline(cin, p1);
    cout << "    10) Plural Noun 2: ";
    getline(cin, p2);
    cout << "    11) Absurd word: ";
    getline(cin, word);
    cout << "    12) A Liquid: ";
    getline(cin, liquid);
    cout << "\n\n";

    cout << "                 Alexander the Great \n\n";
    cout << "In 356 B.C., Phillip of Macedonia, the ruler of a province in northern\n";
    cout << "Greece, became the father of a bouncing baby " << n1 << endl;
    cout << "named Alexander. Alexander's teacher was Aristotle, the famous\n";
    cout << n2 <<". When he was twenty years old, his father was murdered\n";
    cout << "by " << c1 <<", after which he became " << n3 <<" of all\n";
    cout << "Macedonia. In 334, he invaded Persia and defeated " << c2 << endl;
    cout << "at the battle of " << place <<". Later, at Arbela, he won his most\n";
    cout << "important victory, over Darius the Third. This made him " << n4 << endl;
    cout << "word.over all Persians. Then he marched to India, and\n";
    cout << "many of his " << p1 <<" died. After that, Alexander began\n";
    cout << "drinking too much liquid, and at the age of 33, he died\n";
    cout << "of an infection in the " << part_of_body <<". His last words are reported\n";
    cout << "to have been, 'There are no more "<< p2 <<" to conquer.'\n";
}

void story_2()
{
    string adj,adv,n1,n2,n3,n4,n5,n6,p1,p2,p3,p4,p5,v1,v2,word;

    cout << "Enter the following:\n";
    cout << "    1) Adjective: ";
    getline(cin, adj);
    cout << "    2) Adverb: ";
    getline(cin, adv);
    cout << "    3) Noun 1: ";
    getline(cin, n1);
    cout << "    4) Noun 2: ";
    getline(cin, n2);
    cout << "    5) Noun 3: ";
    getline(cin, n3);
    cout << "    6) Noun 4: ";
    getline(cin, n4);
    cout << "    7) Noun 5: ";
    getline(cin, n5);
    cout << "    8) Noun 6: ";
    getline(cin, n6);
    cout << "    9) Plural Noun 1: ";
    getline(cin, p1);
    cout << "    10) Plural Noun 2: ";
    getline(cin, p2);
    cout << "    11) Plural Noun 3: ";
    getline(cin, p3);
    cout << "    12) Plural Noun 4: ";
    getline(cin, p4);
    cout << "    13) Plural Noun 5: ";
    getline(cin, p5);
    cout << "    14) verb 1: ";
    getline(cin, v1);
    cout << "    15) verb 2: ";
    getline(cin, v2);
    cout << "    16) Word beginning with M: ";
    getline(cin, word);
    cout << "\n\n";

    cout << "                 Computer Speak \n\n";
    cout << "If you want to become "<< n1 << " literate, here are some key\n";
    cout << p1 << " that you should "<< v1 << " as quickly as possible:\n\n";
    cout << "CD ROM: Stands for compact " << n2 << " ... read only\n";
    cout << word << ". This compact disc can hold as many as 600\n";
    cout << p2 << ", which is the equivalent of 700 floppy "<< p3 << ".\n\n";
    cout << "CYBERSPACE: Stands for the imaginary "<< n3 << " that people\n";
    cout << "enter when they " << v2 << " with each other through computers on\n";
    cout << "a collection of " << p4 << ", known as the Inter" << n4 <<".\n\n";
    cout << "E-Mail: Means " << adv <<  " transmitted " << n5 << ".\n\n";
    cout << "MODEM: Is the device that allows an " << adj << " computer to\n";
    cout << "transmit " << p5 << " over a phone " << n6 << ".\n\n";
    cout << "\n\n";
}

void story_3()
{
    string adj1,adj2,adj3,adj4,n1,n2,n3,pb1,pb2,pb3,p1,p2,p3,p4,liquid,verb;

    cout << "Enter the following:\n";
    cout << "    1) Adjective 1: ";
    getline(cin, adj1);
    cout << "    2) Adjective 2: ";
    getline(cin, adj2);
    cout << "    3) Adjective 3: ";
    getline(cin, adj3);
    cout << "    4) Adjective 4: ";
    getline(cin, adj4);
    cout << "    5) Noun 1: ";
    getline(cin, n1);
    cout << "    6) Noun 2: ";
    getline(cin, n2);
    cout << "    7) Noun 3: ";
    getline(cin, n3);
    cout << "    8) Part of Body 1: ";
    getline(cin, pb1);
    cout << "    9) Part of Body 2: ";
    getline(cin, pb2);
    cout << "    10) Part of Body 3: ";
    getline(cin, pb3);
    cout << "    11) Plural Noun 1: ";
    getline(cin, p1);
    cout << "    11) Plural Noun 2: ";
    getline(cin, p2);
    cout << "    12) Plural Noun 3: ";
    getline(cin, p3);
    cout << "    13) Plural Noun 4: ";
    getline(cin, p4);
    cout << "    14) A Liquid: ";
    getline(cin, liquid);
    cout << "    15) Verb ending with ING: ";
    getline(cin, verb);
    cout << "\n\n";

    cout << "                 Speaking of Speaking \n\n";
    cout << "A recent " << adj1 << " poll shows that the majority of people are\n";
    cout << "terrified of public " << verb << ". They would rather walk\n";
    cout << "across burning " << p1 << " or swim in " << n1 <<"-infested\n";
    cout << "waters than give a speech in front of a group of " << p2 << ". This\n";
    cout << adj2 << " fear can be overcame in five easy " << p3 << " :\n\n";
    cout << "\t 1. Organize all of your " << p4 << " on a piece of " << n2 << ".\n";
    cout << "\t 2. Remember to start your speech with a funny " << n3 << ".\n";
    cout << "\t 3. When speaking, look your audience straight in the " << pb1 << "\n";
    cout << "\t    and speak in a strong and " << adj3 << " voice.\n";
    cout << "\t 4. Be simple. Never use "<< adj4 << " words that are over the audience's " << pb2 <<".\n";
    cout << "\t 5. Always keep a pitcher of liquid.next to you, in case your "<< pb3 << " goes dry.\n";
}
