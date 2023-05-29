/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcAdvancedBrep.h"
#include "ifcpp/IFC4X3/include/IfcClosedShell.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"

// ENTITY IfcAdvancedBrep 
IFC4X3::IfcAdvancedBrep::IfcAdvancedBrep( int tag ) { m_tag = tag; }
void IFC4X3::IfcAdvancedBrep::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCADVANCEDBREP" << "(";
	if( m_Outer ) { stream << "#" << m_Outer->m_tag; } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcAdvancedBrep::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcAdvancedBrep::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReference( args[0], m_Outer, map, errorStream );}
	if( num_args != 1 ){ errorStream << "Wrong parameter count for entity IfcAdvancedBrep, expecting 1, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcAdvancedBrep::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcManifoldSolidBrep::getAttributes( vec_attributes );
}
void IFC4X3::IfcAdvancedBrep::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcManifoldSolidBrep::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcAdvancedBrep::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcManifoldSolidBrep::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcAdvancedBrep::unlinkFromInverseCounterparts()
{
	IfcManifoldSolidBrep::unlinkFromInverseCounterparts();
}
