//
//  LevelData.h -- A collection of Worksheets
//  TodoSchool on Oct 13, 2016
//
//  Copyright (c) 2016 Enuma, Inc. All rights reserved.
//  See LICENSE.md for more details.
//


#pragma once

#include "../Utils/WordTraceNS.h"
#include "WordTraceWorksheet.h"
#include <Common/Basic/OneBasedVector.h>


BEGIN_NS_WORDTRACE

class LevelData {
    typedef pair<string, size_t> LevelKey;
    typedef OneBasedVector<Worksheet> Level;
    map<LevelKey, Level> Levels;
    
public:
    vector<int> levelIDsFor(const string& LanguageTag);
    Worksheet& randomSheetFor(const string& LanguageTag, size_t LevelID, size_t *SheetID);

public:
    static LevelData defaultData();
    void checkData();
    
    friend istream& operator>>(istream& IS, LevelData& LD);
};

END_NS_WORDTRACE
