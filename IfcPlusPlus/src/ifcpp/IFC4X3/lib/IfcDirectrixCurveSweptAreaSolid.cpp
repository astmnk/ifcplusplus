/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcAxis2Placement3D.h"
#include "ifcpp/IFC4X3/include/IfcCurve.h"
#include "ifcpp/IFC4X3/include/IfcCurveMeasureSelect.h"
#include "ifcpp/IFC4X3/include/IfcDirectrixCurveSweptAreaSolid.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcProfileDef.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"

// ENTITY IfcDirectrixCurveSweptAreaSolid 
IFC4X3::IfcDirectrixCurveSweptAreaSolid::IfcDirectrixCurveSweptAreaSolid( int tag ) { m_tag = tag; }
void IFC4X3::IfcDirectrixCurveSweptAreaSolid::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCDIRECTRIXCURVESWEPTAREASOLID" << "(";
	if( m_SweptArea ) { stream << "#" << m_SweptArea->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Position ) { stream << "#" << m_Position->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Directrix ) { stream << "#" << m_Directrix->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_StartParam ) { m_StartParam->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_EndParam ) { m_EndParam->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ");";
}
void IFC4X3::IfcDirectrixCurveSweptAreaSolid::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcDirectrixCurveSweptAreaSolid::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReference( args[0], m_SweptArea, map, errorStream );}
	if( num_args > 1 ){readEntityReference( args[1], m_Position, map, errorStream );}
	if( num_args > 2 ){readEntityReference( args[2], m_Directrix, map, errorStream );}
	if( num_args > 3 ){m_StartParam = IfcCurveMeasureSelect::createObjectFromSTEP( args[3], map, errorStream );}
	if( num_args > 4 ){m_EndParam = IfcCurveMeasureSelect::createObjectFromSTEP( args[4], map, errorStream );}
	if( num_args != 5 ){ errorStream << "Wrong parameter count for entity IfcDirectrixCurveSweptAreaSolid, expecting 5, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcDirectrixCurveSweptAreaSolid::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcSweptAreaSolid::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Directrix", m_Directrix ) );
	vec_attributes.emplace_back( std::make_pair( "StartParam", m_StartParam ) );
	vec_attributes.emplace_back( std::make_pair( "EndParam", m_EndParam ) );
}
void IFC4X3::IfcDirectrixCurveSweptAreaSolid::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcSweptAreaSolid::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcDirectrixCurveSweptAreaSolid::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcSweptAreaSolid::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcDirectrixCurveSweptAreaSolid::unlinkFromInverseCounterparts()
{
	IfcSweptAreaSolid::unlinkFromInverseCounterparts();
}
