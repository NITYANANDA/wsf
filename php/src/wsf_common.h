/*
 * Copyright 2005,2008 WSO2, Inc. http://wso2.com
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef WSF_COMMON_H
#define WSF_COMMON_H

#ifdef PHP_WIN32
#define WSF_PHP_API __declspec(dllexport)
#else
#define WSF_PHP_API
#endif

#ifdef PHP_WIN32
#define WSF_CALL	__stdcall
#else
#define WSF_CALL
#endif
#include <axis2_svc.h>
#include <axis2_msg_recv.h>
#include <axiom.h>
#include <php.h>


/* {{{ axis2 object types */
typedef enum ws_object_types_t
{
    WSF_NONE,
    WSF_SVC_CLIENT,
    WSF_SVC,
    WSF_FAULT,
    WSF_PARAM,
    WSF_OBJECT_LAST
} ws_object_types_t;
/* }}} */

/** using input */
typedef enum ws_input_types
{
    WSF_USING_STRING,
    WSF_USING_MSG,
    WSF_USING_INCORRECT_INPUT
} ws_input_types_t;

/** options for services array */

#define WSF_PHP_LOG_PREFIX      "[WSF/PHP] "

#define WSF_MIXED "MIXED"
#define WSF_WSMESSAGE "WSMESSAGE"

#define WSF_MESSAGE_STR "str"

#define WSF_ACTIONS      "actions"
#define WSF_OPERATIONS  "operations"
#define WSF_OP_MEP      "opMEP"
#define WSF_OP_PARAMS    "opParams"
#define WSF_WSDL         "wsdl"
#define WSF_CLASSMAP     "classmap"
#define WSF_CLASSES      "classes"
#define WSF_CONS_ARGS    "args"
#define WSF_SERVICE_NAME "serviceName"
#define WSF_PORT_NAME    "portName"

#define WSF_ANNOTATIONS "annotations"
#define WSF_WSDL_PROCESS_IN_MSG "wsf_wsdl_process_in_msg"

/** REST */
#define WSF_OP_TO_URL_MAP "RESTMapping"
#define WSF_REST_LOCATION "RESTLocation"
#define WSF_RESPONSE_CONTENT_TYPE "contentType"

/** Options array options */

#define WSF_IN_ONLY "IN_ONLY"
#define WSF_IN_OUT "IN_OUT"

#define WSF_TO				"to"    /** endpoint uri */

#define WSF_SWA     		"swa"
#define WSF_USE_WSA     		"useWSA"
#define WSF_ACTION			"action"        /** addressing options */
#define WSF_FROM				"from"
#define WSF_REPLY_TO			"replyTo"
#define WSF_FAULT_TO			"faultTo"

#define WSF_SOAP_ACTION      "SOAPAction"

#define WSF_USES_XOP			"usesXOP"      /** MTOM XOP */
#define WSF_DEFAULT_ATTACHEMENT_CONTENT_TYPE "defaultAttachmentContentType"
#define WSF_ATTACHMENTS 			"attachments"
#define WSF_CID2CONTENT_TYPE 	"cid2contentType"
#define WSF_RESPONSE_XOP 		"responseXOP"
#define WSF_REQUEST_XOP  		"requestXOP"
#define WSF_USE_MTOM     		"useMTOM"
#define WSF_TIMEOUT              "timeout"

/** Reliable Messaging */
#define WSF_WILL_CONTINUE_SEQUENCE 	"willContinueSequence"
#define WSF_LAST_MESSAGE 		    "lastMessage"
#define WSF_RELIABLE			        "reliable"
#define WSF_SEQUENCE_EXPIRY_TIME 	"sequenceExpiryTime"
#define WSF_SEQUENCE_KEY      		"sequenceKey"

/** protocol */
#define WSF_USE_SOAP			    "useSOAP"
#define WSF_HTTP_METHOD 			"HTTPMethod"


/** SSL certificate */
#define WSF_SERVER_CERT 			"CACert"
#define WSF_CLIENT_CERT 			"clientCert"
#define WSF_PASSPHRASE  			"passphrase"

