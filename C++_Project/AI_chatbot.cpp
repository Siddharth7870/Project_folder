#include<iostream>
using namespace std;


int main()
{
    string user;

    cout<<"=================================> WHAT CAN I HELP WITH ? <=================================\n"<<endl;

    // cout<<"Ask anythink you : ";
    // //cin>>user;
    // getline(cin,user);

    while (true)
    {
        cout<<"Ask anythinkg you : ";
        //cin>>user;
        getline(cin,user);
    
        if( user == "hello" || user == "Hello" || user == "hi" || user == "Hi")
        {
           if(user=="Hello" ||  user=="hello")
           {
            cout<<"Bot : Hello! How can I assist you today? 😊"<<endl;
           }
        else{ 
            cout<<"Chatbot : Hey! How's it going?\n"<<endl;
        }
        }
        else if(user=="i am sad" || user=="i'm sad" || user=="I am sad")
        {
            cout<<"ChatBot : Oh... I'm really sorry you're feeling that way.";
            cout<<"Want to tell me what's making you sad? I'm here to listen.\n"<<endl;
        }
        else if(user=="i am happy" || user=="I am happy")
        {
            cout<<"ChatBot : That’s wonderful to hear! 😊 What’s making you feel happy today?\n"<<endl;
        }
        else if(user=="Tell me a joke" || user=="tell me a joke")
        {
            cout<<"ChatBot : Of course! Here’s one to lift your mood a bit:\n"<<endl;
            cout<<"Why don't scientists trust atoms?";
            cout<<"Because they make up everything!\n"<<endl;
        }
        else if(user=="Thank you" || user=="thanks" || user=="thank you")
        {
            cout<<"ChatBot : You're very welcome! 😊 If you have any questions or need help with anything, just let me know. Have a great day! 🚀\n"<<endl;
        }
        else if(user=="Motivation" || user=="thanks" || user=="motivation")
        {
            cout<<"ChatBot : Every small step counts. Progress > perfection.\n"<<endl;
        }
        else if(user=="Bye" || user=="thanks" || user=="bye")
        {
            cout<<"ChatBot : Goodbye! 👋 Take care, and have a wonderful day! 🌟 Feel free to come back anytime—I’m here to help. 😊\n"<<endl;
            break;
        }
        else{
            cout << "ChatBot: Sorry, I didn't understand that. Can you rephrase?\n\n";
            
        }
    }
}   