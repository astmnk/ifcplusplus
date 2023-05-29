/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcDimensionalExponents.h"
#include "ifcpp/IFC4X3/include/IfcNamedUnit.h"
#include "ifcpp/IFC4X3/include/IfcUnitEnum.h"

// ENTITY IfcNamedUnit 
IFC4X3::IfcNamedUnit::IfcNamedUnit( int tag ) { m_tag = tag; }
void IFC4X3::IfcNamedUnit::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCNAMEDUNIT" << "(";
	if( m_Dimensions ) { stream << "#" << m_Dimensions->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_UnitType ) { m_UnitType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcNamedUnit::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcNamedUnit::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReference( args[0], m_Dimensions, map, errorStream );}
	if( num_args > 1 ){m_UnitType = IfcUnitEnum::createObjectFromSTEP( args[1], map, errorStream );}
	if( num_args != 2 ){ errorStream << "Wrong parameter count for entity IfcNamedUnit, expecting 2, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcNamedUnit::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	vec_attributes.emplace_back( std::make_pair( "Dimensions", m_Dimensions ) );
	vec_attributes.emplace_back( std::make_pair( "UnitType", m_UnitType ) );
}
void IFC4X3::IfcNamedUnit::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
}
void IFC4X3::IfcNamedUnit::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IFC4X3::IfcNamedUnit::unlinkFromInverseCounterparts()
{
}