/** wsdl mode */
#define WSF_BINDING_STYLE 		"bindingStyle"
#define WSF_WSDL          		"wsdl"
#define WSF_CACHE_WSDL           "cache_wsdl"
#define WSF_CLASSMAP             "classmap"

/** http authentication */
#define WSF_HTTP_AUTH_USERNAME      "httpAuthUsername"
#define WSF_HTTP_AUTH_PASSWORD      "httpAuthPassword"
#define WSF_HTTP_AUTH_TYPE          "httpAuthType"

/** proxy authentication */
#define WSF_PROXY_AUTH_USERNAME      "proxyAuthUsername"
#define WSF_PROXY_AUTH_PASSWORD      "proxyAuthPassword"
#define WSF_PROXY_AUTH_TYPE          "proxyAuthType"

/** soap fault */
#define WSF_FAULT_REASON 		"Reason"
#define WSF_FAULT_ROLE   		"Role"
#define WSF_FAULT_TEXT   		"text"
#define WSF_FAULT_CODE   		"Code"
#define WSF_FAULT_CODE_NS        "codens"
#define WSF_FAULT_SUBCODE 		"Subcode"
#define WSF_FAULT_DETAIL 		"Detail"
#define WSF_FAULT_HTTP_STATUS_CODE "httpStatusCode"
#define WSF_FAULT_STR "str"
#define WSF_FAULT_NAME "_name"

/** header options */
#define WSF_INPUT_HEADERS        "inputHeaders"
#define WSF_OUTPUT_HEADERS       "outputHeaders"
#define WSF_HEADER_PREFIX        "prefix"
#define WSF_HEADER_NS    		"ns"
#define WSF_HEADER_LOCALNAME 	"name"
#define WSF_HEADER_DATA     		"data"
#define WSF_HEADER_STR           "str"
#define WSF_HEADER_ROLE     		"role"
#define WSF_HEADER_ACTOR         "actor"
#define WSF_HEADER_MUST_UNDERSTAND 	"mustUnderstand"
#define WSF_HEADER_PREFIX        "prefix"

/** security policy */
#define WSF_POLICY_NAME 			"policy"
#define WSF_SECURITY_TOKEN 		"securityToken"

#define WSF_PROXY_HOST           "proxyHost"
#define WSF_PROXY_PORT           "proxyPort"
/** end options */

#define WSF_MSG_PAYLOAD_STR 		"str"

/** soap header attributes */

#define WSF_SOAP_ROLE_NONE			        1
#define WSF_SOAP_ROLE_NEXT			        2
#define WSF_SOAP_ROLE_ULTIMATE_RECEIVER		3

#define WSF_SOAP_ROLE_NONE_URI "http://www.w3.org/2003/05/soap-envelope/role/none"
#define WSF_SOAP_ROLE_NEXT_URI "http://www.w3.org/2003/05/soap-envelope/role/next"
#define WSF_SOAP_ROLE_ULTIMATE_RECEIVER_URI "http://www.w3.org/2003/05/soap-envelope/role/next"

#define WSF_SOAP_1_1_NAMESPACE_URI "http://schemas.xmlsoap.org/soap/envelope/"
#define WSF_SOAP_1_2_NAMESPACE_URI "http://www.w3.org/2003/05/soap-envelope"

/** sandesha2 */

#define WSF_SANDESHA2_CLIENT_ACKS_TO "Sandesha2AcksTo"
#define WSF_SANDESHA2_CLIENT_LAST_MESSAGE "Sandesha2LastMessage"
#define WSF_SANDESHA2_CLIENT_OFFERED_SEQ_ID "Sandesha2OfferedSequenceId"
#define WSF_SANDESHA2_CLIENT_DEBUG_MODE "Sandesha2DebugMode"
#define WSF_SANDESHA2_CLIENT_SEQ_KEY "Sandesha2SequenceKey"
#define WSF_SANDESHA2_CLIENT_MESSAGE_NUMBER "Sandesha2MessageNumber"
#define WSF_SANDESHA2_CLIENT_RM_SPEC_VERSION "Sandesha2RMSpecVersion"
#define WSF_SANDESHA2_CLIENT_DUMMY_MESSAGE "Sandesha2DummyMessage"
#define WSF_SANDESHA2_INACTIVITY_TIMEOUT "InactivityTimeout"
#define WSF_SANDHSHA2_LAST_MESSAGE "Sandesha2LastMessage"
#define WSF_SANDHSHA2_SANDESHA2_OFFERED_SEQUENCE_ID "Sandesha2OfferedSequenceId"

