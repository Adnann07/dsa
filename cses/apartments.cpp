#include <bits/stdc++.h>

using namespace std;

int main() {
    int numApplicants, numApartments, maxDifference;
    cin >> numApplicants >> numApartments >> maxDifference;  // Input the number of applicants, apartments, and the max allowed difference

    vector<int> applicantSizes(numApplicants), apartmentSizes(numApartments);

    // Input the desired apartment sizes for each applicant
    for (int i = 0; i < numApplicants; ++i) {
        cin >> applicantSizes[i];
    }

    // Input the available apartment sizes
    for (int i = 0; i < numApartments; ++i) {
        cin >> apartmentSizes[i];
    }

    // Sort both applicant sizes and apartment sizes to efficiently match them
    sort(applicantSizes.begin(), applicantSizes.end());
    sort(apartmentSizes.begin(), apartmentSizes.end());

    int applicantIndex = 0, apartmentIndex = 0, matchedApplicants = 0;

    // Use two-pointer technique to match applicants with apartments
    while (applicantIndex < numApplicants && apartmentIndex < numApartments) {
        // Check if the current applicant can accept the current apartment
        if (abs(applicantSizes[applicantIndex] - apartmentSizes[apartmentIndex]) <= maxDifference) {
            // If they can, match them and move to the next applicant and apartment
            matchedApplicants++;
            applicantIndex++;
            apartmentIndex++;
        } else if (applicantSizes[applicantIndex] < apartmentSizes[apartmentIndex]) {
            // If the applicant's size is too small for the current apartment, move to the next applicant
            applicantIndex++;
        } else {
            // If the apartment size is too small for the current applicant, move to the next apartment
            apartmentIndex++;
        }
    }

    // Output the total number of matched applicants
    cout << matchedApplicants << endl;

    return 0;
}
