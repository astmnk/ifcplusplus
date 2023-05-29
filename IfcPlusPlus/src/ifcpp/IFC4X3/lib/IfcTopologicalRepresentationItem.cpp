/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"
#include "ifcpp/IFC4X3/include/IfcTopologicalRepresentationItem.h"

// ENTITY IfcTopologicalRepresentationItem 
IFC4X3::IfcTopologicalRepresentationItem::IfcTopologicalRepresentationItem( int tag ) { m_tag = tag; }
void IFC4X3::IfcTopologicalRepresentationItem::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCTOPOLOGICALREPRESENTATIONITEM" << "(";
	stream << ");";
}
void IFC4X3::IfcTopologicalRepresentationItem::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcTopologicalRepresentationItem::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
}
void IFC4X3::IfcTopologicalRepresentationItem::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcRepresentationItem::getAttributes( vec_attributes );
}
void IFC4X3::IfcTopologicalRepresentationItem::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcRepresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcTopologicalRepresentationItem::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcRepresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcTopologicalRepresentationItem::unlinkFromInverseCounterparts()
{
	IfcRepresentationItem::unlinkFromInverseCounterparts();
}
