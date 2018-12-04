#ifndef ENGINE_HPP
#define ENGINE_HPP

#include <ctsddef>

namespace dauphine
{
    class piece;
    
    class engine
    {
        public
        
        piece* get_piece(std::size_t row, size_t col) const;
        
        
    };
}

#endif
