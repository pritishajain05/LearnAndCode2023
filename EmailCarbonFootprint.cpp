#include<iostream>
#include<string>
#include <iomanip>  

using namespace std;

class EmailFootprint {
public:
    double STANDARD_CO2_PER_EMAIL = 0.004;
    double ATTACHMENT_CO2_PER_EMAIL = 0.05; 
    double SPAM_CO2_PER_EMAIL = 0.0003; 

    EmailFootprint(string id) : emailId(id), inboxCarbonFootprint(0), sentCarbonFootprint(0), spamCarbonFootprint(0) {}

    void calculateInboxCarbonFootprint(int inboxStandardEmail, int inboxAttachmentEmail) {
        inboxCarbonFootprint = inboxStandardEmail * STANDARD_CO2_PER_EMAIL + inboxAttachmentEmail * ATTACHMENT_CO2_PER_EMAIL;
    }

    void calculateSentCarbonFootprint(int sentStandardEmail, int sentAttachmentEmail) {
        sentCarbonFootprint = sentStandardEmail * STANDARD_CO2_PER_EMAIL + sentAttachmentEmail * ATTACHMENT_CO2_PER_EMAIL;
    }

    void calculateSpamCarbonFootprint(int spamEmail) {
        spamCarbonFootprint = spamEmail * SPAM_CO2_PER_EMAIL;
    }

    void displayCarbonFootprint() {
        cout << "Carbon Footprint of Emails in a day" << endl;
        cout << "Inbox: "<< inboxCarbonFootprint << " Kg " << endl;
        cout << "Sent: " << sentCarbonFootprint << " Kg " << endl;
        cout << "Spam: " << spamCarbonFootprint << " Kg " << endl;
    }

private:
    string emailId;
    double inboxCarbonFootprint;
    double sentCarbonFootprint;
    double spamCarbonFootprint;
};

int main() {
    string emailId;
    cout << "Enter email id: ";
    cin >> emailId;

    int inboxStandardEmail, inboxAttachmentEmail;
    cout << "Enter number of standard emails received: ";
    cin >> inboxStandardEmail;
    cout << "Enter number of attachment emails received: ";
    cin >> inboxAttachmentEmail;

    int sentStandardEmail, sentAttachmentEmail;
    cout << "Enter number of standard emails sent: ";
    cin >> sentStandardEmail;
    cout << "Enter number of attachment emails sent: ";
    cin >> sentAttachmentEmail;

    int spamEmail;
    cout << "Enter number of spam emails: ";
    cin >> spamEmail;

    EmailFootprint emailFootprint(emailId);
    emailFootprint.calculateInboxCarbonFootprint(inboxStandardEmail, inboxAttachmentEmail);
    emailFootprint.calculateSentCarbonFootprint(sentStandardEmail, sentAttachmentEmail);
    emailFootprint.calculateSpamCarbonFootprint(spamEmail);
    emailFootprint.displayCarbonFootprint();

    return 0;
}
