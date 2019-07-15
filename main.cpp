#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

/********************************
    Function Prototypes
********************************/
string Noun1(void);
string Noun2(void);
string Noun3(void);
string Adjective1(void);
string Adjective2(void);
string Adjective3(void);
string Verb1(void);
string Verb2(void);
string Verb3(void);
string Preposition1(void);
string Preposition2(void);
string Adverb(void);

/********************************
    Main Function
********************************/
int main()
{
    /// this is a time based seed for the random number generator
    srand(time(0));

    ///Variable to store confirmation number
    int confirmation;

    ///Main while loop
    while(1)
    {
        ///Ask user to generate poem
        cout<<"\nGenerate Poem?"<<endl;
        cout<<"1=YES    0=NO"<<endl;

        ///Enables user input
        ///User input to be stored in confirmation variable
        cin>>confirmation;

        ///If user inputs 1 (wants to generate a poem):
        if(confirmation==1)
        {
                ///generate 1 poem
                for(int i=0;i<1;i++)
            {

/********************************************************************
    Returned Text from the functions will be stored in a string
********************************************************************/
                string noun1=Noun1();
                string noun2=Noun2();
                string noun3=Noun3();

                string adjective1= Adjective1();
                string adjective2= Adjective2();
                string adjective3= Adjective3();

                string verb1= Verb1();
                string verb2= Verb2();
                string verb3= Verb3();

                string preposition1= Preposition1();
                string preposition2= Preposition2();

                string adverb= Adverb();

                ///This is an array of articles
                string ART[]={"A","An"};

                ///If the first letter of Adjective 1 is a vowel set the article to "An"
                if (adjective1[0]== 'a'||adjective1[0]== 'e'||adjective1[0]== 'i'||adjective1[0]== 'o'||adjective1[0]== 'u')
                {
                    ///This is the pattern of the Poem
                    cout<<"*********************************************************************************"<<endl;
                    cout<<ART[1]<<" "<<adjective1<<" "<<noun1<<endl;
                    cout<<"------------------------------------------"<<endl;
                    cout<<ART[1]<<" "<<adjective1<<" "<<noun1<<" "<<verb1<<" "<<preposition1<<" "<<"the "<<adjective2<<" "<<noun2<<endl;
                    cout<<adverb<<" "<<"the "<<noun1<<" "<<verb2<<endl;
                    cout<<noun2<<" "<<verb3<<" "<<preposition2<<" "<<"a "<<adjective3<<" "<<noun3<<endl;
                    cout<<"*********************************************************************************"<<endl;
                }

                ///If else, set the article to "A"
                else
                {
                    ///This is the pattern of the Poem
                    cout<<"*********************************************************************************"<<endl;
                    cout<< ART[0]<<" "<<adjective1<<" "<<noun1<<endl;
                    cout<<"------------------------------------------"<<endl;
                    cout<<ART[0]<<" "<<adjective1<<" "<<noun1<<" "<<verb1<<" "<<preposition1<<" "<<"the "<<adjective2<<" "<<noun2<<endl;
                    cout<<adverb<<" "<<"the "<<noun1<<" "<<verb2<<endl;
                    cout<<noun2<<" "<<verb3<<" "<<preposition2<<" "<<"a "<<adjective3<<" "<<noun3<<endl;
                    cout<<"*********************************************************************************"<<endl;
                }

            }
        }

        ///If user enters 0(doesn't want to generate a poem):
        if(confirmation==0)
        {
            ///Display message and paint text colour to red
            HANDLE colour=GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(colour, 12);
            cout<<"**************"<<endl;
            cout<<"Program Ended!"<<endl;
            cout<<"**************"<<endl;

            ///break the loop
            break;
        }
    }
}

/********************************
    Noun generating function
********************************/
string Noun1(void)
{
    int counter=0;
    int line_counter=0;

    ///Variable to store the selected word from the text file
    string text;

    ///Variable to identify no string/text
    string blank="";

    ///Access to the text file is established under the name of: "line"
    ifstream line("noun1.txt");

    ///while a line is being read from the text file:
    while(getline(line,text))
    {
        ///Start a counter to go by increment of 1 for every line read
        ///This is used to number each line read
        line_counter++;

        ///If the line is blank or no text:
        if(text==blank)
        {
            ///Break the while loop
            break;
        }
    }

    ///Access to the text file is established under the name of: "nounfile"
    ifstream nounfile("noun1.txt");


    ///Random number generator between 0 and the number of lines in the text file
    int random=rand()%line_counter;

    ///while a line is being read from the text file:
    while(getline(nounfile,text))
    {

        ///Start a counter to go by increment of 1 for every line read
        ///This is used to number each line read
        counter++;

        ///When the reaching the line which is randomly generated number return the word on that line
        if(counter==random)
        {
            return(text);
        }
    }
}

/********************************
    Noun 2 generating function
********************************/
string Noun2(void)
{
    int counter=0;
    int line_counter=0;
    string text;
    string blank="";
    ifstream line("noun1.txt");
    while(getline(line,text))
    {
        line_counter++;
        if(text==blank)
        {
            break;
        }
    }
    ifstream nounfile("noun1.txt");
    int random=rand()%line_counter;
    while(getline(nounfile,text))
    {
        counter++;
        if(counter==random)
        {
            return(text);
        }
    }
}

