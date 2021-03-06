/**
 *  Copyright (c) 2018 Jesse Buhagiar
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files (the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in all
 *  copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 *  SOFTWARE.
 **/
#ifndef MAZEROUTE_HPP_INCLUDED
#define MAZEROUTE_HPP_INCLUDED

#include "solvealg.hpp"
#include "heap.hpp"

#include <string>

namespace Mazer {

/**
 *  Maze routing 
 */
class CMazeRouter : public CSolvingAlgorithm
{
public:
    CMazeRouter() = delete;

    /**
     *  Inherited Constructor
     */
    explicit CMazeRouter(const CMaze& maze);

    /**
     *  Actually solve the maze
     */
    void SolveMaze(const std::string& fname, const std::vector<std::vector<cell>>& cells);

private:
    CBinaryHeap<node> heap;
    std::vector<Mazer::cell> cellList;
};


}


#endif
