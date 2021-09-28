// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_RESOURCEMANAGER20200331_H_
#define ALIBABACLOUD_RESOURCEMANAGER20200331_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_ResourceManager20200331 {
class AcceptHandshakeRequest : public Darabonba::Model {
public:
  shared_ptr<string> handshakeId{};

  AcceptHandshakeRequest() {}

  explicit AcceptHandshakeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (handshakeId) {
      res["HandshakeId"] = boost::any(*handshakeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HandshakeId") != m.end() && !m["HandshakeId"].empty()) {
      handshakeId = make_shared<string>(boost::any_cast<string>(m["HandshakeId"]));
    }
  }


  virtual ~AcceptHandshakeRequest() = default;
};
class AcceptHandshakeResponseBodyHandshake : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> note{};
  shared_ptr<string> targetEntity{};
  shared_ptr<string> masterAccountId{};
  shared_ptr<string> masterAccountName{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> targetType{};
  shared_ptr<string> handshakeId{};

  AcceptHandshakeResponseBodyHandshake() {}

  explicit AcceptHandshakeResponseBodyHandshake(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (targetEntity) {
      res["TargetEntity"] = boost::any(*targetEntity);
    }
    if (masterAccountId) {
      res["MasterAccountId"] = boost::any(*masterAccountId);
    }
    if (masterAccountName) {
      res["MasterAccountName"] = boost::any(*masterAccountName);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (handshakeId) {
      res["HandshakeId"] = boost::any(*handshakeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("TargetEntity") != m.end() && !m["TargetEntity"].empty()) {
      targetEntity = make_shared<string>(boost::any_cast<string>(m["TargetEntity"]));
    }
    if (m.find("MasterAccountId") != m.end() && !m["MasterAccountId"].empty()) {
      masterAccountId = make_shared<string>(boost::any_cast<string>(m["MasterAccountId"]));
    }
    if (m.find("MasterAccountName") != m.end() && !m["MasterAccountName"].empty()) {
      masterAccountName = make_shared<string>(boost::any_cast<string>(m["MasterAccountName"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("HandshakeId") != m.end() && !m["HandshakeId"].empty()) {
      handshakeId = make_shared<string>(boost::any_cast<string>(m["HandshakeId"]));
    }
  }


  virtual ~AcceptHandshakeResponseBodyHandshake() = default;
};
class AcceptHandshakeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<AcceptHandshakeResponseBodyHandshake> handshake{};

  AcceptHandshakeResponseBody() {}

  explicit AcceptHandshakeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (handshake) {
      res["Handshake"] = handshake ? boost::any(handshake->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Handshake") != m.end() && !m["Handshake"].empty()) {
      if (typeid(map<string, boost::any>) == m["Handshake"].type()) {
        AcceptHandshakeResponseBodyHandshake model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Handshake"]));
        handshake = make_shared<AcceptHandshakeResponseBodyHandshake>(model1);
      }
    }
  }


  virtual ~AcceptHandshakeResponseBody() = default;
};
class AcceptHandshakeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AcceptHandshakeResponseBody> body{};

  AcceptHandshakeResponse() {}

  explicit AcceptHandshakeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AcceptHandshakeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AcceptHandshakeResponseBody>(model1);
      }
    }
  }


  virtual ~AcceptHandshakeResponse() = default;
};
class AttachControlPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyId{};
  shared_ptr<string> targetId{};

  AttachControlPolicyRequest() {}

  explicit AttachControlPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
  }


  virtual ~AttachControlPolicyRequest() = default;
};
class AttachControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AttachControlPolicyResponseBody() {}

  explicit AttachControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AttachControlPolicyResponseBody() = default;
};
class AttachControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AttachControlPolicyResponseBody> body{};

  AttachControlPolicyResponse() {}

  explicit AttachControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AttachControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~AttachControlPolicyResponse() = default;
};
class AttachPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> policyType{};
  shared_ptr<string> policyName{};
  shared_ptr<string> principalType{};
  shared_ptr<string> principalName{};

  AttachPolicyRequest() {}

  explicit AttachPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<string>(boost::any_cast<string>(m["PrincipalName"]));
    }
  }


  virtual ~AttachPolicyRequest() = default;
};
class AttachPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AttachPolicyResponseBody() {}

  explicit AttachPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AttachPolicyResponseBody() = default;
};
class AttachPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AttachPolicyResponseBody> body{};

  AttachPolicyResponse() {}

  explicit AttachPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AttachPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~AttachPolicyResponse() = default;
};
class CancelCreateCloudAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> recordId{};

  CancelCreateCloudAccountRequest() {}

  explicit CancelCreateCloudAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["RecordId"]));
    }
  }


  virtual ~CancelCreateCloudAccountRequest() = default;
};
class CancelCreateCloudAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelCreateCloudAccountResponseBody() {}

  explicit CancelCreateCloudAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CancelCreateCloudAccountResponseBody() = default;
};
class CancelCreateCloudAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CancelCreateCloudAccountResponseBody> body{};

  CancelCreateCloudAccountResponse() {}

  explicit CancelCreateCloudAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CancelCreateCloudAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelCreateCloudAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CancelCreateCloudAccountResponse() = default;
};
class CancelHandshakeRequest : public Darabonba::Model {
public:
  shared_ptr<string> handshakeId{};

  CancelHandshakeRequest() {}

  explicit CancelHandshakeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (handshakeId) {
      res["HandshakeId"] = boost::any(*handshakeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HandshakeId") != m.end() && !m["HandshakeId"].empty()) {
      handshakeId = make_shared<string>(boost::any_cast<string>(m["HandshakeId"]));
    }
  }


  virtual ~CancelHandshakeRequest() = default;
};
class CancelHandshakeResponseBodyHandshake : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> note{};
  shared_ptr<string> targetEntity{};
  shared_ptr<string> masterAccountId{};
  shared_ptr<string> masterAccountName{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> targetType{};
  shared_ptr<string> handshakeId{};

  CancelHandshakeResponseBodyHandshake() {}

  explicit CancelHandshakeResponseBodyHandshake(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (targetEntity) {
      res["TargetEntity"] = boost::any(*targetEntity);
    }
    if (masterAccountId) {
      res["MasterAccountId"] = boost::any(*masterAccountId);
    }
    if (masterAccountName) {
      res["MasterAccountName"] = boost::any(*masterAccountName);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (handshakeId) {
      res["HandshakeId"] = boost::any(*handshakeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("TargetEntity") != m.end() && !m["TargetEntity"].empty()) {
      targetEntity = make_shared<string>(boost::any_cast<string>(m["TargetEntity"]));
    }
    if (m.find("MasterAccountId") != m.end() && !m["MasterAccountId"].empty()) {
      masterAccountId = make_shared<string>(boost::any_cast<string>(m["MasterAccountId"]));
    }
    if (m.find("MasterAccountName") != m.end() && !m["MasterAccountName"].empty()) {
      masterAccountName = make_shared<string>(boost::any_cast<string>(m["MasterAccountName"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("HandshakeId") != m.end() && !m["HandshakeId"].empty()) {
      handshakeId = make_shared<string>(boost::any_cast<string>(m["HandshakeId"]));
    }
  }


  virtual ~CancelHandshakeResponseBodyHandshake() = default;
};
class CancelHandshakeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CancelHandshakeResponseBodyHandshake> handshake{};

  CancelHandshakeResponseBody() {}

  explicit CancelHandshakeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (handshake) {
      res["Handshake"] = handshake ? boost::any(handshake->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Handshake") != m.end() && !m["Handshake"].empty()) {
      if (typeid(map<string, boost::any>) == m["Handshake"].type()) {
        CancelHandshakeResponseBodyHandshake model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Handshake"]));
        handshake = make_shared<CancelHandshakeResponseBodyHandshake>(model1);
      }
    }
  }


  virtual ~CancelHandshakeResponseBody() = default;
};
class CancelHandshakeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CancelHandshakeResponseBody> body{};

  CancelHandshakeResponse() {}

  explicit CancelHandshakeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CancelHandshakeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelHandshakeResponseBody>(model1);
      }
    }
  }


  virtual ~CancelHandshakeResponse() = default;
};
class CancelPromoteResourceAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> recordId{};

  CancelPromoteResourceAccountRequest() {}

  explicit CancelPromoteResourceAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["RecordId"]));
    }
  }


  virtual ~CancelPromoteResourceAccountRequest() = default;
};
class CancelPromoteResourceAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelPromoteResourceAccountResponseBody() {}

  explicit CancelPromoteResourceAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CancelPromoteResourceAccountResponseBody() = default;
};
class CancelPromoteResourceAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CancelPromoteResourceAccountResponseBody> body{};

  CancelPromoteResourceAccountResponse() {}

  explicit CancelPromoteResourceAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CancelPromoteResourceAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelPromoteResourceAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CancelPromoteResourceAccountResponse() = default;
};
class CreateCloudAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> parentFolderId{};
  shared_ptr<string> email{};
  shared_ptr<string> payerAccountId{};

  CreateCloudAccountRequest() {}

  explicit CreateCloudAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (parentFolderId) {
      res["ParentFolderId"] = boost::any(*parentFolderId);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (payerAccountId) {
      res["PayerAccountId"] = boost::any(*payerAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("ParentFolderId") != m.end() && !m["ParentFolderId"].empty()) {
      parentFolderId = make_shared<string>(boost::any_cast<string>(m["ParentFolderId"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("PayerAccountId") != m.end() && !m["PayerAccountId"].empty()) {
      payerAccountId = make_shared<string>(boost::any_cast<string>(m["PayerAccountId"]));
    }
  }


  virtual ~CreateCloudAccountRequest() = default;
};
class CreateCloudAccountResponseBodyAccount : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<string> displayName{};
  shared_ptr<string> folderId{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> recordId{};
  shared_ptr<string> accountId{};
  shared_ptr<string> joinMethod{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> accountName{};

  CreateCloudAccountResponseBodyAccount() {}

  explicit CreateCloudAccountResponseBodyAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (joinMethod) {
      res["JoinMethod"] = boost::any(*joinMethod);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["RecordId"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("JoinMethod") != m.end() && !m["JoinMethod"].empty()) {
      joinMethod = make_shared<string>(boost::any_cast<string>(m["JoinMethod"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~CreateCloudAccountResponseBodyAccount() = default;
};
class CreateCloudAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateCloudAccountResponseBodyAccount> account{};
  shared_ptr<string> requestId{};

  CreateCloudAccountResponseBody() {}

  explicit CreateCloudAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = account ? boost::any(account->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      if (typeid(map<string, boost::any>) == m["Account"].type()) {
        CreateCloudAccountResponseBodyAccount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Account"]));
        account = make_shared<CreateCloudAccountResponseBodyAccount>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCloudAccountResponseBody() = default;
};
class CreateCloudAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateCloudAccountResponseBody> body{};

  CreateCloudAccountResponse() {}

  explicit CreateCloudAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateCloudAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCloudAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCloudAccountResponse() = default;
};
class CreateControlPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};
  shared_ptr<string> description{};
  shared_ptr<string> effectScope{};
  shared_ptr<string> policyDocument{};

  CreateControlPolicyRequest() {}

  explicit CreateControlPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (effectScope) {
      res["EffectScope"] = boost::any(*effectScope);
    }
    if (policyDocument) {
      res["PolicyDocument"] = boost::any(*policyDocument);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EffectScope") != m.end() && !m["EffectScope"].empty()) {
      effectScope = make_shared<string>(boost::any_cast<string>(m["EffectScope"]));
    }
    if (m.find("PolicyDocument") != m.end() && !m["PolicyDocument"].empty()) {
      policyDocument = make_shared<string>(boost::any_cast<string>(m["PolicyDocument"]));
    }
  }


  virtual ~CreateControlPolicyRequest() = default;
};
class CreateControlPolicyResponseBodyControlPolicy : public Darabonba::Model {
public:
  shared_ptr<string> updateDate{};
  shared_ptr<string> description{};
  shared_ptr<string> effectScope{};
  shared_ptr<string> attachmentCount{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyId{};
  shared_ptr<string> createDate{};
  shared_ptr<string> policyType{};

  CreateControlPolicyResponseBodyControlPolicy() {}

  explicit CreateControlPolicyResponseBodyControlPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (effectScope) {
      res["EffectScope"] = boost::any(*effectScope);
    }
    if (attachmentCount) {
      res["AttachmentCount"] = boost::any(*attachmentCount);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EffectScope") != m.end() && !m["EffectScope"].empty()) {
      effectScope = make_shared<string>(boost::any_cast<string>(m["EffectScope"]));
    }
    if (m.find("AttachmentCount") != m.end() && !m["AttachmentCount"].empty()) {
      attachmentCount = make_shared<string>(boost::any_cast<string>(m["AttachmentCount"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~CreateControlPolicyResponseBodyControlPolicy() = default;
};
class CreateControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateControlPolicyResponseBodyControlPolicy> controlPolicy{};
  shared_ptr<string> requestId{};

  CreateControlPolicyResponseBody() {}

  explicit CreateControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (controlPolicy) {
      res["ControlPolicy"] = controlPolicy ? boost::any(controlPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ControlPolicy") != m.end() && !m["ControlPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["ControlPolicy"].type()) {
        CreateControlPolicyResponseBodyControlPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ControlPolicy"]));
        controlPolicy = make_shared<CreateControlPolicyResponseBodyControlPolicy>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateControlPolicyResponseBody() = default;
};
class CreateControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateControlPolicyResponseBody> body{};

  CreateControlPolicyResponse() {}

  explicit CreateControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateControlPolicyResponse() = default;
};
class CreateFolderRequest : public Darabonba::Model {
public:
  shared_ptr<string> parentFolderId{};
  shared_ptr<string> folderName{};

  CreateFolderRequest() {}

  explicit CreateFolderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parentFolderId) {
      res["ParentFolderId"] = boost::any(*parentFolderId);
    }
    if (folderName) {
      res["FolderName"] = boost::any(*folderName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParentFolderId") != m.end() && !m["ParentFolderId"].empty()) {
      parentFolderId = make_shared<string>(boost::any_cast<string>(m["ParentFolderId"]));
    }
    if (m.find("FolderName") != m.end() && !m["FolderName"].empty()) {
      folderName = make_shared<string>(boost::any_cast<string>(m["FolderName"]));
    }
  }


  virtual ~CreateFolderRequest() = default;
};
class CreateFolderResponseBodyFolder : public Darabonba::Model {
public:
  shared_ptr<string> folderId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> parentFolderId{};
  shared_ptr<string> folderName{};

  CreateFolderResponseBodyFolder() {}

  explicit CreateFolderResponseBodyFolder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (parentFolderId) {
      res["ParentFolderId"] = boost::any(*parentFolderId);
    }
    if (folderName) {
      res["FolderName"] = boost::any(*folderName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ParentFolderId") != m.end() && !m["ParentFolderId"].empty()) {
      parentFolderId = make_shared<string>(boost::any_cast<string>(m["ParentFolderId"]));
    }
    if (m.find("FolderName") != m.end() && !m["FolderName"].empty()) {
      folderName = make_shared<string>(boost::any_cast<string>(m["FolderName"]));
    }
  }


  virtual ~CreateFolderResponseBodyFolder() = default;
};
class CreateFolderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateFolderResponseBodyFolder> folder{};

  CreateFolderResponseBody() {}

  explicit CreateFolderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (folder) {
      res["Folder"] = folder ? boost::any(folder->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Folder") != m.end() && !m["Folder"].empty()) {
      if (typeid(map<string, boost::any>) == m["Folder"].type()) {
        CreateFolderResponseBodyFolder model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Folder"]));
        folder = make_shared<CreateFolderResponseBodyFolder>(model1);
      }
    }
  }


  virtual ~CreateFolderResponseBody() = default;
};
class CreateFolderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateFolderResponseBody> body{};

  CreateFolderResponse() {}

  explicit CreateFolderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateFolderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFolderResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFolderResponse() = default;
};
class CreatePolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};
  shared_ptr<string> description{};
  shared_ptr<string> policyDocument{};

  CreatePolicyRequest() {}

  explicit CreatePolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (policyDocument) {
      res["PolicyDocument"] = boost::any(*policyDocument);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PolicyDocument") != m.end() && !m["PolicyDocument"].empty()) {
      policyDocument = make_shared<string>(boost::any_cast<string>(m["PolicyDocument"]));
    }
  }


  virtual ~CreatePolicyRequest() = default;
};
class CreatePolicyResponseBodyPolicy : public Darabonba::Model {
public:
  shared_ptr<string> defaultVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> policyName{};
  shared_ptr<string> createDate{};
  shared_ptr<string> policyType{};

  CreatePolicyResponseBodyPolicy() {}

  explicit CreatePolicyResponseBodyPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultVersion) {
      res["DefaultVersion"] = boost::any(*defaultVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultVersion") != m.end() && !m["DefaultVersion"].empty()) {
      defaultVersion = make_shared<string>(boost::any_cast<string>(m["DefaultVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~CreatePolicyResponseBodyPolicy() = default;
};
class CreatePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreatePolicyResponseBodyPolicy> policy{};
  shared_ptr<string> requestId{};

  CreatePolicyResponseBody() {}

  explicit CreatePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        CreatePolicyResponseBodyPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<CreatePolicyResponseBodyPolicy>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreatePolicyResponseBody() = default;
};
class CreatePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreatePolicyResponseBody> body{};

  CreatePolicyResponse() {}

  explicit CreatePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreatePolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePolicyResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePolicyResponse() = default;
};
class CreatePolicyVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};
  shared_ptr<string> policyDocument{};
  shared_ptr<bool> setAsDefault{};

  CreatePolicyVersionRequest() {}

  explicit CreatePolicyVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyDocument) {
      res["PolicyDocument"] = boost::any(*policyDocument);
    }
    if (setAsDefault) {
      res["SetAsDefault"] = boost::any(*setAsDefault);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyDocument") != m.end() && !m["PolicyDocument"].empty()) {
      policyDocument = make_shared<string>(boost::any_cast<string>(m["PolicyDocument"]));
    }
    if (m.find("SetAsDefault") != m.end() && !m["SetAsDefault"].empty()) {
      setAsDefault = make_shared<bool>(boost::any_cast<bool>(m["SetAsDefault"]));
    }
  }


  virtual ~CreatePolicyVersionRequest() = default;
};
class CreatePolicyVersionResponseBodyPolicyVersion : public Darabonba::Model {
public:
  shared_ptr<bool> isDefaultVersion{};
  shared_ptr<string> versionId{};
  shared_ptr<string> createDate{};

  CreatePolicyVersionResponseBodyPolicyVersion() {}

  explicit CreatePolicyVersionResponseBodyPolicyVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isDefaultVersion) {
      res["IsDefaultVersion"] = boost::any(*isDefaultVersion);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsDefaultVersion") != m.end() && !m["IsDefaultVersion"].empty()) {
      isDefaultVersion = make_shared<bool>(boost::any_cast<bool>(m["IsDefaultVersion"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
  }


  virtual ~CreatePolicyVersionResponseBodyPolicyVersion() = default;
};
class CreatePolicyVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreatePolicyVersionResponseBodyPolicyVersion> policyVersion{};
  shared_ptr<string> requestId{};

  CreatePolicyVersionResponseBody() {}

  explicit CreatePolicyVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyVersion) {
      res["PolicyVersion"] = policyVersion ? boost::any(policyVersion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyVersion") != m.end() && !m["PolicyVersion"].empty()) {
      if (typeid(map<string, boost::any>) == m["PolicyVersion"].type()) {
        CreatePolicyVersionResponseBodyPolicyVersion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PolicyVersion"]));
        policyVersion = make_shared<CreatePolicyVersionResponseBodyPolicyVersion>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreatePolicyVersionResponseBody() = default;
};
class CreatePolicyVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreatePolicyVersionResponseBody> body{};

  CreatePolicyVersionResponse() {}

  explicit CreatePolicyVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreatePolicyVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePolicyVersionResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePolicyVersionResponse() = default;
};
class CreateResourceAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> parentFolderId{};
  shared_ptr<string> payerAccountId{};
  shared_ptr<string> accountNamePrefix{};

  CreateResourceAccountRequest() {}

  explicit CreateResourceAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (parentFolderId) {
      res["ParentFolderId"] = boost::any(*parentFolderId);
    }
    if (payerAccountId) {
      res["PayerAccountId"] = boost::any(*payerAccountId);
    }
    if (accountNamePrefix) {
      res["AccountNamePrefix"] = boost::any(*accountNamePrefix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("ParentFolderId") != m.end() && !m["ParentFolderId"].empty()) {
      parentFolderId = make_shared<string>(boost::any_cast<string>(m["ParentFolderId"]));
    }
    if (m.find("PayerAccountId") != m.end() && !m["PayerAccountId"].empty()) {
      payerAccountId = make_shared<string>(boost::any_cast<string>(m["PayerAccountId"]));
    }
    if (m.find("AccountNamePrefix") != m.end() && !m["AccountNamePrefix"].empty()) {
      accountNamePrefix = make_shared<string>(boost::any_cast<string>(m["AccountNamePrefix"]));
    }
  }


  virtual ~CreateResourceAccountRequest() = default;
};
class CreateResourceAccountResponseBodyAccount : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<string> displayName{};
  shared_ptr<string> folderId{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> joinTime{};
  shared_ptr<string> accountId{};
  shared_ptr<string> joinMethod{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> accountName{};

  CreateResourceAccountResponseBodyAccount() {}

  explicit CreateResourceAccountResponseBodyAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (joinTime) {
      res["JoinTime"] = boost::any(*joinTime);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (joinMethod) {
      res["JoinMethod"] = boost::any(*joinMethod);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("JoinTime") != m.end() && !m["JoinTime"].empty()) {
      joinTime = make_shared<string>(boost::any_cast<string>(m["JoinTime"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("JoinMethod") != m.end() && !m["JoinMethod"].empty()) {
      joinMethod = make_shared<string>(boost::any_cast<string>(m["JoinMethod"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~CreateResourceAccountResponseBodyAccount() = default;
};
class CreateResourceAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateResourceAccountResponseBodyAccount> account{};
  shared_ptr<string> requestId{};

  CreateResourceAccountResponseBody() {}

  explicit CreateResourceAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = account ? boost::any(account->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      if (typeid(map<string, boost::any>) == m["Account"].type()) {
        CreateResourceAccountResponseBodyAccount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Account"]));
        account = make_shared<CreateResourceAccountResponseBodyAccount>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateResourceAccountResponseBody() = default;
};
class CreateResourceAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateResourceAccountResponseBody> body{};

  CreateResourceAccountResponse() {}

  explicit CreateResourceAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateResourceAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateResourceAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CreateResourceAccountResponse() = default;
};
class CreateResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> displayName{};

  CreateResourceGroupRequest() {}

  explicit CreateResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
  }


  virtual ~CreateResourceGroupRequest() = default;
};
class CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> regionId{};

  CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus() {}

  explicit CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus() = default;
};
class CreateResourceGroupResponseBodyResourceGroupRegionStatuses : public Darabonba::Model {
public:
  shared_ptr<vector<CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus>> regionStatus{};

  CreateResourceGroupResponseBodyResourceGroupRegionStatuses() {}

  explicit CreateResourceGroupResponseBodyResourceGroupRegionStatuses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionStatus) {
      vector<boost::any> temp1;
      for(auto item1:*regionStatus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionStatus"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionStatus") != m.end() && !m["RegionStatus"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionStatus"].type()) {
        vector<CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionStatus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionStatus = make_shared<vector<CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus>>(expect1);
      }
    }
  }


  virtual ~CreateResourceGroupResponseBodyResourceGroupRegionStatuses() = default;
};
class CreateResourceGroupResponseBodyResourceGroup : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> status{};
  shared_ptr<CreateResourceGroupResponseBodyResourceGroupRegionStatuses> regionStatuses{};
  shared_ptr<string> accountId{};
  shared_ptr<string> name{};
  shared_ptr<string> createDate{};
  shared_ptr<string> id{};

  CreateResourceGroupResponseBodyResourceGroup() {}

  explicit CreateResourceGroupResponseBodyResourceGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (regionStatuses) {
      res["RegionStatuses"] = regionStatuses ? boost::any(regionStatuses->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("RegionStatuses") != m.end() && !m["RegionStatuses"].empty()) {
      if (typeid(map<string, boost::any>) == m["RegionStatuses"].type()) {
        CreateResourceGroupResponseBodyResourceGroupRegionStatuses model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RegionStatuses"]));
        regionStatuses = make_shared<CreateResourceGroupResponseBodyResourceGroupRegionStatuses>(model1);
      }
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~CreateResourceGroupResponseBodyResourceGroup() = default;
};
class CreateResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateResourceGroupResponseBodyResourceGroup> resourceGroup{};

  CreateResourceGroupResponseBody() {}

  explicit CreateResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroup) {
      res["ResourceGroup"] = resourceGroup ? boost::any(resourceGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroup") != m.end() && !m["ResourceGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceGroup"].type()) {
        CreateResourceGroupResponseBodyResourceGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceGroup"]));
        resourceGroup = make_shared<CreateResourceGroupResponseBodyResourceGroup>(model1);
      }
    }
  }


  virtual ~CreateResourceGroupResponseBody() = default;
};
class CreateResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateResourceGroupResponseBody> body{};

  CreateResourceGroupResponse() {}

  explicit CreateResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateResourceGroupResponse() = default;
};
class CreateRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> roleName{};
  shared_ptr<string> description{};
  shared_ptr<string> assumeRolePolicyDocument{};
  shared_ptr<long> maxSessionDuration{};

  CreateRoleRequest() {}

  explicit CreateRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (assumeRolePolicyDocument) {
      res["AssumeRolePolicyDocument"] = boost::any(*assumeRolePolicyDocument);
    }
    if (maxSessionDuration) {
      res["MaxSessionDuration"] = boost::any(*maxSessionDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("AssumeRolePolicyDocument") != m.end() && !m["AssumeRolePolicyDocument"].empty()) {
      assumeRolePolicyDocument = make_shared<string>(boost::any_cast<string>(m["AssumeRolePolicyDocument"]));
    }
    if (m.find("MaxSessionDuration") != m.end() && !m["MaxSessionDuration"].empty()) {
      maxSessionDuration = make_shared<long>(boost::any_cast<long>(m["MaxSessionDuration"]));
    }
  }


  virtual ~CreateRoleRequest() = default;
};
class CreateRoleResponseBodyRole : public Darabonba::Model {
public:
  shared_ptr<string> assumeRolePolicyDocument{};
  shared_ptr<string> rolePrincipalName{};
  shared_ptr<string> description{};
  shared_ptr<long> maxSessionDuration{};
  shared_ptr<string> roleName{};
  shared_ptr<string> createDate{};
  shared_ptr<string> arn{};
  shared_ptr<string> roleId{};

  CreateRoleResponseBodyRole() {}

  explicit CreateRoleResponseBodyRole(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assumeRolePolicyDocument) {
      res["AssumeRolePolicyDocument"] = boost::any(*assumeRolePolicyDocument);
    }
    if (rolePrincipalName) {
      res["RolePrincipalName"] = boost::any(*rolePrincipalName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (maxSessionDuration) {
      res["MaxSessionDuration"] = boost::any(*maxSessionDuration);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssumeRolePolicyDocument") != m.end() && !m["AssumeRolePolicyDocument"].empty()) {
      assumeRolePolicyDocument = make_shared<string>(boost::any_cast<string>(m["AssumeRolePolicyDocument"]));
    }
    if (m.find("RolePrincipalName") != m.end() && !m["RolePrincipalName"].empty()) {
      rolePrincipalName = make_shared<string>(boost::any_cast<string>(m["RolePrincipalName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("MaxSessionDuration") != m.end() && !m["MaxSessionDuration"].empty()) {
      maxSessionDuration = make_shared<long>(boost::any_cast<long>(m["MaxSessionDuration"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
  }


  virtual ~CreateRoleResponseBodyRole() = default;
};
class CreateRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateRoleResponseBodyRole> role{};
  shared_ptr<string> requestId{};

  CreateRoleResponseBody() {}

  explicit CreateRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (role) {
      res["Role"] = role ? boost::any(role->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      if (typeid(map<string, boost::any>) == m["Role"].type()) {
        CreateRoleResponseBodyRole model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Role"]));
        role = make_shared<CreateRoleResponseBodyRole>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateRoleResponseBody() = default;
};
class CreateRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateRoleResponseBody> body{};

  CreateRoleResponse() {}

  explicit CreateRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRoleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRoleResponse() = default;
};
class CreateServiceLinkedRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceName{};
  shared_ptr<string> customSuffix{};
  shared_ptr<string> description{};

  CreateServiceLinkedRoleRequest() {}

  explicit CreateServiceLinkedRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (customSuffix) {
      res["CustomSuffix"] = boost::any(*customSuffix);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("CustomSuffix") != m.end() && !m["CustomSuffix"].empty()) {
      customSuffix = make_shared<string>(boost::any_cast<string>(m["CustomSuffix"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~CreateServiceLinkedRoleRequest() = default;
};
class CreateServiceLinkedRoleResponseBodyRole : public Darabonba::Model {
public:
  shared_ptr<string> assumeRolePolicyDocument{};
  shared_ptr<string> rolePrincipalName{};
  shared_ptr<string> description{};
  shared_ptr<string> roleName{};
  shared_ptr<string> createDate{};
  shared_ptr<string> arn{};
  shared_ptr<string> roleId{};
  shared_ptr<bool> isServiceLinkedRole{};

  CreateServiceLinkedRoleResponseBodyRole() {}

  explicit CreateServiceLinkedRoleResponseBodyRole(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assumeRolePolicyDocument) {
      res["AssumeRolePolicyDocument"] = boost::any(*assumeRolePolicyDocument);
    }
    if (rolePrincipalName) {
      res["RolePrincipalName"] = boost::any(*rolePrincipalName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (isServiceLinkedRole) {
      res["IsServiceLinkedRole"] = boost::any(*isServiceLinkedRole);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssumeRolePolicyDocument") != m.end() && !m["AssumeRolePolicyDocument"].empty()) {
      assumeRolePolicyDocument = make_shared<string>(boost::any_cast<string>(m["AssumeRolePolicyDocument"]));
    }
    if (m.find("RolePrincipalName") != m.end() && !m["RolePrincipalName"].empty()) {
      rolePrincipalName = make_shared<string>(boost::any_cast<string>(m["RolePrincipalName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
    if (m.find("IsServiceLinkedRole") != m.end() && !m["IsServiceLinkedRole"].empty()) {
      isServiceLinkedRole = make_shared<bool>(boost::any_cast<bool>(m["IsServiceLinkedRole"]));
    }
  }


  virtual ~CreateServiceLinkedRoleResponseBodyRole() = default;
};
class CreateServiceLinkedRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateServiceLinkedRoleResponseBodyRole> role{};
  shared_ptr<string> requestId{};

  CreateServiceLinkedRoleResponseBody() {}

  explicit CreateServiceLinkedRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (role) {
      res["Role"] = role ? boost::any(role->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      if (typeid(map<string, boost::any>) == m["Role"].type()) {
        CreateServiceLinkedRoleResponseBodyRole model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Role"]));
        role = make_shared<CreateServiceLinkedRoleResponseBodyRole>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateServiceLinkedRoleResponseBody() = default;
};
class CreateServiceLinkedRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateServiceLinkedRoleResponseBody> body{};

  CreateServiceLinkedRoleResponse() {}

  explicit CreateServiceLinkedRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateServiceLinkedRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceLinkedRoleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceLinkedRoleResponse() = default;
};
class DeclineHandshakeRequest : public Darabonba::Model {
public:
  shared_ptr<string> handshakeId{};

  DeclineHandshakeRequest() {}

  explicit DeclineHandshakeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (handshakeId) {
      res["HandshakeId"] = boost::any(*handshakeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HandshakeId") != m.end() && !m["HandshakeId"].empty()) {
      handshakeId = make_shared<string>(boost::any_cast<string>(m["HandshakeId"]));
    }
  }


  virtual ~DeclineHandshakeRequest() = default;
};
class DeclineHandshakeResponseBodyHandshake : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> note{};
  shared_ptr<string> targetEntity{};
  shared_ptr<string> masterAccountId{};
  shared_ptr<string> masterAccountName{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> targetType{};
  shared_ptr<string> handshakeId{};

  DeclineHandshakeResponseBodyHandshake() {}

  explicit DeclineHandshakeResponseBodyHandshake(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (targetEntity) {
      res["TargetEntity"] = boost::any(*targetEntity);
    }
    if (masterAccountId) {
      res["MasterAccountId"] = boost::any(*masterAccountId);
    }
    if (masterAccountName) {
      res["MasterAccountName"] = boost::any(*masterAccountName);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (handshakeId) {
      res["HandshakeId"] = boost::any(*handshakeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("TargetEntity") != m.end() && !m["TargetEntity"].empty()) {
      targetEntity = make_shared<string>(boost::any_cast<string>(m["TargetEntity"]));
    }
    if (m.find("MasterAccountId") != m.end() && !m["MasterAccountId"].empty()) {
      masterAccountId = make_shared<string>(boost::any_cast<string>(m["MasterAccountId"]));
    }
    if (m.find("MasterAccountName") != m.end() && !m["MasterAccountName"].empty()) {
      masterAccountName = make_shared<string>(boost::any_cast<string>(m["MasterAccountName"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("HandshakeId") != m.end() && !m["HandshakeId"].empty()) {
      handshakeId = make_shared<string>(boost::any_cast<string>(m["HandshakeId"]));
    }
  }


  virtual ~DeclineHandshakeResponseBodyHandshake() = default;
};
class DeclineHandshakeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DeclineHandshakeResponseBodyHandshake> handshake{};

  DeclineHandshakeResponseBody() {}

  explicit DeclineHandshakeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (handshake) {
      res["Handshake"] = handshake ? boost::any(handshake->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Handshake") != m.end() && !m["Handshake"].empty()) {
      if (typeid(map<string, boost::any>) == m["Handshake"].type()) {
        DeclineHandshakeResponseBodyHandshake model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Handshake"]));
        handshake = make_shared<DeclineHandshakeResponseBodyHandshake>(model1);
      }
    }
  }


  virtual ~DeclineHandshakeResponseBody() = default;
};
class DeclineHandshakeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeclineHandshakeResponseBody> body{};

  DeclineHandshakeResponse() {}

  explicit DeclineHandshakeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeclineHandshakeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeclineHandshakeResponseBody>(model1);
      }
    }
  }


  virtual ~DeclineHandshakeResponse() = default;
};
class DeleteAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  DeleteAccountRequest() {}

  explicit DeleteAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
  }


  virtual ~DeleteAccountRequest() = default;
};
class DeleteAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAccountResponseBody() {}

  explicit DeleteAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteAccountResponseBody() = default;
};
class DeleteAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteAccountResponseBody> body{};

  DeleteAccountResponse() {}

  explicit DeleteAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAccountResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAccountResponse() = default;
};
class DeleteControlPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyId{};

  DeleteControlPolicyRequest() {}

  explicit DeleteControlPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
  }


  virtual ~DeleteControlPolicyRequest() = default;
};
class DeleteControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteControlPolicyResponseBody() {}

  explicit DeleteControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteControlPolicyResponseBody() = default;
};
class DeleteControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteControlPolicyResponseBody> body{};

  DeleteControlPolicyResponse() {}

  explicit DeleteControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteControlPolicyResponse() = default;
};
class DeleteFolderRequest : public Darabonba::Model {
public:
  shared_ptr<string> folderId{};

  DeleteFolderRequest() {}

  explicit DeleteFolderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
  }


  virtual ~DeleteFolderRequest() = default;
};
class DeleteFolderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteFolderResponseBody() {}

  explicit DeleteFolderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteFolderResponseBody() = default;
};
class DeleteFolderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteFolderResponseBody> body{};

  DeleteFolderResponse() {}

  explicit DeleteFolderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteFolderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFolderResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFolderResponse() = default;
};
class DeletePolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};

  DeletePolicyRequest() {}

  explicit DeletePolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
  }


  virtual ~DeletePolicyRequest() = default;
};
class DeletePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeletePolicyResponseBody() {}

  explicit DeletePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeletePolicyResponseBody() = default;
};
class DeletePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeletePolicyResponseBody> body{};

  DeletePolicyResponse() {}

  explicit DeletePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeletePolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePolicyResponse() = default;
};
class DeletePolicyVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};
  shared_ptr<string> versionId{};

  DeletePolicyVersionRequest() {}

  explicit DeletePolicyVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~DeletePolicyVersionRequest() = default;
};
class DeletePolicyVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeletePolicyVersionResponseBody() {}

  explicit DeletePolicyVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeletePolicyVersionResponseBody() = default;
};
class DeletePolicyVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeletePolicyVersionResponseBody> body{};

  DeletePolicyVersionResponse() {}

  explicit DeletePolicyVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeletePolicyVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePolicyVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePolicyVersionResponse() = default;
};
class DeleteResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};

  DeleteResourceGroupRequest() {}

  explicit DeleteResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DeleteResourceGroupRequest() = default;
};
class DeleteResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> regionId{};

  DeleteResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus() {}

  explicit DeleteResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus() = default;
};
class DeleteResourceGroupResponseBodyResourceGroupRegionStatuses : public Darabonba::Model {
public:
  shared_ptr<vector<DeleteResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus>> regionStatus{};

