#include "Info.h"
#include <iostream>

#define ERROR_UNPARSED_INT -1

typedef unsigned long ulong;

int parseInt(const std::string& str) {

    std::string temp;
    const ulong arrSize = str.length();

    for (ulong i = 0; i < arrSize; ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            temp += str[i];
        } else if (str[i] == ',') {
            return std::stoi(temp);
        }
    }

    std::cerr << "\nUnparsed\n\n";
    return ERROR_UNPARSED_INT;
}

int request() {

    std::string dateRequest;
    
    std::cout << "Input a Date \n$ ";
    std::getline(std::cin, dateRequest);

    return parseInt(dateRequest);
}

// March 13, 1881 (Assassination of Alexander II)
// August 28, 1915 (Joining or WWI)
// March 16, 1917 (February Revolution)
// November 7, 1917 (October Revolution)
// March 3, 1918 (Treaty of Brest-Litovsk)
// December 15, 1920 (Civil War)
// March 20, 1920 (General Bolsheviks Rule)
const char* getInfo(const int date) {
    switch (date) {
        case 13:    // Assassination of Alexander II
            static const char* info1 =
            "\tMarch 13, 1881:\n\n"
            
            "    When I heard the news, I was honestly surprised Tsar Alexander\n"
            "was giving us some liberties that we had requested. Although they\n"
            "weren\'t as far as many had wanted, they were still a start. He freed\n"
            "many, if not all, of the serfs that historically were tied to land.\n"
            "His assassination could lead to an end to the reforms, if not an\n"
            "outright reversal. I worry about the repercussions that will affect\n"
            "the many due to the actions of a few.\n";
        return info1;
//-----------------------------------------------------------------------------
        case 28:    // WWI
            static const char* info2 =
            "\tAugust 28, 1915:\n\n"
            
            "    After the murder of Alexander II life has only gotten worse. The\n"
            "small amount of light we could see was quickly stamped out, then\n"
            "buried so deep it would be a challenge to revive it. The new Tsar\'s\n"
            "will silence anyone who opposes them, shoot on unarmed protesters,\n"
            "and send people to spy on their friends and neighbors. And then, as\n"
            "most of our hopes are at a low, we joined a war meant just to stall.\n"
            "We\'ve lost hundreds of thousands and we seem like we are nowhere\n"
            "near getting out of the war nor winning it. The people at home are\n"
            "left to make do with what few resources are not going to the war\n"
            "effort. I don\'t know how much longer I can sustain myself like this.\n";
        return info2;
//-----------------------------------------------------------------------------
        case 16:    // February Revolution
            static const char* info3 =
            "\tMarch 16, 1917:\n\n"
            
            "    A frankly ineffective provisional government has been set up\n"
            "to create a new constitution after the abdication of the Tsar. The\n"
            "provisional government\'s first decision was to stay in a war that\n"
            "we are losing. Everyone who I\'ve talked to has said something similar\n"
            "to \"staying in the war was their first mistake\". The constant\n"
            "fluidity of the government is concerning, and with how weak the\n"
            "provisional government is, the tides might move again to allow for\n"
            "something better.\n";
        return info3;
//-----------------------------------------------------------------------------
        case 7:     // October Revolution
            static const char* info4 =
            "\tNovember 7, 1917:\n\n"
            
            "    The glimmer of light I thought long lost, has now been reignited.\n"
            "The something better I spoke of might be on its way. The Bolsheviks\n"
            "have taken control, promising peace, bread, and land with their rule.\n"
            "Although this is great progress, we are not in the clear yet. The\n"
            "early years of a new government are very important. Make the wrong\n"
            "decisions, like the provisional government had, and you will fall out\n"
            "of favor in the publics\' eye.\n"
            "Мир, хлеб и земля!\n";
        return info4;
//-----------------------------------------------------------------------------
        case 3:     // Treaty of Brest-Litovsk
            static const char* info5 =
            "\tMarch 3, 1918:\n\n"
            
            "    My hopes were increasing when I heard that we had left the war.\n"
            "But in our haste to leave we gave one million square miles of land\n"
            "inhabited by fifty-five million people to the Germans. This was both\n"
            "a triumph and a failure. We desperately needed to leave the war\n"
            "after the two million deaths; the government finally realized it as\n"
            "well. But we gave up fifty-five million others effectively to be\n"
            "killed by the Germans as well. All they have done is increase the\n"
            "death toll. I hope that they can correct their mistakes.\n";
        return info5;
//-----------------------------------------------------------------------------
        case 15:    // Civil War
            static const char* info6 =
            "\tDecember 15, 1920:\n\n"
            
            "    The civil war continues to rage between the reds and the whites.\n"
            "We left a war to start a war. I don\'t think that the whites could\n"
            "succeed against the reds, nor do I want them to. I know that this\n"
            "will end in the favor of the proletariat, but for the time being I\n"
            "am staying away from the conflict. The general well-being is\n"
            "deteriorating; we are feeling ignored. The limited food stores I\n"
            "have only could sustain me for a few more months at most.\n"
            "What a happy birthday. . .\n";
        return info6;
//-----------------------------------------------------------------------------
        case 20:    // General Bolsheviks Rule
            static const char* info7 =
            "\tMarch 20, 1917:\n\n"
            
            "    I went into town a fortnight ago and saw the death brought on by\n"
            "our war. Many signs were calling for people to volunteer for the war\n"
            "effort. It is a noble cause, yet my health and wellbeing have never\n"
            "been good enough to fight.\n"
            "    More recently I have noticed a continuing headache and a fever.\n"
            "I\'m not too sure of what it is, but I fear for my life many have been\n"
            "dying from something similar to this. I pray that I live to see the\n"
            "glory that will come from the end of this war, but I fear I might not.\n";
        return info7;
//-----------------------------------------------------------------------------
        default: 
            static const char* errorMsg =
            "Not A Date Written About\n\n";
        return errorMsg;
    }
}