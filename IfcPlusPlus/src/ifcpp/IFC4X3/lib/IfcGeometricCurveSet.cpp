/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcGeometricCurveSet.h"
#include "ifcpp/IFC4X3/include/IfcGeometricSetSelect.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"

// ENTITY IfcGeometricCurveSet 
IFC4X3::IfcGeometricCurveSet::IfcGeometricCurveSet( int tag ) { m_tag = tag; }
void IFC4X3::IfcGeometricCurveSet::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCGEOMETRICCURVESET" << "(";
	stream << "(";
	for( size_t ii = 0; ii < m_Elements.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcGeometricSetSelect>& type_object = m_Elements[ii];
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
void IFC4X3::IfcGeometricCurveSet::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcGeometricCurveSet::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readSelectList( args[0], m_Elements, map, errorStream );}
	if( num_args != 1 ){ errorStream << "Wrong parameter count for entity IfcGeometricCurveSet, expecting 1, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcGeometricCurveSet::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcGeometricSet::getAttributes( vec_attributes );
}
void IFC4X3::IfcGeometricCurveSet::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcGeometricSet::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcGeometricCurveSet::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcGeometricSet::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcGeometricCurveSet::unlinkFromInverseCounterparts()
{
	IfcGeometricSet::unlinkFromInverseCounterparts();
}
