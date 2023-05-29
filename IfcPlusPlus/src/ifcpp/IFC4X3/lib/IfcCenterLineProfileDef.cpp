/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcBoundedCurve.h"
#include "ifcpp/IFC4X3/include/IfcCenterLineProfileDef.h"
#include "ifcpp/IFC4X3/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4X3/include/IfcProfileProperties.h"
#include "ifcpp/IFC4X3/include/IfcProfileTypeEnum.h"

// ENTITY IfcCenterLineProfileDef 
IFC4X3::IfcCenterLineProfileDef::IfcCenterLineProfileDef( int tag ) { m_tag = tag; }
void IFC4X3::IfcCenterLineProfileDef::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCCENTERLINEPROFILEDEF" << "(";
	if( m_ProfileType ) { m_ProfileType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ProfileName ) { m_ProfileName->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Curve ) { stream << "#" << m_Curve->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Thickness ) { m_Thickness->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcCenterLineProfileDef::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcCenterLineProfileDef::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_ProfileType = IfcProfileTypeEnum::createObjectFromSTEP( args[0], map, errorStream );}
	if( num_args > 1 ){m_ProfileName = IfcLabel::createObjectFromSTEP( args[1], map, errorStream );}
	if( num_args > 2 ){readEntityReference( args[2], m_Curve, map, errorStream );}
	if( num_args > 3 ){m_Thickness = IfcPositiveLengthMeasure::createObjectFromSTEP( args[3], map, errorStream );}
	if( num_args != 4 ){ errorStream << "Wrong parameter count for entity IfcCenterLineProfileDef, expecting 4, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcCenterLineProfileDef::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcArbitraryOpenProfileDef::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Thickness", m_Thickness ) );
}
void IFC4X3::IfcCenterLineProfileDef::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcArbitraryOpenProfileDef::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcCenterLineProfileDef::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcArbitraryOpenProfileDef::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcCenterLineProfileDef::unlinkFromInverseCounterparts()
{
	IfcArbitraryOpenProfileDef::unlinkFromInverseCounterparts();
}
