/**
 * Chessico: Chess Engine
 *
 * @path [ROOT]/Source/Pieces.cpp
 *
 * @file Pieces.cpp
 *
 * @brief Source file for piece initialization.
 */
#include "Pieces.h"
#include "Bitboard.h"

namespace Chessico {

// Define the bitboards declared in the header.
PieceBitboards WhitePieces;
PieceBitboards BlackPieces;

// Helper function to set up white pieces.
void SetupWhitePieces() {
    // Pawns
    for (int square = 8; square < 16; ++square) {
        SetBit(WhitePieces.Pawns, square);
    }

    // Knights
    SetBit(WhitePieces.Knights, 1);
    SetBit(WhitePieces.Knights, 6);

    // Bishops
    SetBit(WhitePieces.Bishops, 2);
    SetBit(WhitePieces.Bishops, 5);

    // Rooks
    SetBit(WhitePieces.Rooks, 0);
    SetBit(WhitePieces.Rooks, 7);

    // Queen
    SetBit(WhitePieces.Queen, 3);

    // King
    SetBit(WhitePieces.King, 4);

    // Combine all pieces
    WhitePieces.All = WhitePieces.Pawns | WhitePieces.Knights | WhitePieces.Bishops |
                      WhitePieces.Rooks | WhitePieces.Queen | WhitePieces.King;
}

} // namespace Chessico
