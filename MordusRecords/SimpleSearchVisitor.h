///////////////////////////////////////////////////////////
//  SimpleSearchVisitor.h
//  Implementation of the Class SimpleSearchVisitor
//  Created on:      30-mars-2023 17:49:28
//  Original author: franc
///////////////////////////////////////////////////////////

#if !defined(EA_8E5D2397_634B_415c_8041_6F5D06B8A5CD__INCLUDED_)
#define EA_8E5D2397_634B_415c_8041_6F5D06B8A5CD__INCLUDED_

// CETTE PORTION DU FICHIER NE DOIT PAS �TRE MODIFI�E
#include <functional>

#include "DateProperty.h"
#include "FloatProperty.h"
#include "IntProperty.h"
#include "SectionProperty.h"
#include "StringProperty.h"
#include "URLProperty.h"

#include "BasePropertyVisitor.h"
#include "PropertyContainer.h"

template<typename OP_COMPARE = std::equal_to<const BaseProperty&>>
class SimpleSearchVisitor : public BasePropertyVisitor
{
public:
	SimpleSearchVisitor(const BaseProperty& searchProp);
	virtual ~SimpleSearchVisitor() = default;

	virtual void visitDateProperty(DateProperty& prop);
	virtual void visitFloatProperty(FloatProperty& prop);
	virtual void visitIntProperty(IntProperty& prop);
	virtual void visitSectionProperty(SectionProperty& prop);
	virtual void visitStringProperty(StringProperty& prop);
	virtual void visitURLProperty(URLProperty& prop);

	virtual void visitDateProperty(const class DateProperty& prop);
	virtual void visitFloatProperty(const class FloatProperty& prop);
	virtual void visitIntProperty(const class IntProperty& prop);
	virtual void visitSectionProperty(const class SectionProperty& prop);
	virtual void visitStringProperty(const class StringProperty& prop);
	virtual void visitURLProperty(const class URLProperty& prop);

	virtual PropertyIterator begin();
	virtual PropertyIterator end();
	virtual PropertyIterator_const cbegin() const;
	virtual PropertyIterator_const cend() const;
	virtual void reset();

protected:
	OP_COMPARE m_compareOp;
	bool m_searchPropertyInitialized;

	const DateProperty* m_datePropertyPtr;
	const FloatProperty* m_floatPropertyPtr;
	const IntProperty* m_intPropertyPtr;
	const SectionProperty* m_sectionPropertyPtr;
	const StringProperty* m_stringPropertyPtr;
	const URLProperty* m_URLPropertyPtr;
	PropertyContainer m_properties;
};
// FIN DE LA PORTION QUI NE DOIT PAS �TRE MODIFI�E

// CETTE PORTION DU FICHIER EST � COMPL�TER
template<typename OP_COMPARE>
SimpleSearchVisitor<OP_COMPARE>::SimpleSearchVisitor(const BaseProperty& searchProp):
        m_compareOp(OP_COMPARE()),
        m_searchPropertyInitialized(false),
        m_datePropertyPtr(nullptr),
        m_floatPropertyPtr(nullptr),
        m_intPropertyPtr(nullptr),
        m_sectionPropertyPtr(nullptr),
        m_stringPropertyPtr(nullptr),
        m_URLPropertyPtr(nullptr)
// � COMPL�TER: Initialiser tous les attributs
{
	// � COMPL�TER: traiter la propri�t� reçue en param�tre et indiquer que la r�f�rence a �t� initialis�e
    //m_searchProp= &searchProp;
    searchProp.accept(*this);
    m_searchPropertyInitialized = true;
}

template<typename OP_COMPARE>
void SimpleSearchVisitor<OP_COMPARE>::visitDateProperty(DateProperty& prop)
{
	// � COMPLétER: utiliser la version  de la méthode recevant une propriété const
    const DateProperty& constProp = prop;
    visitDateProperty(constProp);
}

template<typename OP_COMPARE>
void SimpleSearchVisitor<OP_COMPARE>::visitFloatProperty(FloatProperty& prop)
{
	// � COMPL�TER: utiliser la version  de la m�thode recevant une propri�t� const
    const FloatProperty& constProp = prop;
    visitFloatProperty(constProp);
}

template<typename OP_COMPARE>
void SimpleSearchVisitor<OP_COMPARE>::visitIntProperty(IntProperty& prop)
{
	// � COMPL�TER: utiliser la version  de la m�thode recevant une propri�t� const
    const IntProperty& constProp = prop;
    visitIntProperty(constProp);
}

template<typename OP_COMPARE>
void SimpleSearchVisitor<OP_COMPARE>::visitSectionProperty(SectionProperty& prop)
{
	// � COMPL�TER: utiliser la version  de la m�thode recevant une propri�t� const
    const SectionProperty& constProp = prop;
    visitSectionProperty(constProp);

}

template<typename OP_COMPARE>
void SimpleSearchVisitor<OP_COMPARE>::visitStringProperty(StringProperty& prop)
{
	// � COMPL�TER: utiliser la version  de la m�thode recevant une propri�t� const
    const StringProperty& constProp = prop;
    visitStringProperty(constProp);

}

template<typename OP_COMPARE>
void SimpleSearchVisitor<OP_COMPARE>::visitURLProperty(URLProperty& prop)
{
	// � COMPL�TER: utiliser la version  de la m�thode recevant une propri�t� const
    const URLProperty& constProp = prop;
    visitURLProperty(constProp);
}

