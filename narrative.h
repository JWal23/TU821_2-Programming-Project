#pragma once

#include <string>
#include <iostream>


class Narrative{
private:
    void outside_house();
    void dialogueOneA();
    void dialogueTwoA();
    void minidialogue();
    void ranAway();
    void DoillSequence();
public:

    Narrative();
    ~Narrative();
    
    void typingText(std::string text, int delay);
    void intro();
    void cont_clr();
    


};