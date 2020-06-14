#pragma once

#include <iostream>
#include <string>
using namespace std;

class Person
{
    string Name;
    int Age;
    char Gender;

public:

    Person(string Name = "", int Age = 0, char Gender = ' ')
    {
        this->Name = Name;
        this->Age = Age;
        this->Gender = Gender;
    }

    void SetName(string Name)
    {
        this->Name = Name;
    }

    void SetName()
    {
        cout << "Enter Name : ";
        cin >> Name;
    }

    void SetAge(int Age)
    {
        this->Age = Age;
    }

    void SetAge()
    {
        cout << "Enter Age : ";
        cin >> Age;
    }

    void SetGender(char Gender)
    {
        this->Gender = Gender;
    }

    void SetGender()
    {
        cout << "Enter Gender : ";
        cin >> Gender;
    }

    string GetName() const
    {
        return Name;
    }

    int GetAge() const
    {
        return Age;
    }

    char GetGender() const
    {
        return Gender;
    }

    void Print()
    {
        cout << "Name : " << Name << endl;
        cout << "Age : " << Age << endl;
        cout << "Gender : " << Gender << endl;
    }

    // Making Person a Polymorphic class / Passing string For GUI Implementation
    virtual void Print(string& text)
    {
        text = text + "Name : " + Name + "\n";
        text = text + "Age : " + to_string(Age) + "\n";
        text = text + "Gender : " + Gender + "\n";
    }

};

class Adult :public Person
{
    string Occupation;
    string Qualification;
    string NIC;

public:

    Adult(string Name = "", int Age = 0, char Gender = ' ', string Occupation = "",
        string Qualification = "", string NIC = "")
        : Person(Name, Age, Gender)
    {
        this->Occupation = Occupation;
        this->Qualification = Qualification;
        this->NIC = NIC;
    }

    void SetOccupation(string Occupation)
    {
        this->Occupation = Occupation;
    }

    void SetOccupation()
    {
        cout << "Enter Occupation : ";
        cin >> Occupation;
    }

    void SetQualification(string Qualification)
    {
        this->Qualification = Qualification;
    }

    void SetQualification()
    {
        cout << "Enter Qualification : ";
        cin >> Qualification;
    }

    void SetNIC(string NIC)
    {
        this->NIC = NIC;
    }

    void SetNIC()
    {
        cout << "Enter NIC : ";
        cin >> NIC;
    }

    string GetOccupation() const
    {
        return Occupation;
    }

    string GetQualification() const
    {
        return Qualification;
    }

    string GetNIC() const
    {
        return NIC;
    }

    void Print()
    {
        Person::Print();
        cout << "Occupation : " << Occupation << endl;
        cout << "Qualification : " << Qualification << endl;
        cout << "NIC : " << NIC << endl;
    }

    //Passing string For GUI Implementation
    void Print(string& text)
    {
        Person::Print(text);
        text = text + "Occupation : " + Occupation + "\n";
        text = text + "Qualification : " + Qualification + "\n";
        text = text + "NIC : " + NIC + "\n";
    }
};


class kid :public Person
{
    string B_form_number;

public:

    kid(string Name = "", int Age = 0, char Gender = ' ', string BFormNumber = "")
        : Person(Name, Age, Gender)
    {
        this->B_form_number = BFormNumber;
    }

    void SetBFormNumber(string BFormNumber)
    {
        this->B_form_number = BFormNumber;
    }

    void SetBFormNumber()
    {
        cout << "Enter B-Form Number : ";
        cin >> B_form_number;
    }

    string GetBFormNumber() const
    {
        return B_form_number;
    }

    void Print()
    {
        Person::Print();
        cout << "B-Form Number : " << B_form_number << endl;
    }

    // Passing string For GUI Implementation
    void Print(string& text)
    {
        Person::Print(text);
        text = text + "B-Form Number : " + B_form_number + "\n";
    }

};


class Bogie
{
    int Bogie_ID;
    Bogie* next;
    Person** Adults;
    Person** kids;
    string familyName;

public:

    int AdultCount;
    int KidsCount;

