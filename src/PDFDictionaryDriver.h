/*
 Source File : PDFDictionaryDriver.h
 
 
 Copyright 2013 Gal Kahana HummusJS
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 
 */
#pragma once

#include <node.h>
#include "PDFObjectDriver.h"
#include "PDFObjectCast.h"
#include "PDFDictionary.h"

class PDFDictionaryDriver : public PDFObjectDriver
{
public:
    static void Init();
    static v8::Handle<v8::Value> NewInstance();
    static bool HasInstance(v8::Handle<v8::Value> inObject);
    
    PDFObjectCastPtr<PDFDictionary> TheObject;
    
    virtual PDFObject* GetObject();
private:
    
    
    static v8::Persistent<v8::Function> constructor;
    static v8::Persistent<v8::FunctionTemplate> constructor_template;
    static v8::Handle<v8::Value> New(const v8::Arguments& args);
    static v8::Handle<v8::Value> ToJSObject(const v8::Arguments& args);
    static v8::Handle<v8::Value> QueryObject(const v8::Arguments& args);
    static v8::Handle<v8::Value> Exists(const v8::Arguments& args);
};