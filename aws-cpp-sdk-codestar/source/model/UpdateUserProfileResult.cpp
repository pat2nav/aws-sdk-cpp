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

#include <aws/codestar/model/UpdateUserProfileResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeStar::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateUserProfileResult::UpdateUserProfileResult()
{
}

UpdateUserProfileResult::UpdateUserProfileResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateUserProfileResult& UpdateUserProfileResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("userArn"))
  {
    m_userArn = jsonValue.GetString("userArn");

  }

  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

  }

  if(jsonValue.ValueExists("emailAddress"))
  {
    m_emailAddress = jsonValue.GetString("emailAddress");

  }

  if(jsonValue.ValueExists("sshPublicKey"))
  {
    m_sshPublicKey = jsonValue.GetString("sshPublicKey");

  }

  if(jsonValue.ValueExists("createdTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("createdTimestamp");

  }

  if(jsonValue.ValueExists("lastModifiedTimestamp"))
  {
    m_lastModifiedTimestamp = jsonValue.GetDouble("lastModifiedTimestamp");

  }



  return *this;
}
