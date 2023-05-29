/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcMaterial.h"
#include "ifcpp/IFC4X3/include/IfcMaterialDefinitionRepresentation.h"
#include "ifcpp/IFC4X3/include/IfcMaterialProperties.h"
#include "ifcpp/IFC4X3/include/IfcMaterialRelationship.h"
#include "ifcpp/IFC4X3/include/IfcRelAssociatesMaterial.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcMaterial 
IFC4X3::IfcMaterial::IfcMaterial( int tag ) { m_tag = tag; }
void IFC4X3::IfcMaterial::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCMATERIAL" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Category ) { m_Category->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcMaterial::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcMaterial::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_Name = IfcLabel::createObjectFromSTEP( args[0], map, errorStream );}
	if( num_args > 1 ){m_Description = IfcText::createObjectFromSTEP( args[1], map, errorStream );}
	if( num_args > 2 ){m_Category = IfcLabel::createObjectFromSTEP( args[2], map, errorStream );}
	if( num_args != 3 ){ errorStream << "Wrong parameter count for entity IfcMaterial, expecting 3, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcMaterial::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcMaterialDefinition::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Name", m_Name ) );
	vec_attributes.emplace_back( std::make_pair( "Description", m_Description ) );
	vec_attributes.emplace_back( std::make_pair( "Category", m_Category ) );
}
void IFC4X3::IfcMaterial::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcMaterialDefinition::getAttributesInverse( vec_attributes_inverse );
	shared_ptr<AttributeObjectVector> HasRepresentation_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_HasRepresentation_inverse.size(); ++i )
	{
		if( !m_HasRepresentation_inverse[i].expired() )
		{
			HasRepresentation_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcMaterialDefinitionRepresentation>( m_HasRepresentation_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "HasRepresentation_inverse", HasRepresentation_inverse_vec_obj ) );
	shared_ptr<AttributeObjectVector> IsRelatedWith_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_IsRelatedWith_inverse.size(); ++i )
	{
		if( !m_IsRelatedWith_inverse[i].expired() )
		{
			IsRelatedWith_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcMaterialRelationship>( m_IsRelatedWith_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "IsRelatedWith_inverse", IsRelatedWith_inverse_vec_obj ) );
	shared_ptr<AttributeObjectVector> RelatesTo_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_RelatesTo_inverse.size(); ++i )
	{
		if( !m_RelatesTo_inverse[i].expired() )
		{
			RelatesTo_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcMaterialRelationship>( m_RelatesTo_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "RelatesTo_inverse", RelatesTo_inverse_vec_obj ) );
}
void IFC4X3::IfcMaterial::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcMaterialDefinition::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcMaterial::unlinkFromInverseCounterparts()
{
	IfcMaterialDefinition::unlinkFromInverseCounterparts();
}
