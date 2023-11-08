#include <iostream>
using namespace std;
#include "EmailcarbonFootprintOutput.h"

void EmailCarbonFootprintOutput::displayCarbonFootprint(const EmailData& emailData) {
    std::cout << "Carbon Footprint of Emails in a day" <<endl;
    std::cout << "Inbox: " << emailData.inboxCarbonFootprint << " Kg " << std::endl;
    std::cout << "Sent: " << emailData.sentCarbonFootprint << " Kg " << std::endl;
    std::cout << "Spam: " << emailData.spamCarbonFootprint << " Kg " << std::endl;
}
