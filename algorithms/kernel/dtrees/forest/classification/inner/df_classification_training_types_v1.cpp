/* file: df_classification_training_types_v1.cpp */
/*******************************************************************************
* Copyright 2014-2020 Intel Corporation
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

/*
//++
//  Implementation of decision forest algorithm classes.
//--
*/

#include "algorithms/kernel/dtrees/forest/classification/df_classification_training_types_result.h"
#include "service/kernel/serialization_utils.h"
#include "service/kernel/daal_strings.h"

using namespace daal::data_management;
using namespace daal::services;

namespace daal
{
namespace algorithms
{
namespace decision_forest
{
namespace classification
{
namespace training
{
namespace interface1
{
services::Status Parameter::check() const
{
    services::Status s;
    DAAL_CHECK_STATUS(s, classifier::interface1::Parameter::check());
    DAAL_CHECK_STATUS(s, decision_forest::training::checkImpl(*this));
    return s;
}
} // namespace interface1

} // namespace training
} // namespace classification
} // namespace decision_forest
} // namespace algorithms
} // namespace daal
