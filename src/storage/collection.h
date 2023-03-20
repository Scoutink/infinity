//
// Created by jinhai on 23-3-16.
//

#pragma once

#include <utility>

#include "base_table.h"
#include "common/types/internal_types.h"

namespace infinity {

class Collection : public BaseTable {
public:
    explicit
    Collection(String schema_name, String collection_name)
        : BaseTable(BaseTableType::kCollection, std::move(schema_name), std::move(collection_name))
        {}

    [[nodiscard]] inline SizeT
    row_count() const {
        return row_count_;
    }

private:
    SizeT row_count_{0};

};

}