/********************************
    Noun 3 generating function
********************************/
string Noun3(void)
{
    int counter=0;
    int line_counter=0;
    string text;
    string blank="";
    ifstream line("noun1.txt");
    while(getline(line,text))
    {
        line_counter++;
        if(text==blank)
        {
            break;
        }
    }
    ifstream nounfile("noun1.txt");
    int random=rand()%line_counter;
    while(getline(nounfile,text))
    {
        counter++;
        if(counter==random)
        {
            return(text);
        }
    }
}

/**************************************
    Adjective 1 generating function
**************************************/
string Adjective1(void)
{
    int counter=0;
    int line_counter=0;
    string text;
    string blank="";
    ifstream line("adjective.txt");
    while(getline(line,text))
    {
        line_counter++;
        if(text==blank)
        {
            break;
        }
    }
    ifstream nounfile("adjective.txt");
    int random=rand()%line_counter;
    while(getline(nounfile,text))
    {
        counter++;
        if(counter==random)
        {
            return(text);
        }
    }
}

/*************************************
    Adjective 2 generating function
*************************************/
string Adjective2(void)
{
    int counter=0;
    int line_counter=0;
    string text;
    string blank="";
    ifstream line("adjective.txt");
    while(getline(line,text))
    {
        line_counter++;
        if(text==blank)
        {
            break;
        }
    }
    ifstream nounfile("adjective.txt");
    int random=rand()%line_counter;
    while(getline(nounfile,text))
    {
        counter++;
        if(counter==random)
        {
            return(text);
        }
    }
}

/*************************************
    Adjective 3 generating function
*************************************/
string Adjective3(void)
{
    int counter=0;
    int line_counter=0;
    string text;
    string blank="";
    ifstream line("adjective.txt");
    while(getline(line,text))
    {
        line_counter++;
        if(text==blank)
        {
            break;
        }
    }
    ifstream nounfile("adjective.txt");
    int random=rand()%line_counter;
    while(getline(nounfile,text))
    {
        counter++;
        if(counter==random)
        {
            return(text);
        }
    }
}

/********************************
    Verb 1 generating function
********************************/
string Verb1(void)
{
    int counter=0;
    int line_counter=0;
    string text;
    string blank="";
    ifstream line("verb.txt");
    while(getline(line,text))
    {
        line_counter++;
        if(text==blank)
        {
            break;
        }
    }
    ifstream nounfile("verb.txt");
    int random=rand()%line_counter;
    while(getline(nounfile,text))
    {
        counter++;
        if(counter==random)
        {
            return(text);
        }
    }
}

/********************************
    Verb 2 generating function
********************************/
string Verb2(void)
{
    int counter=0;
    int line_counter=0;
    string text;
    string blank="";
    ifstream line("verb.txt");
    while(getline(line,text))
    {
        line_counter++;
        if(text==blank)
        {
            break;
        }
    }
    ifstream nounfile("verb.txt");
    int random=rand()%line_counter;
    while(getline(nounfile,text))
    {
        counter++;
        if(counter==random)
        {
            return(text);
        }
    }
}

/********************************
    Verb 3 generating function
********************************/
string Verb3(void)
{
    int counter=0;
    int line_counter=0;
    string text;
    string blank="";
    ifstream line("verb.txt");
    while(getline(line,text))
    {
        line_counter++;
        if(text==blank)
        {
            break;
        }
    }
    ifstream nounfile("verb.txt");
    int random=rand()%line_counter;
    while(getline(nounfile,text))
    {
        counter++;
        if(counter==random)
        {
            return(text);
        }
    }
}

/**********************************
 Preposition 1 generating function
**********************************/
string Preposition1(void)
{
    int counter=0;
    int line_counter=0;
    string text;
    string blank="";
    ifstream line("preposition.txt");
    while(getline(line,text))
    {
        line_counter++;
        if(text==blank)
        {
            break;
        }
    }
    ifstream nounfile("preposition.txt");
    int random=rand()%line_counter;
    while(getline(nounfile,text))
    {
        counter++;
        if(counter==random)
        {
            return(text);
        }
    }
}

/**********************************
 Preposition 2 generating function
**********************************/
string Preposition2(void)
{
    int counter=0;
    int line_counter=0;
    string text;
    string blank="";
    ifstream line("preposition.txt");
    while(getline(line,text))
    {
        line_counter++;
        if(text==blank)
        {
            break;
        }
    }
    ifstream nounfile("preposition.txt");
    int random=rand()%line_counter;
    while(getline(nounfile,text))
    {
        counter++;
        if(counter==random)
        {
            return(text);
        }
    }
}

/********************************
    Adverb generating function
********************************/
string Adverb(void)
{
    int counter=0;
    int line_counter=0;
    string text;
    string blank="";
    ifstream line("adverb.txt");
    while(getline(line,text))
    {
        line_counter++;
        if(text==blank)
        {
            break;
        }
    }
    ifstream nounfile("adverb.txt");
    int random=rand()%line_counter;
    while(getline(nounfile,text))
    {
        counter++;
        if(counter==random)
        {
            return(text);
        }
    }
}

