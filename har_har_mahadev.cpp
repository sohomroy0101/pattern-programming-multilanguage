// C++ program prints the "HAR HAR MAHADEV" pattern with a Trishul
#include <iostream>

int main() {
    int total_rows = 23;
    int total_cols = 85;

    std::cout << "\n\n\n";

    for (int r = 0; r < total_rows; r++) {
        for (int c = 0; c < total_cols; c++) {
            
            // -------------------------------------------------------------
            // 1. TRISHUL / TILAK SYMBOL (Columns 0 to 12)
            // -------------------------------------------------------------
            if (c <= 12) {
                if (r <= 3 && (c == 0 || c == 6 || c == 12)) {
                    std::cout << "*";
                } else if (r == 4 && (c == 1 || c == 6 || c == 11)) {
                    std::cout << "*";
                } 
                 else if (r == 5 && (c == 6 || c==7 || c==8 || c==9 || c==10 || c == 10)) {
                    std::cout << "*";
                }
                   else if (r == 5 && (c==2 || c==3 || c==4 || c==5 || c == 10)) {
                    std::cout << "*";
                } else if (r >= 6 && c == 6) {
                    std::cout << "*";
                }
                 else {
                    std::cout << " ";
                }
                continue;
            }

            // -------------------------------------------------------------
            // 2. "HAR HAR" (Rows 3 to 7)
            // -------------------------------------------------------------
            if (r >= 3 && r <= 7) {
                int line = r - 3; // local row index (0 to 4)
                
                // Helper offsets for each character in HAR HAR
                // H1: 30-34, A1: 38-42, R1: 46-50 | H2: 58-62, A2: 66-70, R2: 74-78
                bool is_star = false;

                // H letters
                if ((c >= 30 && c <= 34) || (c >= 58 && c <= 62)) {
                    int lc = (c >= 58) ? c - 58 : c - 30;
                    if (lc == 0 || lc == 4 || line == 2) is_star = true;
                }
                // A letters
                else if ((c >= 38 && c <= 42) || (c >= 66 && c <= 70)) {
                    int lc = (c >= 66) ? c - 66 : c - 38;
                    if (line == 0 && lc == 2) is_star = true;
                    if (line == 1 && (lc == 1 || lc == 3)) is_star = true;
                    if (line == 2) is_star = true;
                    if (line >= 3 && (lc == 0 || lc == 4)) is_star = true;
                }
                // R letters
                else if ((c >= 46 && c <= 50) || (c >= 74 && c <= 78)) {
                    int lc = (c >= 74) ? c - 74 : c - 46;
                    if (line == 0 && lc < 4) is_star = true;
                    if (line == 1 && (lc == 0 || lc == 4)) is_star = true;
                    if (line == 2 && lc < 4) is_star = true;
                    if (line == 3 && (lc == 0 || lc == 3)) is_star = true;
                    if (line == 4 && (lc == 0 || lc == 4)) is_star = true;
                }

                if (is_star) std::cout << "*";
                else std::cout << " ";
                continue;
            }

            // -------------------------------------------------------------
            // 3. "MAHADEV" (Rows 10 to 14)
            // -------------------------------------------------------------
            if (r >= 10 && r <= 14) {
                int line = r - 10; // local row index (0 to 4)
                bool is_star = false;

                // M (30-34)
                if (c >= 30 && c <= 34) {
                    int lc = c - 30;
                    if (lc == 0 || lc == 4) is_star = true;
                    if (line == 0 && (lc == 1 || lc == 3)) is_star = true;
                    if (line == 1 && lc == 2) is_star = true;
                }
                // A1 (37-41)
                else if (c >= 37 && c <= 41) {
                    int lc = c - 37;
                    if (line == 0 && lc == 2) is_star = true;
                    if (line == 1 && (lc == 1 || lc == 3)) is_star = true;
                    if (line == 2) is_star = true;
                    if (line >= 3 && (lc == 0 || lc == 4)) is_star = true;
                }
                // H (44-48)
                else if (c >= 44 && c <= 48) {
                    int lc = c - 44;
                    if (lc == 0 || lc == 4 || line == 2) is_star = true;
                }
                // A2 (51-55)
                else if (c >= 51 && c <= 55) {
                    int lc = c - 51;
                    if (line == 0 && lc == 2) is_star = true;
                    if (line == 1 && (lc == 1 || lc == 3)) is_star = true;
                    if (line == 2) is_star = true;
                    if (line >= 3 && (lc == 0 || lc == 4)) is_star = true;
                }
                // D (58-62)
                else if (c >= 58 && c <= 62) {
                    int lc = c - 58;
                    if (lc == 0) is_star = true;
                    if ((line == 0 || line == 4) && lc < 4) is_star = true;
                    if ((line >= 1 && line <= 3) && lc == 4) is_star = true;
                }
                // E (65-69)
                else if (c >= 65 && c <= 69) {
                    int lc = c - 65;
                    if (lc == 0) is_star = true;
                    if (line == 0 || line == 2 || line == 4) is_star = true;
                }
                // V (72-76)
                else if (c >= 72 && c <= 76) {
                    int lc = c - 72;
                    if (line <= 2 && (lc == 0 || lc == 4)) is_star = true;
                    if (line == 3 && (lc == 1 || lc == 3)) is_star = true;
                    if (line == 4 && lc == 2) is_star = true;
                }

                if (is_star) std::cout << "*";
                else std::cout << " ";
                continue;
            }

            // Fill empty background spaces
            std::cout << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\n\n";

    return 0;
}