  DeleteResourceGroupResponseBodyResourceGroupRegionStatuses() {}

  explicit DeleteResourceGroupResponseBodyResourceGroupRegionStatuses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionStatus) {
      vector<boost::any> temp1;
      for(auto item1:*regionStatus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionStatus"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionStatus") != m.end() && !m["RegionStatus"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionStatus"].type()) {
        vector<DeleteResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionStatus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionStatus = make_shared<vector<DeleteResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus>>(expect1);
      }
    }
  }


  virtual ~DeleteResourceGroupResponseBodyResourceGroupRegionStatuses() = default;
};
class DeleteResourceGroupResponseBodyResourceGroup : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> status{};
  shared_ptr<DeleteResourceGroupResponseBodyResourceGroupRegionStatuses> regionStatuses{};
  shared_ptr<string> accountId{};
  shared_ptr<string> name{};
  shared_ptr<string> createDate{};
  shared_ptr<string> id{};

  DeleteResourceGroupResponseBodyResourceGroup() {}

  explicit DeleteResourceGroupResponseBodyResourceGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (regionStatuses) {
      res["RegionStatuses"] = regionStatuses ? boost::any(regionStatuses->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("RegionStatuses") != m.end() && !m["RegionStatuses"].empty()) {
      if (typeid(map<string, boost::any>) == m["RegionStatuses"].type()) {
        DeleteResourceGroupResponseBodyResourceGroupRegionStatuses model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RegionStatuses"]));
        regionStatuses = make_shared<DeleteResourceGroupResponseBodyResourceGroupRegionStatuses>(model1);
      }
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DeleteResourceGroupResponseBodyResourceGroup() = default;
};
class DeleteResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DeleteResourceGroupResponseBodyResourceGroup> resourceGroup{};

  DeleteResourceGroupResponseBody() {}

  explicit DeleteResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroup) {
      res["ResourceGroup"] = resourceGroup ? boost::any(resourceGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroup") != m.end() && !m["ResourceGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceGroup"].type()) {
        DeleteResourceGroupResponseBodyResourceGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceGroup"]));
        resourceGroup = make_shared<DeleteResourceGroupResponseBodyResourceGroup>(model1);
      }
    }
  }


  virtual ~DeleteResourceGroupResponseBody() = default;
};
class DeleteResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteResourceGroupResponseBody> body{};

  DeleteResourceGroupResponse() {}

  explicit DeleteResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteResourceGroupResponse() = default;
};
class DeleteRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> roleName{};

  DeleteRoleRequest() {}

  explicit DeleteRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~DeleteRoleRequest() = default;
};
class DeleteRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteRoleResponseBody() {}

  explicit DeleteRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteRoleResponseBody() = default;
};
class DeleteRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteRoleResponseBody> body{};

  DeleteRoleResponse() {}

  explicit DeleteRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRoleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRoleResponse() = default;
};
class DeleteServiceLinkedRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> roleName{};

  DeleteServiceLinkedRoleRequest() {}

  explicit DeleteServiceLinkedRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~DeleteServiceLinkedRoleRequest() = default;
};
class DeleteServiceLinkedRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> deletionTaskId{};

  DeleteServiceLinkedRoleResponseBody() {}

  explicit DeleteServiceLinkedRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (deletionTaskId) {
      res["DeletionTaskId"] = boost::any(*deletionTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DeletionTaskId") != m.end() && !m["DeletionTaskId"].empty()) {
      deletionTaskId = make_shared<string>(boost::any_cast<string>(m["DeletionTaskId"]));
    }
  }


  virtual ~DeleteServiceLinkedRoleResponseBody() = default;
};
class DeleteServiceLinkedRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteServiceLinkedRoleResponseBody> body{};

  DeleteServiceLinkedRoleResponse() {}

  explicit DeleteServiceLinkedRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteServiceLinkedRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServiceLinkedRoleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServiceLinkedRoleResponse() = default;
};
class DeregisterDelegatedAdministratorRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> servicePrincipal{};

  DeregisterDelegatedAdministratorRequest() {}

  explicit DeregisterDelegatedAdministratorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (servicePrincipal) {
      res["ServicePrincipal"] = boost::any(*servicePrincipal);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("ServicePrincipal") != m.end() && !m["ServicePrincipal"].empty()) {
      servicePrincipal = make_shared<string>(boost::any_cast<string>(m["ServicePrincipal"]));
    }
  }


  virtual ~DeregisterDelegatedAdministratorRequest() = default;
};
class DeregisterDelegatedAdministratorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeregisterDelegatedAdministratorResponseBody() {}

  explicit DeregisterDelegatedAdministratorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeregisterDelegatedAdministratorResponseBody() = default;
};
class DeregisterDelegatedAdministratorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeregisterDelegatedAdministratorResponseBody> body{};

  DeregisterDelegatedAdministratorResponse() {}

  explicit DeregisterDelegatedAdministratorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeregisterDelegatedAdministratorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeregisterDelegatedAdministratorResponseBody>(model1);
      }
    }
  }


  virtual ~DeregisterDelegatedAdministratorResponse() = default;
};
class DestroyResourceDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DestroyResourceDirectoryResponseBody() {}

  explicit DestroyResourceDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DestroyResourceDirectoryResponseBody() = default;
};
class DestroyResourceDirectoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DestroyResourceDirectoryResponseBody> body{};

  DestroyResourceDirectoryResponse() {}

  explicit DestroyResourceDirectoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DestroyResourceDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DestroyResourceDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~DestroyResourceDirectoryResponse() = default;
};
class DetachControlPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyId{};
  shared_ptr<string> targetId{};

  DetachControlPolicyRequest() {}

  explicit DetachControlPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
  }


  virtual ~DetachControlPolicyRequest() = default;
};
class DetachControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DetachControlPolicyResponseBody() {}

  explicit DetachControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetachControlPolicyResponseBody() = default;
};
class DetachControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetachControlPolicyResponseBody> body{};

  DetachControlPolicyResponse() {}

  explicit DetachControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DetachControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DetachControlPolicyResponse() = default;
};
class DetachPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> policyType{};
  shared_ptr<string> policyName{};
  shared_ptr<string> principalType{};
  shared_ptr<string> principalName{};

  DetachPolicyRequest() {}

  explicit DetachPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<string>(boost::any_cast<string>(m["PrincipalName"]));
    }
  }


  virtual ~DetachPolicyRequest() = default;
};
class DetachPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DetachPolicyResponseBody() {}

  explicit DetachPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetachPolicyResponseBody() = default;
};
class DetachPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetachPolicyResponseBody> body{};

  DetachPolicyResponse() {}

  explicit DetachPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DetachPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DetachPolicyResponse() = default;
};
class DisableControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> enablementStatus{};
  shared_ptr<string> requestId{};

  DisableControlPolicyResponseBody() {}

  explicit DisableControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enablementStatus) {
      res["EnablementStatus"] = boost::any(*enablementStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnablementStatus") != m.end() && !m["EnablementStatus"].empty()) {
      enablementStatus = make_shared<string>(boost::any_cast<string>(m["EnablementStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DisableControlPolicyResponseBody() = default;
};
class DisableControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DisableControlPolicyResponseBody> body{};

  DisableControlPolicyResponse() {}

  explicit DisableControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DisableControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DisableControlPolicyResponse() = default;
};
class EnableControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> enablementStatus{};
  shared_ptr<string> requestId{};

  EnableControlPolicyResponseBody() {}

  explicit EnableControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enablementStatus) {
      res["EnablementStatus"] = boost::any(*enablementStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnablementStatus") != m.end() && !m["EnablementStatus"].empty()) {
      enablementStatus = make_shared<string>(boost::any_cast<string>(m["EnablementStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EnableControlPolicyResponseBody() = default;
};
class EnableControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableControlPolicyResponseBody> body{};

  EnableControlPolicyResponse() {}

  explicit EnableControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EnableControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~EnableControlPolicyResponse() = default;
};
class GetAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  GetAccountRequest() {}

  explicit GetAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
  }


  virtual ~GetAccountRequest() = default;
};
class GetAccountResponseBodyAccount : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<string> displayName{};
  shared_ptr<string> folderId{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> identityInformation{};
  shared_ptr<string> joinTime{};
  shared_ptr<string> accountId{};
  shared_ptr<string> joinMethod{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> accountName{};
  shared_ptr<string> resourceDirectoryPath{};

  GetAccountResponseBodyAccount() {}

  explicit GetAccountResponseBodyAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (identityInformation) {
      res["IdentityInformation"] = boost::any(*identityInformation);
    }
    if (joinTime) {
      res["JoinTime"] = boost::any(*joinTime);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (joinMethod) {
      res["JoinMethod"] = boost::any(*joinMethod);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (resourceDirectoryPath) {
      res["ResourceDirectoryPath"] = boost::any(*resourceDirectoryPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("IdentityInformation") != m.end() && !m["IdentityInformation"].empty()) {
      identityInformation = make_shared<string>(boost::any_cast<string>(m["IdentityInformation"]));
    }
    if (m.find("JoinTime") != m.end() && !m["JoinTime"].empty()) {
      joinTime = make_shared<string>(boost::any_cast<string>(m["JoinTime"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("JoinMethod") != m.end() && !m["JoinMethod"].empty()) {
      joinMethod = make_shared<string>(boost::any_cast<string>(m["JoinMethod"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("ResourceDirectoryPath") != m.end() && !m["ResourceDirectoryPath"].empty()) {
      resourceDirectoryPath = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryPath"]));
    }
  }


  virtual ~GetAccountResponseBodyAccount() = default;
};
class GetAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAccountResponseBodyAccount> account{};
  shared_ptr<string> requestId{};

  GetAccountResponseBody() {}

  explicit GetAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = account ? boost::any(account->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      if (typeid(map<string, boost::any>) == m["Account"].type()) {
        GetAccountResponseBodyAccount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Account"]));
        account = make_shared<GetAccountResponseBodyAccount>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAccountResponseBody() = default;
};
class GetAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAccountResponseBody> body{};

  GetAccountResponse() {}

  explicit GetAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccountResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccountResponse() = default;
};
class GetControlPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyId{};
  shared_ptr<string> language{};

  GetControlPolicyRequest() {}

  explicit GetControlPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
  }


  virtual ~GetControlPolicyRequest() = default;
};
class GetControlPolicyResponseBodyControlPolicy : public Darabonba::Model {
public:
  shared_ptr<string> policyDocument{};
  shared_ptr<string> updateDate{};
  shared_ptr<string> description{};
  shared_ptr<string> effectScope{};
  shared_ptr<string> attachmentCount{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyId{};
  shared_ptr<string> createDate{};
  shared_ptr<string> policyType{};

  GetControlPolicyResponseBodyControlPolicy() {}

  explicit GetControlPolicyResponseBodyControlPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyDocument) {
      res["PolicyDocument"] = boost::any(*policyDocument);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (effectScope) {
      res["EffectScope"] = boost::any(*effectScope);
    }
    if (attachmentCount) {
      res["AttachmentCount"] = boost::any(*attachmentCount);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyDocument") != m.end() && !m["PolicyDocument"].empty()) {
      policyDocument = make_shared<string>(boost::any_cast<string>(m["PolicyDocument"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EffectScope") != m.end() && !m["EffectScope"].empty()) {
      effectScope = make_shared<string>(boost::any_cast<string>(m["EffectScope"]));
    }
    if (m.find("AttachmentCount") != m.end() && !m["AttachmentCount"].empty()) {
      attachmentCount = make_shared<string>(boost::any_cast<string>(m["AttachmentCount"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~GetControlPolicyResponseBodyControlPolicy() = default;
};
class GetControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetControlPolicyResponseBodyControlPolicy> controlPolicy{};
  shared_ptr<string> requestId{};

  GetControlPolicyResponseBody() {}

  explicit GetControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (controlPolicy) {
      res["ControlPolicy"] = controlPolicy ? boost::any(controlPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ControlPolicy") != m.end() && !m["ControlPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["ControlPolicy"].type()) {
        GetControlPolicyResponseBodyControlPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ControlPolicy"]));
        controlPolicy = make_shared<GetControlPolicyResponseBodyControlPolicy>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetControlPolicyResponseBody() = default;
};
class GetControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetControlPolicyResponseBody> body{};

  GetControlPolicyResponse() {}

  explicit GetControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GetControlPolicyResponse() = default;
};
class GetControlPolicyEnablementStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> enablementStatus{};
  shared_ptr<string> requestId{};

  GetControlPolicyEnablementStatusResponseBody() {}

  explicit GetControlPolicyEnablementStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enablementStatus) {
      res["EnablementStatus"] = boost::any(*enablementStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnablementStatus") != m.end() && !m["EnablementStatus"].empty()) {
      enablementStatus = make_shared<string>(boost::any_cast<string>(m["EnablementStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetControlPolicyEnablementStatusResponseBody() = default;
};
class GetControlPolicyEnablementStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetControlPolicyEnablementStatusResponseBody> body{};

  GetControlPolicyEnablementStatusResponse() {}

  explicit GetControlPolicyEnablementStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetControlPolicyEnablementStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetControlPolicyEnablementStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetControlPolicyEnablementStatusResponse() = default;
};
class GetFolderRequest : public Darabonba::Model {
public:
  shared_ptr<string> folderId{};

  GetFolderRequest() {}

  explicit GetFolderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
  }


  virtual ~GetFolderRequest() = default;
};
class GetFolderResponseBodyFolder : public Darabonba::Model {
public:
  shared_ptr<string> folderId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> parentFolderId{};
  shared_ptr<string> folderName{};
  shared_ptr<string> resourceDirectoryPath{};

  GetFolderResponseBodyFolder() {}

  explicit GetFolderResponseBodyFolder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (parentFolderId) {
      res["ParentFolderId"] = boost::any(*parentFolderId);
    }
    if (folderName) {
      res["FolderName"] = boost::any(*folderName);
    }
    if (resourceDirectoryPath) {
      res["ResourceDirectoryPath"] = boost::any(*resourceDirectoryPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ParentFolderId") != m.end() && !m["ParentFolderId"].empty()) {
      parentFolderId = make_shared<string>(boost::any_cast<string>(m["ParentFolderId"]));
    }
    if (m.find("FolderName") != m.end() && !m["FolderName"].empty()) {
      folderName = make_shared<string>(boost::any_cast<string>(m["FolderName"]));
    }
    if (m.find("ResourceDirectoryPath") != m.end() && !m["ResourceDirectoryPath"].empty()) {
      resourceDirectoryPath = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryPath"]));
    }
  }


  virtual ~GetFolderResponseBodyFolder() = default;
};
class GetFolderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetFolderResponseBodyFolder> folder{};

  GetFolderResponseBody() {}

  explicit GetFolderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (folder) {
      res["Folder"] = folder ? boost::any(folder->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Folder") != m.end() && !m["Folder"].empty()) {
      if (typeid(map<string, boost::any>) == m["Folder"].type()) {
        GetFolderResponseBodyFolder model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Folder"]));
        folder = make_shared<GetFolderResponseBodyFolder>(model1);
      }
    }
  }


  virtual ~GetFolderResponseBody() = default;
};
class GetFolderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetFolderResponseBody> body{};

  GetFolderResponse() {}

  explicit GetFolderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetFolderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFolderResponseBody>(model1);
      }
    }
  }


  virtual ~GetFolderResponse() = default;
};
class GetHandshakeRequest : public Darabonba::Model {
public:
  shared_ptr<string> handshakeId{};

  GetHandshakeRequest() {}

  explicit GetHandshakeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (handshakeId) {
      res["HandshakeId"] = boost::any(*handshakeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HandshakeId") != m.end() && !m["HandshakeId"].empty()) {
      handshakeId = make_shared<string>(boost::any_cast<string>(m["HandshakeId"]));
    }
  }


  virtual ~GetHandshakeRequest() = default;
};
class GetHandshakeResponseBodyHandshake : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> createTime{};
  shared_ptr<string> targetEntity{};
  shared_ptr<string> masterAccountId{};
  shared_ptr<string> handshakeId{};
  shared_ptr<string> masterAccountRealName{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> invitedAccountRealName{};
  shared_ptr<string> note{};
  shared_ptr<string> masterAccountName{};
  shared_ptr<string> targetType{};
  shared_ptr<string> modifyTime{};

  GetHandshakeResponseBodyHandshake() {}

  explicit GetHandshakeResponseBodyHandshake(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (targetEntity) {
      res["TargetEntity"] = boost::any(*targetEntity);
    }
    if (masterAccountId) {
      res["MasterAccountId"] = boost::any(*masterAccountId);
    }
    if (handshakeId) {
      res["HandshakeId"] = boost::any(*handshakeId);
    }
    if (masterAccountRealName) {
      res["MasterAccountRealName"] = boost::any(*masterAccountRealName);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (invitedAccountRealName) {
      res["InvitedAccountRealName"] = boost::any(*invitedAccountRealName);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (masterAccountName) {
      res["MasterAccountName"] = boost::any(*masterAccountName);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("TargetEntity") != m.end() && !m["TargetEntity"].empty()) {
      targetEntity = make_shared<string>(boost::any_cast<string>(m["TargetEntity"]));
    }
    if (m.find("MasterAccountId") != m.end() && !m["MasterAccountId"].empty()) {
      masterAccountId = make_shared<string>(boost::any_cast<string>(m["MasterAccountId"]));
    }
    if (m.find("HandshakeId") != m.end() && !m["HandshakeId"].empty()) {
      handshakeId = make_shared<string>(boost::any_cast<string>(m["HandshakeId"]));
    }
    if (m.find("MasterAccountRealName") != m.end() && !m["MasterAccountRealName"].empty()) {
      masterAccountRealName = make_shared<string>(boost::any_cast<string>(m["MasterAccountRealName"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("InvitedAccountRealName") != m.end() && !m["InvitedAccountRealName"].empty()) {
      invitedAccountRealName = make_shared<string>(boost::any_cast<string>(m["InvitedAccountRealName"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("MasterAccountName") != m.end() && !m["MasterAccountName"].empty()) {
      masterAccountName = make_shared<string>(boost::any_cast<string>(m["MasterAccountName"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
  }


  virtual ~GetHandshakeResponseBodyHandshake() = default;
};
class GetHandshakeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetHandshakeResponseBodyHandshake> handshake{};

  GetHandshakeResponseBody() {}

  explicit GetHandshakeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (handshake) {
      res["Handshake"] = handshake ? boost::any(handshake->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Handshake") != m.end() && !m["Handshake"].empty()) {
      if (typeid(map<string, boost::any>) == m["Handshake"].type()) {
        GetHandshakeResponseBodyHandshake model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Handshake"]));
        handshake = make_shared<GetHandshakeResponseBodyHandshake>(model1);
      }
    }
  }


  virtual ~GetHandshakeResponseBody() = default;
};
class GetHandshakeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetHandshakeResponseBody> body{};

  GetHandshakeResponse() {}

  explicit GetHandshakeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetHandshakeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHandshakeResponseBody>(model1);
      }
    }
  }


  virtual ~GetHandshakeResponse() = default;
};
class GetPayerForAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  GetPayerForAccountRequest() {}

  explicit GetPayerForAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
  }


  virtual ~GetPayerForAccountRequest() = default;
};
class GetPayerForAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> payerAccountName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> payerAccountId{};

  GetPayerForAccountResponseBody() {}

  explicit GetPayerForAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payerAccountName) {
      res["PayerAccountName"] = boost::any(*payerAccountName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (payerAccountId) {
      res["PayerAccountId"] = boost::any(*payerAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PayerAccountName") != m.end() && !m["PayerAccountName"].empty()) {
      payerAccountName = make_shared<string>(boost::any_cast<string>(m["PayerAccountName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PayerAccountId") != m.end() && !m["PayerAccountId"].empty()) {
      payerAccountId = make_shared<string>(boost::any_cast<string>(m["PayerAccountId"]));
    }
  }


  virtual ~GetPayerForAccountResponseBody() = default;
};
class GetPayerForAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPayerForAccountResponseBody> body{};

  GetPayerForAccountResponse() {}

  explicit GetPayerForAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPayerForAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPayerForAccountResponseBody>(model1);
      }
    }
  }


  virtual ~GetPayerForAccountResponse() = default;
};
class GetPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};
  shared_ptr<string> language{};

  GetPolicyRequest() {}

  explicit GetPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
  }


  virtual ~GetPolicyRequest() = default;
};
class GetPolicyResponseBodyPolicy : public Darabonba::Model {
public:
  shared_ptr<string> defaultVersion{};
  shared_ptr<string> updateDate{};
  shared_ptr<string> description{};
  shared_ptr<string> policyDocument{};
  shared_ptr<long> attachmentCount{};
  shared_ptr<string> policyName{};
  shared_ptr<string> createDate{};
  shared_ptr<string> policyType{};

  GetPolicyResponseBodyPolicy() {}

  explicit GetPolicyResponseBodyPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultVersion) {
      res["DefaultVersion"] = boost::any(*defaultVersion);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (policyDocument) {
      res["PolicyDocument"] = boost::any(*policyDocument);
    }
    if (attachmentCount) {
      res["AttachmentCount"] = boost::any(*attachmentCount);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultVersion") != m.end() && !m["DefaultVersion"].empty()) {
      defaultVersion = make_shared<string>(boost::any_cast<string>(m["DefaultVersion"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PolicyDocument") != m.end() && !m["PolicyDocument"].empty()) {
      policyDocument = make_shared<string>(boost::any_cast<string>(m["PolicyDocument"]));
    }
    if (m.find("AttachmentCount") != m.end() && !m["AttachmentCount"].empty()) {
      attachmentCount = make_shared<long>(boost::any_cast<long>(m["AttachmentCount"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~GetPolicyResponseBodyPolicy() = default;
};
class GetPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetPolicyResponseBodyPolicy> policy{};
  shared_ptr<string> requestId{};

  GetPolicyResponseBody() {}

  explicit GetPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        GetPolicyResponseBodyPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<GetPolicyResponseBodyPolicy>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPolicyResponseBody() = default;
};
class GetPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPolicyResponseBody> body{};

  GetPolicyResponse() {}

  explicit GetPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GetPolicyResponse() = default;
};
class GetPolicyVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyType{};
  shared_ptr<string> policyName{};
  shared_ptr<string> versionId{};

  GetPolicyVersionRequest() {}

  explicit GetPolicyVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~GetPolicyVersionRequest() = default;
};
class GetPolicyVersionResponseBodyPolicyVersion : public Darabonba::Model {
public:
  shared_ptr<bool> isDefaultVersion{};
  shared_ptr<string> policyDocument{};
  shared_ptr<string> versionId{};
  shared_ptr<string> createDate{};

  GetPolicyVersionResponseBodyPolicyVersion() {}

  explicit GetPolicyVersionResponseBodyPolicyVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isDefaultVersion) {
      res["IsDefaultVersion"] = boost::any(*isDefaultVersion);
    }
    if (policyDocument) {
      res["PolicyDocument"] = boost::any(*policyDocument);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsDefaultVersion") != m.end() && !m["IsDefaultVersion"].empty()) {
      isDefaultVersion = make_shared<bool>(boost::any_cast<bool>(m["IsDefaultVersion"]));
    }
    if (m.find("PolicyDocument") != m.end() && !m["PolicyDocument"].empty()) {
      policyDocument = make_shared<string>(boost::any_cast<string>(m["PolicyDocument"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
  }


  virtual ~GetPolicyVersionResponseBodyPolicyVersion() = default;
};
class GetPolicyVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetPolicyVersionResponseBodyPolicyVersion> policyVersion{};
  shared_ptr<string> requestId{};

  GetPolicyVersionResponseBody() {}

  explicit GetPolicyVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyVersion) {
      res["PolicyVersion"] = policyVersion ? boost::any(policyVersion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyVersion") != m.end() && !m["PolicyVersion"].empty()) {
      if (typeid(map<string, boost::any>) == m["PolicyVersion"].type()) {
        GetPolicyVersionResponseBodyPolicyVersion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PolicyVersion"]));
        policyVersion = make_shared<GetPolicyVersionResponseBodyPolicyVersion>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPolicyVersionResponseBody() = default;
};
class GetPolicyVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPolicyVersionResponseBody> body{};

  GetPolicyVersionResponse() {}

  explicit GetPolicyVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPolicyVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPolicyVersionResponseBody>(model1);
      }
    }
  }


  virtual ~GetPolicyVersionResponse() = default;
};
class GetResourceDirectoryResponseBodyResourceDirectory : public Darabonba::Model {
public:
  shared_ptr<string> rootFolderId{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> masterAccountId{};
  shared_ptr<string> masterAccountName{};
  shared_ptr<string> controlPolicyStatus{};
  shared_ptr<string> memberDeletionStatus{};

  GetResourceDirectoryResponseBodyResourceDirectory() {}

  explicit GetResourceDirectoryResponseBodyResourceDirectory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rootFolderId) {
      res["RootFolderId"] = boost::any(*rootFolderId);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (masterAccountId) {
      res["MasterAccountId"] = boost::any(*masterAccountId);
    }
    if (masterAccountName) {
      res["MasterAccountName"] = boost::any(*masterAccountName);
    }
    if (controlPolicyStatus) {
      res["ControlPolicyStatus"] = boost::any(*controlPolicyStatus);
    }
    if (memberDeletionStatus) {
      res["MemberDeletionStatus"] = boost::any(*memberDeletionStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RootFolderId") != m.end() && !m["RootFolderId"].empty()) {
      rootFolderId = make_shared<string>(boost::any_cast<string>(m["RootFolderId"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("MasterAccountId") != m.end() && !m["MasterAccountId"].empty()) {
      masterAccountId = make_shared<string>(boost::any_cast<string>(m["MasterAccountId"]));
    }
    if (m.find("MasterAccountName") != m.end() && !m["MasterAccountName"].empty()) {
      masterAccountName = make_shared<string>(boost::any_cast<string>(m["MasterAccountName"]));
    }
    if (m.find("ControlPolicyStatus") != m.end() && !m["ControlPolicyStatus"].empty()) {
      controlPolicyStatus = make_shared<string>(boost::any_cast<string>(m["ControlPolicyStatus"]));
    }
    if (m.find("MemberDeletionStatus") != m.end() && !m["MemberDeletionStatus"].empty()) {
      memberDeletionStatus = make_shared<string>(boost::any_cast<string>(m["MemberDeletionStatus"]));
    }
  }


  virtual ~GetResourceDirectoryResponseBodyResourceDirectory() = default;
};
class GetResourceDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetResourceDirectoryResponseBodyResourceDirectory> resourceDirectory{};

  GetResourceDirectoryResponseBody() {}

  explicit GetResourceDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceDirectory) {
      res["ResourceDirectory"] = resourceDirectory ? boost::any(resourceDirectory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceDirectory") != m.end() && !m["ResourceDirectory"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceDirectory"].type()) {
        GetResourceDirectoryResponseBodyResourceDirectory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceDirectory"]));
        resourceDirectory = make_shared<GetResourceDirectoryResponseBodyResourceDirectory>(model1);
      }
    }
  }


  virtual ~GetResourceDirectoryResponseBody() = default;
};
class GetResourceDirectoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetResourceDirectoryResponseBody> body{};

  GetResourceDirectoryResponse() {}

  explicit GetResourceDirectoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetResourceDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceDirectoryResponse() = default;
};
class GetResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};

  GetResourceGroupRequest() {}

  explicit GetResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~GetResourceGroupRequest() = default;
};
class GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> regionId{};

  GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus() {}

  explicit GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus() = default;
};
class GetResourceGroupResponseBodyResourceGroupRegionStatuses : public Darabonba::Model {
public:
  shared_ptr<vector<GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus>> regionStatus{};

  GetResourceGroupResponseBodyResourceGroupRegionStatuses() {}

  explicit GetResourceGroupResponseBodyResourceGroupRegionStatuses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionStatus) {
      vector<boost::any> temp1;
      for(auto item1:*regionStatus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionStatus"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionStatus") != m.end() && !m["RegionStatus"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionStatus"].type()) {
        vector<GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionStatus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionStatus = make_shared<vector<GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus>>(expect1);
      }
    }
  }


  virtual ~GetResourceGroupResponseBodyResourceGroupRegionStatuses() = default;
};
class GetResourceGroupResponseBodyResourceGroup : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> status{};
  shared_ptr<GetResourceGroupResponseBodyResourceGroupRegionStatuses> regionStatuses{};
  shared_ptr<string> accountId{};
  shared_ptr<string> name{};
  shared_ptr<string> createDate{};
  shared_ptr<string> id{};

  GetResourceGroupResponseBodyResourceGroup() {}

  explicit GetResourceGroupResponseBodyResourceGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (regionStatuses) {
      res["RegionStatuses"] = regionStatuses ? boost::any(regionStatuses->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("RegionStatuses") != m.end() && !m["RegionStatuses"].empty()) {
      if (typeid(map<string, boost::any>) == m["RegionStatuses"].type()) {
        GetResourceGroupResponseBodyResourceGroupRegionStatuses model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RegionStatuses"]));
        regionStatuses = make_shared<GetResourceGroupResponseBodyResourceGroupRegionStatuses>(model1);
      }
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~GetResourceGroupResponseBodyResourceGroup() = default;
};
class GetResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetResourceGroupResponseBodyResourceGroup> resourceGroup{};

  GetResourceGroupResponseBody() {}

  explicit GetResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroup) {
      res["ResourceGroup"] = resourceGroup ? boost::any(resourceGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroup") != m.end() && !m["ResourceGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceGroup"].type()) {
        GetResourceGroupResponseBodyResourceGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceGroup"]));
        resourceGroup = make_shared<GetResourceGroupResponseBodyResourceGroup>(model1);
      }
    }
  }


  virtual ~GetResourceGroupResponseBody() = default;
};
class GetResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetResourceGroupResponseBody> body{};

  GetResourceGroupResponse() {}

  explicit GetResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceGroupResponse() = default;
};
class GetRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> roleName{};
  shared_ptr<string> language{};

  GetRoleRequest() {}

  explicit GetRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
  }


  virtual ~GetRoleRequest() = default;
};
class GetRoleResponseBodyRoleLatestDeletionTask : public Darabonba::Model {
public:
  shared_ptr<string> deletionTaskId{};
  shared_ptr<string> createDate{};

  GetRoleResponseBodyRoleLatestDeletionTask() {}

  explicit GetRoleResponseBodyRoleLatestDeletionTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deletionTaskId) {
      res["DeletionTaskId"] = boost::any(*deletionTaskId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeletionTaskId") != m.end() && !m["DeletionTaskId"].empty()) {
      deletionTaskId = make_shared<string>(boost::any_cast<string>(m["DeletionTaskId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
  }


  virtual ~GetRoleResponseBodyRoleLatestDeletionTask() = default;
};
class GetRoleResponseBodyRole : public Darabonba::Model {
public:
  shared_ptr<string> assumeRolePolicyDocument{};
  shared_ptr<string> rolePrincipalName{};
  shared_ptr<string> updateDate{};
  shared_ptr<string> description{};
  shared_ptr<long> maxSessionDuration{};
  shared_ptr<GetRoleResponseBodyRoleLatestDeletionTask> latestDeletionTask{};
  shared_ptr<string> roleName{};
  shared_ptr<string> createDate{};
  shared_ptr<string> roleId{};
  shared_ptr<string> arn{};
  shared_ptr<bool> isServiceLinkedRole{};

  GetRoleResponseBodyRole() {}

  explicit GetRoleResponseBodyRole(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assumeRolePolicyDocument) {
      res["AssumeRolePolicyDocument"] = boost::any(*assumeRolePolicyDocument);
    }
    if (rolePrincipalName) {
      res["RolePrincipalName"] = boost::any(*rolePrincipalName);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (maxSessionDuration) {
      res["MaxSessionDuration"] = boost::any(*maxSessionDuration);
    }
    if (latestDeletionTask) {
      res["LatestDeletionTask"] = latestDeletionTask ? boost::any(latestDeletionTask->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (isServiceLinkedRole) {
      res["IsServiceLinkedRole"] = boost::any(*isServiceLinkedRole);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssumeRolePolicyDocument") != m.end() && !m["AssumeRolePolicyDocument"].empty()) {
      assumeRolePolicyDocument = make_shared<string>(boost::any_cast<string>(m["AssumeRolePolicyDocument"]));
    }
    if (m.find("RolePrincipalName") != m.end() && !m["RolePrincipalName"].empty()) {
      rolePrincipalName = make_shared<string>(boost::any_cast<string>(m["RolePrincipalName"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("MaxSessionDuration") != m.end() && !m["MaxSessionDuration"].empty()) {
      maxSessionDuration = make_shared<long>(boost::any_cast<long>(m["MaxSessionDuration"]));
    }
    if (m.find("LatestDeletionTask") != m.end() && !m["LatestDeletionTask"].empty()) {
      if (typeid(map<string, boost::any>) == m["LatestDeletionTask"].type()) {
        GetRoleResponseBodyRoleLatestDeletionTask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LatestDeletionTask"]));
        latestDeletionTask = make_shared<GetRoleResponseBodyRoleLatestDeletionTask>(model1);
      }
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("IsServiceLinkedRole") != m.end() && !m["IsServiceLinkedRole"].empty()) {
      isServiceLinkedRole = make_shared<bool>(boost::any_cast<bool>(m["IsServiceLinkedRole"]));
    }
  }


  virtual ~GetRoleResponseBodyRole() = default;
};
class GetRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetRoleResponseBodyRole> role{};
  shared_ptr<string> requestId{};

  GetRoleResponseBody() {}

  explicit GetRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (role) {
      res["Role"] = role ? boost::any(role->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      if (typeid(map<string, boost::any>) == m["Role"].type()) {
        GetRoleResponseBodyRole model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Role"]));
        role = make_shared<GetRoleResponseBodyRole>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetRoleResponseBody() = default;
};
class GetRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRoleResponseBody> body{};

  GetRoleResponse() {}

  explicit GetRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRoleResponseBody>(model1);
      }
    }
  }


  virtual ~GetRoleResponse() = default;
};
class GetServiceLinkedRoleDeletionStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> deletionTaskId{};

  GetServiceLinkedRoleDeletionStatusRequest() {}

  explicit GetServiceLinkedRoleDeletionStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deletionTaskId) {
      res["DeletionTaskId"] = boost::any(*deletionTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeletionTaskId") != m.end() && !m["DeletionTaskId"].empty()) {
      deletionTaskId = make_shared<string>(boost::any_cast<string>(m["DeletionTaskId"]));
    }
  }


  virtual ~GetServiceLinkedRoleDeletionStatusRequest() = default;
};
class GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsageResources : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resource{};

  GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsageResources() {}

  explicit GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsageResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Resource"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Resource"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resource = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsageResources() = default;
};
class GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsageResources> resources{};

  GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage() {}

  explicit GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resources) {
      res["Resources"] = resources ? boost::any(resources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(map<string, boost::any>) == m["Resources"].type()) {
        GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsageResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Resources"]));
        resources = make_shared<GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsageResources>(model1);
      }
    }
  }


  virtual ~GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage() = default;
};
class GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages : public Darabonba::Model {
public:
  shared_ptr<vector<GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage>> roleUsage{};

  GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages() {}

  explicit GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleUsage) {
      vector<boost::any> temp1;
      for(auto item1:*roleUsage){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RoleUsage"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleUsage") != m.end() && !m["RoleUsage"].empty()) {
      if (typeid(vector<boost::any>) == m["RoleUsage"].type()) {
        vector<GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RoleUsage"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        roleUsage = make_shared<vector<GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage>>(expect1);
      }
    }
  }


  virtual ~GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages() = default;
};
class GetServiceLinkedRoleDeletionStatusResponseBodyReason : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages> roleUsages{};

  GetServiceLinkedRoleDeletionStatusResponseBodyReason() {}

  explicit GetServiceLinkedRoleDeletionStatusResponseBodyReason(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (roleUsages) {
      res["RoleUsages"] = roleUsages ? boost::any(roleUsages->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RoleUsages") != m.end() && !m["RoleUsages"].empty()) {
      if (typeid(map<string, boost::any>) == m["RoleUsages"].type()) {
        GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RoleUsages"]));
        roleUsages = make_shared<GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages>(model1);
      }
    }
  }


  virtual ~GetServiceLinkedRoleDeletionStatusResponseBodyReason() = default;
};
class GetServiceLinkedRoleDeletionStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> requestId{};
  shared_ptr<GetServiceLinkedRoleDeletionStatusResponseBodyReason> reason{};

  GetServiceLinkedRoleDeletionStatusResponseBody() {}

  explicit GetServiceLinkedRoleDeletionStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (reason) {
      res["Reason"] = reason ? boost::any(reason->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      if (typeid(map<string, boost::any>) == m["Reason"].type()) {
        GetServiceLinkedRoleDeletionStatusResponseBodyReason model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Reason"]));
        reason = make_shared<GetServiceLinkedRoleDeletionStatusResponseBodyReason>(model1);
      }
    }
  }


  virtual ~GetServiceLinkedRoleDeletionStatusResponseBody() = default;
};
class GetServiceLinkedRoleDeletionStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetServiceLinkedRoleDeletionStatusResponseBody> body{};

  GetServiceLinkedRoleDeletionStatusResponse() {}

  explicit GetServiceLinkedRoleDeletionStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetServiceLinkedRoleDeletionStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceLinkedRoleDeletionStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceLinkedRoleDeletionStatusResponse() = default;
};
class InitResourceDirectoryResponseBodyResourceDirectory : public Darabonba::Model {
public:
  shared_ptr<string> rootFolderId{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> masterAccountId{};
  shared_ptr<string> masterAccountName{};

  InitResourceDirectoryResponseBodyResourceDirectory() {}

  explicit InitResourceDirectoryResponseBodyResourceDirectory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rootFolderId) {
      res["RootFolderId"] = boost::any(*rootFolderId);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (masterAccountId) {
      res["MasterAccountId"] = boost::any(*masterAccountId);
    }
    if (masterAccountName) {
      res["MasterAccountName"] = boost::any(*masterAccountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RootFolderId") != m.end() && !m["RootFolderId"].empty()) {
      rootFolderId = make_shared<string>(boost::any_cast<string>(m["RootFolderId"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("MasterAccountId") != m.end() && !m["MasterAccountId"].empty()) {
      masterAccountId = make_shared<string>(boost::any_cast<string>(m["MasterAccountId"]));
    }
    if (m.find("MasterAccountName") != m.end() && !m["MasterAccountName"].empty()) {
      masterAccountName = make_shared<string>(boost::any_cast<string>(m["MasterAccountName"]));
    }
  }


  virtual ~InitResourceDirectoryResponseBodyResourceDirectory() = default;
};
class InitResourceDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<InitResourceDirectoryResponseBodyResourceDirectory> resourceDirectory{};

  InitResourceDirectoryResponseBody() {}

  explicit InitResourceDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceDirectory) {
      res["ResourceDirectory"] = resourceDirectory ? boost::any(resourceDirectory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceDirectory") != m.end() && !m["ResourceDirectory"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceDirectory"].type()) {
        InitResourceDirectoryResponseBodyResourceDirectory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceDirectory"]));
        resourceDirectory = make_shared<InitResourceDirectoryResponseBodyResourceDirectory>(model1);
      }
    }
  }


  virtual ~InitResourceDirectoryResponseBody() = default;
};
class InitResourceDirectoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<InitResourceDirectoryResponseBody> body{};

  InitResourceDirectoryResponse() {}

  explicit InitResourceDirectoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        InitResourceDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InitResourceDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~InitResourceDirectoryResponse() = default;
};
class InviteAccountToResourceDirectoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> targetEntity{};
  shared_ptr<string> targetType{};
  shared_ptr<string> note{};

  InviteAccountToResourceDirectoryRequest() {}

  explicit InviteAccountToResourceDirectoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (targetEntity) {
      res["TargetEntity"] = boost::any(*targetEntity);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TargetEntity") != m.end() && !m["TargetEntity"].empty()) {
      targetEntity = make_shared<string>(boost::any_cast<string>(m["TargetEntity"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
  }


  virtual ~InviteAccountToResourceDirectoryRequest() = default;
};
class InviteAccountToResourceDirectoryResponseBodyHandshake : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> note{};
  shared_ptr<string> targetEntity{};
  shared_ptr<string> masterAccountId{};
  shared_ptr<string> masterAccountName{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> targetType{};
  shared_ptr<string> handshakeId{};

  InviteAccountToResourceDirectoryResponseBodyHandshake() {}

  explicit InviteAccountToResourceDirectoryResponseBodyHandshake(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (targetEntity) {
      res["TargetEntity"] = boost::any(*targetEntity);
    }
    if (masterAccountId) {
      res["MasterAccountId"] = boost::any(*masterAccountId);
    }
    if (masterAccountName) {
      res["MasterAccountName"] = boost::any(*masterAccountName);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (handshakeId) {
      res["HandshakeId"] = boost::any(*handshakeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("TargetEntity") != m.end() && !m["TargetEntity"].empty()) {
      targetEntity = make_shared<string>(boost::any_cast<string>(m["TargetEntity"]));
    }
    if (m.find("MasterAccountId") != m.end() && !m["MasterAccountId"].empty()) {
      masterAccountId = make_shared<string>(boost::any_cast<string>(m["MasterAccountId"]));
    }
    if (m.find("MasterAccountName") != m.end() && !m["MasterAccountName"].empty()) {
      masterAccountName = make_shared<string>(boost::any_cast<string>(m["MasterAccountName"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("HandshakeId") != m.end() && !m["HandshakeId"].empty()) {
      handshakeId = make_shared<string>(boost::any_cast<string>(m["HandshakeId"]));
    }
  }


  virtual ~InviteAccountToResourceDirectoryResponseBodyHandshake() = default;
};
class InviteAccountToResourceDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<InviteAccountToResourceDirectoryResponseBodyHandshake> handshake{};

  InviteAccountToResourceDirectoryResponseBody() {}

  explicit InviteAccountToResourceDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (handshake) {
      res["Handshake"] = handshake ? boost::any(handshake->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Handshake") != m.end() && !m["Handshake"].empty()) {
      if (typeid(map<string, boost::any>) == m["Handshake"].type()) {
        InviteAccountToResourceDirectoryResponseBodyHandshake model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Handshake"]));
        handshake = make_shared<InviteAccountToResourceDirectoryResponseBodyHandshake>(model1);
      }
    }
  }


  virtual ~InviteAccountToResourceDirectoryResponseBody() = default;
};
class InviteAccountToResourceDirectoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<InviteAccountToResourceDirectoryResponseBody> body{};

  InviteAccountToResourceDirectoryResponse() {}

  explicit InviteAccountToResourceDirectoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        InviteAccountToResourceDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InviteAccountToResourceDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~InviteAccountToResourceDirectoryResponse() = default;
};
class ListAccountsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListAccountsRequest() {}

  explicit ListAccountsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListAccountsRequest() = default;
};
class ListAccountsResponseBodyAccountsAccount : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<string> displayName{};
  shared_ptr<string> folderId{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> joinTime{};
  shared_ptr<string> accountId{};
  shared_ptr<string> joinMethod{};
  shared_ptr<string> modifyTime{};

  ListAccountsResponseBodyAccountsAccount() {}

  explicit ListAccountsResponseBodyAccountsAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (joinTime) {
      res["JoinTime"] = boost::any(*joinTime);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (joinMethod) {
      res["JoinMethod"] = boost::any(*joinMethod);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("JoinTime") != m.end() && !m["JoinTime"].empty()) {
      joinTime = make_shared<string>(boost::any_cast<string>(m["JoinTime"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("JoinMethod") != m.end() && !m["JoinMethod"].empty()) {
      joinMethod = make_shared<string>(boost::any_cast<string>(m["JoinMethod"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
  }


  virtual ~ListAccountsResponseBodyAccountsAccount() = default;
};
class ListAccountsResponseBodyAccounts : public Darabonba::Model {
public:
  shared_ptr<vector<ListAccountsResponseBodyAccountsAccount>> account{};

  ListAccountsResponseBodyAccounts() {}

  explicit ListAccountsResponseBodyAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      vector<boost::any> temp1;
      for(auto item1:*account){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Account"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      if (typeid(vector<boost::any>) == m["Account"].type()) {
        vector<ListAccountsResponseBodyAccountsAccount> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Account"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAccountsResponseBodyAccountsAccount model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        account = make_shared<vector<ListAccountsResponseBodyAccountsAccount>>(expect1);
      }
    }
  }


  virtual ~ListAccountsResponseBodyAccounts() = default;
};
class ListAccountsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<ListAccountsResponseBodyAccounts> accounts{};

  ListAccountsResponseBody() {}

  explicit ListAccountsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (accounts) {
      res["Accounts"] = accounts ? boost::any(accounts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Accounts") != m.end() && !m["Accounts"].empty()) {
      if (typeid(map<string, boost::any>) == m["Accounts"].type()) {
        ListAccountsResponseBodyAccounts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Accounts"]));
        accounts = make_shared<ListAccountsResponseBodyAccounts>(model1);
      }
    }
  }


  virtual ~ListAccountsResponseBody() = default;
};
class ListAccountsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAccountsResponseBody> body{};

  ListAccountsResponse() {}

  explicit ListAccountsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAccountsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAccountsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAccountsResponse() = default;
};
class ListAccountsForParentRequest : public Darabonba::Model {
public:
  shared_ptr<string> parentFolderId{};
  shared_ptr<string> queryKeyword{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListAccountsForParentRequest() {}

  explicit ListAccountsForParentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parentFolderId) {
      res["ParentFolderId"] = boost::any(*parentFolderId);
    }
    if (queryKeyword) {
      res["QueryKeyword"] = boost::any(*queryKeyword);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParentFolderId") != m.end() && !m["ParentFolderId"].empty()) {
      parentFolderId = make_shared<string>(boost::any_cast<string>(m["ParentFolderId"]));
    }
    if (m.find("QueryKeyword") != m.end() && !m["QueryKeyword"].empty()) {
      queryKeyword = make_shared<string>(boost::any_cast<string>(m["QueryKeyword"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListAccountsForParentRequest() = default;
};
class ListAccountsForParentResponseBodyAccountsAccount : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<string> displayName{};
  shared_ptr<string> folderId{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> joinTime{};
  shared_ptr<string> accountId{};
  shared_ptr<string> joinMethod{};
  shared_ptr<string> modifyTime{};

  ListAccountsForParentResponseBodyAccountsAccount() {}

  explicit ListAccountsForParentResponseBodyAccountsAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (joinTime) {
      res["JoinTime"] = boost::any(*joinTime);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (joinMethod) {
      res["JoinMethod"] = boost::any(*joinMethod);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("JoinTime") != m.end() && !m["JoinTime"].empty()) {
      joinTime = make_shared<string>(boost::any_cast<string>(m["JoinTime"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("JoinMethod") != m.end() && !m["JoinMethod"].empty()) {
      joinMethod = make_shared<string>(boost::any_cast<string>(m["JoinMethod"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
  }


  virtual ~ListAccountsForParentResponseBodyAccountsAccount() = default;
};
class ListAccountsForParentResponseBodyAccounts : public Darabonba::Model {
public:
  shared_ptr<vector<ListAccountsForParentResponseBodyAccountsAccount>> account{};

  ListAccountsForParentResponseBodyAccounts() {}

  explicit ListAccountsForParentResponseBodyAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      vector<boost::any> temp1;
      for(auto item1:*account){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Account"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      if (typeid(vector<boost::any>) == m["Account"].type()) {
        vector<ListAccountsForParentResponseBodyAccountsAccount> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Account"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAccountsForParentResponseBodyAccountsAccount model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        account = make_shared<vector<ListAccountsForParentResponseBodyAccountsAccount>>(expect1);
      }
    }
  }


  virtual ~ListAccountsForParentResponseBodyAccounts() = default;
};
class ListAccountsForParentResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<ListAccountsForParentResponseBodyAccounts> accounts{};

  ListAccountsForParentResponseBody() {}

  explicit ListAccountsForParentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (accounts) {
      res["Accounts"] = accounts ? boost::any(accounts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Accounts") != m.end() && !m["Accounts"].empty()) {
      if (typeid(map<string, boost::any>) == m["Accounts"].type()) {
        ListAccountsForParentResponseBodyAccounts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Accounts"]));
        accounts = make_shared<ListAccountsForParentResponseBodyAccounts>(model1);
      }
    }
  }


  virtual ~ListAccountsForParentResponseBody() = default;
};
class ListAccountsForParentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAccountsForParentResponseBody> body{};

  ListAccountsForParentResponse() {}

  explicit ListAccountsForParentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAccountsForParentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAccountsForParentResponseBody>(model1);
      }
    }
  }


  virtual ~ListAccountsForParentResponse() = default;
};
class ListAncestorsRequest : public Darabonba::Model {
public:
  shared_ptr<string> childId{};

  ListAncestorsRequest() {}

  explicit ListAncestorsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (childId) {
      res["ChildId"] = boost::any(*childId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChildId") != m.end() && !m["ChildId"].empty()) {
      childId = make_shared<string>(boost::any_cast<string>(m["ChildId"]));
    }
  }


  virtual ~ListAncestorsRequest() = default;
};
class ListAncestorsResponseBodyFoldersFolder : public Darabonba::Model {
public:
  shared_ptr<string> folderId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> folderName{};

  ListAncestorsResponseBodyFoldersFolder() {}

  explicit ListAncestorsResponseBodyFoldersFolder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (folderName) {
      res["FolderName"] = boost::any(*folderName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("FolderName") != m.end() && !m["FolderName"].empty()) {
      folderName = make_shared<string>(boost::any_cast<string>(m["FolderName"]));
    }
  }


  virtual ~ListAncestorsResponseBodyFoldersFolder() = default;
};
class ListAncestorsResponseBodyFolders : public Darabonba::Model {
public:
  shared_ptr<vector<ListAncestorsResponseBodyFoldersFolder>> folder{};

  ListAncestorsResponseBodyFolders() {}

  explicit ListAncestorsResponseBodyFolders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (folder) {
      vector<boost::any> temp1;
      for(auto item1:*folder){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Folder"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Folder") != m.end() && !m["Folder"].empty()) {
      if (typeid(vector<boost::any>) == m["Folder"].type()) {
        vector<ListAncestorsResponseBodyFoldersFolder> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Folder"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAncestorsResponseBodyFoldersFolder model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        folder = make_shared<vector<ListAncestorsResponseBodyFoldersFolder>>(expect1);
      }
    }
  }


  virtual ~ListAncestorsResponseBodyFolders() = default;
};
class ListAncestorsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListAncestorsResponseBodyFolders> folders{};

  ListAncestorsResponseBody() {}

  explicit ListAncestorsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (folders) {
      res["Folders"] = folders ? boost::any(folders->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Folders") != m.end() && !m["Folders"].empty()) {
      if (typeid(map<string, boost::any>) == m["Folders"].type()) {
        ListAncestorsResponseBodyFolders model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Folders"]));
        folders = make_shared<ListAncestorsResponseBodyFolders>(model1);
      }
    }
  }


  virtual ~ListAncestorsResponseBody() = default;
};
class ListAncestorsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAncestorsResponseBody> body{};

  ListAncestorsResponse() {}

  explicit ListAncestorsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAncestorsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAncestorsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAncestorsResponse() = default;
};
class ListControlPoliciesRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> language{};

  ListControlPoliciesRequest() {}

  explicit ListControlPoliciesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
  }


  virtual ~ListControlPoliciesRequest() = default;
};
class ListControlPoliciesResponseBodyControlPoliciesControlPolicy : public Darabonba::Model {
public:
  shared_ptr<string> updateDate{};
  shared_ptr<string> description{};
  shared_ptr<string> effectScope{};
  shared_ptr<string> attachmentCount{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyId{};
  shared_ptr<string> createDate{};
  shared_ptr<string> policyType{};

  ListControlPoliciesResponseBodyControlPoliciesControlPolicy() {}

  explicit ListControlPoliciesResponseBodyControlPoliciesControlPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (effectScope) {
      res["EffectScope"] = boost::any(*effectScope);
    }
    if (attachmentCount) {
      res["AttachmentCount"] = boost::any(*attachmentCount);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EffectScope") != m.end() && !m["EffectScope"].empty()) {
      effectScope = make_shared<string>(boost::any_cast<string>(m["EffectScope"]));
    }
    if (m.find("AttachmentCount") != m.end() && !m["AttachmentCount"].empty()) {
      attachmentCount = make_shared<string>(boost::any_cast<string>(m["AttachmentCount"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~ListControlPoliciesResponseBodyControlPoliciesControlPolicy() = default;
};
class ListControlPoliciesResponseBodyControlPolicies : public Darabonba::Model {
public:
  shared_ptr<vector<ListControlPoliciesResponseBodyControlPoliciesControlPolicy>> controlPolicy{};

  ListControlPoliciesResponseBodyControlPolicies() {}

  explicit ListControlPoliciesResponseBodyControlPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (controlPolicy) {
      vector<boost::any> temp1;
      for(auto item1:*controlPolicy){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ControlPolicy"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ControlPolicy") != m.end() && !m["ControlPolicy"].empty()) {
      if (typeid(vector<boost::any>) == m["ControlPolicy"].type()) {
        vector<ListControlPoliciesResponseBodyControlPoliciesControlPolicy> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ControlPolicy"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListControlPoliciesResponseBodyControlPoliciesControlPolicy model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        controlPolicy = make_shared<vector<ListControlPoliciesResponseBodyControlPoliciesControlPolicy>>(expect1);
      }
    }
  }


  virtual ~ListControlPoliciesResponseBodyControlPolicies() = default;
};
class ListControlPoliciesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<ListControlPoliciesResponseBodyControlPolicies> controlPolicies{};

  ListControlPoliciesResponseBody() {}

  explicit ListControlPoliciesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (controlPolicies) {
      res["ControlPolicies"] = controlPolicies ? boost::any(controlPolicies->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("ControlPolicies") != m.end() && !m["ControlPolicies"].empty()) {
      if (typeid(map<string, boost::any>) == m["ControlPolicies"].type()) {
        ListControlPoliciesResponseBodyControlPolicies model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ControlPolicies"]));
        controlPolicies = make_shared<ListControlPoliciesResponseBodyControlPolicies>(model1);
      }
    }
  }


  virtual ~ListControlPoliciesResponseBody() = default;
};
class ListControlPoliciesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListControlPoliciesResponseBody> body{};

  ListControlPoliciesResponse() {}

  explicit ListControlPoliciesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListControlPoliciesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListControlPoliciesResponseBody>(model1);
      }
    }
  }


  virtual ~ListControlPoliciesResponse() = default;
};
class ListControlPolicyAttachmentsForTargetRequest : public Darabonba::Model {
public:
  shared_ptr<string> targetId{};
  shared_ptr<string> language{};

  ListControlPolicyAttachmentsForTargetRequest() {}

  explicit ListControlPolicyAttachmentsForTargetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
  }


  virtual ~ListControlPolicyAttachmentsForTargetRequest() = default;
};
class ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> effectScope{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyId{};
  shared_ptr<string> attachDate{};
  shared_ptr<string> policyType{};

  ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment() {}

  explicit ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (effectScope) {
      res["EffectScope"] = boost::any(*effectScope);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (attachDate) {
      res["AttachDate"] = boost::any(*attachDate);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EffectScope") != m.end() && !m["EffectScope"].empty()) {
      effectScope = make_shared<string>(boost::any_cast<string>(m["EffectScope"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("AttachDate") != m.end() && !m["AttachDate"].empty()) {
      attachDate = make_shared<string>(boost::any_cast<string>(m["AttachDate"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment() = default;
};
class ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments : public Darabonba::Model {
public:
  shared_ptr<vector<ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment>> controlPolicyAttachment{};

  ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments() {}

  explicit ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (controlPolicyAttachment) {
      vector<boost::any> temp1;
      for(auto item1:*controlPolicyAttachment){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ControlPolicyAttachment"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ControlPolicyAttachment") != m.end() && !m["ControlPolicyAttachment"].empty()) {
      if (typeid(vector<boost::any>) == m["ControlPolicyAttachment"].type()) {
        vector<ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ControlPolicyAttachment"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        controlPolicyAttachment = make_shared<vector<ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment>>(expect1);
      }
    }
  }


  virtual ~ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments() = default;
};
class ListControlPolicyAttachmentsForTargetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments> controlPolicyAttachments{};

  ListControlPolicyAttachmentsForTargetResponseBody() {}

  explicit ListControlPolicyAttachmentsForTargetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (controlPolicyAttachments) {
      res["ControlPolicyAttachments"] = controlPolicyAttachments ? boost::any(controlPolicyAttachments->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ControlPolicyAttachments") != m.end() && !m["ControlPolicyAttachments"].empty()) {
      if (typeid(map<string, boost::any>) == m["ControlPolicyAttachments"].type()) {
        ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ControlPolicyAttachments"]));
        controlPolicyAttachments = make_shared<ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments>(model1);
      }
    }
  }


  virtual ~ListControlPolicyAttachmentsForTargetResponseBody() = default;
};
class ListControlPolicyAttachmentsForTargetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListControlPolicyAttachmentsForTargetResponseBody> body{};

  ListControlPolicyAttachmentsForTargetResponse() {}

  explicit ListControlPolicyAttachmentsForTargetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListControlPolicyAttachmentsForTargetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListControlPolicyAttachmentsForTargetResponseBody>(model1);
      }
    }
  }


  virtual ~ListControlPolicyAttachmentsForTargetResponse() = default;
};
class ListDelegatedAdministratorsRequest : public Darabonba::Model {
public:
  shared_ptr<string> servicePrincipal{};

  ListDelegatedAdministratorsRequest() {}

  explicit ListDelegatedAdministratorsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (servicePrincipal) {
      res["ServicePrincipal"] = boost::any(*servicePrincipal);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServicePrincipal") != m.end() && !m["ServicePrincipal"].empty()) {
      servicePrincipal = make_shared<string>(boost::any_cast<string>(m["ServicePrincipal"]));
    }
  }


  virtual ~ListDelegatedAdministratorsRequest() = default;
};
class ListDelegatedAdministratorsResponseBodyAccountsAccount : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> displayName{};
  shared_ptr<string> joinMethod{};
  shared_ptr<string> servicePrincipal{};
  shared_ptr<string> delegationEnabledTime{};

  ListDelegatedAdministratorsResponseBodyAccountsAccount() {}

  explicit ListDelegatedAdministratorsResponseBodyAccountsAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (joinMethod) {
      res["JoinMethod"] = boost::any(*joinMethod);
    }
    if (servicePrincipal) {
      res["ServicePrincipal"] = boost::any(*servicePrincipal);
    }
    if (delegationEnabledTime) {
      res["DelegationEnabledTime"] = boost::any(*delegationEnabledTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("JoinMethod") != m.end() && !m["JoinMethod"].empty()) {
      joinMethod = make_shared<string>(boost::any_cast<string>(m["JoinMethod"]));
    }
    if (m.find("ServicePrincipal") != m.end() && !m["ServicePrincipal"].empty()) {
      servicePrincipal = make_shared<string>(boost::any_cast<string>(m["ServicePrincipal"]));
    }
    if (m.find("DelegationEnabledTime") != m.end() && !m["DelegationEnabledTime"].empty()) {
      delegationEnabledTime = make_shared<string>(boost::any_cast<string>(m["DelegationEnabledTime"]));
    }
  }


  virtual ~ListDelegatedAdministratorsResponseBodyAccountsAccount() = default;
};
class ListDelegatedAdministratorsResponseBodyAccounts : public Darabonba::Model {
public:
  shared_ptr<vector<ListDelegatedAdministratorsResponseBodyAccountsAccount>> account{};

  ListDelegatedAdministratorsResponseBodyAccounts() {}

  explicit ListDelegatedAdministratorsResponseBodyAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      vector<boost::any> temp1;
      for(auto item1:*account){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Account"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      if (typeid(vector<boost::any>) == m["Account"].type()) {
        vector<ListDelegatedAdministratorsResponseBodyAccountsAccount> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Account"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDelegatedAdministratorsResponseBodyAccountsAccount model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        account = make_shared<vector<ListDelegatedAdministratorsResponseBodyAccountsAccount>>(expect1);
      }
    }
  }


  virtual ~ListDelegatedAdministratorsResponseBodyAccounts() = default;
};
class ListDelegatedAdministratorsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListDelegatedAdministratorsResponseBodyAccounts> accounts{};

  ListDelegatedAdministratorsResponseBody() {}

  explicit ListDelegatedAdministratorsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (accounts) {
      res["Accounts"] = accounts ? boost::any(accounts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Accounts") != m.end() && !m["Accounts"].empty()) {
      if (typeid(map<string, boost::any>) == m["Accounts"].type()) {
        ListDelegatedAdministratorsResponseBodyAccounts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Accounts"]));
        accounts = make_shared<ListDelegatedAdministratorsResponseBodyAccounts>(model1);
      }
    }
  }


  virtual ~ListDelegatedAdministratorsResponseBody() = default;
};
class ListDelegatedAdministratorsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDelegatedAdministratorsResponseBody> body{};

  ListDelegatedAdministratorsResponse() {}

  explicit ListDelegatedAdministratorsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDelegatedAdministratorsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDelegatedAdministratorsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDelegatedAdministratorsResponse() = default;
};
class ListDelegatedServicesForAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  ListDelegatedServicesForAccountRequest() {}

  explicit ListDelegatedServicesForAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
  }


  virtual ~ListDelegatedServicesForAccountRequest() = default;
};
class ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService : public Darabonba::Model {
public:
  shared_ptr<string> delegationEnabledTime{};
  shared_ptr<string> servicePrincipal{};

  ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService() {}

