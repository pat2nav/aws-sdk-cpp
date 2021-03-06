﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/sagemaker/model/ExperimentConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ExperimentConfig::ExperimentConfig() : 
    m_experimentNameHasBeenSet(false),
    m_trialNameHasBeenSet(false),
    m_trialComponentDisplayNameHasBeenSet(false)
{
}

ExperimentConfig::ExperimentConfig(JsonView jsonValue) : 
    m_experimentNameHasBeenSet(false),
    m_trialNameHasBeenSet(false),
    m_trialComponentDisplayNameHasBeenSet(false)
{
  *this = jsonValue;
}

ExperimentConfig& ExperimentConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExperimentName"))
  {
    m_experimentName = jsonValue.GetString("ExperimentName");

    m_experimentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrialName"))
  {
    m_trialName = jsonValue.GetString("TrialName");

    m_trialNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrialComponentDisplayName"))
  {
    m_trialComponentDisplayName = jsonValue.GetString("TrialComponentDisplayName");

    m_trialComponentDisplayNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ExperimentConfig::Jsonize() const
{
  JsonValue payload;

  if(m_experimentNameHasBeenSet)
  {
   payload.WithString("ExperimentName", m_experimentName);

  }

  if(m_trialNameHasBeenSet)
  {
   payload.WithString("TrialName", m_trialName);

  }

  if(m_trialComponentDisplayNameHasBeenSet)
  {
   payload.WithString("TrialComponentDisplayName", m_trialComponentDisplayName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
