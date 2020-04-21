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

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class AWS_GUARDDUTY_API UpdateOrganizationConfigurationRequest : public GuardDutyRequest
  {
  public:
    UpdateOrganizationConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOrganizationConfiguration"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the detector to update the delegated administrator for.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The ID of the detector to update the delegated administrator for.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The ID of the detector to update the delegated administrator for.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The ID of the detector to update the delegated administrator for.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The ID of the detector to update the delegated administrator for.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The ID of the detector to update the delegated administrator for.</p>
     */
    inline UpdateOrganizationConfigurationRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The ID of the detector to update the delegated administrator for.</p>
     */
    inline UpdateOrganizationConfigurationRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The ID of the detector to update the delegated administrator for.</p>
     */
    inline UpdateOrganizationConfigurationRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>Indicates whether to automatically enable member accounts in the
     * organization.</p>
     */
    inline bool GetAutoEnable() const{ return m_autoEnable; }

    /**
     * <p>Indicates whether to automatically enable member accounts in the
     * organization.</p>
     */
    inline bool AutoEnableHasBeenSet() const { return m_autoEnableHasBeenSet; }

    /**
     * <p>Indicates whether to automatically enable member accounts in the
     * organization.</p>
     */
    inline void SetAutoEnable(bool value) { m_autoEnableHasBeenSet = true; m_autoEnable = value; }

    /**
     * <p>Indicates whether to automatically enable member accounts in the
     * organization.</p>
     */
    inline UpdateOrganizationConfigurationRequest& WithAutoEnable(bool value) { SetAutoEnable(value); return *this;}

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;

    bool m_autoEnable;
    bool m_autoEnableHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