  explicit ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delegationEnabledTime) {
      res["DelegationEnabledTime"] = boost::any(*delegationEnabledTime);
    }
    if (servicePrincipal) {
      res["ServicePrincipal"] = boost::any(*servicePrincipal);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DelegationEnabledTime") != m.end() && !m["DelegationEnabledTime"].empty()) {
      delegationEnabledTime = make_shared<string>(boost::any_cast<string>(m["DelegationEnabledTime"]));
    }
    if (m.find("ServicePrincipal") != m.end() && !m["ServicePrincipal"].empty()) {
      servicePrincipal = make_shared<string>(boost::any_cast<string>(m["ServicePrincipal"]));
    }
  }


  virtual ~ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService() = default;
};
class ListDelegatedServicesForAccountResponseBodyDelegatedServices : public Darabonba::Model {
public:
  shared_ptr<vector<ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService>> delegatedService{};

  ListDelegatedServicesForAccountResponseBodyDelegatedServices() {}

  explicit ListDelegatedServicesForAccountResponseBodyDelegatedServices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delegatedService) {
      vector<boost::any> temp1;
      for(auto item1:*delegatedService){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DelegatedService"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DelegatedService") != m.end() && !m["DelegatedService"].empty()) {
      if (typeid(vector<boost::any>) == m["DelegatedService"].type()) {
        vector<ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DelegatedService"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        delegatedService = make_shared<vector<ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService>>(expect1);
      }
    }
  }


  virtual ~ListDelegatedServicesForAccountResponseBodyDelegatedServices() = default;
};
class ListDelegatedServicesForAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListDelegatedServicesForAccountResponseBodyDelegatedServices> delegatedServices{};

  ListDelegatedServicesForAccountResponseBody() {}

  explicit ListDelegatedServicesForAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (delegatedServices) {
      res["DelegatedServices"] = delegatedServices ? boost::any(delegatedServices->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DelegatedServices") != m.end() && !m["DelegatedServices"].empty()) {
      if (typeid(map<string, boost::any>) == m["DelegatedServices"].type()) {
        ListDelegatedServicesForAccountResponseBodyDelegatedServices model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DelegatedServices"]));
        delegatedServices = make_shared<ListDelegatedServicesForAccountResponseBodyDelegatedServices>(model1);
      }
    }
  }


  virtual ~ListDelegatedServicesForAccountResponseBody() = default;
};
class ListDelegatedServicesForAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDelegatedServicesForAccountResponseBody> body{};

  ListDelegatedServicesForAccountResponse() {}

  explicit ListDelegatedServicesForAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDelegatedServicesForAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDelegatedServicesForAccountResponseBody>(model1);
      }
    }
  }


  virtual ~ListDelegatedServicesForAccountResponse() = default;
};
class ListFoldersForParentRequest : public Darabonba::Model {
public:
  shared_ptr<string> parentFolderId{};
  shared_ptr<string> queryKeyword{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListFoldersForParentRequest() {}

  explicit ListFoldersForParentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parentFolderId) {
      res["ParentFolderId"] = boost::any(*parentFolderId);
    }
    if (queryKeyword) {
      res["QueryKeyword"] = boost::any(*queryKeyword);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParentFolderId") != m.end() && !m["ParentFolderId"].empty()) {
      parentFolderId = make_shared<string>(boost::any_cast<string>(m["ParentFolderId"]));
    }
    if (m.find("QueryKeyword") != m.end() && !m["QueryKeyword"].empty()) {
      queryKeyword = make_shared<string>(boost::any_cast<string>(m["QueryKeyword"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListFoldersForParentRequest() = default;
};
class ListFoldersForParentResponseBodyFoldersFolder : public Darabonba::Model {
public:
  shared_ptr<string> folderId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> folderName{};

  ListFoldersForParentResponseBodyFoldersFolder() {}

  explicit ListFoldersForParentResponseBodyFoldersFolder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (folderName) {
      res["FolderName"] = boost::any(*folderName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("FolderName") != m.end() && !m["FolderName"].empty()) {
      folderName = make_shared<string>(boost::any_cast<string>(m["FolderName"]));
    }
  }


  virtual ~ListFoldersForParentResponseBodyFoldersFolder() = default;
};
class ListFoldersForParentResponseBodyFolders : public Darabonba::Model {
public:
  shared_ptr<vector<ListFoldersForParentResponseBodyFoldersFolder>> folder{};

  ListFoldersForParentResponseBodyFolders() {}

  explicit ListFoldersForParentResponseBodyFolders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (folder) {
      vector<boost::any> temp1;
      for(auto item1:*folder){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Folder"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Folder") != m.end() && !m["Folder"].empty()) {
      if (typeid(vector<boost::any>) == m["Folder"].type()) {
        vector<ListFoldersForParentResponseBodyFoldersFolder> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Folder"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFoldersForParentResponseBodyFoldersFolder model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        folder = make_shared<vector<ListFoldersForParentResponseBodyFoldersFolder>>(expect1);
      }
    }
  }


  virtual ~ListFoldersForParentResponseBodyFolders() = default;
};
class ListFoldersForParentResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<ListFoldersForParentResponseBodyFolders> folders{};

  ListFoldersForParentResponseBody() {}

  explicit ListFoldersForParentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (folders) {
      res["Folders"] = folders ? boost::any(folders->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Folders") != m.end() && !m["Folders"].empty()) {
      if (typeid(map<string, boost::any>) == m["Folders"].type()) {
        ListFoldersForParentResponseBodyFolders model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Folders"]));
        folders = make_shared<ListFoldersForParentResponseBodyFolders>(model1);
      }
    }
  }


  virtual ~ListFoldersForParentResponseBody() = default;
};
class ListFoldersForParentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListFoldersForParentResponseBody> body{};

  ListFoldersForParentResponse() {}

  explicit ListFoldersForParentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListFoldersForParentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFoldersForParentResponseBody>(model1);
      }
    }
  }


  virtual ~ListFoldersForParentResponse() = default;
};
class ListHandshakesForAccountRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListHandshakesForAccountRequest() {}

  explicit ListHandshakesForAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListHandshakesForAccountRequest() = default;
};
class ListHandshakesForAccountResponseBodyHandshakesHandshake : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> note{};
  shared_ptr<string> targetEntity{};
  shared_ptr<string> masterAccountId{};
  shared_ptr<string> masterAccountName{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> targetType{};
  shared_ptr<string> handshakeId{};

  ListHandshakesForAccountResponseBodyHandshakesHandshake() {}

  explicit ListHandshakesForAccountResponseBodyHandshakesHandshake(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (targetEntity) {
      res["TargetEntity"] = boost::any(*targetEntity);
    }
    if (masterAccountId) {
      res["MasterAccountId"] = boost::any(*masterAccountId);
    }
    if (masterAccountName) {
      res["MasterAccountName"] = boost::any(*masterAccountName);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (handshakeId) {
      res["HandshakeId"] = boost::any(*handshakeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("TargetEntity") != m.end() && !m["TargetEntity"].empty()) {
      targetEntity = make_shared<string>(boost::any_cast<string>(m["TargetEntity"]));
    }
    if (m.find("MasterAccountId") != m.end() && !m["MasterAccountId"].empty()) {
      masterAccountId = make_shared<string>(boost::any_cast<string>(m["MasterAccountId"]));
    }
    if (m.find("MasterAccountName") != m.end() && !m["MasterAccountName"].empty()) {
      masterAccountName = make_shared<string>(boost::any_cast<string>(m["MasterAccountName"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("HandshakeId") != m.end() && !m["HandshakeId"].empty()) {
      handshakeId = make_shared<string>(boost::any_cast<string>(m["HandshakeId"]));
    }
  }


  virtual ~ListHandshakesForAccountResponseBodyHandshakesHandshake() = default;
};
class ListHandshakesForAccountResponseBodyHandshakes : public Darabonba::Model {
public:
  shared_ptr<vector<ListHandshakesForAccountResponseBodyHandshakesHandshake>> handshake{};

  ListHandshakesForAccountResponseBodyHandshakes() {}

  explicit ListHandshakesForAccountResponseBodyHandshakes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (handshake) {
      vector<boost::any> temp1;
      for(auto item1:*handshake){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Handshake"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Handshake") != m.end() && !m["Handshake"].empty()) {
      if (typeid(vector<boost::any>) == m["Handshake"].type()) {
        vector<ListHandshakesForAccountResponseBodyHandshakesHandshake> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Handshake"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHandshakesForAccountResponseBodyHandshakesHandshake model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        handshake = make_shared<vector<ListHandshakesForAccountResponseBodyHandshakesHandshake>>(expect1);
      }
    }
  }


  virtual ~ListHandshakesForAccountResponseBodyHandshakes() = default;
};
class ListHandshakesForAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<ListHandshakesForAccountResponseBodyHandshakes> handshakes{};

  ListHandshakesForAccountResponseBody() {}

  explicit ListHandshakesForAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (handshakes) {
      res["Handshakes"] = handshakes ? boost::any(handshakes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Handshakes") != m.end() && !m["Handshakes"].empty()) {
      if (typeid(map<string, boost::any>) == m["Handshakes"].type()) {
        ListHandshakesForAccountResponseBodyHandshakes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Handshakes"]));
        handshakes = make_shared<ListHandshakesForAccountResponseBodyHandshakes>(model1);
      }
    }
  }


  virtual ~ListHandshakesForAccountResponseBody() = default;
};
class ListHandshakesForAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListHandshakesForAccountResponseBody> body{};

  ListHandshakesForAccountResponse() {}

  explicit ListHandshakesForAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListHandshakesForAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHandshakesForAccountResponseBody>(model1);
      }
    }
  }


  virtual ~ListHandshakesForAccountResponse() = default;
};
class ListHandshakesForResourceDirectoryRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListHandshakesForResourceDirectoryRequest() {}

  explicit ListHandshakesForResourceDirectoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListHandshakesForResourceDirectoryRequest() = default;
};
class ListHandshakesForResourceDirectoryResponseBodyHandshakesHandshake : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> note{};
  shared_ptr<string> targetEntity{};
  shared_ptr<string> masterAccountId{};
  shared_ptr<string> masterAccountName{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> targetType{};
  shared_ptr<string> handshakeId{};

  ListHandshakesForResourceDirectoryResponseBodyHandshakesHandshake() {}

  explicit ListHandshakesForResourceDirectoryResponseBodyHandshakesHandshake(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (targetEntity) {
      res["TargetEntity"] = boost::any(*targetEntity);
    }
    if (masterAccountId) {
      res["MasterAccountId"] = boost::any(*masterAccountId);
    }
    if (masterAccountName) {
      res["MasterAccountName"] = boost::any(*masterAccountName);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (handshakeId) {
      res["HandshakeId"] = boost::any(*handshakeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("TargetEntity") != m.end() && !m["TargetEntity"].empty()) {
      targetEntity = make_shared<string>(boost::any_cast<string>(m["TargetEntity"]));
    }
    if (m.find("MasterAccountId") != m.end() && !m["MasterAccountId"].empty()) {
      masterAccountId = make_shared<string>(boost::any_cast<string>(m["MasterAccountId"]));
    }
    if (m.find("MasterAccountName") != m.end() && !m["MasterAccountName"].empty()) {
      masterAccountName = make_shared<string>(boost::any_cast<string>(m["MasterAccountName"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("HandshakeId") != m.end() && !m["HandshakeId"].empty()) {
      handshakeId = make_shared<string>(boost::any_cast<string>(m["HandshakeId"]));
    }
  }


  virtual ~ListHandshakesForResourceDirectoryResponseBodyHandshakesHandshake() = default;
};
class ListHandshakesForResourceDirectoryResponseBodyHandshakes : public Darabonba::Model {
public:
  shared_ptr<vector<ListHandshakesForResourceDirectoryResponseBodyHandshakesHandshake>> handshake{};

  ListHandshakesForResourceDirectoryResponseBodyHandshakes() {}

  explicit ListHandshakesForResourceDirectoryResponseBodyHandshakes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (handshake) {
      vector<boost::any> temp1;
      for(auto item1:*handshake){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Handshake"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Handshake") != m.end() && !m["Handshake"].empty()) {
      if (typeid(vector<boost::any>) == m["Handshake"].type()) {
        vector<ListHandshakesForResourceDirectoryResponseBodyHandshakesHandshake> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Handshake"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHandshakesForResourceDirectoryResponseBodyHandshakesHandshake model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        handshake = make_shared<vector<ListHandshakesForResourceDirectoryResponseBodyHandshakesHandshake>>(expect1);
      }
    }
  }


  virtual ~ListHandshakesForResourceDirectoryResponseBodyHandshakes() = default;
};
class ListHandshakesForResourceDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<ListHandshakesForResourceDirectoryResponseBodyHandshakes> handshakes{};

  ListHandshakesForResourceDirectoryResponseBody() {}

  explicit ListHandshakesForResourceDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (handshakes) {
      res["Handshakes"] = handshakes ? boost::any(handshakes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Handshakes") != m.end() && !m["Handshakes"].empty()) {
      if (typeid(map<string, boost::any>) == m["Handshakes"].type()) {
        ListHandshakesForResourceDirectoryResponseBodyHandshakes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Handshakes"]));
        handshakes = make_shared<ListHandshakesForResourceDirectoryResponseBodyHandshakes>(model1);
      }
    }
  }


  virtual ~ListHandshakesForResourceDirectoryResponseBody() = default;
};
class ListHandshakesForResourceDirectoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListHandshakesForResourceDirectoryResponseBody> body{};

  ListHandshakesForResourceDirectoryResponse() {}

  explicit ListHandshakesForResourceDirectoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListHandshakesForResourceDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHandshakesForResourceDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~ListHandshakesForResourceDirectoryResponse() = default;
};
class ListPoliciesRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> language{};

  ListPoliciesRequest() {}

  explicit ListPoliciesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
  }


  virtual ~ListPoliciesRequest() = default;
};
class ListPoliciesResponseBodyPoliciesPolicy : public Darabonba::Model {
public:
  shared_ptr<string> defaultVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> updateDate{};
  shared_ptr<long> attachmentCount{};
  shared_ptr<string> policyName{};
  shared_ptr<string> createDate{};
  shared_ptr<string> policyType{};

