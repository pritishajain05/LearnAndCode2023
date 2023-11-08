#include <iostream>
#include "EmailData.h"
#include "EmailCarbonFootprintCalculator.h"
#include "EmailCarbonFootprintOutput.h"
#include "InputValidator.h"

int main() {
    EmailData emailData;

    cout << "Enter email id: ";
    cin >> emailData.emailId;

    emailData.inboxStandardEmail = InputValidator::getIntInput("Enter number of standard emails received: ");
    emailData.inboxAttachmentEmail = InputValidator::getIntInput("Enter number of attachment emails received: ");
    emailData.sentStandardEmail = InputValidator::getIntInput("Enter number of standard emails sent: ");
    emailData.sentAttachmentEmail = InputValidator::getIntInput("Enter number of attachment emails sent: ");
    emailData.spamEmail = InputValidator::getIntInput("Enter number of spam emails: ");

    emailData.inboxCarbonFootprint = EmailCarbonFootprintCalculator::calculateInboxCarbonFootprint(emailData.inboxStandardEmail, emailData.inboxAttachmentEmail);
    emailData.sentCarbonFootprint = EmailCarbonFootprintCalculator::calculateSentCarbonFootprint(emailData.sentStandardEmail, emailData.sentAttachmentEmail);
    emailData.spamCarbonFootprint = EmailCarbonFootprintCalculator::calculateSpamCarbonFootprint(emailData.spamEmail);

    EmailCarbonFootprintOutput::displayCarbonFootprint(emailData);

    return 0;
}
