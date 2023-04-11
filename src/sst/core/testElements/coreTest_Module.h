// Copyright 2009-2023 NTESS. Under the terms
// of Contract DE-NA0003525 with NTESS, the U.S.
// Government retains certain rights in this software.
//
// Copyright (c) 2009-2023, NTESS
// All rights reserved.
//
// This file is part of the SST software package. For license
// information, see the LICENSE file in the top level directory of the
// distribution.

#ifndef SST_CORE_CORETEST_MODULE_H
#define SST_CORE_CORETEST_MODULE_H

#include "sst/core/component.h"
#include "sst/core/link.h"
#include "sst/core/module.h"

#include <vector>

namespace SST {
namespace CoreTestModule {

class CoreTestModuleExample : public SST::Module
{

public:
    CoreTestModuleExample(SST::Params& params);

    SST_ELI_REGISTER_MODULE_API(SST::CoreTestModule::CoreTestModuleExample)

    SST_ELI_REGISTER_MODULE_DERIVED(
        CoreTestModuleExample, "coreTestElement", "CoreTestModule", SST_ELI_ELEMENT_VERSION(1, 0, 0),
        "CoreTest module to demonstrate interface.", SST::CoreTestModule::CoreTestModuleExample)

    SST_ELI_DOCUMENT_PARAMS(
        {"modulename", "Name to give this module", ""},
    )

    void printName();

private:
    std::string modName;
};

} // namespace CoreTestModule
} // namespace SST

#endif // SST_CORE_CORETEST_MODULE_H
