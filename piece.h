#ifndef piece_hpp
#define piece_hpp

#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <cstddef>
namespace dauphine
{
	enum class color
	{
		white,
		black
	};

	class piece
	{
	public:
		//Sémantique d'identité

		virtual ~piece();

		piece(const piece&) = delete;
		piece& operator = (const piece&) = delete;
		piece(piece&&) = delete;
		piece& operator = (piece&&) = delete;

		void set_position(std::size_t row, std::size_t col);
		virtual bool can_move(std::size_t row, std::size_t col) const = 0;

	protected:

		piece(std::size_t row, std::size_t col, color c);
		std::size_t m_row;
		std::size_t m_col;
		color m_color;
	};

	/*class pawn// : public piece
	{
	public:
		pawn(std::size_t row, std::size_t col);
		virtual ~pawn();

		bool can_move(std::size_t row, std::size_t col) const override;

	};
	*/
}

#endif