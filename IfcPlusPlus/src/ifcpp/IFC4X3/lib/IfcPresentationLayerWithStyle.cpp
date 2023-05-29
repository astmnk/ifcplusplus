/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcIdentifier.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcLayeredItem.h"
#include "ifcpp/IFC4X3/include/IfcLogical.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerWithStyle.h"
#include "ifcpp/IFC4X3/include/IfcPresentationStyle.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcPresentationLayerWithStyle 
IFC4X3::IfcPresentationLayerWithStyle::IfcPresentationLayerWithStyle( int tag ) { m_tag = tag; }
void IFC4X3::IfcPresentationLayerWithStyle::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCPRESENTATIONLAYERWITHSTYLE" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	stream << "(";
	for( size_t ii = 0; ii < m_AssignedItems.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcLayeredItem>& type_object = m_AssignedItems[ii];
		if( type_object )
		{
			type_object->getStepParameter( stream, true );
		}
		else
		{
			stream << "$";
		}
	}
	stream << ")";
	stream << ",";
	if( m_Identifier ) { m_Identifier->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_LayerOn ) { m_LayerOn->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_LayerFrozen ) { m_LayerFrozen->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_LayerBlocked ) { m_LayerBlocked->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_LayerStyles );
	stream << ");";
}
void IFC4X3::IfcPresentationLayerWithStyle::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcPresentationLayerWithStyle::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_Name = IfcLabel::createObjectFromSTEP( args[0], map, errorStream );}
	if( num_args > 1 ){m_Description = IfcText::createObjectFromSTEP( args[1], map, errorStream );}
	if( num_args > 2 ){readSelectList( args[2], m_AssignedItems, map, errorStream );}
	if( num_args > 3 ){m_Identifier = IfcIdentifier::createObjectFromSTEP( args[3], map, errorStream );}
	if( num_args > 4 ){m_LayerOn = IfcLogical::createObjectFromSTEP( args[4], map, errorStream );}
	if( num_args > 5 ){m_LayerFrozen = IfcLogical::createObjectFromSTEP( args[5], map, errorStream );}
	if( num_args > 6 ){m_LayerBlocked = IfcLogical::createObjectFromSTEP( args[6], map, errorStream );}
	if( num_args > 7 ){readEntityReferenceList( args[7], m_LayerStyles, map, errorStream );}
	if( num_args != 8 ){ errorStream << "Wrong parameter count for entity IfcPresentationLayerWithStyle, expecting 8, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcPresentationLayerWithStyle::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcPresentationLayerAssignment::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "LayerOn", m_LayerOn ) );
	vec_attributes.emplace_back( std::make_pair( "LayerFrozen", m_LayerFrozen ) );
	vec_attributes.emplace_back( std::make_pair( "LayerBlocked", m_LayerBlocked ) );
	shared_ptr<AttributeObjectVector> LayerStyles_vec_object( new AttributeObjectVector() );
	std::copy( m_LayerStyles.begin(), m_LayerStyles.end(), std::back_inserter( LayerStyles_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "LayerStyles", LayerStyles_vec_object ) );
}
void IFC4X3::IfcPresentationLayerWithStyle::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcPresentationLayerAssignment::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcPresentationLayerWithStyle::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPresentationLayerAssignment::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcPresentationLayerWithStyle::unlinkFromInverseCounterparts()
{
	IfcPresentationLayerAssignment::unlinkFromInverseCounterparts();
}