#define WSF_RM_VERSION_1_0_STR "Spec_2005_02"
#define WSF_RM_VERSION_1_0  1
#define WSF_RM_VERSION_1_1_STR "Spec_2006_08"
#define WSF_RM_VERSION_1_1  2

#define WSF_RM_RESPONSE_TIMEOUT "responseTimeout"
#define WSF_RM_DEFAULT_RESPONSE_TIMEOUT "12"

#define WSF_SANDESHA2_DB "sandesha2_db"

/** Addressing options */

#define WSF_ADDRESSING_VERSION_1_0 "1.0"
#define WSF_ADDRESSING_SUBMISSION "submission"

/** SOAP Constants */

#define WSF_SOAP_VERSION_1_1 "1.1"
#define WSF_SOAP_VERSION_1_2 "1.2"

/** module names */
#define WSF_MODULE_ADDRESSING "addressing"
#define WSF_MODULE_SECURITY   "rampart"
#define WSF_MODULE_RM         "sandesha2"

#define WSF_SVC_INFO "WSFPHPSvcInfo"

#define WSF_REQ_INFO "WSFPHPRequestInfo"

#define WSF_MAGIC_FUNC_CALL "__call"

/** HTTP Methods */
#define WSF_HTTP_POST "POST"
#define WSF_HTTP_GET  "GET"
#define WSF_WSDL "wsdl"
#define WSF_WSDL2 "wsdl2"
#define WSF_LOCALHOST "localhost"
#define WSF_PROTOCOL_HTTP "HTTP"

#define WSF_WSDL_1_1 "wsdl1.1"
#define WSF_WSDL_2_0 "wsdl2.0"

#define WSF_STYLE_DOCLIT "doclit"
#define WSF_WSDL_GENERATION_FUNCTION "ws_generate_wsdl"
#define WSF_SCRIPT_FILENAME "wsf.php"


typedef struct wsf_svc_info
{

  axis2_svc_t *svc;
  
  axis2_msg_recv_t *msg_recv;
  
  struct wsf_worker_t *php_worker;
  
  axutil_hash_t *ops_to_actions;

  axutil_hash_t *ops_to_functions;
  
  axutil_array_list_t *modules_to_engage;
  
  axutil_hash_t *ops_to_classes;
  
  zval *class_args;
  
  HashTable *ht_op_params;
  
  int request_xop;
 
  int use_mtom;

  int enable_swa;
  
  zval *policy;
  
  zval *security_token;
  
  char *svc_name;

  char *port_name;

  int generated_svc_name;

  char *sig_model_string;

  zval *class_map;

  zval *wsdl_gen_class_map;

  zval *wsdl_gen_annotations;

  char *wsdl;

  /**http://<domain>/<..*.php>/<loc_str>/ */
  char *loc_str;	


}
wsf_svc_info_t;


typedef struct wsf_request_info
{
    long svr_port;
    char *svr_name;
    char *http_protocol;
	char *accept;
	char *accept_language;
	char *accept_encoding;
	char *accept_charset;

	char *remote_address;
    char *soap_action;
    char *request_uri;
    char *query_string;
    long content_length;
    char *content_type;
    char *request_method;
    void *request_data;
    int request_data_length;
    
	char *transfer_encoding;
	
	/** REST parameter count */
	int param_count;
	/** parameters array */
	char ***params;
} wsf_request_info_t;

typedef struct wsf_response_info
{
	void *response_data;
	int  response_length;
	char *http_protocol;
	int  http_status_code;
	char *http_status_code_name;
	char *content_type;
}wsf_response_info_t;

/** functions */

#endif /* WS_COMMON_H */