  ListPoliciesResponseBodyPoliciesPolicy() {}

  explicit ListPoliciesResponseBodyPoliciesPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultVersion) {
      res["DefaultVersion"] = boost::any(*defaultVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (attachmentCount) {
      res["AttachmentCount"] = boost::any(*attachmentCount);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultVersion") != m.end() && !m["DefaultVersion"].empty()) {
      defaultVersion = make_shared<string>(boost::any_cast<string>(m["DefaultVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("AttachmentCount") != m.end() && !m["AttachmentCount"].empty()) {
      attachmentCount = make_shared<long>(boost::any_cast<long>(m["AttachmentCount"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~ListPoliciesResponseBodyPoliciesPolicy() = default;
};
class ListPoliciesResponseBodyPolicies : public Darabonba::Model {
public:
  shared_ptr<vector<ListPoliciesResponseBodyPoliciesPolicy>> policy{};

  ListPoliciesResponseBodyPolicies() {}

  explicit ListPoliciesResponseBodyPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policy) {
      vector<boost::any> temp1;
      for(auto item1:*policy){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Policy"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(vector<boost::any>) == m["Policy"].type()) {
        vector<ListPoliciesResponseBodyPoliciesPolicy> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Policy"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPoliciesResponseBodyPoliciesPolicy model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policy = make_shared<vector<ListPoliciesResponseBodyPoliciesPolicy>>(expect1);
      }
    }
  }


  virtual ~ListPoliciesResponseBodyPolicies() = default;
};
class ListPoliciesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<ListPoliciesResponseBodyPolicies> policies{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  ListPoliciesResponseBody() {}

  explicit ListPoliciesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (policies) {
      res["Policies"] = policies ? boost::any(policies->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Policies") != m.end() && !m["Policies"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policies"].type()) {
        ListPoliciesResponseBodyPolicies model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policies"]));
        policies = make_shared<ListPoliciesResponseBodyPolicies>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~ListPoliciesResponseBody() = default;
};
class ListPoliciesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListPoliciesResponseBody> body{};

  ListPoliciesResponse() {}

  explicit ListPoliciesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListPoliciesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPoliciesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPoliciesResponse() = default;
};
class ListPolicyAttachmentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> policyType{};
  shared_ptr<string> policyName{};
  shared_ptr<string> principalType{};
  shared_ptr<string> principalName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> language{};

  ListPolicyAttachmentsRequest() {}

  explicit ListPolicyAttachmentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<string>(boost::any_cast<string>(m["PrincipalName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
  }


  virtual ~ListPolicyAttachmentsRequest() = default;
};
class ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> policyName{};
  shared_ptr<string> principalName{};
  shared_ptr<string> attachDate{};
  shared_ptr<string> policyType{};
  shared_ptr<string> principalType{};

  ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment() {}

  explicit ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (attachDate) {
      res["AttachDate"] = boost::any(*attachDate);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<string>(boost::any_cast<string>(m["PrincipalName"]));
    }
    if (m.find("AttachDate") != m.end() && !m["AttachDate"].empty()) {
      attachDate = make_shared<string>(boost::any_cast<string>(m["AttachDate"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
  }


  virtual ~ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment() = default;
};
class ListPolicyAttachmentsResponseBodyPolicyAttachments : public Darabonba::Model {
public:
  shared_ptr<vector<ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment>> policyAttachment{};

  ListPolicyAttachmentsResponseBodyPolicyAttachments() {}

  explicit ListPolicyAttachmentsResponseBodyPolicyAttachments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyAttachment) {
      vector<boost::any> temp1;
      for(auto item1:*policyAttachment){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PolicyAttachment"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyAttachment") != m.end() && !m["PolicyAttachment"].empty()) {
      if (typeid(vector<boost::any>) == m["PolicyAttachment"].type()) {
        vector<ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PolicyAttachment"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policyAttachment = make_shared<vector<ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment>>(expect1);
      }
    }
  }


  virtual ~ListPolicyAttachmentsResponseBodyPolicyAttachments() = default;
};
class ListPolicyAttachmentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<ListPolicyAttachmentsResponseBodyPolicyAttachments> policyAttachments{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  ListPolicyAttachmentsResponseBody() {}

  explicit ListPolicyAttachmentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (policyAttachments) {
      res["PolicyAttachments"] = policyAttachments ? boost::any(policyAttachments->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PolicyAttachments") != m.end() && !m["PolicyAttachments"].empty()) {
      if (typeid(map<string, boost::any>) == m["PolicyAttachments"].type()) {
        ListPolicyAttachmentsResponseBodyPolicyAttachments model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PolicyAttachments"]));
        policyAttachments = make_shared<ListPolicyAttachmentsResponseBodyPolicyAttachments>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~ListPolicyAttachmentsResponseBody() = default;
};
class ListPolicyAttachmentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListPolicyAttachmentsResponseBody> body{};

  ListPolicyAttachmentsResponse() {}

  explicit ListPolicyAttachmentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListPolicyAttachmentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPolicyAttachmentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListPolicyAttachmentsResponse() = default;
};
class ListPolicyVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyType{};
  shared_ptr<string> policyName{};

  ListPolicyVersionsRequest() {}

  explicit ListPolicyVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
  }


  virtual ~ListPolicyVersionsRequest() = default;
};
class ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion : public Darabonba::Model {
public:
  shared_ptr<bool> isDefaultVersion{};
  shared_ptr<string> versionId{};
  shared_ptr<string> createDate{};

  ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion() {}

  explicit ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isDefaultVersion) {
      res["IsDefaultVersion"] = boost::any(*isDefaultVersion);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsDefaultVersion") != m.end() && !m["IsDefaultVersion"].empty()) {
      isDefaultVersion = make_shared<bool>(boost::any_cast<bool>(m["IsDefaultVersion"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
  }


  virtual ~ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion() = default;
};
class ListPolicyVersionsResponseBodyPolicyVersions : public Darabonba::Model {
public:
  shared_ptr<vector<ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion>> policyVersion{};

  ListPolicyVersionsResponseBodyPolicyVersions() {}

  explicit ListPolicyVersionsResponseBodyPolicyVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyVersion) {
      vector<boost::any> temp1;
      for(auto item1:*policyVersion){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PolicyVersion"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyVersion") != m.end() && !m["PolicyVersion"].empty()) {
      if (typeid(vector<boost::any>) == m["PolicyVersion"].type()) {
        vector<ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PolicyVersion"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policyVersion = make_shared<vector<ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion>>(expect1);
      }
    }
  }


  virtual ~ListPolicyVersionsResponseBodyPolicyVersions() = default;
};
class ListPolicyVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListPolicyVersionsResponseBodyPolicyVersions> policyVersions{};

  ListPolicyVersionsResponseBody() {}

  explicit ListPolicyVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (policyVersions) {
      res["PolicyVersions"] = policyVersions ? boost::any(policyVersions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PolicyVersions") != m.end() && !m["PolicyVersions"].empty()) {
      if (typeid(map<string, boost::any>) == m["PolicyVersions"].type()) {
        ListPolicyVersionsResponseBodyPolicyVersions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PolicyVersions"]));
        policyVersions = make_shared<ListPolicyVersionsResponseBodyPolicyVersions>(model1);
      }
    }
  }


  virtual ~ListPolicyVersionsResponseBody() = default;
};
class ListPolicyVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListPolicyVersionsResponseBody> body{};

  ListPolicyVersionsResponse() {}

  explicit ListPolicyVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListPolicyVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPolicyVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListPolicyVersionsResponse() = default;
};
class ListResourceGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListResourceGroupsRequest() {}

  explicit ListResourceGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListResourceGroupsRequest() = default;
};
class ListResourceGroupsResponseBodyResourceGroupsResourceGroup : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> status{};
  shared_ptr<string> accountId{};
  shared_ptr<string> name{};
  shared_ptr<string> createDate{};
  shared_ptr<string> id{};

  ListResourceGroupsResponseBodyResourceGroupsResourceGroup() {}

  explicit ListResourceGroupsResponseBodyResourceGroupsResourceGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~ListResourceGroupsResponseBodyResourceGroupsResourceGroup() = default;
};
class ListResourceGroupsResponseBodyResourceGroups : public Darabonba::Model {
public:
  shared_ptr<vector<ListResourceGroupsResponseBodyResourceGroupsResourceGroup>> resourceGroup{};

  ListResourceGroupsResponseBodyResourceGroups() {}

  explicit ListResourceGroupsResponseBodyResourceGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroup) {
      vector<boost::any> temp1;
      for(auto item1:*resourceGroup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceGroup"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroup") != m.end() && !m["ResourceGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceGroup"].type()) {
        vector<ListResourceGroupsResponseBodyResourceGroupsResourceGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceGroupsResponseBodyResourceGroupsResourceGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceGroup = make_shared<vector<ListResourceGroupsResponseBodyResourceGroupsResourceGroup>>(expect1);
      }
    }
  }


  virtual ~ListResourceGroupsResponseBodyResourceGroups() = default;
};
class ListResourceGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<ListResourceGroupsResponseBodyResourceGroups> resourceGroups{};

  ListResourceGroupsResponseBody() {}

  explicit ListResourceGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (resourceGroups) {
      res["ResourceGroups"] = resourceGroups ? boost::any(resourceGroups->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("ResourceGroups") != m.end() && !m["ResourceGroups"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceGroups"].type()) {
        ListResourceGroupsResponseBodyResourceGroups model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceGroups"]));
        resourceGroups = make_shared<ListResourceGroupsResponseBodyResourceGroups>(model1);
      }
    }
  }


  virtual ~ListResourceGroupsResponseBody() = default;
};
class ListResourceGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListResourceGroupsResponseBody> body{};

  ListResourceGroupsResponse() {}

  explicit ListResourceGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListResourceGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourceGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourceGroupsResponse() = default;
};
class ListResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> service{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> resourceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListResourcesRequest() {}

