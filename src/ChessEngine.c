#include <ChessEngine.h>
#include <stdint.h>
#include <stdbool.h>

struct ChessEngine_T_Board {
    uint64_t u64_W_king;
    uint64_t u64_B_king;  
    uint64_t u64_W_queen;
    uint64_t u64_B_queen;  
    uint64_t u64_W_rook;  
    uint64_t u64_B_rook;  
    uint64_t u64_W_bishop;  
    uint64_t u64_B_bishop;
    uint64_t u64_W_knight;
    uint64_t u64_B_knight;  
    uint64_t u64_W_pawn;
    uint64_t u64_B_pawn;
};

#define FILE_A         0x0101010101010101ull
#define FILE_H         0x8080808080808080ull
#define RANK_1         0x00000000000000FFull
#define RANK_4         0x00000000FF000000ull
#define RANK_5         0x000000FF00000000ull
#define RANK_8         0xFF00000000000000ull
#define DIAGONAL_A1_H8 0x8040201008040201ull
#define DIAGONAL_H1_A8 0x0102040810204080ull
#define LIGHT_SQUARE   0x55AA55AA55AA55AAull
#define DARK_SQUARE    0xAA55AA55AA55AA55ull