    Bogie(int id)
    {
        this->Bogie_ID = id;
        this->next = nullptr;

        // Making a dynamic array of pointers for adults.
        this->Adults = new Person * [4];
        for (int i = 0; i < 4; i++)
        {
            this->Adults[i] = new Adult;
        }

        // Making a dynamic array of pointers for kids.
        this->kids = new Person * [6];
        for (int i = 0; i < 6; i++)
        {
            this->kids[i] = new kid;
        }

        this->familyName = "";
        this->AdultCount = 0;
        this->KidsCount = 0;
    }
    Bogie(int id, Bogie* Next)
    {
        this->Bogie_ID = id;
        this->next = Next;

        // Making a dynamic array of pointers for adults.
        this->Adults = new Person * [4];
        for (int i = 0; i < 4; i++)
        {
            this->Adults[i] = new Adult;
        }

        // Making a dynamic array of pointers for kids.
        this->kids = new Person * [6];
        for (int i = 0; i < 6; i++)
        {
            this->kids[i] = new kid;
        }

        this->familyName = "";
        this->AdultCount = 0;
        this->KidsCount = 0;
    }
    int GetBogieID() const
    {
        return Bogie_ID;
    }
    void SetBogieID(int ID)
    {
        this->Bogie_ID = ID;
    }
    Bogie* GetNext() const
    {
        return next;
    }
    void SetNext(Bogie* Next)
    {
        this->next = Next;
    }
    bool SetFamilyName(string FamilyName)
    {
        // if setting for first time
        if (this->familyName == "")
        {
            this->familyName = FamilyName;
            return 1;
        }

        // if changing
        else
        {
            this->familyName = FamilyName;
            return 0;
        }
    }
    string GetFamilyName() const
    {
        return this->familyName;
    }
    bool AddAdult(string Name, int Age, char Gender, string Occupation, string Qualification, string NIC)
    {
        // if no space left for adults
        if (AdultCount == 4)
        {
            return false;
        }
        else
        {
            // Downcasting Adults[AdultCount] Pointer to a type of Adult Pointer.
            Adults[AdultCount] = dynamic_cast<Adult*>(Adults[AdultCount]);
            
            // Local Adult Pointer
            Adult* A = new Adult;
            A->SetName(Name);
            A->SetAge(Age);
            A->SetGender(Gender);
            A->SetOccupation(Occupation);
            A->SetQualification(Qualification);
            A->SetNIC(NIC);

            // Assigning and incrementing adult count
            Adults[AdultCount++] = A;
            return true;
        }
    }

    bool AddKid(string Name, int Age, char Gender, string BForm)
    {
        // if no space left for kids
        if (KidsCount == 6)
        {
            return false;
        }
        else
        {
            // Downcasting kids[kidsCount] Pointer to a type of kid Pointer.
            kids[KidsCount] = dynamic_cast<kid*>(kids[KidsCount]);

            // Local Kid Pointer
            kid* K = new kid;
            K->SetName(Name);
            K->SetAge(Age);
            K->SetGender(Gender);
            K->SetBFormNumber(BForm);

            // Assigning and incrementing kid count
            kids[KidsCount++] = K;

            return true;
        }

    }

    void Print()
    {
        cout << "\nBogie ID : " << this->Bogie_ID << endl << endl;

        if (AdultCount != 0)
        {
            for (int i = 0; i < AdultCount; i++)
            {
                cout << "\nAdult #" << i + 1 << endl;
                Adults[i]->Print();
            }
        }

        cout << endl;

        if (KidsCount != 0)
        {
            for (int i = 0; i < KidsCount; i++)
            {
                cout << "\nKid #" << i + 1 << endl;
                kids[i]->Print();
            }
        }
    }

    // Passing string for GUI Implementation
    void PrintKids(string& text)
    {
        text = text + "\n\n";

        // if there are kids in that bogie.
        if (KidsCount != 0)
        {
            for (int i = 0; i < KidsCount; i++)
            {
                text = text + "Kid #" + to_string(i + 1) + "\n";
                kids[i]->Print(text);
                text = text + "\n";
            }
        }

    }

    // Passing string for GUI Implementation
    void PrintAdults(string& text)
    {
        // if there are adults in that bogie
        if (AdultCount != 0)
        {
            for (int i = 0; i < AdultCount; i++)
            {
                text = text + "Adult #" + to_string(i + 1) + "\n";
                Adults[i]->Print(text);
                text = text + "\n";
            }
        }

    }

    // Destructor
    ~Bogie()
    {
        if (this->Adults != nullptr)
        {
            delete[] this->Adults;

            this->Adults = nullptr;
        }

        if (this->kids != nullptr)
        {
            delete[] this->kids;

            this->kids = nullptr;
        }
    }
};

class train
{
    Bogie* engine;
    Bogie* tail;

public:

