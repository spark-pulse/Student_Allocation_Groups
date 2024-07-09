                switch (choice) {
            case 1:
                // Add Student functionality
                break;
            case 2:
                // View Students functionality
                break;
            case 3:
                // View Clubs/Societies functionality
                break;
            case 4:
                // View Sports functionality
                break;
            case 5:
                // View Grouped Students functionality
                break;
            case 6:
                // Save all Files functionality
                break;
            case 7:
                std::cout << "Exiting the program...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 7);

    return 0;
}