  explicit ListResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (service) {
      res["Service"] = boost::any(*service);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListResourcesRequest() = default;
};
class ListResourcesResponseBodyResourcesResource : public Darabonba::Model {
public:
  shared_ptr<string> service{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> createDate{};
  shared_ptr<string> regionId{};

  ListResourcesResponseBodyResourcesResource() {}

  explicit ListResourcesResponseBodyResourcesResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (service) {
      res["Service"] = boost::any(*service);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListResourcesResponseBodyResourcesResource() = default;
};
class ListResourcesResponseBodyResources : public Darabonba::Model {
public:
  shared_ptr<vector<ListResourcesResponseBodyResourcesResource>> resource{};

  ListResourcesResponseBodyResources() {}

  explicit ListResourcesResponseBodyResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resource) {
      vector<boost::any> temp1;
      for(auto item1:*resource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      if (typeid(vector<boost::any>) == m["Resource"].type()) {
        vector<ListResourcesResponseBodyResourcesResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourcesResponseBodyResourcesResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resource = make_shared<vector<ListResourcesResponseBodyResourcesResource>>(expect1);
      }
    }
  }


  virtual ~ListResourcesResponseBodyResources() = default;
};
class ListResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<ListResourcesResponseBodyResources> resources{};

