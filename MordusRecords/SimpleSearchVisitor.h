///////////////////////////////////////////////////////////
//  SimpleSearchVisitor.h
//  Implementation of the Class SimpleSearchVisitor
//  Created on:      30-mars-2023 17:49:28
//  Original author: franc
///////////////////////////////////////////////////////////

#if !defined(EA_8E5D2397_634B_415c_8041_6F5D06B8A5CD__INCLUDED_)
#define EA_8E5D2397_634B_415c_8041_6F5D06B8A5CD__INCLUDED_

// CETTE PORTION DU FICHIER NE DOIT PAS ÊTRE MODIFIÉE
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
// FIN DE LA PORTION QUI NE DOIT PAS ÊTRE MODIFIÉE

// CETTE PORTION DU FICHIER EST À COMPLÉTER
template<typename OP_COMPARE>
SimpleSearchVisitor<OP_COMPARE>::SimpleSearchVisitor(const BaseProperty& searchProp)
// À COMPLÉTER: Initialiser tous les attributs
{
	// À COMPLÉTER: traiter la propriété reçue en paramètre et indiquer que la référence a été initialisée
}

template<typename OP_COMPARE>
void SimpleSearchVisitor<OP_COMPARE>::visitDateProperty(DateProperty& prop)
{
	// À COMPLÉTER: utiliser la version  de la méthode recevant une propriété const
}

template<typename OP_COMPARE>
void SimpleSearchVisitor<OP_COMPARE>::visitFloatProperty(FloatProperty& prop)
{
	// À COMPLÉTER: utiliser la version  de la méthode recevant une propriété const
}


template<typename OP_COMPARE>
void SimpleSearchVisitor<OP_COMPARE>::visitIntProperty(IntProperty& prop)
{
	// À COMPLÉTER: utiliser la version  de la méthode recevant une propriété const
}


template<typename OP_COMPARE>
void SimpleSearchVisitor<OP_COMPARE>::visitSectionProperty(SectionProperty& prop)
{
	// À COMPLÉTER: utiliser la version  de la méthode recevant une propriété const
}


template<typename OP_COMPARE>
void SimpleSearchVisitor<OP_COMPARE>::visitStringProperty(StringProperty& prop)
{
	// À COMPLÉTER: utiliser la version  de la méthode recevant une propriété const
}


template<typename OP_COMPARE>
void SimpleSearchVisitor<OP_COMPARE>::visitURLProperty(URLProperty& prop)
{
	// À COMPLÉTER: utiliser la version  de la méthode recevant une propriété const
}

template<typename OP_COMPARE>
void SimpleSearchVisitor<OP_COMPARE>::visitDateProperty(const DateProperty& prop)
{
	// À COMPLÉTER: traitement en 2 temps
	//    1- Si l'état du visiteur n'a pas été initialisé, la propriété est la référence
	//    2- Si l'état est initialisé, effectuer la comparaison à l'aide de l'opérateur de comparaison
}

template<typename OP_COMPARE>
void SimpleSearchVisitor<OP_COMPARE>::visitFloatProperty(const FloatProperty& prop)
{
	// À COMPLÉTER: traitement en 2 temps
	//    1- Si l'état du visiteur n'a pas été initialisé, la propriété est la référence
	//    2- Si l'état est initialisé, effectuer la comparaison à l'aide de l'opérateur de comparaison
}

template<typename OP_COMPARE>
void SimpleSearchVisitor<OP_COMPARE>::visitIntProperty(const IntProperty& prop)
{
	// À COMPLÉTER: traitement en 2 temps
	//    1- Si l'état du visiteur n'a pas été initialisé, la propriété est la référence
	//    2- Si l'état est initialisé, effectuer la comparaison à l'aide de l'opérateur de comparaison
}

template<typename OP_COMPARE>
void SimpleSearchVisitor<OP_COMPARE>::visitSectionProperty(const SectionProperty& prop)
{
	// À compléter:
	// L'initialisation doit déjà être faite, une SectionProperty ne peut pas être utilisée pour initialiser l'état
	// Si l'état est initialisé, traiter toutes les propriétés de la section
}

template<typename OP_COMPARE>
void SimpleSearchVisitor<OP_COMPARE>::visitStringProperty(const StringProperty& prop)
{
	// À COMPLÉTER: traitement en 2 temps
	//    1- Si l'état du visiteur n'a pas été initialisé, la propriété est la référence
	//    2- Si l'état est initialisé, effectuer la comparaison à l'aide de l'opérateur de comparaison
}

template<typename OP_COMPARE>
void SimpleSearchVisitor<OP_COMPARE>::visitURLProperty(const URLProperty& prop)
{
	// À COMPLÉTER: traitement en 2 temps
	//    1- Si l'état du visiteur n'a pas été initialisé, la propriété est la référence
	//    2- Si l'état est initialisé, effectuer la comparaison à l'aide de l'opérateur de comparaison
}

template<typename OP_COMPARE>
PropertyIterator SimpleSearchVisitor<OP_COMPARE>::begin()
{
	return m_properties.begin();
}

template<typename OP_COMPARE>
PropertyIterator SimpleSearchVisitor<OP_COMPARE>::end()
{
	return m_properties.end();
}

template<typename OP_COMPARE>
PropertyIterator_const SimpleSearchVisitor<OP_COMPARE>::cbegin() const
{
	return m_properties.cbegin();
}

template<typename OP_COMPARE>
PropertyIterator_const SimpleSearchVisitor<OP_COMPARE>::cend() const
{
	return m_properties.cend();
}

template<typename OP_COMPARE>
void SimpleSearchVisitor<OP_COMPARE>::reset()
{
	// À COMPLÉTER: réinitialiser l'état du visiteur
}

// FIN DE LA PORTION DU FICHIER QUI EST À COMPLÉTER

#endif // !defined(EA_8E5D2397_634B_415c_8041_6F5D06B8A5CD__INCLUDED_)
