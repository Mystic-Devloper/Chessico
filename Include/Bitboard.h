/**
 * Chessico: Chess Engine
 *
 * @path [ROOT]/Include/Bitboard.h
 *
 * @file Bitboard.h
 *
 * @brief Header file for bitboard.
 */
#pragma once

#include <cstdint>

namespace Chessico {

// Simple alias for uint64_t.
using Bitboard = uint64_t;

// Function to set a bit.
inline void SetBit(Bitboard& bb, int square) {
    bb |= (1ULL << square);
}

// Function to clear a bit.
inline void ClearBit(Bitboard& bb, int square) {
    bb &= ~(1ULL << square);
}

// Function to get a bit.
inline bool GetBit(Bitboard& bb, int square) {
    return (bb >> square) & 1;
}

// Calculates Bitboard co-ordinate from file and rank.
inline uint8_t GetCoord(uint8_t file, uint8_t rank) {
    return (rank * 8) + file;
}

} // namespace Chessico