  ListResourcesResponseBody() {}

  explicit ListResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (resources) {
      res["Resources"] = resources ? boost::any(resources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(map<string, boost::any>) == m["Resources"].type()) {
        ListResourcesResponseBodyResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Resources"]));
        resources = make_shared<ListResourcesResponseBodyResources>(model1);
      }
    }
  }


  virtual ~ListResourcesResponseBody() = default;
};
class ListResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListResourcesResponseBody> body{};

  ListResourcesResponse() {}

  explicit ListResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourcesResponse() = default;
};
class ListRolesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> language{};

  ListRolesRequest() {}

  explicit ListRolesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
  }


  virtual ~ListRolesRequest() = default;
};
class ListRolesResponseBodyRolesRoleLatestDeletionTask : public Darabonba::Model {
public:
  shared_ptr<string> deletionTaskId{};
  shared_ptr<string> createDate{};

  ListRolesResponseBodyRolesRoleLatestDeletionTask() {}

  explicit ListRolesResponseBodyRolesRoleLatestDeletionTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deletionTaskId) {
      res["DeletionTaskId"] = boost::any(*deletionTaskId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeletionTaskId") != m.end() && !m["DeletionTaskId"].empty()) {
      deletionTaskId = make_shared<string>(boost::any_cast<string>(m["DeletionTaskId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
  }


  virtual ~ListRolesResponseBodyRolesRoleLatestDeletionTask() = default;
};
class ListRolesResponseBodyRolesRole : public Darabonba::Model {
public:
  shared_ptr<string> rolePrincipalName{};
  shared_ptr<string> updateDate{};
  shared_ptr<string> description{};
  shared_ptr<long> maxSessionDuration{};
  shared_ptr<ListRolesResponseBodyRolesRoleLatestDeletionTask> latestDeletionTask{};
  shared_ptr<string> roleName{};
  shared_ptr<string> createDate{};
  shared_ptr<string> roleId{};
  shared_ptr<string> arn{};
  shared_ptr<bool> isServiceLinkedRole{};

  ListRolesResponseBodyRolesRole() {}

  explicit ListRolesResponseBodyRolesRole(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rolePrincipalName) {
      res["RolePrincipalName"] = boost::any(*rolePrincipalName);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (maxSessionDuration) {
      res["MaxSessionDuration"] = boost::any(*maxSessionDuration);
    }
    if (latestDeletionTask) {
      res["LatestDeletionTask"] = latestDeletionTask ? boost::any(latestDeletionTask->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (isServiceLinkedRole) {
      res["IsServiceLinkedRole"] = boost::any(*isServiceLinkedRole);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RolePrincipalName") != m.end() && !m["RolePrincipalName"].empty()) {
      rolePrincipalName = make_shared<string>(boost::any_cast<string>(m["RolePrincipalName"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("MaxSessionDuration") != m.end() && !m["MaxSessionDuration"].empty()) {
      maxSessionDuration = make_shared<long>(boost::any_cast<long>(m["MaxSessionDuration"]));
    }
    if (m.find("LatestDeletionTask") != m.end() && !m["LatestDeletionTask"].empty()) {
      if (typeid(map<string, boost::any>) == m["LatestDeletionTask"].type()) {
        ListRolesResponseBodyRolesRoleLatestDeletionTask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LatestDeletionTask"]));
        latestDeletionTask = make_shared<ListRolesResponseBodyRolesRoleLatestDeletionTask>(model1);
      }
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("IsServiceLinkedRole") != m.end() && !m["IsServiceLinkedRole"].empty()) {
      isServiceLinkedRole = make_shared<bool>(boost::any_cast<bool>(m["IsServiceLinkedRole"]));
    }
  }


  virtual ~ListRolesResponseBodyRolesRole() = default;
};
class ListRolesResponseBodyRoles : public Darabonba::Model {
public:
  shared_ptr<vector<ListRolesResponseBodyRolesRole>> role{};

  ListRolesResponseBodyRoles() {}

  explicit ListRolesResponseBodyRoles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (role) {
      vector<boost::any> temp1;
      for(auto item1:*role){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Role"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      if (typeid(vector<boost::any>) == m["Role"].type()) {
        vector<ListRolesResponseBodyRolesRole> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Role"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRolesResponseBodyRolesRole model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        role = make_shared<vector<ListRolesResponseBodyRolesRole>>(expect1);
      }
    }
  }


  virtual ~ListRolesResponseBodyRoles() = default;
};
class ListRolesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<ListRolesResponseBodyRoles> roles{};

  ListRolesResponseBody() {}

  explicit ListRolesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (roles) {
      res["Roles"] = roles ? boost::any(roles->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      if (typeid(map<string, boost::any>) == m["Roles"].type()) {
        ListRolesResponseBodyRoles model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Roles"]));
        roles = make_shared<ListRolesResponseBodyRoles>(model1);
      }
    }
  }


  virtual ~ListRolesResponseBody() = default;
};
class ListRolesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRolesResponseBody> body{};

  ListRolesResponse() {}

  explicit ListRolesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListRolesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRolesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRolesResponse() = default;
};
class ListTargetAttachmentsForControlPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListTargetAttachmentsForControlPolicyRequest() {}

  explicit ListTargetAttachmentsForControlPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListTargetAttachmentsForControlPolicyRequest() = default;
};
class ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment : public Darabonba::Model {
public:
  shared_ptr<string> targetId{};
  shared_ptr<string> targetName{};
  shared_ptr<string> attachDate{};
  shared_ptr<string> targetType{};

  ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment() {}

  explicit ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetName) {
      res["TargetName"] = boost::any(*targetName);
    }
    if (attachDate) {
      res["AttachDate"] = boost::any(*attachDate);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetName") != m.end() && !m["TargetName"].empty()) {
      targetName = make_shared<string>(boost::any_cast<string>(m["TargetName"]));
    }
    if (m.find("AttachDate") != m.end() && !m["AttachDate"].empty()) {
      attachDate = make_shared<string>(boost::any_cast<string>(m["AttachDate"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment() = default;
};
class ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments : public Darabonba::Model {
public:
  shared_ptr<vector<ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment>> targetAttachment{};

  ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments() {}

  explicit ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (targetAttachment) {
      vector<boost::any> temp1;
      for(auto item1:*targetAttachment){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TargetAttachment"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TargetAttachment") != m.end() && !m["TargetAttachment"].empty()) {
      if (typeid(vector<boost::any>) == m["TargetAttachment"].type()) {
        vector<ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TargetAttachment"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        targetAttachment = make_shared<vector<ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment>>(expect1);
      }
    }
  }


  virtual ~ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments() = default;
};
class ListTargetAttachmentsForControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments> targetAttachments{};

  ListTargetAttachmentsForControlPolicyResponseBody() {}

  explicit ListTargetAttachmentsForControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (targetAttachments) {
      res["TargetAttachments"] = targetAttachments ? boost::any(targetAttachments->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("TargetAttachments") != m.end() && !m["TargetAttachments"].empty()) {
      if (typeid(map<string, boost::any>) == m["TargetAttachments"].type()) {
        ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TargetAttachments"]));
        targetAttachments = make_shared<ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments>(model1);
      }
    }
  }


  virtual ~ListTargetAttachmentsForControlPolicyResponseBody() = default;
};
class ListTargetAttachmentsForControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTargetAttachmentsForControlPolicyResponseBody> body{};

  ListTargetAttachmentsForControlPolicyResponse() {}

  explicit ListTargetAttachmentsForControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTargetAttachmentsForControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTargetAttachmentsForControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ListTargetAttachmentsForControlPolicyResponse() = default;
};
class ListTrustedServiceStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> adminAccountId{};

  ListTrustedServiceStatusRequest() {}

  explicit ListTrustedServiceStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (adminAccountId) {
      res["AdminAccountId"] = boost::any(*adminAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("AdminAccountId") != m.end() && !m["AdminAccountId"].empty()) {
      adminAccountId = make_shared<string>(boost::any_cast<string>(m["AdminAccountId"]));
    }
  }


  virtual ~ListTrustedServiceStatusRequest() = default;
};
class ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal : public Darabonba::Model {
public:
  shared_ptr<string> servicePrincipal{};
  shared_ptr<string> enableTime{};

  ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal() {}

  explicit ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (servicePrincipal) {
      res["ServicePrincipal"] = boost::any(*servicePrincipal);
    }
    if (enableTime) {
      res["EnableTime"] = boost::any(*enableTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServicePrincipal") != m.end() && !m["ServicePrincipal"].empty()) {
      servicePrincipal = make_shared<string>(boost::any_cast<string>(m["ServicePrincipal"]));
    }
    if (m.find("EnableTime") != m.end() && !m["EnableTime"].empty()) {
      enableTime = make_shared<string>(boost::any_cast<string>(m["EnableTime"]));
    }
  }


  virtual ~ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal() = default;
};
class ListTrustedServiceStatusResponseBodyEnabledServicePrincipals : public Darabonba::Model {
public:
  shared_ptr<vector<ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal>> enabledServicePrincipal{};

  ListTrustedServiceStatusResponseBodyEnabledServicePrincipals() {}

  explicit ListTrustedServiceStatusResponseBodyEnabledServicePrincipals(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabledServicePrincipal) {
      vector<boost::any> temp1;
      for(auto item1:*enabledServicePrincipal){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EnabledServicePrincipal"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnabledServicePrincipal") != m.end() && !m["EnabledServicePrincipal"].empty()) {
      if (typeid(vector<boost::any>) == m["EnabledServicePrincipal"].type()) {
        vector<ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EnabledServicePrincipal"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        enabledServicePrincipal = make_shared<vector<ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal>>(expect1);
      }
    }
  }


  virtual ~ListTrustedServiceStatusResponseBodyEnabledServicePrincipals() = default;
};
class ListTrustedServiceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<ListTrustedServiceStatusResponseBodyEnabledServicePrincipals> enabledServicePrincipals{};

  ListTrustedServiceStatusResponseBody() {}

  explicit ListTrustedServiceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (enabledServicePrincipals) {
      res["EnabledServicePrincipals"] = enabledServicePrincipals ? boost::any(enabledServicePrincipals->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("EnabledServicePrincipals") != m.end() && !m["EnabledServicePrincipals"].empty()) {
      if (typeid(map<string, boost::any>) == m["EnabledServicePrincipals"].type()) {
        ListTrustedServiceStatusResponseBodyEnabledServicePrincipals model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EnabledServicePrincipals"]));
        enabledServicePrincipals = make_shared<ListTrustedServiceStatusResponseBodyEnabledServicePrincipals>(model1);
      }
    }
  }


  virtual ~ListTrustedServiceStatusResponseBody() = default;
};
class ListTrustedServiceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTrustedServiceStatusResponseBody> body{};

  ListTrustedServiceStatusResponse() {}

  explicit ListTrustedServiceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTrustedServiceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTrustedServiceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ListTrustedServiceStatusResponse() = default;
};
class MoveAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> destinationFolderId{};

  MoveAccountRequest() {}

  explicit MoveAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (destinationFolderId) {
      res["DestinationFolderId"] = boost::any(*destinationFolderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("DestinationFolderId") != m.end() && !m["DestinationFolderId"].empty()) {
      destinationFolderId = make_shared<string>(boost::any_cast<string>(m["DestinationFolderId"]));
    }
  }


  virtual ~MoveAccountRequest() = default;
};
class MoveAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  MoveAccountResponseBody() {}

  explicit MoveAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~MoveAccountResponseBody() = default;
};
class MoveAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<MoveAccountResponseBody> body{};

  MoveAccountResponse() {}

  explicit MoveAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        MoveAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MoveAccountResponseBody>(model1);
      }
    }
  }


  virtual ~MoveAccountResponse() = default;
};
class MoveResourcesRequestResources : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> service{};

  MoveResourcesRequestResources() {}

  explicit MoveResourcesRequestResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (service) {
      res["Service"] = boost::any(*service);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
  }


  virtual ~MoveResourcesRequestResources() = default;
};
class MoveResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<MoveResourcesRequestResources>> resources{};

  MoveResourcesRequest() {}

  explicit MoveResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<MoveResourcesRequestResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            MoveResourcesRequestResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<MoveResourcesRequestResources>>(expect1);
      }
    }
  }


  virtual ~MoveResourcesRequest() = default;
};
class MoveResourcesResponseBodyResponses : public Darabonba::Model {
public:
  shared_ptr<string> service{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> regionId{};

  MoveResourcesResponseBodyResponses() {}

  explicit MoveResourcesResponseBodyResponses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (service) {
      res["Service"] = boost::any(*service);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~MoveResourcesResponseBodyResponses() = default;
};
class MoveResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<MoveResourcesResponseBodyResponses>> responses{};

  MoveResourcesResponseBody() {}

  explicit MoveResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responses) {
      vector<boost::any> temp1;
      for(auto item1:*responses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Responses"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Responses") != m.end() && !m["Responses"].empty()) {
      if (typeid(vector<boost::any>) == m["Responses"].type()) {
        vector<MoveResourcesResponseBodyResponses> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Responses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            MoveResourcesResponseBodyResponses model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        responses = make_shared<vector<MoveResourcesResponseBodyResponses>>(expect1);
      }
    }
  }


  virtual ~MoveResourcesResponseBody() = default;
};
class MoveResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<MoveResourcesResponseBody> body{};

  MoveResourcesResponse() {}

  explicit MoveResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        MoveResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MoveResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~MoveResourcesResponse() = default;
};
class PromoteResourceAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> email{};

  PromoteResourceAccountRequest() {}

  explicit PromoteResourceAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
  }


  virtual ~PromoteResourceAccountRequest() = default;
};
class PromoteResourceAccountResponseBodyAccount : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<string> displayName{};
  shared_ptr<string> folderId{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> recordId{};
  shared_ptr<string> joinTime{};
  shared_ptr<string> accountId{};
  shared_ptr<string> joinMethod{};
  shared_ptr<string> accountName{};
  shared_ptr<string> modifyTime{};

  PromoteResourceAccountResponseBodyAccount() {}

  explicit PromoteResourceAccountResponseBodyAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (joinTime) {
      res["JoinTime"] = boost::any(*joinTime);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (joinMethod) {
      res["JoinMethod"] = boost::any(*joinMethod);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["RecordId"]));
    }
    if (m.find("JoinTime") != m.end() && !m["JoinTime"].empty()) {
      joinTime = make_shared<string>(boost::any_cast<string>(m["JoinTime"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("JoinMethod") != m.end() && !m["JoinMethod"].empty()) {
      joinMethod = make_shared<string>(boost::any_cast<string>(m["JoinMethod"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
  }


  virtual ~PromoteResourceAccountResponseBodyAccount() = default;
};
class PromoteResourceAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<PromoteResourceAccountResponseBodyAccount> account{};
  shared_ptr<string> requestId{};

  PromoteResourceAccountResponseBody() {}

  explicit PromoteResourceAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = account ? boost::any(account->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      if (typeid(map<string, boost::any>) == m["Account"].type()) {
        PromoteResourceAccountResponseBodyAccount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Account"]));
        account = make_shared<PromoteResourceAccountResponseBodyAccount>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PromoteResourceAccountResponseBody() = default;
};
class PromoteResourceAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PromoteResourceAccountResponseBody> body{};

  PromoteResourceAccountResponse() {}

  explicit PromoteResourceAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PromoteResourceAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PromoteResourceAccountResponseBody>(model1);
      }
    }
  }


  virtual ~PromoteResourceAccountResponse() = default;
};
class RegisterDelegatedAdministratorRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> servicePrincipal{};

  RegisterDelegatedAdministratorRequest() {}

  explicit RegisterDelegatedAdministratorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (servicePrincipal) {
      res["ServicePrincipal"] = boost::any(*servicePrincipal);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("ServicePrincipal") != m.end() && !m["ServicePrincipal"].empty()) {
      servicePrincipal = make_shared<string>(boost::any_cast<string>(m["ServicePrincipal"]));
    }
  }


  virtual ~RegisterDelegatedAdministratorRequest() = default;
};
class RegisterDelegatedAdministratorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RegisterDelegatedAdministratorResponseBody() {}

  explicit RegisterDelegatedAdministratorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RegisterDelegatedAdministratorResponseBody() = default;
};
class RegisterDelegatedAdministratorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RegisterDelegatedAdministratorResponseBody> body{};

  RegisterDelegatedAdministratorResponse() {}

  explicit RegisterDelegatedAdministratorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RegisterDelegatedAdministratorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RegisterDelegatedAdministratorResponseBody>(model1);
      }
    }
  }


  virtual ~RegisterDelegatedAdministratorResponse() = default;
};
class RemoveCloudAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  RemoveCloudAccountRequest() {}

  explicit RemoveCloudAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
  }


  virtual ~RemoveCloudAccountRequest() = default;
};
class RemoveCloudAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveCloudAccountResponseBody() {}

  explicit RemoveCloudAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RemoveCloudAccountResponseBody() = default;
};
class RemoveCloudAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveCloudAccountResponseBody> body{};

  RemoveCloudAccountResponse() {}

  explicit RemoveCloudAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveCloudAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveCloudAccountResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveCloudAccountResponse() = default;
};
class ResendCreateCloudAccountEmailRequest : public Darabonba::Model {
public:
  shared_ptr<string> recordId{};

