/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcPropertyEnumeration.h"
#include "ifcpp/IFC4X3/include/IfcUnit.h"
#include "ifcpp/IFC4X3/include/IfcValue.h"

// ENTITY IfcPropertyEnumeration 
IFC4X3::IfcPropertyEnumeration::IfcPropertyEnumeration( int tag ) { m_tag = tag; }
void IFC4X3::IfcPropertyEnumeration::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCPROPERTYENUMERATION" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	stream << "(";
	for( size_t ii = 0; ii < m_EnumerationValues.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcValue>& type_object = m_EnumerationValues[ii];
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
	if( m_Unit ) { m_Unit->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ");";
}
void IFC4X3::IfcPropertyEnumeration::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcPropertyEnumeration::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_Name = IfcLabel::createObjectFromSTEP( args[0], map, errorStream );}
	if( num_args > 1 ){readSelectList( args[1], m_EnumerationValues, map, errorStream );}
	if( num_args > 2 ){m_Unit = IfcUnit::createObjectFromSTEP( args[2], map, errorStream );}
	if( num_args != 3 ){ errorStream << "Wrong parameter count for entity IfcPropertyEnumeration, expecting 3, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcPropertyEnumeration::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcPropertyAbstraction::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Name", m_Name ) );
	shared_ptr<AttributeObjectVector> EnumerationValues_vec_object( new AttributeObjectVector() );
	std::copy( m_EnumerationValues.begin(), m_EnumerationValues.end(), std::back_inserter( EnumerationValues_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "EnumerationValues", EnumerationValues_vec_object ) );
	vec_attributes.emplace_back( std::make_pair( "Unit", m_Unit ) );
}
void IFC4X3::IfcPropertyEnumeration::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcPropertyAbstraction::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcPropertyEnumeration::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPropertyAbstraction::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcPropertyEnumeration::unlinkFromInverseCounterparts()
{
	IfcPropertyAbstraction::unlinkFromInverseCounterparts();
}
