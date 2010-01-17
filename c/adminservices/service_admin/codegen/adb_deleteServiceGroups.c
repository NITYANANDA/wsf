

        /**
         * adb_deleteServiceGroups.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_deleteServiceGroups.h"
        
               /*
                * implmentation of the deleteServiceGroups|http://org.apache.axis2/xsd element
                */
           


        struct adb_deleteServiceGroups
        {
            axis2_char_t *property_Type;

            
                axutil_qname_t* qname;
            axutil_array_list_t* property_serviceGroups;

                
                axis2_bool_t is_valid_serviceGroups;
            
        };


       /************************* Private Function prototypes ********************************/
        


       /************************* Function Implmentations ********************************/
        adb_deleteServiceGroups_t* AXIS2_CALL
        adb_deleteServiceGroups_create(
            const axutil_env_t *env)
        {
            adb_deleteServiceGroups_t *_deleteServiceGroups = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _deleteServiceGroups = (adb_deleteServiceGroups_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_deleteServiceGroups_t));

            if(NULL == _deleteServiceGroups)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_deleteServiceGroups, 0, sizeof(adb_deleteServiceGroups_t));

            _deleteServiceGroups->property_Type = axutil_strdup(env, "adb_deleteServiceGroups");
            _deleteServiceGroups->property_serviceGroups  = NULL;
                  _deleteServiceGroups->is_valid_serviceGroups  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "deleteServiceGroups",
                        "http://org.apache.axis2/xsd",
                        NULL);
                _deleteServiceGroups->qname = qname;
            

            return _deleteServiceGroups;
        }

        adb_deleteServiceGroups_t* AXIS2_CALL
        adb_deleteServiceGroups_create_with_values(
            const axutil_env_t *env,
                axutil_array_list_t* _serviceGroups)
        {
            adb_deleteServiceGroups_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_deleteServiceGroups_create(env);

            
              status = adb_deleteServiceGroups_set_serviceGroups(
                                     adb_obj,
                                     env,
                                     _serviceGroups);
              if(status == AXIS2_FAILURE) {
                  adb_deleteServiceGroups_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axutil_array_list_t* AXIS2_CALL
                adb_deleteServiceGroups_free_popping_value(
                        adb_deleteServiceGroups_t* _deleteServiceGroups,
                        const axutil_env_t *env)
                {
                    axutil_array_list_t* value;

                    
                    
                    value = _deleteServiceGroups->property_serviceGroups;

                    _deleteServiceGroups->property_serviceGroups = (axutil_array_list_t*)NULL;
                    adb_deleteServiceGroups_free(_deleteServiceGroups, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_deleteServiceGroups_free(
                adb_deleteServiceGroups_t* _deleteServiceGroups,
                const axutil_env_t *env)
        {
            
            
            return adb_deleteServiceGroups_free_obj(
                _deleteServiceGroups,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_deleteServiceGroups_free_obj(
                adb_deleteServiceGroups_t* _deleteServiceGroups,
                const axutil_env_t *env)
        {
            
                int i = 0;
                int count = 0;
                void *element = NULL;
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _deleteServiceGroups, AXIS2_FAILURE);

            if (_deleteServiceGroups->property_Type != NULL)
            {
              AXIS2_FREE(env->allocator, _deleteServiceGroups->property_Type);
            }

            adb_deleteServiceGroups_reset_serviceGroups(_deleteServiceGroups, env);
            
              if(_deleteServiceGroups->qname)
              {
                  axutil_qname_free (_deleteServiceGroups->qname, env);
                  _deleteServiceGroups->qname = NULL;
              }
            

            if(_deleteServiceGroups)
            {
                AXIS2_FREE(env->allocator, _deleteServiceGroups);
                _deleteServiceGroups = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_deleteServiceGroups_deserialize(
                adb_deleteServiceGroups_t* _deleteServiceGroups,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_deleteServiceGroups_deserialize_obj(
                _deleteServiceGroups,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_deleteServiceGroups_deserialize_obj(
                adb_deleteServiceGroups_t* _deleteServiceGroups,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
           
             const axis2_char_t* text_value = NULL;
             axutil_qname_t *qname = NULL;
          
               int i = 0;
               axutil_array_list_t *arr_list = NULL;
            
               int sequence_broken = 0;
               axiom_node_t *tmp_node = NULL;
            
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _deleteServiceGroups, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for deleteServiceGroups : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              

                    current_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                    qname = axiom_element_get_qname(current_element, env, parent);
                    if (axutil_qname_equals(qname, env, _deleteServiceGroups-> qname))
                    {
                        
                          first_node = axiom_node_get_first_child(parent, env);
                          
                    }
                    else
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                              "Failed in building adb object for deleteServiceGroups : "
                              "Expected %s but returned %s",
                              axutil_qname_to_string(_deleteServiceGroups-> qname, env),
                              axutil_qname_to_string(qname, env));
                        
                        return AXIS2_FAILURE;
                    }
                    
                    /*
                     * building serviceGroups array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building serviceGroups element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "serviceGroups", "http://org.apache.axis2/xsd", NULL);
                                  
                               
                               for (i = 0, sequence_broken = 0, current_node = first_node; !sequence_broken && current_node != NULL;) 
                                             
                               {
                                  if(axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                  {
                                     current_node =axiom_node_get_next_sibling(current_node, env);
                                     is_early_node_valid = AXIS2_FALSE;
                                     continue;
                                  }
                                  
                                  current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                  qname = axiom_element_get_qname(current_element, env, current_node);

                                  if ( 
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          text_value = axiom_element_get_text(current_element, env, current_node);
                                          if(text_value != NULL)
                                          {
                                              axutil_array_list_add_at(arr_list, env, i, axutil_strdup(env, text_value));
                                          }
                                          
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for serviceGroups ");
                                         if(element_qname)
                                         {
                                            axutil_qname_free(element_qname, env);
                                         }
                                         if(arr_list)
                                         {
                                            axutil_array_list_free(arr_list, env);
                                         }
                                         return AXIS2_FAILURE;
                                     }

                                     i ++;
                                    current_node = axiom_node_get_next_sibling(current_node, env);
                                  }
                                  else
                                  {
                                      is_early_node_valid = AXIS2_FALSE;
                                      sequence_broken = 1;
                                  }
                                  
                               }

                               
                                   if (i < 0)
                                   {
                                     /* found element out of order */
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "serviceGroups (@minOccurs = '0') only have %d elements", i);
                                     if(element_qname)
                                     {
                                        axutil_qname_free(element_qname, env);
                                     }
                                     if(arr_list)
                                     {
                                        axutil_array_list_free(arr_list, env);
                                     }
                                     return AXIS2_FAILURE;
                                   }
                               

                               if(0 == axutil_array_list_size(arr_list,env))
                               {
                                    axutil_array_list_free(arr_list, env);
                               }
                               else
                               {
                                    status = adb_deleteServiceGroups_set_serviceGroups(_deleteServiceGroups, env,
                                                                   arr_list);
                               }

                             
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_deleteServiceGroups_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_deleteServiceGroups_declare_parent_namespaces(
                    adb_deleteServiceGroups_t* _deleteServiceGroups,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_deleteServiceGroups_serialize(
                adb_deleteServiceGroups_t* _deleteServiceGroups,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_deleteServiceGroups_serialize_obj(
                    _deleteServiceGroups, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_deleteServiceGroups_serialize_obj(
                adb_deleteServiceGroups_t* _deleteServiceGroups,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
         
         axiom_node_t* current_node = NULL;
         int tag_closed = 0;
         
                axiom_namespace_t *ns1 = NULL;

                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                axis2_char_t *p_prefix = NULL;
                axis2_bool_t ns_already_defined;
            
               int i = 0;
               int count = 0;
               void *element = NULL;
             
                    axis2_char_t *text_value_1;
                    axis2_char_t *text_value_1_temp;
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

             
                int next_ns_index_value = 0;
            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _deleteServiceGroups, NULL);
            
             
                    namespaces = axutil_hash_make(env);
                    next_ns_index = &next_ns_index_value;
                     
                           ns1 = axiom_namespace_create (env,
                                             "http://org.apache.axis2/xsd",
                                             "n"); 
                           axutil_hash_set(namespaces, "http://org.apache.axis2/xsd", AXIS2_HASH_KEY_STRING, axutil_strdup(env, "n"));
                       
                     
                    parent_element = axiom_element_create (env, NULL, "deleteServiceGroups", ns1 , &parent);
                    
                    
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
                      

                   if (!_deleteServiceGroups->is_valid_serviceGroups)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("serviceGroups"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("serviceGroups")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing serviceGroups array
                      */
                     if (_deleteServiceGroups->property_serviceGroups != NULL)
                     {
                        
                            sprintf(start_input_str, "<%s%sserviceGroups>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%sserviceGroups>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_deleteServiceGroups->property_serviceGroups, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_deleteServiceGroups->property_serviceGroups, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing serviceGroups element
                      */

                    
                    
                           text_value_1 = (axis2_char_t*)element;
                           
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
                           
                         }
                     }
                   
                     
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
             * Getter for serviceGroups by  Property Number 1
             */
            axutil_array_list_t* AXIS2_CALL
            adb_deleteServiceGroups_get_property1(
                adb_deleteServiceGroups_t* _deleteServiceGroups,
                const axutil_env_t *env)
            {
                return adb_deleteServiceGroups_get_serviceGroups(_deleteServiceGroups,
                                             env);
            }

            /**
             * getter for serviceGroups.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_deleteServiceGroups_get_serviceGroups(
                    adb_deleteServiceGroups_t* _deleteServiceGroups,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _deleteServiceGroups, NULL);
                  

                return _deleteServiceGroups->property_serviceGroups;
             }

            /**
             * setter for serviceGroups
             */
            axis2_status_t AXIS2_CALL
            adb_deleteServiceGroups_set_serviceGroups(
                    adb_deleteServiceGroups_t* _deleteServiceGroups,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_serviceGroups)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _deleteServiceGroups, AXIS2_FAILURE);
                
                if(_deleteServiceGroups->is_valid_serviceGroups &&
                        arg_serviceGroups == _deleteServiceGroups->property_serviceGroups)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_serviceGroups, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "serviceGroups has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_serviceGroups, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_deleteServiceGroups_reset_serviceGroups(_deleteServiceGroups, env);

                
                if(NULL == arg_serviceGroups)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _deleteServiceGroups->property_serviceGroups = arg_serviceGroups;
                        if(non_nil_exists)
                        {
                            _deleteServiceGroups->is_valid_serviceGroups = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of serviceGroups.
             */
            axis2_char_t* AXIS2_CALL
            adb_deleteServiceGroups_get_serviceGroups_at(
                    adb_deleteServiceGroups_t* _deleteServiceGroups,
                    const axutil_env_t *env, int i)
            {
                axis2_char_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _deleteServiceGroups, NULL);
                  

                if(_deleteServiceGroups->property_serviceGroups == NULL)
                {
                    return (axis2_char_t*)0;
                }
                ret_val = (axis2_char_t*)axutil_array_list_get(_deleteServiceGroups->property_serviceGroups, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of serviceGroups.
             */
            axis2_status_t AXIS2_CALL
            adb_deleteServiceGroups_set_serviceGroups_at(
                    adb_deleteServiceGroups_t* _deleteServiceGroups,
                    const axutil_env_t *env, int i,
                    const axis2_char_t* arg_serviceGroups)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _deleteServiceGroups, AXIS2_FAILURE);
                
                if( _deleteServiceGroups->is_valid_serviceGroups &&
                    _deleteServiceGroups->property_serviceGroups &&
                
                    arg_serviceGroups == (axis2_char_t*)axutil_array_list_get(_deleteServiceGroups->property_serviceGroups, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_serviceGroups)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_deleteServiceGroups->property_serviceGroups != NULL)
                        {
                            size = axutil_array_list_size(_deleteServiceGroups->property_serviceGroups, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_deleteServiceGroups->property_serviceGroups, env, i))
                                {
                                    non_nil_count ++;
                                    non_nil_exists = AXIS2_TRUE;
                                    if(non_nil_count >= 0)
                                    {
                                        break;
                                    }
                                }
                            }

                        
                        }
                    }
                  

                if(_deleteServiceGroups->property_serviceGroups == NULL)
                {
                    _deleteServiceGroups->property_serviceGroups = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_deleteServiceGroups->property_serviceGroups, env, i);
                if(NULL != element)
                {
                  
                  
                  
                       /* This is an unknown type or a primitive. Please free this manually*/
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _deleteServiceGroups->is_valid_serviceGroups = AXIS2_FALSE;
                        axutil_array_list_set(_deleteServiceGroups->property_serviceGroups , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_deleteServiceGroups->property_serviceGroups , env, i, axutil_strdup(env, arg_serviceGroups));
                  _deleteServiceGroups->is_valid_serviceGroups = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to serviceGroups.
             */
            axis2_status_t AXIS2_CALL
            adb_deleteServiceGroups_add_serviceGroups(
                    adb_deleteServiceGroups_t* _deleteServiceGroups,
                    const axutil_env_t *env,
                    const axis2_char_t* arg_serviceGroups)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _deleteServiceGroups, AXIS2_FAILURE);

                
                    if(NULL == arg_serviceGroups)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_deleteServiceGroups->property_serviceGroups == NULL)
                {
                    _deleteServiceGroups->property_serviceGroups = axutil_array_list_create(env, 10);
                }
                if(_deleteServiceGroups->property_serviceGroups == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for serviceGroups");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_deleteServiceGroups->property_serviceGroups , env, axutil_strdup(env, arg_serviceGroups));
                  _deleteServiceGroups->is_valid_serviceGroups = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the serviceGroups array.
             */
            int AXIS2_CALL
            adb_deleteServiceGroups_sizeof_serviceGroups(
                    adb_deleteServiceGroups_t* _deleteServiceGroups,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _deleteServiceGroups, -1);
                if(_deleteServiceGroups->property_serviceGroups == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_deleteServiceGroups->property_serviceGroups, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_deleteServiceGroups_remove_serviceGroups_at(
                    adb_deleteServiceGroups_t* _deleteServiceGroups,
                    const axutil_env_t *env, int i)
            {
                return adb_deleteServiceGroups_set_serviceGroups_nil_at(_deleteServiceGroups, env, i);
            }

            

           /**
            * resetter for serviceGroups
            */
           axis2_status_t AXIS2_CALL
           adb_deleteServiceGroups_reset_serviceGroups(
                   adb_deleteServiceGroups_t* _deleteServiceGroups,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _deleteServiceGroups, AXIS2_FAILURE);
               

               
                  if (_deleteServiceGroups->property_serviceGroups != NULL)
                  {
                      count = axutil_array_list_size(_deleteServiceGroups->property_serviceGroups, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_deleteServiceGroups->property_serviceGroups, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, (axis2_char_t*)element);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_deleteServiceGroups->property_serviceGroups, env);
                  }
                _deleteServiceGroups->is_valid_serviceGroups = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether serviceGroups is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_deleteServiceGroups_is_serviceGroups_nil(
                   adb_deleteServiceGroups_t* _deleteServiceGroups,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _deleteServiceGroups, AXIS2_TRUE);
               
               return !_deleteServiceGroups->is_valid_serviceGroups;
           }

           /**
            * Set serviceGroups to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_deleteServiceGroups_set_serviceGroups_nil(
                   adb_deleteServiceGroups_t* _deleteServiceGroups,
                   const axutil_env_t *env)
           {
               return adb_deleteServiceGroups_reset_serviceGroups(_deleteServiceGroups, env);
           }

           
           /**
            * Check whether serviceGroups is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_deleteServiceGroups_is_serviceGroups_nil_at(
                   adb_deleteServiceGroups_t* _deleteServiceGroups,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _deleteServiceGroups, AXIS2_TRUE);
               
               return (_deleteServiceGroups->is_valid_serviceGroups == AXIS2_FALSE ||
                        NULL == _deleteServiceGroups->property_serviceGroups || 
                        NULL == axutil_array_list_get(_deleteServiceGroups->property_serviceGroups, env, i));
           }

           /**
            * Set serviceGroups to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_deleteServiceGroups_set_serviceGroups_nil_at(
                   adb_deleteServiceGroups_t* _deleteServiceGroups,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _deleteServiceGroups, AXIS2_FAILURE);

                if(_deleteServiceGroups->property_serviceGroups == NULL ||
                            _deleteServiceGroups->is_valid_serviceGroups == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_deleteServiceGroups->property_serviceGroups, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_deleteServiceGroups->property_serviceGroups, env, i))
                        {
                            k ++;
                            non_nil_exists = AXIS2_TRUE;
                            if( k >= 0)
                            {
                                break;
                            }
                        }
                    }
                }
                

                if( k < 0)
                {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of serviceGroups is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_deleteServiceGroups->property_serviceGroups == NULL)
                {
                    _deleteServiceGroups->is_valid_serviceGroups = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_deleteServiceGroups->property_serviceGroups, env, i);
                if(NULL != element)
                {
                  
                  
                  
                       /* This is an unknown type or a primitive. Please free this manually*/
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _deleteServiceGroups->is_valid_serviceGroups = AXIS2_FALSE;
                        axutil_array_list_set(_deleteServiceGroups->property_serviceGroups , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_deleteServiceGroups->property_serviceGroups , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