  ResendCreateCloudAccountEmailRequest() {}

  explicit ResendCreateCloudAccountEmailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["RecordId"]));
    }
  }


  virtual ~ResendCreateCloudAccountEmailRequest() = default;
};
class ResendCreateCloudAccountEmailResponseBodyAccount : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<string> displayName{};
  shared_ptr<string> folderId{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> recordId{};
  shared_ptr<string> joinTime{};
  shared_ptr<string> accountId{};
  shared_ptr<string> joinMethod{};
  shared_ptr<string> accountName{};
  shared_ptr<string> modifyTime{};

  ResendCreateCloudAccountEmailResponseBodyAccount() {}

  explicit ResendCreateCloudAccountEmailResponseBodyAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (joinTime) {
      res["JoinTime"] = boost::any(*joinTime);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (joinMethod) {
      res["JoinMethod"] = boost::any(*joinMethod);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["RecordId"]));
    }
    if (m.find("JoinTime") != m.end() && !m["JoinTime"].empty()) {
      joinTime = make_shared<string>(boost::any_cast<string>(m["JoinTime"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("JoinMethod") != m.end() && !m["JoinMethod"].empty()) {
      joinMethod = make_shared<string>(boost::any_cast<string>(m["JoinMethod"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
  }


  virtual ~ResendCreateCloudAccountEmailResponseBodyAccount() = default;
};
class ResendCreateCloudAccountEmailResponseBody : public Darabonba::Model {
public:
  shared_ptr<ResendCreateCloudAccountEmailResponseBodyAccount> account{};
  shared_ptr<string> requestId{};

  ResendCreateCloudAccountEmailResponseBody() {}

  explicit ResendCreateCloudAccountEmailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = account ? boost::any(account->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      if (typeid(map<string, boost::any>) == m["Account"].type()) {
        ResendCreateCloudAccountEmailResponseBodyAccount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Account"]));
        account = make_shared<ResendCreateCloudAccountEmailResponseBodyAccount>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ResendCreateCloudAccountEmailResponseBody() = default;
};
class ResendCreateCloudAccountEmailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ResendCreateCloudAccountEmailResponseBody> body{};

  ResendCreateCloudAccountEmailResponse() {}

  explicit ResendCreateCloudAccountEmailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ResendCreateCloudAccountEmailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResendCreateCloudAccountEmailResponseBody>(model1);
      }
    }
  }


  virtual ~ResendCreateCloudAccountEmailResponse() = default;
};
class ResendPromoteResourceAccountEmailRequest : public Darabonba::Model {
public:
  shared_ptr<string> recordId{};

  ResendPromoteResourceAccountEmailRequest() {}

  explicit ResendPromoteResourceAccountEmailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["RecordId"]));
    }
  }


  virtual ~ResendPromoteResourceAccountEmailRequest() = default;
};
class ResendPromoteResourceAccountEmailResponseBodyAccount : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<string> displayName{};
  shared_ptr<string> folderId{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> recordId{};
  shared_ptr<string> joinTime{};
  shared_ptr<string> accountId{};
  shared_ptr<string> joinMethod{};
  shared_ptr<string> accountName{};
  shared_ptr<string> modifyTime{};

  ResendPromoteResourceAccountEmailResponseBodyAccount() {}

  explicit ResendPromoteResourceAccountEmailResponseBodyAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (joinTime) {
      res["JoinTime"] = boost::any(*joinTime);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (joinMethod) {
      res["JoinMethod"] = boost::any(*joinMethod);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["RecordId"]));
    }
    if (m.find("JoinTime") != m.end() && !m["JoinTime"].empty()) {
      joinTime = make_shared<string>(boost::any_cast<string>(m["JoinTime"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("JoinMethod") != m.end() && !m["JoinMethod"].empty()) {
      joinMethod = make_shared<string>(boost::any_cast<string>(m["JoinMethod"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
  }


  virtual ~ResendPromoteResourceAccountEmailResponseBodyAccount() = default;
};
class ResendPromoteResourceAccountEmailResponseBody : public Darabonba::Model {
public:
  shared_ptr<ResendPromoteResourceAccountEmailResponseBodyAccount> account{};
  shared_ptr<string> requestId{};

  ResendPromoteResourceAccountEmailResponseBody() {}

  explicit ResendPromoteResourceAccountEmailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = account ? boost::any(account->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      if (typeid(map<string, boost::any>) == m["Account"].type()) {
        ResendPromoteResourceAccountEmailResponseBodyAccount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Account"]));
        account = make_shared<ResendPromoteResourceAccountEmailResponseBodyAccount>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ResendPromoteResourceAccountEmailResponseBody() = default;
};
class ResendPromoteResourceAccountEmailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ResendPromoteResourceAccountEmailResponseBody> body{};

  ResendPromoteResourceAccountEmailResponse() {}

  explicit ResendPromoteResourceAccountEmailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ResendPromoteResourceAccountEmailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResendPromoteResourceAccountEmailResponseBody>(model1);
      }
    }
  }


  virtual ~ResendPromoteResourceAccountEmailResponse() = default;
};
class SetDefaultPolicyVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};
  shared_ptr<string> versionId{};

  SetDefaultPolicyVersionRequest() {}

  explicit SetDefaultPolicyVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~SetDefaultPolicyVersionRequest() = default;
};
class SetDefaultPolicyVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetDefaultPolicyVersionResponseBody() {}

  explicit SetDefaultPolicyVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetDefaultPolicyVersionResponseBody() = default;
};
class SetDefaultPolicyVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetDefaultPolicyVersionResponseBody> body{};

  SetDefaultPolicyVersionResponse() {}

  explicit SetDefaultPolicyVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetDefaultPolicyVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDefaultPolicyVersionResponseBody>(model1);
      }
    }
  }


  virtual ~SetDefaultPolicyVersionResponse() = default;
};
class UpdateAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> newDisplayName{};
  shared_ptr<string> newAccountType{};
  shared_ptr<string> accountId{};

  UpdateAccountRequest() {}

  explicit UpdateAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newDisplayName) {
      res["NewDisplayName"] = boost::any(*newDisplayName);
    }
    if (newAccountType) {
      res["NewAccountType"] = boost::any(*newAccountType);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewDisplayName") != m.end() && !m["NewDisplayName"].empty()) {
      newDisplayName = make_shared<string>(boost::any_cast<string>(m["NewDisplayName"]));
    }
    if (m.find("NewAccountType") != m.end() && !m["NewAccountType"].empty()) {
      newAccountType = make_shared<string>(boost::any_cast<string>(m["NewAccountType"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
  }


  virtual ~UpdateAccountRequest() = default;
};
class UpdateAccountResponseBodyAccount : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<string> displayName{};
  shared_ptr<string> folderId{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> joinTime{};
  shared_ptr<string> accountId{};
  shared_ptr<string> joinMethod{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> accountName{};

  UpdateAccountResponseBodyAccount() {}

  explicit UpdateAccountResponseBodyAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (joinTime) {
      res["JoinTime"] = boost::any(*joinTime);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (joinMethod) {
      res["JoinMethod"] = boost::any(*joinMethod);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("JoinTime") != m.end() && !m["JoinTime"].empty()) {
      joinTime = make_shared<string>(boost::any_cast<string>(m["JoinTime"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("JoinMethod") != m.end() && !m["JoinMethod"].empty()) {
      joinMethod = make_shared<string>(boost::any_cast<string>(m["JoinMethod"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~UpdateAccountResponseBodyAccount() = default;
};
class UpdateAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateAccountResponseBodyAccount> account{};
  shared_ptr<string> requestId{};

  UpdateAccountResponseBody() {}

  explicit UpdateAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = account ? boost::any(account->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      if (typeid(map<string, boost::any>) == m["Account"].type()) {
        UpdateAccountResponseBodyAccount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Account"]));
        account = make_shared<UpdateAccountResponseBodyAccount>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateAccountResponseBody() = default;
};
class UpdateAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateAccountResponseBody> body{};

  UpdateAccountResponse() {}

  explicit UpdateAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAccountResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAccountResponse() = default;
};
class UpdateControlPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyId{};
  shared_ptr<string> newPolicyName{};
  shared_ptr<string> newDescription{};
  shared_ptr<string> newPolicyDocument{};

  UpdateControlPolicyRequest() {}

  explicit UpdateControlPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (newPolicyName) {
      res["NewPolicyName"] = boost::any(*newPolicyName);
    }
    if (newDescription) {
      res["NewDescription"] = boost::any(*newDescription);
    }
    if (newPolicyDocument) {
      res["NewPolicyDocument"] = boost::any(*newPolicyDocument);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("NewPolicyName") != m.end() && !m["NewPolicyName"].empty()) {
      newPolicyName = make_shared<string>(boost::any_cast<string>(m["NewPolicyName"]));
    }
    if (m.find("NewDescription") != m.end() && !m["NewDescription"].empty()) {
      newDescription = make_shared<string>(boost::any_cast<string>(m["NewDescription"]));
    }
    if (m.find("NewPolicyDocument") != m.end() && !m["NewPolicyDocument"].empty()) {
      newPolicyDocument = make_shared<string>(boost::any_cast<string>(m["NewPolicyDocument"]));
    }
  }


  virtual ~UpdateControlPolicyRequest() = default;
};
class UpdateControlPolicyResponseBodyControlPolicy : public Darabonba::Model {
public:
  shared_ptr<string> updateDate{};
  shared_ptr<string> description{};
  shared_ptr<string> effectScope{};
  shared_ptr<string> attachmentCount{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyId{};
  shared_ptr<string> createDate{};
  shared_ptr<string> policyType{};

  UpdateControlPolicyResponseBodyControlPolicy() {}

  explicit UpdateControlPolicyResponseBodyControlPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (effectScope) {
      res["EffectScope"] = boost::any(*effectScope);
    }
    if (attachmentCount) {
      res["AttachmentCount"] = boost::any(*attachmentCount);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EffectScope") != m.end() && !m["EffectScope"].empty()) {
      effectScope = make_shared<string>(boost::any_cast<string>(m["EffectScope"]));
    }
    if (m.find("AttachmentCount") != m.end() && !m["AttachmentCount"].empty()) {
      attachmentCount = make_shared<string>(boost::any_cast<string>(m["AttachmentCount"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~UpdateControlPolicyResponseBodyControlPolicy() = default;
};
class UpdateControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateControlPolicyResponseBodyControlPolicy> controlPolicy{};
  shared_ptr<string> requestId{};

  UpdateControlPolicyResponseBody() {}

  explicit UpdateControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (controlPolicy) {
      res["ControlPolicy"] = controlPolicy ? boost::any(controlPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ControlPolicy") != m.end() && !m["ControlPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["ControlPolicy"].type()) {
        UpdateControlPolicyResponseBodyControlPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ControlPolicy"]));
        controlPolicy = make_shared<UpdateControlPolicyResponseBodyControlPolicy>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateControlPolicyResponseBody() = default;
};
class UpdateControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateControlPolicyResponseBody> body{};

  UpdateControlPolicyResponse() {}

  explicit UpdateControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateControlPolicyResponse() = default;
};
class UpdateFolderRequest : public Darabonba::Model {
public:
  shared_ptr<string> folderId{};
  shared_ptr<string> newFolderName{};

  UpdateFolderRequest() {}

  explicit UpdateFolderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (newFolderName) {
      res["NewFolderName"] = boost::any(*newFolderName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("NewFolderName") != m.end() && !m["NewFolderName"].empty()) {
      newFolderName = make_shared<string>(boost::any_cast<string>(m["NewFolderName"]));
    }
  }


  virtual ~UpdateFolderRequest() = default;
};
class UpdateFolderResponseBodyFolder : public Darabonba::Model {
public:
  shared_ptr<string> folderId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> parentFolderId{};
  shared_ptr<string> folderName{};

  UpdateFolderResponseBodyFolder() {}

  explicit UpdateFolderResponseBodyFolder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (parentFolderId) {
      res["ParentFolderId"] = boost::any(*parentFolderId);
    }
    if (folderName) {
      res["FolderName"] = boost::any(*folderName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ParentFolderId") != m.end() && !m["ParentFolderId"].empty()) {
      parentFolderId = make_shared<string>(boost::any_cast<string>(m["ParentFolderId"]));
    }
    if (m.find("FolderName") != m.end() && !m["FolderName"].empty()) {
      folderName = make_shared<string>(boost::any_cast<string>(m["FolderName"]));
    }
  }


  virtual ~UpdateFolderResponseBodyFolder() = default;
};
class UpdateFolderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdateFolderResponseBodyFolder> folder{};

  UpdateFolderResponseBody() {}

  explicit UpdateFolderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (folder) {
      res["Folder"] = folder ? boost::any(folder->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Folder") != m.end() && !m["Folder"].empty()) {
      if (typeid(map<string, boost::any>) == m["Folder"].type()) {
        UpdateFolderResponseBodyFolder model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Folder"]));
        folder = make_shared<UpdateFolderResponseBodyFolder>(model1);
      }
    }
  }


  virtual ~UpdateFolderResponseBody() = default;
};
class UpdateFolderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateFolderResponseBody> body{};

  UpdateFolderResponse() {}

  explicit UpdateFolderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateFolderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFolderResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFolderResponse() = default;
};
class UpdateResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> newDisplayName{};

  UpdateResourceGroupRequest() {}

  explicit UpdateResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (newDisplayName) {
      res["NewDisplayName"] = boost::any(*newDisplayName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("NewDisplayName") != m.end() && !m["NewDisplayName"].empty()) {
      newDisplayName = make_shared<string>(boost::any_cast<string>(m["NewDisplayName"]));
    }
  }


  virtual ~UpdateResourceGroupRequest() = default;
};
class UpdateResourceGroupResponseBodyResourceGroup : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> accountId{};
  shared_ptr<string> name{};
  shared_ptr<string> createDate{};
  shared_ptr<string> id{};

  UpdateResourceGroupResponseBodyResourceGroup() {}

  explicit UpdateResourceGroupResponseBodyResourceGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~UpdateResourceGroupResponseBodyResourceGroup() = default;
};
class UpdateResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdateResourceGroupResponseBodyResourceGroup> resourceGroup{};

  UpdateResourceGroupResponseBody() {}

  explicit UpdateResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroup) {
      res["ResourceGroup"] = resourceGroup ? boost::any(resourceGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroup") != m.end() && !m["ResourceGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceGroup"].type()) {
        UpdateResourceGroupResponseBodyResourceGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceGroup"]));
        resourceGroup = make_shared<UpdateResourceGroupResponseBodyResourceGroup>(model1);
      }
    }
  }


  virtual ~UpdateResourceGroupResponseBody() = default;
};
class UpdateResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateResourceGroupResponseBody> body{};

  UpdateResourceGroupResponse() {}

  explicit UpdateResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateResourceGroupResponse() = default;
};
class UpdateRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> roleName{};
  shared_ptr<string> newAssumeRolePolicyDocument{};
  shared_ptr<long> newMaxSessionDuration{};
  shared_ptr<string> newDescription{};

  UpdateRoleRequest() {}

  explicit UpdateRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    if (newAssumeRolePolicyDocument) {
      res["NewAssumeRolePolicyDocument"] = boost::any(*newAssumeRolePolicyDocument);
    }
    if (newMaxSessionDuration) {
      res["NewMaxSessionDuration"] = boost::any(*newMaxSessionDuration);
    }
    if (newDescription) {
      res["NewDescription"] = boost::any(*newDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
    if (m.find("NewAssumeRolePolicyDocument") != m.end() && !m["NewAssumeRolePolicyDocument"].empty()) {
      newAssumeRolePolicyDocument = make_shared<string>(boost::any_cast<string>(m["NewAssumeRolePolicyDocument"]));
    }
    if (m.find("NewMaxSessionDuration") != m.end() && !m["NewMaxSessionDuration"].empty()) {
      newMaxSessionDuration = make_shared<long>(boost::any_cast<long>(m["NewMaxSessionDuration"]));
    }
    if (m.find("NewDescription") != m.end() && !m["NewDescription"].empty()) {
      newDescription = make_shared<string>(boost::any_cast<string>(m["NewDescription"]));
    }
  }


  virtual ~UpdateRoleRequest() = default;
};
class UpdateRoleResponseBodyRole : public Darabonba::Model {
public:
  shared_ptr<string> assumeRolePolicyDocument{};
  shared_ptr<string> rolePrincipalName{};
  shared_ptr<string> description{};
  shared_ptr<string> updateDate{};
  shared_ptr<long> maxSessionDuration{};
  shared_ptr<string> roleName{};
  shared_ptr<string> createDate{};
  shared_ptr<string> roleId{};
  shared_ptr<string> arn{};

  UpdateRoleResponseBodyRole() {}

  explicit UpdateRoleResponseBodyRole(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assumeRolePolicyDocument) {
      res["AssumeRolePolicyDocument"] = boost::any(*assumeRolePolicyDocument);
    }
    if (rolePrincipalName) {
      res["RolePrincipalName"] = boost::any(*rolePrincipalName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (maxSessionDuration) {
      res["MaxSessionDuration"] = boost::any(*maxSessionDuration);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssumeRolePolicyDocument") != m.end() && !m["AssumeRolePolicyDocument"].empty()) {
      assumeRolePolicyDocument = make_shared<string>(boost::any_cast<string>(m["AssumeRolePolicyDocument"]));
    }
    if (m.find("RolePrincipalName") != m.end() && !m["RolePrincipalName"].empty()) {
      rolePrincipalName = make_shared<string>(boost::any_cast<string>(m["RolePrincipalName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("MaxSessionDuration") != m.end() && !m["MaxSessionDuration"].empty()) {
      maxSessionDuration = make_shared<long>(boost::any_cast<long>(m["MaxSessionDuration"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
  }


  virtual ~UpdateRoleResponseBodyRole() = default;
};
class UpdateRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateRoleResponseBodyRole> role{};
  shared_ptr<string> requestId{};

  UpdateRoleResponseBody() {}

  explicit UpdateRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (role) {
      res["Role"] = role ? boost::any(role->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      if (typeid(map<string, boost::any>) == m["Role"].type()) {
        UpdateRoleResponseBodyRole model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Role"]));
        role = make_shared<UpdateRoleResponseBodyRole>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateRoleResponseBody() = default;
};
class UpdateRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateRoleResponseBody> body{};

  UpdateRoleResponse() {}

  explicit UpdateRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRoleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRoleResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  AcceptHandshakeResponse acceptHandshakeWithOptions(shared_ptr<AcceptHandshakeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AcceptHandshakeResponse acceptHandshake(shared_ptr<AcceptHandshakeRequest> request);
  AttachControlPolicyResponse attachControlPolicyWithOptions(shared_ptr<AttachControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachControlPolicyResponse attachControlPolicy(shared_ptr<AttachControlPolicyRequest> request);
  AttachPolicyResponse attachPolicyWithOptions(shared_ptr<AttachPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachPolicyResponse attachPolicy(shared_ptr<AttachPolicyRequest> request);
  CancelCreateCloudAccountResponse cancelCreateCloudAccountWithOptions(shared_ptr<CancelCreateCloudAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelCreateCloudAccountResponse cancelCreateCloudAccount(shared_ptr<CancelCreateCloudAccountRequest> request);
  CancelHandshakeResponse cancelHandshakeWithOptions(shared_ptr<CancelHandshakeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelHandshakeResponse cancelHandshake(shared_ptr<CancelHandshakeRequest> request);
  CancelPromoteResourceAccountResponse cancelPromoteResourceAccountWithOptions(shared_ptr<CancelPromoteResourceAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelPromoteResourceAccountResponse cancelPromoteResourceAccount(shared_ptr<CancelPromoteResourceAccountRequest> request);
  CreateCloudAccountResponse createCloudAccountWithOptions(shared_ptr<CreateCloudAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCloudAccountResponse createCloudAccount(shared_ptr<CreateCloudAccountRequest> request);
  CreateControlPolicyResponse createControlPolicyWithOptions(shared_ptr<CreateControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateControlPolicyResponse createControlPolicy(shared_ptr<CreateControlPolicyRequest> request);
  CreateFolderResponse createFolderWithOptions(shared_ptr<CreateFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFolderResponse createFolder(shared_ptr<CreateFolderRequest> request);
  CreatePolicyResponse createPolicyWithOptions(shared_ptr<CreatePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePolicyResponse createPolicy(shared_ptr<CreatePolicyRequest> request);
  CreatePolicyVersionResponse createPolicyVersionWithOptions(shared_ptr<CreatePolicyVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePolicyVersionResponse createPolicyVersion(shared_ptr<CreatePolicyVersionRequest> request);
  CreateResourceAccountResponse createResourceAccountWithOptions(shared_ptr<CreateResourceAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateResourceAccountResponse createResourceAccount(shared_ptr<CreateResourceAccountRequest> request);
  CreateResourceGroupResponse createResourceGroupWithOptions(shared_ptr<CreateResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateResourceGroupResponse createResourceGroup(shared_ptr<CreateResourceGroupRequest> request);
  CreateRoleResponse createRoleWithOptions(shared_ptr<CreateRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRoleResponse createRole(shared_ptr<CreateRoleRequest> request);
  CreateServiceLinkedRoleResponse createServiceLinkedRoleWithOptions(shared_ptr<CreateServiceLinkedRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceLinkedRoleResponse createServiceLinkedRole(shared_ptr<CreateServiceLinkedRoleRequest> request);
  DeclineHandshakeResponse declineHandshakeWithOptions(shared_ptr<DeclineHandshakeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeclineHandshakeResponse declineHandshake(shared_ptr<DeclineHandshakeRequest> request);
  DeleteAccountResponse deleteAccountWithOptions(shared_ptr<DeleteAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccountResponse deleteAccount(shared_ptr<DeleteAccountRequest> request);
  DeleteControlPolicyResponse deleteControlPolicyWithOptions(shared_ptr<DeleteControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteControlPolicyResponse deleteControlPolicy(shared_ptr<DeleteControlPolicyRequest> request);
  DeleteFolderResponse deleteFolderWithOptions(shared_ptr<DeleteFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFolderResponse deleteFolder(shared_ptr<DeleteFolderRequest> request);
  DeletePolicyResponse deletePolicyWithOptions(shared_ptr<DeletePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePolicyResponse deletePolicy(shared_ptr<DeletePolicyRequest> request);
  DeletePolicyVersionResponse deletePolicyVersionWithOptions(shared_ptr<DeletePolicyVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePolicyVersionResponse deletePolicyVersion(shared_ptr<DeletePolicyVersionRequest> request);
  DeleteResourceGroupResponse deleteResourceGroupWithOptions(shared_ptr<DeleteResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteResourceGroupResponse deleteResourceGroup(shared_ptr<DeleteResourceGroupRequest> request);
  DeleteRoleResponse deleteRoleWithOptions(shared_ptr<DeleteRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRoleResponse deleteRole(shared_ptr<DeleteRoleRequest> request);
  DeleteServiceLinkedRoleResponse deleteServiceLinkedRoleWithOptions(shared_ptr<DeleteServiceLinkedRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServiceLinkedRoleResponse deleteServiceLinkedRole(shared_ptr<DeleteServiceLinkedRoleRequest> request);
  DeregisterDelegatedAdministratorResponse deregisterDelegatedAdministratorWithOptions(shared_ptr<DeregisterDelegatedAdministratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeregisterDelegatedAdministratorResponse deregisterDelegatedAdministrator(shared_ptr<DeregisterDelegatedAdministratorRequest> request);
  DestroyResourceDirectoryResponse destroyResourceDirectoryWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DestroyResourceDirectoryResponse destroyResourceDirectory();
  DetachControlPolicyResponse detachControlPolicyWithOptions(shared_ptr<DetachControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachControlPolicyResponse detachControlPolicy(shared_ptr<DetachControlPolicyRequest> request);
  DetachPolicyResponse detachPolicyWithOptions(shared_ptr<DetachPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachPolicyResponse detachPolicy(shared_ptr<DetachPolicyRequest> request);
  DisableControlPolicyResponse disableControlPolicyWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableControlPolicyResponse disableControlPolicy();
  EnableControlPolicyResponse enableControlPolicyWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableControlPolicyResponse enableControlPolicy();
  GetAccountResponse getAccountWithOptions(shared_ptr<GetAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccountResponse getAccount(shared_ptr<GetAccountRequest> request);
  GetControlPolicyResponse getControlPolicyWithOptions(shared_ptr<GetControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetControlPolicyResponse getControlPolicy(shared_ptr<GetControlPolicyRequest> request);
  GetControlPolicyEnablementStatusResponse getControlPolicyEnablementStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetControlPolicyEnablementStatusResponse getControlPolicyEnablementStatus();
  GetFolderResponse getFolderWithOptions(shared_ptr<GetFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFolderResponse getFolder(shared_ptr<GetFolderRequest> request);
  GetHandshakeResponse getHandshakeWithOptions(shared_ptr<GetHandshakeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHandshakeResponse getHandshake(shared_ptr<GetHandshakeRequest> request);
  GetPayerForAccountResponse getPayerForAccountWithOptions(shared_ptr<GetPayerForAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPayerForAccountResponse getPayerForAccount(shared_ptr<GetPayerForAccountRequest> request);
  GetPolicyResponse getPolicyWithOptions(shared_ptr<GetPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPolicyResponse getPolicy(shared_ptr<GetPolicyRequest> request);
  GetPolicyVersionResponse getPolicyVersionWithOptions(shared_ptr<GetPolicyVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPolicyVersionResponse getPolicyVersion(shared_ptr<GetPolicyVersionRequest> request);
  GetResourceDirectoryResponse getResourceDirectoryWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceDirectoryResponse getResourceDirectory();
  GetResourceGroupResponse getResourceGroupWithOptions(shared_ptr<GetResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceGroupResponse getResourceGroup(shared_ptr<GetResourceGroupRequest> request);
  GetRoleResponse getRoleWithOptions(shared_ptr<GetRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRoleResponse getRole(shared_ptr<GetRoleRequest> request);
  GetServiceLinkedRoleDeletionStatusResponse getServiceLinkedRoleDeletionStatusWithOptions(shared_ptr<GetServiceLinkedRoleDeletionStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceLinkedRoleDeletionStatusResponse getServiceLinkedRoleDeletionStatus(shared_ptr<GetServiceLinkedRoleDeletionStatusRequest> request);
  InitResourceDirectoryResponse initResourceDirectoryWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitResourceDirectoryResponse initResourceDirectory();
  InviteAccountToResourceDirectoryResponse inviteAccountToResourceDirectoryWithOptions(shared_ptr<InviteAccountToResourceDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InviteAccountToResourceDirectoryResponse inviteAccountToResourceDirectory(shared_ptr<InviteAccountToResourceDirectoryRequest> request);
  ListAccountsResponse listAccountsWithOptions(shared_ptr<ListAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAccountsResponse listAccounts(shared_ptr<ListAccountsRequest> request);
  ListAccountsForParentResponse listAccountsForParentWithOptions(shared_ptr<ListAccountsForParentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAccountsForParentResponse listAccountsForParent(shared_ptr<ListAccountsForParentRequest> request);
  ListAncestorsResponse listAncestorsWithOptions(shared_ptr<ListAncestorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAncestorsResponse listAncestors(shared_ptr<ListAncestorsRequest> request);
  ListControlPoliciesResponse listControlPoliciesWithOptions(shared_ptr<ListControlPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListControlPoliciesResponse listControlPolicies(shared_ptr<ListControlPoliciesRequest> request);
  ListControlPolicyAttachmentsForTargetResponse listControlPolicyAttachmentsForTargetWithOptions(shared_ptr<ListControlPolicyAttachmentsForTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListControlPolicyAttachmentsForTargetResponse listControlPolicyAttachmentsForTarget(shared_ptr<ListControlPolicyAttachmentsForTargetRequest> request);
  ListDelegatedAdministratorsResponse listDelegatedAdministratorsWithOptions(shared_ptr<ListDelegatedAdministratorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDelegatedAdministratorsResponse listDelegatedAdministrators(shared_ptr<ListDelegatedAdministratorsRequest> request);
  ListDelegatedServicesForAccountResponse listDelegatedServicesForAccountWithOptions(shared_ptr<ListDelegatedServicesForAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDelegatedServicesForAccountResponse listDelegatedServicesForAccount(shared_ptr<ListDelegatedServicesForAccountRequest> request);
  ListFoldersForParentResponse listFoldersForParentWithOptions(shared_ptr<ListFoldersForParentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFoldersForParentResponse listFoldersForParent(shared_ptr<ListFoldersForParentRequest> request);
  ListHandshakesForAccountResponse listHandshakesForAccountWithOptions(shared_ptr<ListHandshakesForAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHandshakesForAccountResponse listHandshakesForAccount(shared_ptr<ListHandshakesForAccountRequest> request);
  ListHandshakesForResourceDirectoryResponse listHandshakesForResourceDirectoryWithOptions(shared_ptr<ListHandshakesForResourceDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHandshakesForResourceDirectoryResponse listHandshakesForResourceDirectory(shared_ptr<ListHandshakesForResourceDirectoryRequest> request);
  ListPoliciesResponse listPoliciesWithOptions(shared_ptr<ListPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPoliciesResponse listPolicies(shared_ptr<ListPoliciesRequest> request);
  ListPolicyAttachmentsResponse listPolicyAttachmentsWithOptions(shared_ptr<ListPolicyAttachmentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPolicyAttachmentsResponse listPolicyAttachments(shared_ptr<ListPolicyAttachmentsRequest> request);
  ListPolicyVersionsResponse listPolicyVersionsWithOptions(shared_ptr<ListPolicyVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPolicyVersionsResponse listPolicyVersions(shared_ptr<ListPolicyVersionsRequest> request);
  ListResourceGroupsResponse listResourceGroupsWithOptions(shared_ptr<ListResourceGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourceGroupsResponse listResourceGroups(shared_ptr<ListResourceGroupsRequest> request);
  ListResourcesResponse listResourcesWithOptions(shared_ptr<ListResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourcesResponse listResources(shared_ptr<ListResourcesRequest> request);
  ListRolesResponse listRolesWithOptions(shared_ptr<ListRolesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRolesResponse listRoles(shared_ptr<ListRolesRequest> request);
  ListTargetAttachmentsForControlPolicyResponse listTargetAttachmentsForControlPolicyWithOptions(shared_ptr<ListTargetAttachmentsForControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTargetAttachmentsForControlPolicyResponse listTargetAttachmentsForControlPolicy(shared_ptr<ListTargetAttachmentsForControlPolicyRequest> request);
  ListTrustedServiceStatusResponse listTrustedServiceStatusWithOptions(shared_ptr<ListTrustedServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTrustedServiceStatusResponse listTrustedServiceStatus(shared_ptr<ListTrustedServiceStatusRequest> request);
  MoveAccountResponse moveAccountWithOptions(shared_ptr<MoveAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MoveAccountResponse moveAccount(shared_ptr<MoveAccountRequest> request);
  MoveResourcesResponse moveResourcesWithOptions(shared_ptr<MoveResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MoveResourcesResponse moveResources(shared_ptr<MoveResourcesRequest> request);
  PromoteResourceAccountResponse promoteResourceAccountWithOptions(shared_ptr<PromoteResourceAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PromoteResourceAccountResponse promoteResourceAccount(shared_ptr<PromoteResourceAccountRequest> request);
  RegisterDelegatedAdministratorResponse registerDelegatedAdministratorWithOptions(shared_ptr<RegisterDelegatedAdministratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RegisterDelegatedAdministratorResponse registerDelegatedAdministrator(shared_ptr<RegisterDelegatedAdministratorRequest> request);
  RemoveCloudAccountResponse removeCloudAccountWithOptions(shared_ptr<RemoveCloudAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveCloudAccountResponse removeCloudAccount(shared_ptr<RemoveCloudAccountRequest> request);
  ResendCreateCloudAccountEmailResponse resendCreateCloudAccountEmailWithOptions(shared_ptr<ResendCreateCloudAccountEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResendCreateCloudAccountEmailResponse resendCreateCloudAccountEmail(shared_ptr<ResendCreateCloudAccountEmailRequest> request);
  ResendPromoteResourceAccountEmailResponse resendPromoteResourceAccountEmailWithOptions(shared_ptr<ResendPromoteResourceAccountEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResendPromoteResourceAccountEmailResponse resendPromoteResourceAccountEmail(shared_ptr<ResendPromoteResourceAccountEmailRequest> request);
  SetDefaultPolicyVersionResponse setDefaultPolicyVersionWithOptions(shared_ptr<SetDefaultPolicyVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDefaultPolicyVersionResponse setDefaultPolicyVersion(shared_ptr<SetDefaultPolicyVersionRequest> request);
  UpdateAccountResponse updateAccountWithOptions(shared_ptr<UpdateAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAccountResponse updateAccount(shared_ptr<UpdateAccountRequest> request);
  UpdateControlPolicyResponse updateControlPolicyWithOptions(shared_ptr<UpdateControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateControlPolicyResponse updateControlPolicy(shared_ptr<UpdateControlPolicyRequest> request);
  UpdateFolderResponse updateFolderWithOptions(shared_ptr<UpdateFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFolderResponse updateFolder(shared_ptr<UpdateFolderRequest> request);
  UpdateResourceGroupResponse updateResourceGroupWithOptions(shared_ptr<UpdateResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateResourceGroupResponse updateResourceGroup(shared_ptr<UpdateResourceGroupRequest> request);
  UpdateRoleResponse updateRoleWithOptions(shared_ptr<UpdateRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRoleResponse updateRole(shared_ptr<UpdateRoleRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_ResourceManager20200331

#endif
