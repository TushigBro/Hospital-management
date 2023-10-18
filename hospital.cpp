#include<iostream>
#include<vector>
using namespace std;

class User{
    public:
    string ID;
    string name;
    string email;
    string role;
    string password;
    User(){
        ID = " ";
        name = " ";
        email = " ";
        role = " "; 
        password = " ";
    }
    User(string ID, string name, string email, string role, string password){
        this->ID = ID;
        this->name = name;
        this->email = email;
        this->role = role;
        this->password = password;
    }
    string getID(){
        return ID;
    }
    string getName(){
        return name;
    }
    string getEmail(){
        return email;
    }
    string getRole(){
        return role;
    }
    string getPassword(){
        return password;
    }
    void setID(string ID){
        this->ID = ID;
    }
    void setName(string name){
        this->name = name;
    }
    void setEmail(string email){
        this->email = email;
    }
    void setRole(string role){
        this->role = role;
    }
    void setPassword(string password){
        this->password = password;
    }
};
class Role{
    private:
    string Id;
    string title;
    string description;
    public:
    Role(){
        Id = " ";
        title = " ";
        description = " ";
    }
    Role(string Id, string title, string description){
        this->Id = Id;
        this->title = title;
        this->description = description;
    }
    string getId(){
        return Id;
    }
    string getTitle(){
        return title;
    }
    string getDescription(){
        return description;
    }
    void setId(string Id){
        this->Id = Id;
    }
    void setTitle(string title){
        this->title = title;
    }
    void setDescription(string description){
        this->description = description;
    }
};
class Patient : public User{
    private:
    int mobile;
    string password;
    vector <string> records;
    string diagnoses;
    string history;
    public:
    Patient(){
        mobile = 0;
        diagnoses = " ";
        history = " ";
    }
    Patient(int mobile, vector <string> records, string diagnoses, string history){
        this->mobile = mobile;
        this->records = records;
        this->diagnoses = diagnoses;
        this->history = history;
    }
    int getMobile(){
        return mobile;
    }
    
    vector <string> getRecord(){
        return records;
    }
    string getDiagnoses(){
        return diagnoses;
    }
    string getHisory(){
        return history;
    }
    void setMobile(int mobile){
        this->mobile = mobile;
    }
    void setRecord(vector <string> records){
        this->records = records;
    }
    void setDiagnoses(string diagnoses){
        this->diagnoses = diagnoses;
    }
    void setHistory(string history){
        this->history = history;
    }
    void addRecords(){
        cout << "Enter patient's record: " <<endl;
        string rec;
        getline(cin, rec);
    }
    void addDiagnoses(){
        cout << "Enter patient's diagnoses:  " <<endl;
        getline(cin, diagnoses);
    }
    void getHistory(){
        cout <<"Enter patient's history: " <<endl;
        getline(cin, history);
    }
};
class Doctor : public User{
    private:
    string address;
    vector <string> appointments;
    public:
    Doctor(){
        address = " ";
    }
    Doctor(string address, vector<string> appointments){
        this->address = address;
        this->appointments = appointments;
    }
    vector<string> getAppointments(){
        return appointments;
    }
    string getAddress(){
        return address;
    }
    void setAddress(string address){
        this->address = address;
    }
    void setAppointments(vector <string> appointments){
        this->appointments = appointments;
    }
    void book(){
        cout << "Enter your appoinment detail: " <<endl;
        string app;
        getline(cin, app);
    }
};
class Hospital{
    private:
    string location;
    int found_year;
    int capacity;
    string founder;
    vector<Doctor> doctors;
    vector<Patient> patients;
    public:
    Hospital(){
        location = " ";
        found_year = 0;
        capacity = 0;
        founder = " ";
    }
    Hospital(string location, int found_year, int capacity, string founder){
        this->location = location;
        this->found_year = found_year;
        this->capacity = capacity;
        this->founder = founder;
    }
    string getLocation(){
        return location;
    }
    int getFound_year(){
        return found_year;
    }
    int getCapacity(){
        return capacity;
    }
    string getFounder(){
        return founder;
    }
    void setLocation(string location){
        this->location = location;
    }
    void setFound_year(int found_year){
        this->found_year = found_year;
    }
    void setCapacity(int capacity){
        this->capacity = capacity;
    }
    void setFounder(string founder){
        this->founder = founder;
    }
    string toString(){
        return "Hospital Address: " + location + "Founded year: " + to_string(found_year) + "Capacity: " + to_string(capacity) + "Founder: " + founder;
    }
};
int main(){

    vector<Doctor> doctors;
    vector<Patient> patients;
    Doctor D1;
    D1.setID("1234");
    D1.setName("Tim");
    D1.setEmail("Tim@gmail");
    D1.setRole("Doctor");
    D1.setAddress("asdSt");
    D1.setPassword("qwer");

    Doctor D2;
    D2.setID("2345");
    D2.setName("Bob");
    D2.setEmail("Bob@gmail");
    D2.setRole("Doctor");
    D2.setAddress("dfgSt");
    D2.setPassword("asdf");

    Doctor D3;
    D3.setID("3456");
    D3.setName("Mill");
    D3.setEmail("Mill@gmail");
    D3.setRole("Doctor");
    D3.setAddress("hjkSt");
    D3.setPassword("erty");

    Doctor D4;
    D4.setID("4567");
    D4.setName("Walt");
    D4.setEmail("Walt@gmail");
    D4.setRole("Doctor");
    D4.setAddress("tyuySt");
    D4.setPassword("uiop");
    
    Patient P1;
    P1.setID("4321");
    P1.setName("Jesse");
    P1.setEmail("jesse@gmail");
    P1.setRole("Patient");
    P1.setPassword("bnml");
    P1.addRecords();
    P1.addDiagnoses();
    P1.getHisory();

    Patient P2;
    P2.setID("5432");
    P2.setName("Hank");
    P2.setEmail("Hank@gmail");
    P2.setRole("Patient");
    P2.setPassword("hjkl");
    P2.addRecords();
    P2.addDiagnoses();
    P2.getHisory();

    doctors.push_back(D1);
    doctors.push_back(D2);
    doctors.push_back(D3);
    doctors.push_back(D4);
    patients.push_back(P1);
    patients.push_back(P2);

    string users;
    string pass;
    char roles;
    cout << "Enter your role: (P/D) " <<endl;
    cin >> roles;
    roles = toupper(roles);

    if(roles == 'D'){
    cout << "Enter your user ID: " <<endl;
    cin >> users;
    for(int i = 0; i < doctors.size(); i++){
        if(users == doctors[i].getID()){
            cout << "Enter your password: " <<endl;
            cin >> pass;
            for(int j = 0; j < doctors.size(); j++){
                if(pass == doctors[j].getPassword()){
                    cout <<"Successfully logged in! " <<endl;
                }
                else{
                    cout <<"Password is wrong! " <<endl;
                }
            }            
        }
        else{
            cout << "ID or password is wrong! " <<endl;
        }
    }
    
}
    if(roles == 'P')
    for(int i = 0; i < patients.size(); i++){
       if(users == patients[i].getID()){
        cout << "Enter your password: " <<endl;
        cin >> pass;
       }
       else{
        cout << "Password is wrong! " <<endl;
       }
       for(int j = 0; j < patients.size(); j++){
        if(pass == patients[i].getPassword()){
            cout <<"Successfully logged in! " <<endl;
        }
        else{
            cout <<"Password is wrong! " <<endl;
        }
       }
    }
    
}