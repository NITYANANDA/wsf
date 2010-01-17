

        /**
         * adb_setBindingOperationPolicy.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_setBindingOperationPolicy.h"
        
               /*
                * implmentation of the setBindingOperationPolicy|http://org.apache.axis2/xsd element
                */
           


        struct adb_setBindingOperationPolicy
        {
            axis2_char_t *property_Type;

            
                axutil_qname_t* qname;
            axis2_char_t* property_serviceName;

                
                axis2_bool_t is_valid_serviceName;
            axis2_char_t* property_bindingName;

                
                axis2_bool_t is_valid_bindingName;
            axis2_char_t* property_operationName;

                
                axis2_bool_t is_valid_operationName;
            axis2_char_t* property_policyString;

                
                axis2_bool_t is_valid_policyString;
            
        };


       /************************* Private Function prototypes ********************************/
        


       /************************* Function Implmentations ********************************/
        adb_setBindingOperationPolicy_t* AXIS2_CALL
        adb_setBindingOperationPolicy_create(
            const axutil_env_t *env)
        {
            adb_setBindingOperationPolicy_t *_setBindingOperationPolicy = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _setBindingOperationPolicy = (adb_setBindingOperationPolicy_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_setBindingOperationPolicy_t));

            if(NULL == _setBindingOperationPolicy)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_setBindingOperationPolicy, 0, sizeof(adb_setBindingOperationPolicy_t));

            _setBindingOperationPolicy->property_Type = axutil_strdup(env, "adb_setBindingOperationPolicy");
            _setBindingOperationPolicy->property_serviceName  = NULL;
                  _setBindingOperationPolicy->is_valid_serviceName  = AXIS2_FALSE;
            _setBindingOperationPolicy->property_bindingName  = NULL;
                  _setBindingOperationPolicy->is_valid_bindingName  = AXIS2_FALSE;
            _setBindingOperationPolicy->property_operationName  = NULL;
                  _setBindingOperationPolicy->is_valid_operationName  = AXIS2_FALSE;
            _setBindingOperationPolicy->property_policyString  = NULL;
                  _setBindingOperationPolicy->is_valid_policyString  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "setBindingOperationPolicy",
                        "http://org.apache.axis2/xsd",
                        NULL);
                _setBindingOperationPolicy->qname = qname;
            

            return _setBindingOperationPolicy;
        }

        adb_setBindingOperationPolicy_t* AXIS2_CALL
        adb_setBindingOperationPolicy_create_with_values(
            const axutil_env_t *env,
                axis2_char_t* _serviceName,
                axis2_char_t* _bindingName,
                axis2_char_t* _operationName,
                axis2_char_t* _policyString)
        {
            adb_setBindingOperationPolicy_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_setBindingOperationPolicy_create(env);

            
              status = adb_setBindingOperationPolicy_set_serviceName(
                                     adb_obj,
                                     env,
                                     _serviceName);
              if(status == AXIS2_FAILURE) {
                  adb_setBindingOperationPolicy_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_setBindingOperationPolicy_set_bindingName(
                                     adb_obj,
                                     env,
                                     _bindingName);
              if(status == AXIS2_FAILURE) {
                  adb_setBindingOperationPolicy_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_setBindingOperationPolicy_set_operationName(
                                     adb_obj,
                                     env,
                                     _operationName);
              if(status == AXIS2_FAILURE) {
                  adb_setBindingOperationPolicy_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_setBindingOperationPolicy_set_policyString(
                                     adb_obj,
                                     env,
                                     _policyString);
              if(status == AXIS2_FAILURE) {
                  adb_setBindingOperationPolicy_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axis2_char_t* AXIS2_CALL
                adb_setBindingOperationPolicy_free_popping_value(
                        adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                        const axutil_env_t *env)
                {
                    axis2_char_t* value;

                    
                    
                    value = _setBindingOperationPolicy->property_serviceName;

                    _setBindingOperationPolicy->property_serviceName = (axis2_char_t*)NULL;
                    adb_setBindingOperationPolicy_free(_setBindingOperationPolicy, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_setBindingOperationPolicy_free(
                adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                const axutil_env_t *env)
        {
            
            
            return adb_setBindingOperationPolicy_free_obj(
                _setBindingOperationPolicy,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_setBindingOperationPolicy_free_obj(
                adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _setBindingOperationPolicy, AXIS2_FAILURE);

            if (_setBindingOperationPolicy->property_Type != NULL)
            {
              AXIS2_FREE(env->allocator, _setBindingOperationPolicy->property_Type);
            }

            adb_setBindingOperationPolicy_reset_serviceName(_setBindingOperationPolicy, env);
            adb_setBindingOperationPolicy_reset_bindingName(_setBindingOperationPolicy, env);
            adb_setBindingOperationPolicy_reset_operationName(_setBindingOperationPolicy, env);
            adb_setBindingOperationPolicy_reset_policyString(_setBindingOperationPolicy, env);
            
              if(_setBindingOperationPolicy->qname)
              {
                  axutil_qname_free (_setBindingOperationPolicy->qname, env);
                  _setBindingOperationPolicy->qname = NULL;
              }
            

            if(_setBindingOperationPolicy)
            {
                AXIS2_FREE(env->allocator, _setBindingOperationPolicy);
                _setBindingOperationPolicy = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_setBindingOperationPolicy_deserialize(
                adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_setBindingOperationPolicy_deserialize_obj(
                _setBindingOperationPolicy,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_setBindingOperationPolicy_deserialize_obj(
                adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
           
             const axis2_char_t* text_value = NULL;
             axutil_qname_t *qname = NULL;
          
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _setBindingOperationPolicy, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for setBindingOperationPolicy : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              

                    current_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                    qname = axiom_element_get_qname(current_element, env, parent);
                    if (axutil_qname_equals(qname, env, _setBindingOperationPolicy-> qname))
                    {
                        
                          first_node = axiom_node_get_first_child(parent, env);
                          
                    }
                    else
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                              "Failed in building adb object for setBindingOperationPolicy : "
                              "Expected %s but returned %s",
                              axutil_qname_to_string(_setBindingOperationPolicy-> qname, env),
                              axutil_qname_to_string(qname, env));
                        
                        return AXIS2_FAILURE;
                    }
                    

                     
                     /*
                      * building serviceName element
                      */
                     
                     
                     
                                   current_node = first_node;
                                   is_early_node_valid = AXIS2_FALSE;
                                   
                                   
                                    while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                    {
                                        current_node = axiom_node_get_next_sibling(current_node, env);
                                    }
                                    if(current_node != NULL)
                                    {
                                        current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                        qname = axiom_element_get_qname(current_element, env, current_node);
                                    }
                                   
                                 element_qname = axutil_qname_create(env, "serviceName", "http://org.apache.axis2/xsd", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_setBindingOperationPolicy_set_serviceName(_setBindingOperationPolicy, env,
                                                               text_value);
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for serviceName ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building bindingName element
                      */
                     
                     
                     
                                    /*
                                     * because elements are ordered this works fine
                                     */
                                  
                                   
                                   if(current_node != NULL && is_early_node_valid)
                                   {
                                       current_node = axiom_node_get_next_sibling(current_node, env);
                                       
                                       
                                        while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                        {
                                            current_node = axiom_node_get_next_sibling(current_node, env);
                                        }
                                        if(current_node != NULL)
                                        {
                                            current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                            qname = axiom_element_get_qname(current_element, env, current_node);
                                        }
                                       
                                   }
                                   is_early_node_valid = AXIS2_FALSE;
                                 
                                 element_qname = axutil_qname_create(env, "bindingName", "http://org.apache.axis2/xsd", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_setBindingOperationPolicy_set_bindingName(_setBindingOperationPolicy, env,
                                                               text_value);
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for bindingName ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building operationName element
                      */
                     
                     
                     
                                    /*
                                     * because elements are ordered this works fine
                                     */
                                  
                                   
                                   if(current_node != NULL && is_early_node_valid)
                                   {
                                       current_node = axiom_node_get_next_sibling(current_node, env);
                                       
                                       
                                        while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                        {
                                            current_node = axiom_node_get_next_sibling(current_node, env);
                                        }
                                        if(current_node != NULL)
                                        {
                                            current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                            qname = axiom_element_get_qname(current_element, env, current_node);
                                        }
                                       
                                   }
                                   is_early_node_valid = AXIS2_FALSE;
                                 
                                 element_qname = axutil_qname_create(env, "operationName", "http://org.apache.axis2/xsd", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_setBindingOperationPolicy_set_operationName(_setBindingOperationPolicy, env,
                                                               text_value);
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for operationName ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building policyString element
                      */
                     
                     
                     
                                    /*
                                     * because elements are ordered this works fine
                                     */
                                  
                                   
                                   if(current_node != NULL && is_early_node_valid)
                                   {
                                       current_node = axiom_node_get_next_sibling(current_node, env);
                                       
                                       
                                        while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                        {
                                            current_node = axiom_node_get_next_sibling(current_node, env);
                                        }
                                        if(current_node != NULL)
                                        {
                                            current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                            qname = axiom_element_get_qname(current_element, env, current_node);
                                        }
                                       
                                   }
                                   is_early_node_valid = AXIS2_FALSE;
                                 
                                 element_qname = axutil_qname_create(env, "policyString", "http://org.apache.axis2/xsd", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_setBindingOperationPolicy_set_policyString(_setBindingOperationPolicy, env,
                                                               text_value);
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for policyString ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_setBindingOperationPolicy_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_setBindingOperationPolicy_declare_parent_namespaces(
                    adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_setBindingOperationPolicy_serialize(
                adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_setBindingOperationPolicy_serialize_obj(
                    _setBindingOperationPolicy, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_setBindingOperationPolicy_serialize_obj(
                adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
         
         axiom_node_t* current_node = NULL;
         int tag_closed = 0;
         
                axiom_namespace_t *ns1 = NULL;

                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                axis2_char_t *p_prefix = NULL;
                axis2_bool_t ns_already_defined;
            
                    axis2_char_t *text_value_1;
                    axis2_char_t *text_value_1_temp;
                    
                    axis2_char_t *text_value_2;
                    axis2_char_t *text_value_2_temp;
                    
                    axis2_char_t *text_value_3;
                    axis2_char_t *text_value_3_temp;
                    
                    axis2_char_t *text_value_4;
                    axis2_char_t *text_value_4_temp;
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

             
                int next_ns_index_value = 0;
            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _setBindingOperationPolicy, NULL);
            
             
                    namespaces = axutil_hash_make(env);
                    next_ns_index = &next_ns_index_value;
                     
                           ns1 = axiom_namespace_create (env,
                                             "http://org.apache.axis2/xsd",
                                             "n"); 
                           axutil_hash_set(namespaces, "http://org.apache.axis2/xsd", AXIS2_HASH_KEY_STRING, axutil_strdup(env, "n"));
                       
                     
                    parent_element = axiom_element_create (env, NULL, "setBindingOperationPolicy", ns1 , &parent);
                    
                    
                    axiom_element_set_namespace(parent_element, env, ns1, parent);


            
                    data_source = axiom_data_source_create(env, parent, &current_node);
                    stream = axiom_data_source_get_stream(data_source, env);
                  
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://org.apache.axis2/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://org.apache.axis2/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://org.apache.axis2/xsd",
                                            p_prefix));
                       }
                      

                   if (!_setBindingOperationPolicy->is_valid_serviceName)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("serviceName"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("serviceName")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing serviceName element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sserviceName>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sserviceName>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_1 = _setBindingOperationPolicy->property_serviceName;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_1_temp = axutil_xml_quote_string(env, text_value_1, AXIS2_TRUE);
                           if (text_value_1_temp)
                           {
                               axutil_stream_write(stream, env, text_value_1_temp, axutil_strlen(text_value_1_temp));
                               AXIS2_FREE(env->allocator, text_value_1_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_1, axutil_strlen(text_value_1));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://org.apache.axis2/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://org.apache.axis2/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://org.apache.axis2/xsd",
                                            p_prefix));
                       }
                      

                   if (!_setBindingOperationPolicy->is_valid_bindingName)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("bindingName"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("bindingName")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing bindingName element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sbindingName>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sbindingName>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_2 = _setBindingOperationPolicy->property_bindingName;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_2_temp = axutil_xml_quote_string(env, text_value_2, AXIS2_TRUE);
                           if (text_value_2_temp)
                           {
                               axutil_stream_write(stream, env, text_value_2_temp, axutil_strlen(text_value_2_temp));
                               AXIS2_FREE(env->allocator, text_value_2_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_2, axutil_strlen(text_value_2));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://org.apache.axis2/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://org.apache.axis2/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://org.apache.axis2/xsd",
                                            p_prefix));
                       }
                      

                   if (!_setBindingOperationPolicy->is_valid_operationName)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("operationName"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("operationName")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing operationName element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%soperationName>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%soperationName>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_3 = _setBindingOperationPolicy->property_operationName;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_3_temp = axutil_xml_quote_string(env, text_value_3, AXIS2_TRUE);
                           if (text_value_3_temp)
                           {
                               axutil_stream_write(stream, env, text_value_3_temp, axutil_strlen(text_value_3_temp));
                               AXIS2_FREE(env->allocator, text_value_3_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_3, axutil_strlen(text_value_3));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://org.apache.axis2/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://org.apache.axis2/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://org.apache.axis2/xsd",
                                            p_prefix));
                       }
                      

                   if (!_setBindingOperationPolicy->is_valid_policyString)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("policyString"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("policyString")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing policyString element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%spolicyString>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%spolicyString>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_4 = _setBindingOperationPolicy->property_policyString;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_4_temp = axutil_xml_quote_string(env, text_value_4, AXIS2_TRUE);
                           if (text_value_4_temp)
                           {
                               axutil_stream_write(stream, env, text_value_4_temp, axutil_strlen(text_value_4_temp));
                               AXIS2_FREE(env->allocator, text_value_4_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_4, axutil_strlen(text_value_4));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                   if(namespaces)
                   {
                       axutil_hash_index_t *hi;
                       void *val;
                       for (hi = axutil_hash_first(namespaces, env); hi; hi = axutil_hash_next(env, hi)) 
                       {
                           axutil_hash_this(hi, NULL, NULL, &val);
                           AXIS2_FREE(env->allocator, val);
                       }
                       axutil_hash_free(namespaces, env);
                   }
                

            return parent;
        }


        

            /**
             * Getter for serviceName by  Property Number 1
             */
            axis2_char_t* AXIS2_CALL
            adb_setBindingOperationPolicy_get_property1(
                adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                const axutil_env_t *env)
            {
                return adb_setBindingOperationPolicy_get_serviceName(_setBindingOperationPolicy,
                                             env);
            }

            /**
             * getter for serviceName.
             */
            axis2_char_t* AXIS2_CALL
            adb_setBindingOperationPolicy_get_serviceName(
                    adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _setBindingOperationPolicy, NULL);
                  

                return _setBindingOperationPolicy->property_serviceName;
             }

            /**
             * setter for serviceName
             */
            axis2_status_t AXIS2_CALL
            adb_setBindingOperationPolicy_set_serviceName(
                    adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_serviceName)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _setBindingOperationPolicy, AXIS2_FAILURE);
                
                if(_setBindingOperationPolicy->is_valid_serviceName &&
                        arg_serviceName == _setBindingOperationPolicy->property_serviceName)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_setBindingOperationPolicy_reset_serviceName(_setBindingOperationPolicy, env);

                
                if(NULL == arg_serviceName)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _setBindingOperationPolicy->property_serviceName = (axis2_char_t *)axutil_strdup(env, arg_serviceName);
                        if(NULL == _setBindingOperationPolicy->property_serviceName)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for serviceName");
                            return AXIS2_FAILURE;
                        }
                        _setBindingOperationPolicy->is_valid_serviceName = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for serviceName
            */
           axis2_status_t AXIS2_CALL
           adb_setBindingOperationPolicy_reset_serviceName(
                   adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _setBindingOperationPolicy, AXIS2_FAILURE);
               

               
            
                
                if(_setBindingOperationPolicy->property_serviceName != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _setBindingOperationPolicy->property_serviceName);
                     _setBindingOperationPolicy->property_serviceName = NULL;
                }
            
                
                
                _setBindingOperationPolicy->is_valid_serviceName = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether serviceName is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_setBindingOperationPolicy_is_serviceName_nil(
                   adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _setBindingOperationPolicy, AXIS2_TRUE);
               
               return !_setBindingOperationPolicy->is_valid_serviceName;
           }

           /**
            * Set serviceName to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_setBindingOperationPolicy_set_serviceName_nil(
                   adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                   const axutil_env_t *env)
           {
               return adb_setBindingOperationPolicy_reset_serviceName(_setBindingOperationPolicy, env);
           }

           

            /**
             * Getter for bindingName by  Property Number 2
             */
            axis2_char_t* AXIS2_CALL
            adb_setBindingOperationPolicy_get_property2(
                adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                const axutil_env_t *env)
            {
                return adb_setBindingOperationPolicy_get_bindingName(_setBindingOperationPolicy,
                                             env);
            }

            /**
             * getter for bindingName.
             */
            axis2_char_t* AXIS2_CALL
            adb_setBindingOperationPolicy_get_bindingName(
                    adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _setBindingOperationPolicy, NULL);
                  

                return _setBindingOperationPolicy->property_bindingName;
             }

            /**
             * setter for bindingName
             */
            axis2_status_t AXIS2_CALL
            adb_setBindingOperationPolicy_set_bindingName(
                    adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_bindingName)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _setBindingOperationPolicy, AXIS2_FAILURE);
                
                if(_setBindingOperationPolicy->is_valid_bindingName &&
                        arg_bindingName == _setBindingOperationPolicy->property_bindingName)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_setBindingOperationPolicy_reset_bindingName(_setBindingOperationPolicy, env);

                
                if(NULL == arg_bindingName)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _setBindingOperationPolicy->property_bindingName = (axis2_char_t *)axutil_strdup(env, arg_bindingName);
                        if(NULL == _setBindingOperationPolicy->property_bindingName)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for bindingName");
                            return AXIS2_FAILURE;
                        }
                        _setBindingOperationPolicy->is_valid_bindingName = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for bindingName
            */
           axis2_status_t AXIS2_CALL
           adb_setBindingOperationPolicy_reset_bindingName(
                   adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _setBindingOperationPolicy, AXIS2_FAILURE);
               

               
            
                
                if(_setBindingOperationPolicy->property_bindingName != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _setBindingOperationPolicy->property_bindingName);
                     _setBindingOperationPolicy->property_bindingName = NULL;
                }
            
                
                
                _setBindingOperationPolicy->is_valid_bindingName = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether bindingName is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_setBindingOperationPolicy_is_bindingName_nil(
                   adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _setBindingOperationPolicy, AXIS2_TRUE);
               
               return !_setBindingOperationPolicy->is_valid_bindingName;
           }

           /**
            * Set bindingName to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_setBindingOperationPolicy_set_bindingName_nil(
                   adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                   const axutil_env_t *env)
           {
               return adb_setBindingOperationPolicy_reset_bindingName(_setBindingOperationPolicy, env);
           }

           

            /**
             * Getter for operationName by  Property Number 3
             */
            axis2_char_t* AXIS2_CALL
            adb_setBindingOperationPolicy_get_property3(
                adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                const axutil_env_t *env)
            {
                return adb_setBindingOperationPolicy_get_operationName(_setBindingOperationPolicy,
                                             env);
            }

            /**
             * getter for operationName.
             */
            axis2_char_t* AXIS2_CALL
            adb_setBindingOperationPolicy_get_operationName(
                    adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _setBindingOperationPolicy, NULL);
                  

                return _setBindingOperationPolicy->property_operationName;
             }

            /**
             * setter for operationName
             */
            axis2_status_t AXIS2_CALL
            adb_setBindingOperationPolicy_set_operationName(
                    adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_operationName)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _setBindingOperationPolicy, AXIS2_FAILURE);
                
                if(_setBindingOperationPolicy->is_valid_operationName &&
                        arg_operationName == _setBindingOperationPolicy->property_operationName)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_setBindingOperationPolicy_reset_operationName(_setBindingOperationPolicy, env);

                
                if(NULL == arg_operationName)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _setBindingOperationPolicy->property_operationName = (axis2_char_t *)axutil_strdup(env, arg_operationName);
                        if(NULL == _setBindingOperationPolicy->property_operationName)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for operationName");
                            return AXIS2_FAILURE;
                        }
                        _setBindingOperationPolicy->is_valid_operationName = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for operationName
            */
           axis2_status_t AXIS2_CALL
           adb_setBindingOperationPolicy_reset_operationName(
                   adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _setBindingOperationPolicy, AXIS2_FAILURE);
               

               
            
                
                if(_setBindingOperationPolicy->property_operationName != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _setBindingOperationPolicy->property_operationName);
                     _setBindingOperationPolicy->property_operationName = NULL;
                }
            
                
                
                _setBindingOperationPolicy->is_valid_operationName = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether operationName is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_setBindingOperationPolicy_is_operationName_nil(
                   adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _setBindingOperationPolicy, AXIS2_TRUE);
               
               return !_setBindingOperationPolicy->is_valid_operationName;
           }

           /**
            * Set operationName to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_setBindingOperationPolicy_set_operationName_nil(
                   adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                   const axutil_env_t *env)
           {
               return adb_setBindingOperationPolicy_reset_operationName(_setBindingOperationPolicy, env);
           }

           

            /**
             * Getter for policyString by  Property Number 4
             */
            axis2_char_t* AXIS2_CALL
            adb_setBindingOperationPolicy_get_property4(
                adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                const axutil_env_t *env)
            {
                return adb_setBindingOperationPolicy_get_policyString(_setBindingOperationPolicy,
                                             env);
            }

            /**
             * getter for policyString.
             */
            axis2_char_t* AXIS2_CALL
            adb_setBindingOperationPolicy_get_policyString(
                    adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _setBindingOperationPolicy, NULL);
                  

                return _setBindingOperationPolicy->property_policyString;
             }

            /**
             * setter for policyString
             */
            axis2_status_t AXIS2_CALL
            adb_setBindingOperationPolicy_set_policyString(
                    adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_policyString)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _setBindingOperationPolicy, AXIS2_FAILURE);
                
                if(_setBindingOperationPolicy->is_valid_policyString &&
                        arg_policyString == _setBindingOperationPolicy->property_policyString)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_setBindingOperationPolicy_reset_policyString(_setBindingOperationPolicy, env);

                
                if(NULL == arg_policyString)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _setBindingOperationPolicy->property_policyString = (axis2_char_t *)axutil_strdup(env, arg_policyString);
                        if(NULL == _setBindingOperationPolicy->property_policyString)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for policyString");
                            return AXIS2_FAILURE;
                        }
                        _setBindingOperationPolicy->is_valid_policyString = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for policyString
            */
           axis2_status_t AXIS2_CALL
           adb_setBindingOperationPolicy_reset_policyString(
                   adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _setBindingOperationPolicy, AXIS2_FAILURE);
               

               
            
                
                if(_setBindingOperationPolicy->property_policyString != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _setBindingOperationPolicy->property_policyString);
                     _setBindingOperationPolicy->property_policyString = NULL;
                }
            
                
                
                _setBindingOperationPolicy->is_valid_policyString = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether policyString is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_setBindingOperationPolicy_is_policyString_nil(
                   adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _setBindingOperationPolicy, AXIS2_TRUE);
               
               return !_setBindingOperationPolicy->is_valid_policyString;
           }

           /**
            * Set policyString to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_setBindingOperationPolicy_set_policyString_nil(
                   adb_setBindingOperationPolicy_t* _setBindingOperationPolicy,
                   const axutil_env_t *env)
           {
               return adb_setBindingOperationPolicy_reset_policyString(_setBindingOperationPolicy, env);
           }

           

