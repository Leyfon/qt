/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(PROGRESS_TAG)

#include "JSHTMLProgressElement.h"

#include "HTMLFormElement.h"
#include "HTMLProgressElement.h"
#include "JSHTMLFormElement.h"
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLProgressElement);

/* Hash table */

static const HashTableValue JSHTMLProgressElementTableValues[6] =
{
    { "value", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLProgressElementValue), (intptr_t)setJSHTMLProgressElementValue },
    { "max", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLProgressElementMax), (intptr_t)setJSHTMLProgressElementMax },
    { "position", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLProgressElementPosition), (intptr_t)0 },
    { "form", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLProgressElementForm), (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLProgressElementConstructor), (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLProgressElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 7, JSHTMLProgressElementTableValues, 0 };
#else
    { 16, 15, JSHTMLProgressElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSHTMLProgressElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLProgressElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLProgressElementConstructorTableValues, 0 };
#else
    { 1, 0, JSHTMLProgressElementConstructorTableValues, 0 };
#endif

class JSHTMLProgressElementConstructor : public DOMConstructorObject {
public:
    JSHTMLProgressElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSHTMLProgressElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSHTMLProgressElementPrototype::self(exec, globalObject), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual bool getOwnPropertyDescriptor(ExecState*, const Identifier&, PropertyDescriptor&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValue proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, StructureFlags), AnonymousSlotCount); 
    }
    
protected:
    static const unsigned StructureFlags = OverridesGetOwnPropertySlot | ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSHTMLProgressElementConstructor::s_info = { "HTMLProgressElementConstructor", 0, &JSHTMLProgressElementConstructorTable, 0 };

bool JSHTMLProgressElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLProgressElementConstructor, DOMObject>(exec, &JSHTMLProgressElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLProgressElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLProgressElementConstructor, DOMObject>(exec, &JSHTMLProgressElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLProgressElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLProgressElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLProgressElementPrototypeTableValues, 0 };
#else
    { 1, 0, JSHTMLProgressElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSHTMLProgressElementPrototype::s_info = { "HTMLProgressElementPrototype", 0, &JSHTMLProgressElementPrototypeTable, 0 };

JSObject* JSHTMLProgressElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLProgressElement>(exec, globalObject);
}

const ClassInfo JSHTMLProgressElement::s_info = { "HTMLProgressElement", &JSHTMLElement::s_info, &JSHTMLProgressElementTable, 0 };

JSHTMLProgressElement::JSHTMLProgressElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLProgressElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

JSObject* JSHTMLProgressElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLProgressElementPrototype(JSHTMLProgressElementPrototype::createStructure(JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLProgressElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLProgressElement, Base>(exec, &JSHTMLProgressElementTable, this, propertyName, slot);
}

bool JSHTMLProgressElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLProgressElement, Base>(exec, &JSHTMLProgressElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLProgressElementValue(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLProgressElement* castedThis = static_cast<JSHTMLProgressElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLProgressElement* imp = static_cast<HTMLProgressElement*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->value());
    return result;
}

JSValue jsHTMLProgressElementMax(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLProgressElement* castedThis = static_cast<JSHTMLProgressElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLProgressElement* imp = static_cast<HTMLProgressElement*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->max());
    return result;
}

JSValue jsHTMLProgressElementPosition(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLProgressElement* castedThis = static_cast<JSHTMLProgressElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLProgressElement* imp = static_cast<HTMLProgressElement*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->position());
    return result;
}

JSValue jsHTMLProgressElementForm(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLProgressElement* castedThis = static_cast<JSHTMLProgressElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLProgressElement* imp = static_cast<HTMLProgressElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->form()));
    return result;
}

JSValue jsHTMLProgressElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLProgressElement* domObject = static_cast<JSHTMLProgressElement*>(asObject(slotBase));
    return JSHTMLProgressElement::getConstructor(exec, domObject->globalObject());
}
void JSHTMLProgressElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLProgressElement, Base>(exec, propertyName, value, &JSHTMLProgressElementTable, this, slot);
}

void setJSHTMLProgressElementValue(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLProgressElement* castedThisObj = static_cast<JSHTMLProgressElement*>(thisObject);
    HTMLProgressElement* imp = static_cast<HTMLProgressElement*>(castedThisObj->impl());
    imp->setValue(value.toNumber(exec));
}

void setJSHTMLProgressElementMax(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLProgressElement* castedThisObj = static_cast<JSHTMLProgressElement*>(thisObject);
    HTMLProgressElement* imp = static_cast<HTMLProgressElement*>(castedThisObj->impl());
    imp->setMax(value.toNumber(exec));
}

JSValue JSHTMLProgressElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLProgressElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(PROGRESS_TAG)