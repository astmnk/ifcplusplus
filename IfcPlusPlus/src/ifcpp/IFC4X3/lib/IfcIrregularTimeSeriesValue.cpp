/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcDateTime.h"
#include "ifcpp/IFC4X3/include/IfcIrregularTimeSeriesValue.h"
#include "ifcpp/IFC4X3/include/IfcValue.h"

// ENTITY IfcIrregularTimeSeriesValue 
IFC4X3::IfcIrregularTimeSeriesValue::IfcIrregularTimeSeriesValue( int tag ) { m_tag = tag; }
void IFC4X3::IfcIrregularTimeSeriesValue::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCIRREGULARTIMESERIESVALUE" << "(";
	if( m_TimeStamp ) { m_TimeStamp->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	stream << "(";
	for( size_t ii = 0; ii < m_ListValues.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcValue>& type_object = m_ListValues[ii];
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
	stream << ");";
}
void IFC4X3::IfcIrregularTimeSeriesValue::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcIrregularTimeSeriesValue::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_TimeStamp = IfcDateTime::createObjectFromSTEP( args[0], map, errorStream );}
	if( num_args > 1 ){readSelectList( args[1], m_ListValues, map, errorStream );}
	if( num_args != 2 ){ errorStream << "Wrong parameter count for entity IfcIrregularTimeSeriesValue, expecting 2, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcIrregularTimeSeriesValue::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	vec_attributes.emplace_back( std::make_pair( "TimeStamp", m_TimeStamp ) );
	shared_ptr<AttributeObjectVector> ListValues_vec_object( new AttributeObjectVector() );
	std::copy( m_ListValues.begin(), m_ListValues.end(), std::back_inserter( ListValues_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "ListValues", ListValues_vec_object ) );
}
void IFC4X3::IfcIrregularTimeSeriesValue::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
}
void IFC4X3::IfcIrregularTimeSeriesValue::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IFC4X3::IfcIrregularTimeSeriesValue::unlinkFromInverseCounterparts()
{
}
