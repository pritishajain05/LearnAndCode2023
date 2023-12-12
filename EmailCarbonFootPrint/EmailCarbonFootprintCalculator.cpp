#include "EmailCarbonFootprintCalculator.h"

double EmailCarbonFootprintCalculator::calculateInboxCarbonFootprint(int inboxStandardEmail, int inboxAttachmentEmail) {
    return inboxStandardEmail * 0.004 + inboxAttachmentEmail * 0.05;
}

double EmailCarbonFootprintCalculator::calculateSentCarbonFootprint(int sentStandardEmail, int sentAttachmentEmail) {
    return sentStandardEmail * 0.004 + sentAttachmentEmail * 0.05;
}

double EmailCarbonFootprintCalculator::calculateSpamCarbonFootprint(int spamEmail) {
    return spamEmail * 0.0003;
}
