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
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-reviewer/model/CodeReviewSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeGuruReviewer
{
namespace Model
{
  class AWS_CODEGURUREVIEWER_API ListCodeReviewsResult
  {
  public:
    ListCodeReviewsResult();
    ListCodeReviewsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListCodeReviewsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of code reviews that meet the criteria of the request. </p>
     */
    inline const Aws::Vector<CodeReviewSummary>& GetCodeReviewSummaries() const{ return m_codeReviewSummaries; }

    /**
     * <p> A list of code reviews that meet the criteria of the request. </p>
     */
    inline void SetCodeReviewSummaries(const Aws::Vector<CodeReviewSummary>& value) { m_codeReviewSummaries = value; }

    /**
     * <p> A list of code reviews that meet the criteria of the request. </p>
     */
    inline void SetCodeReviewSummaries(Aws::Vector<CodeReviewSummary>&& value) { m_codeReviewSummaries = std::move(value); }

    /**
     * <p> A list of code reviews that meet the criteria of the request. </p>
     */
    inline ListCodeReviewsResult& WithCodeReviewSummaries(const Aws::Vector<CodeReviewSummary>& value) { SetCodeReviewSummaries(value); return *this;}

    /**
     * <p> A list of code reviews that meet the criteria of the request. </p>
     */
    inline ListCodeReviewsResult& WithCodeReviewSummaries(Aws::Vector<CodeReviewSummary>&& value) { SetCodeReviewSummaries(std::move(value)); return *this;}

    /**
     * <p> A list of code reviews that meet the criteria of the request. </p>
     */
    inline ListCodeReviewsResult& AddCodeReviewSummaries(const CodeReviewSummary& value) { m_codeReviewSummaries.push_back(value); return *this; }

    /**
     * <p> A list of code reviews that meet the criteria of the request. </p>
     */
    inline ListCodeReviewsResult& AddCodeReviewSummaries(CodeReviewSummary&& value) { m_codeReviewSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p> Pagination token. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> Pagination token. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> Pagination token. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> Pagination token. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> Pagination token. </p>
     */
    inline ListCodeReviewsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> Pagination token. </p>
     */
    inline ListCodeReviewsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> Pagination token. </p>
     */
    inline ListCodeReviewsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CodeReviewSummary> m_codeReviewSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
