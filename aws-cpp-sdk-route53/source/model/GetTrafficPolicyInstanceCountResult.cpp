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

#include <aws/route53/model/GetTrafficPolicyInstanceCountResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetTrafficPolicyInstanceCountResult::GetTrafficPolicyInstanceCountResult() : 
    m_trafficPolicyInstanceCount(0)
{
}

GetTrafficPolicyInstanceCountResult::GetTrafficPolicyInstanceCountResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_trafficPolicyInstanceCount(0)
{
  *this = result;
}

GetTrafficPolicyInstanceCountResult& GetTrafficPolicyInstanceCountResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode trafficPolicyInstanceCountNode = resultNode.FirstChild("TrafficPolicyInstanceCount");
    if(!trafficPolicyInstanceCountNode.IsNull())
    {
      m_trafficPolicyInstanceCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(trafficPolicyInstanceCountNode.GetText()).c_str()).c_str());
    }
  }

  return *this;
}
