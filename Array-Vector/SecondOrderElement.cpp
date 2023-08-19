#include <iostream>
#include <climits>
#include <vector>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a)
{
    int temp = 0;
    vector<int> output;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > a[i + 1])
        {
            temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
            i = -1;
        }
    }
    output.push_back(a[a.size() - 2]);
    output.push_back(a[1]);
    return output;
}

int main()
{
    // int myNumbers[5] = {8, 3, 6, 4, 5};
    vector<int> myNumbers{4, 5, 3, 6, 7};
    vector<int> output = getSecondOrderElements(5, myNumbers);
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }
}

// // 🎉 Let's Roast Some Hilarious Coding Myths! 🤣🚀

// Hey tech-savvy LinkedIn pals! 💼 Time to put on our myth-busting capes and have a good laugh at these coding rumors. 🦸‍♂️🦸‍♀️ Get ready to LOL! 😂

// Myth 1: "Coding is Only for Geniuses" 🧠🎩

// 🤪 Reality: If you can decode a cat's meow, you're ready to code! Genius-level IQ not required—just a sprinkle of curiosity!

// Myth 2: "You Need a Math Degree to Code" ➗📚

// 🤪 Fact: Coding's secret weapon? Basic math skills and the ability to count the number of coffee cups on your desk. ☕️🧮

// Myth 3: "Coding Means Being Alone" 💻🕺

// 🤪 Truth: Imagine coding as a dance-off party with your laptop. You're the DJ, and bugs are the dance partners. 💃💻

// Myth 4: "Coding Is Dull and Boring" 😴🎮

// 🤪 Surprise: Coding is like creating a universe inside your screen. You're the boss, designing adventures more epic than a Netflix binge!

// Myth 5: "Coding is Just for Boys" 👦👧🌈

// 🤪 Newsflash: Coding is like a pizza party—everyone gets a slice! Girls, boys, unicorns, everyone's invited to the coding fiesta! 🦄🍕

// Ready to bust some myths and roll on the floor laughing? 🤣🌟

// Let's celebrate the hilarious world of coding together! 🎉👾

// #CodingMythBusters #GeekyLaughs #CodingCapers

// Let's keep the code funny, the bugs entertaining, and the learning endless! 🚀😄