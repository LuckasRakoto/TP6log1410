///////////////////////////////////////////////////////////
//  SaveToStreamVisitor.cpp
//  Implementation of the Class SaveToStreamVisitor
//  Created on:      30-mars-2023 17:49:25
//  Original author: franc
///////////////////////////////////////////////////////////

#include "SaveToStreamVisitor.h"
#include "DateProperty.h"
#include "FloatProperty.h"
#include "IntProperty.h"
#include "SectionProperty.h"
#include "StringProperty.h"
#include "URLProperty.h"

int SaveToStreamVisitor::m_indent = 0;

SaveToStreamVisitor::SaveToStreamVisitor()
	: m_stream(std::cout)
{
}

SaveToStreamVisitor::SaveToStreamVisitor(std::ostream& stream)
	: m_stream(stream)
{
}

SaveToStreamVisitor::SaveToStreamVisitor(std::string fname)
	: m_file(fname), m_stream(m_file.is_open() ? m_file : std::cout)
{
}

void SaveToStreamVisitor::visitDateProperty(DateProperty& prop)
{
	// � compl�ter: traiter la propri�t�

}

void SaveToStreamVisitor::visitDateProperty(const DateProperty& prop)
{
	// � compl�ter: traiter la propri�t�
}

void SaveToStreamVisitor::visitFloatProperty(FloatProperty& prop)
{
	// � compl�ter: traiter la propri�t�
}

void SaveToStreamVisitor::visitFloatProperty(const FloatProperty& prop)
{
	// � compl�ter: traiter la propri�t�
}

void SaveToStreamVisitor::visitIntProperty(IntProperty& prop)
{
	// � compl�ter: traiter la propri�t�
}

void SaveToStreamVisitor::visitIntProperty(const IntProperty& prop)
{
	// � compl�ter: traiter la propri�t�
}

void SaveToStreamVisitor::visitSectionProperty(SectionProperty& prop)
{
	// � compl�ter: traiter la propri�t�
}

void SaveToStreamVisitor::visitSectionProperty(const SectionProperty& prop)
{
	// � compl�ter: afficher le titre de la section, indenter et traiter chaque propri�t� de la section
}

void SaveToStreamVisitor::visitStringProperty(StringProperty& prop)
{
	// � compl�ter: traiter la propri�t�
}

void SaveToStreamVisitor::visitStringProperty(const StringProperty& prop)
{
	// � compl�ter: traiter la propri�t�
}

void SaveToStreamVisitor::visitURLProperty(URLProperty& prop)
{
	// � compl�ter: traiter la propri�t�
}

void SaveToStreamVisitor::visitURLProperty(const URLProperty& prop)
{
	// � compl�ter: traiter la propri�t�
}

void SaveToStreamVisitor::indent(std::ostream& o) const
{
	for (int i = 0; i < m_indent; ++i)
		o << '\t';
}

void SaveToStreamVisitor::defaultVisitProperty(const BaseProperty& prop)
{
	// � compl�ter: m�thode par d�faut permettant de traiter une propri�t�
}