template<typename OP_COMPARE>
void SimpleSearchVisitor<OP_COMPARE>::visitDateProperty(const DateProperty& prop) {
    // � COMPL�TER: traitement en 2 temps
    //    1- Si l'état du visiteur n'a pas été initialisé, la propriété est la référence
    //    2- Si l'état est initialisé, effectuer la comparaison à l'aide de l'opérateur de comparaison
    if (!this->m_searchPropertyInitialized) {
        m_datePropertyPtr = &prop;
        this -> m_searchPropertyInitialized = true;
    }
    else if( m_datePropertyPtr != nullptr && m_compareOp(prop, *m_datePropertyPtr)){
        m_properties.push_back(std::unique_ptr<BaseProperty>(prop.clone()));
    }
}

template<typename OP_COMPARE>
void SimpleSearchVisitor<OP_COMPARE>::visitFloatProperty(const FloatProperty& prop) {
    // � COMPL�TER: traitement en 2 temps
    //    1- Si l'�tat du visiteur n'a pas �t� initialis�, la propri�t� est la r�f�rence
    //    2- Si l'�tat est initialis�, effectuer la comparaison � l'aide de l'op�rateur de comparaison
    if (!this->m_searchPropertyInitialized) {
        m_floatPropertyPtr = &prop;
        this -> m_searchPropertyInitialized = true;
    }
    else if( m_floatPropertyPtr != nullptr && m_compareOp(prop, *m_floatPropertyPtr)){
        m_properties.push_back(std::unique_ptr<BaseProperty>(prop.clone()));
    }
}

template<typename OP_COMPARE>
void SimpleSearchVisitor<OP_COMPARE>::visitIntProperty(const IntProperty& prop) {
    // � COMPL�TER: traitement en 2 temps
    //    1- Si l'�tat du visiteur n'a pas �t� initialis�, la propri�t� est la r�f�rence
    //    2- Si l'�tat est initialis�, effectuer la comparaison � l'aide de l'op�rateur de comparaison
    if (!this->m_searchPropertyInitialized) {
        m_intPropertyPtr = &prop;
        this -> m_searchPropertyInitialized = true;
    }
    else if( m_intPropertyPtr != nullptr && m_compareOp(prop, *m_intPropertyPtr)){
        m_properties.push_back(std::unique_ptr<BaseProperty>(prop.clone()));
    }
}

    template<typename OP_COMPARE>
    void SimpleSearchVisitor<OP_COMPARE>::visitSectionProperty(const SectionProperty &prop) {
        // � compl�ter:
        // L'initialisation doit d�j� �tre faite, une SectionProperty ne peut pas �tre utilis�e pour initialiser l'�tat
        // Si l'�tat est initialis�, traiter toutes les propri�t�s de la section
        if(this->m_searchPropertyInitialized){
            for(auto it = prop.cbegin(); it != prop.cend(); ++it){
                it->accept(*this);
            }
        }
    }

    template<typename OP_COMPARE>
    void SimpleSearchVisitor<OP_COMPARE>::visitStringProperty(const StringProperty &prop) {
        // � COMPL�TER: traitement en 2 temps
        //    1- Si l'�tat du visiteur n'a pas �t� initialis�, la propri�t� est la r�f�rence
        //    2- Si l'�tat est initialis�, effectuer la comparaison � l'aide de l'op�rateur de comparaison

        if (!this->m_searchPropertyInitialized) {
            m_stringPropertyPtr = &prop;
            this -> m_searchPropertyInitialized = true;
        }
        else if( m_stringPropertyPtr != nullptr && m_compareOp(prop, *m_stringPropertyPtr)){
            m_properties.push_back(std::unique_ptr<BaseProperty>(prop.clone()));
        }
    }

    template<typename OP_COMPARE>
    void SimpleSearchVisitor<OP_COMPARE>::visitURLProperty(const URLProperty &prop) {
        // � COMPL�TER: traitement en 2 temps
        //    1- Si l'�tat du visiteur n'a pas �t� initialis�, la propri�t� est la r�f�rence
        //    2- Si l'�tat est initialis�, effectuer la comparaison � l'aide de l'op�rateur de comparaison
        if (!this->m_searchPropertyInitialized) {
            m_URLPropertyPtr = &prop;
            this -> m_searchPropertyInitialized = true;
        }
        else if( m_URLPropertyPtr != nullptr && m_compareOp(prop, *m_URLPropertyPtr)){
            m_properties.push_back(std::unique_ptr<BaseProperty>(prop.clone()));
        }
    }

    template<typename OP_COMPARE>
    PropertyIterator SimpleSearchVisitor<OP_COMPARE>::begin() {
        return m_properties.begin();
    }

    template<typename OP_COMPARE>
    PropertyIterator SimpleSearchVisitor<OP_COMPARE>::end() {
        return m_properties.end();
    }

    template<typename OP_COMPARE>
    PropertyIterator_const SimpleSearchVisitor<OP_COMPARE>::cbegin() const {
        return m_properties.cbegin();
    }

    template<typename OP_COMPARE>
    PropertyIterator_const SimpleSearchVisitor<OP_COMPARE>::cend() const {
        return m_properties.cend();
    }

    template<typename OP_COMPARE>
    void SimpleSearchVisitor<OP_COMPARE>::reset() {
        // � COMPL�TER: r�initialiser l'�tat du visiteur
        m_searchPropertyInitialized=false;
    }

// FIN DE LA PORTION DU FICHIER QUI EST � COMPL�TER

#endif // !defined(EA_8E5D2397_634B_415c_8041_6F5D06B8A5CD__INCLUDED_)
