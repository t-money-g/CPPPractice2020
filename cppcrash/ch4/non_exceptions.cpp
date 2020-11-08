

struct HumptyDumpty { 
    HumptyDumpty();
    bool is_together_again();
};


bool send_kings_horses_and_men() {
    HumptyDumpty hd{};
    if (hd.is_together_again()) return false;
    // Class invariants of hd are now guaranteed. 
    // Humpty Dumpty had a great fall

    return true;
}

struct Result { 
    HumptyDumpty hd;
    bool success; 
};

Result make_humpty() { 
    HumptyDumpty hd{};
    bool is_valid;
    // Check that hd is valid and set is_valid appropriately
    return {hd, is_valid};
}

