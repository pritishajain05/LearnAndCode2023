#pragma once
#include "EmailData.h"

class EmailCarbonFootprintCalculator {
public:
    static double calculateInboxCarbonFootprint(int inboxStandardEmail, int inboxAttachmentEmail);
    static double calculateSentCarbonFootprint(int sentStandardEmail, int sentAttachmentEmail);
    static double calculateSpamCarbonFootprint(int spamEmail);
};