    train()
    {
        engine = nullptr;
        tail = nullptr;
    }
    bool addBogie(int ID) //add bogie at the end of the train
    {
        // if bogie already alloted
        if (SearchBogie(ID))
        {
            return false;
        }
        else
        {
            // New bogie with next as nullptr
            Bogie* B = new Bogie(ID, nullptr);

            // if this bogie is first bogie then join it to the engine and tail both
            if (engine == nullptr)
            {
                engine = B;
                tail = B;
            }

            // else only join it to the tail
            else
            {
                tail->SetNext(B);
                tail = tail->GetNext();
            }

            return true;
        }
    }
    bool removeBogie(int ID) //search the bogie and delete it
    {
        // if there are no bogies
        if (this->engine == nullptr)
        {
            return false;
        }

        // if removing first bogie / engine contains the address of first bogie
        else if (this->engine->GetBogieID() == ID)
        {
            Bogie* Temp;
            Temp = this->engine;
            this->engine = this->engine->GetNext(); // link engine to second bogie in order
            delete Temp; // delete first bogie
            return true;
        }

        Bogie* Previous = this->engine;
        Bogie* Current = this->engine->GetNext();

        while (Current != nullptr)
        {
            // if bogie found
            if (Current->GetBogieID() == ID)
            {
                // link the bogie previous to this bogie to the bogie next to this bogie
                Previous->SetNext(Current->GetNext());
                delete Current;  // delete this bogie
                return true;
            }

            Previous = Current;  // Incrementing pointers
            Current = Current->GetNext();
        }

        return false;
    }
    void printTrain() //print only the Bogie_ID of all bogies
    {
        Bogie* Current = this->engine;

        while (Current != nullptr)
        {
            cout << "Bogie ID : " << Current->GetBogieID() << endl;
            Current = Current->GetNext();
        }
    }

    // Passing string for GUI Implementation
    void printTrain(string& Text) 
    {
        Bogie* Current = this->engine;

        Text = Text + "Engine ---> ";

        while (Current != nullptr)
        {
            if (Current->GetNext() != nullptr)
            {
                Text = Text + "Bogie ID : " + to_string(Current->GetBogieID()) + " ---> ";
            }
            else
            {
                Text = Text + "Bogie ID : " + to_string(Current->GetBogieID());
            }
            Current = Current->GetNext();
        }
    }

    // Passing string for GUI implementation
    void printBogie(int ID, string& Text, string& Text2)
    {
        // if bogie found
        if (SearchBogie(ID))
        {
            // Starting traversal from engine.
            Bogie* B = this->engine;

            while (B != nullptr)
            {
                if (B->GetBogieID() == ID)
                {
                    Text2 = "Bogie ID : " + to_string(ID) + "\n\n";

                    if (B->GetFamilyName() != "")
                    {
                        Text2 = Text2 + "Family Name : " + B->GetFamilyName() + "\n\n";
                    }

                    if (B->KidsCount > 0)
                    {
                        B->PrintKids(Text);
                    }
                    else
                    {
                        Text = "";
                    }
                    if (B->AdultCount > 0)
                    {
                        B->PrintAdults(Text2);
                    }

                    break;
                }

                B = B->GetNext();
            }
        }
        else
        {
            cout << "\nBogie Not Found\n";
        }
    }
    bool AddAdult(int ID, string Name, int Age, char Gender, string Occupation, string Qualification, string NIC)
    {
        // Starting traversal from engine.
        Bogie* B = this->engine;

        while (B != nullptr)
        {
            if (B->GetBogieID() == ID)
            {
                // If there is room for an adult
                if (B->AddAdult(Name, Age, Gender, Occupation, Qualification, NIC))
                {
                    return true;
                    break;
                }
                
                else
                {
                    return false;
                    break;
                }
            }

            B = B->GetNext();
        }

    }
    bool AddKid(int ID, string Name, int Age, char Gender, string BForm)
    {
        // Starting traversal from engine.
        Bogie* B = this->engine;

        while (B != nullptr)
        {
            if (B->GetBogieID() == ID)
            {
                // if there is a room for a kid
                if (B->AddKid(Name, Age, Gender, BForm))
                {
                    return true;
                    break;
                }

                else
                {
                    return false;
                    break;
                }
            }

            B = B->GetNext();
        }

    }
    bool AddFamilyName(int ID, string FamilyName)
    {
        // Starting traversal from engine.
        Bogie* B = this->engine;

        while (B != nullptr)
        {
            if (B->GetBogieID() == ID)
            {
                // if setting up family name for the first time
                if (B->SetFamilyName(FamilyName))
                {
                    return true;
                }

                // if changing family name
                else
                {
                    return false;
                }
            }

            B = B->GetNext();
        }
        return false;
    }
    bool SearchBogie(int ID)//search the particular bogie
    {
        // Starting traversal from engine.
        Bogie* B = this->engine;

        while (B != nullptr)
        {
            if (B->GetBogieID() == ID)
            {
                return true;
            }

            B = B->GetNext();
        }

        return false;
    }
    ~train()
    {
        // if there are bogies
        if (this->engine != nullptr)
        {
            Bogie* Previous = this->engine;

            Bogie* Current = Previous->GetNext();

            // deleting bogies until last bogie
            while (Current != nullptr)
            {
                Bogie* Temp;
                Temp = Previous;
                Previous = Current;
                Current = Current->GetNext();
                delete Temp;
            }

            // deleting last bogie
            delete Previous;

        }
    }
};

