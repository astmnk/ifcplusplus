/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcMaterial.h"
#include "ifcpp/IFC4X3/include/IfcMaterialRelationship.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcMaterialRelationship 
IFC4X3::IfcMaterialRelationship::IfcMaterialRelationship( int tag ) { m_tag = tag; }
void IFC4X3::IfcMaterialRelationship::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCMATERIALRELATIONSHIP" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_RelatingMaterial ) { stream << "#" << m_RelatingMaterial->m_tag; } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_RelatedMaterials );
	stream << ",";
	if( m_MaterialExpression ) { m_MaterialExpression->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcMaterialRelationship::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcMaterialRelationship::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_Name = IfcLabel::createObjectFromSTEP( args[0], map, errorStream );}
	if( num_args > 1 ){m_Description = IfcText::createObjectFromSTEP( args[1], map, errorStream );}
	if( num_args > 2 ){readEntityReference( args[2], m_RelatingMaterial, map, errorStream );}
	if( num_args > 3 ){readEntityReferenceList( args[3], m_RelatedMaterials, map, errorStream );}
	if( num_args > 4 ){m_MaterialExpression = IfcLabel::createObjectFromSTEP( args[4], map, errorStream );}
	if( num_args != 5 ){ errorStream << "Wrong parameter count for entity IfcMaterialRelationship, expecting 5, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcMaterialRelationship::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcResourceLevelRelationship::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "RelatingMaterial", m_RelatingMaterial ) );
	shared_ptr<AttributeObjectVector> RelatedMaterials_vec_object( new AttributeObjectVector() );
	std::copy( m_RelatedMaterials.begin(), m_RelatedMaterials.end(), std::back_inserter( RelatedMaterials_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "RelatedMaterials", RelatedMaterials_vec_object ) );
	vec_attributes.emplace_back( std::make_pair( "MaterialExpression", m_MaterialExpression ) );
}
void IFC4X3::IfcMaterialRelationship::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcResourceLevelRelationship::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcMaterialRelationship::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcResourceLevelRelationship::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcMaterialRelationship> ptr_self = dynamic_pointer_cast<IfcMaterialRelationship>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcMaterialRelationship::setInverseCounterparts: type mismatch" ); }
	for( size_t i=0; i<m_RelatedMaterials.size(); ++i )
	{
		if( m_RelatedMaterials[i] )
		{
			m_RelatedMaterials[i]->m_IsRelatedWith_inverse.emplace_back( ptr_self );
		}
	}
	if( m_RelatingMaterial )
	{
		m_RelatingMaterial->m_RelatesTo_inverse.emplace_back( ptr_self );
	}
}
void IFC4X3::IfcMaterialRelationship::unlinkFromInverseCounterparts()
{
	IfcResourceLevelRelationship::unlinkFromInverseCounterparts();
	for( size_t i=0; i<m_RelatedMaterials.size(); ++i )
	{
		if( m_RelatedMaterials[i] )
		{
			std::vector<weak_ptr<IfcMaterialRelationship> >& IsRelatedWith_inverse = m_RelatedMaterials[i]->m_IsRelatedWith_inverse;
			for( auto it_IsRelatedWith_inverse = IsRelatedWith_inverse.begin(); it_IsRelatedWith_inverse != IsRelatedWith_inverse.end(); )
			{
				weak_ptr<IfcMaterialRelationship> self_candidate_weak = *it_IsRelatedWith_inverse;
				if( self_candidate_weak.expired() )
				{
					++it_IsRelatedWith_inverse;
					continue;
				}
				shared_ptr<IfcMaterialRelationship> self_candidate( *it_IsRelatedWith_inverse );
				if( self_candidate.get() == this )
				{
					it_IsRelatedWith_inverse= IsRelatedWith_inverse.erase( it_IsRelatedWith_inverse );
				}
				else
				{
					++it_IsRelatedWith_inverse;
				}
			}
		}
	}
	if( m_RelatingMaterial )
	{
		std::vector<weak_ptr<IfcMaterialRelationship> >& RelatesTo_inverse = m_RelatingMaterial->m_RelatesTo_inverse;
		for( auto it_RelatesTo_inverse = RelatesTo_inverse.begin(); it_RelatesTo_inverse != RelatesTo_inverse.end(); )
		{
			weak_ptr<IfcMaterialRelationship> self_candidate_weak = *it_RelatesTo_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_RelatesTo_inverse;
				continue;
			}
			shared_ptr<IfcMaterialRelationship> self_candidate( *it_RelatesTo_inverse );
			if( self_candidate.get() == this )
			{
				it_RelatesTo_inverse= RelatesTo_inverse.erase( it_RelatesTo_inverse );
			}
			else
			{
				++it_RelatesTo_inverse;
			}
		}
	}
}
