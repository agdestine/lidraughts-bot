/*
    Copyright 2015 Harm Jetten

    This file is part of Moby Dam.

    Moby Dam is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Moby Dam is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Moby Dam.  If not, see <http://www.gnu.org/licenses/>.
*/

extern bitboard *book_positions;
extern size_t book_size;

extern void init_book(char *bookfile);
extern bool get_bookmove(movelist *listptr);
