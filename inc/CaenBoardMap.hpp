/**
 * @author      : Daniele Guffanti (daniele.guffanti@mib.infn.it)
 * @file        : CaenBoardMap
 * @created     : martedì giu 07, 2022 11:32:23 CEST
 */

#ifndef CAENBOARDMAP_HPP

#define CAENBOARDMAP_HPP

#include <map>
#include "CaenBoard.h"

namespace caen{
  std::map<const char*, Board::MODEL> MODEL_MAP {
    {"DT5720"  , Board::DT5720}  ,
    {"DT5724"  , Board::DT5724}  ,
    {"DT5725"  , Board::DT5725}  ,
    {"DT5730"  , Board::DT5730}  ,
    {"DT5740"  , Board::DT5740}  ,
    {"DT5740D" , Board::DT5740D} ,
    {"DT5742"  , Board::DT5742}  ,
    {"DT5743"  , Board::DT5743}  ,
    {"DT5751"  , Board::DT5751}  ,
    {"DT5761"  , Board::DT5761}  ,
    {"N6720"   , Board::N6720}   ,
    {"N6724"   , Board::N6724}   ,
    {"N6725"   , Board::N6725}   ,
    {"N6730"   , Board::N6730}   ,
    {"N6740"   , Board::N6740}   ,
    {"N6740D"  , Board::N6740D}  ,
    {"N6742"   , Board::N6742}   ,
    {"N6743"   , Board::N6743}   ,
    {"N6751"   , Board::N6751}   ,
    {"N6761"   , Board::N6761}   ,
    {"V1720"   , Board::V1720}   ,
    {"V1724"   , Board::V1724}   ,
    {"V1725"   , Board::V1725}   ,
    {"V1730"   , Board::V1730}   ,
    {"V1740"   , Board::V1740}   ,
    {"V1740D"  , Board::V1740D}  ,
    {"V1742"   , Board::V1742}   ,
    {"V1743"   , Board::V1743}   ,
    {"V1751"   , Board::V1751}   ,
    {"V1761"   , Board::V1761}   ,
    {"VX1720"  , Board::VX1720}  ,
    {"VX1724"  , Board::VX1724}  ,
    {"VX1725"  , Board::VX1725}  ,
    {"VX1730"  , Board::VX1730}  ,
    {"VX1740"  , Board::VX1740}  ,
    {"VX1740D" , Board::VX1740D} ,
    {"VX1742"  , Board::VX1742}  ,
    {"VX1743"  , Board::VX1743}  ,
    {"VX1751"  , Board::VX1751}  ,
    {"VX1761"  , Board::VX1761}
  };
}

#endif /* end of include guard CAENBOARDMAP_HPP */

