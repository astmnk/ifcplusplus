/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcExternalInformation.h"

// ENTITY IfcExternalInformation 
IFC4X3::IfcExternalInformation::IfcExternalInformation( int tag ) { m_tag = tag; }
void IFC4X3::IfcExternalInformation::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCEXTERNALINFORMATION" << "(";
	stream << ");";
}
void IFC4X3::IfcExternalInformation::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcExternalInformation::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
}
void IFC4X3::IfcExternalInformation::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
}
void IFC4X3::IfcExternalInformation::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
}
void IFC4X3::IfcExternalInformation::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IFC4X3::IfcExternalInformation::unlinkFromInverseCounterparts()
{
}
