/**
 * Chessico: Chess Engine
 *
 * @path [ROOT]/Include/Pieces.h
 *
 * @file Pieces.h
 *
 * @brief Header file for piece declaration.
 */
#pragma once

#include "Bitboard.h"

namespace Chessico {

// Define the bitboards for a side and its pieces.
struct PieceBitboards {
    Bitboard Pawns   = 0ULL;
    Bitboard Knights = 0ULL;
    Bitboard Bishops = 0ULL;
    Bitboard Rooks   = 0ULL;
    Bitboard Queen   = 0ULL;
    Bitboard King    = 0ULL;
    Bitboard All     = 0ULL;
};

// Extern declarations to be defined in a .cpp file.
extern PieceBitboards WhitePieces;
extern PieceBitboards BlackPieces;

// Function to initialize the piece bitboards.
void InitPieceBitboards();

} // namespace Chessico
