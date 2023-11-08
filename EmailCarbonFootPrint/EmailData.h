#pragma once
#include <string>
using namespace std;

struct EmailData {
    string emailId;
    int inboxStandardEmail;
    int inboxAttachmentEmail;
    int sentStandardEmail;
    int sentAttachmentEmail;
    int spamEmail;
    double inboxCarbonFootprint;
    double sentCarbonFootprint;
    double spamCarbonFootprint;
};

