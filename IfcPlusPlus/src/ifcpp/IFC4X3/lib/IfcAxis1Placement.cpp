/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcAxis1Placement.h"
#include "ifcpp/IFC4X3/include/IfcDirection.h"
#include "ifcpp/IFC4X3/include/IfcPoint.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"

// ENTITY IfcAxis1Placement 
IFC4X3::IfcAxis1Placement::IfcAxis1Placement( int tag ) { m_tag = tag; }
void IFC4X3::IfcAxis1Placement::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCAXIS1PLACEMENT" << "(";
	if( m_Location ) { stream << "#" << m_Location->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Axis ) { stream << "#" << m_Axis->m_tag; } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcAxis1Placement::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcAxis1Placement::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReference( args[0], m_Location, map, errorStream );}
	if( num_args > 1 ){readEntityReference( args[1], m_Axis, map, errorStream );}
	if( num_args != 2 ){ errorStream << "Wrong parameter count for entity IfcAxis1Placement, expecting 2, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcAxis1Placement::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcPlacement::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Axis", m_Axis ) );
}
void IFC4X3::IfcAxis1Placement::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcPlacement::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcAxis1Placement::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPlacement::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcAxis1Placement::unlinkFromInverseCounterparts()
{
	IfcPlacement::unlinkFromInverseCounterparts();
}
