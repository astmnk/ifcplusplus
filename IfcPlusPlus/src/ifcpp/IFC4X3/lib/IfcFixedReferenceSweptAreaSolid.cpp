/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcAxis2Placement3D.h"
#include "ifcpp/IFC4X3/include/IfcCurve.h"
#include "ifcpp/IFC4X3/include/IfcCurveMeasureSelect.h"
#include "ifcpp/IFC4X3/include/IfcDirection.h"
#include "ifcpp/IFC4X3/include/IfcFixedReferenceSweptAreaSolid.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcProfileDef.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"

// ENTITY IfcFixedReferenceSweptAreaSolid 
IFC4X3::IfcFixedReferenceSweptAreaSolid::IfcFixedReferenceSweptAreaSolid( int tag ) { m_tag = tag; }
void IFC4X3::IfcFixedReferenceSweptAreaSolid::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCFIXEDREFERENCESWEPTAREASOLID" << "(";
	if( m_SweptArea ) { stream << "#" << m_SweptArea->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Position ) { stream << "#" << m_Position->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Directrix ) { stream << "#" << m_Directrix->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_StartParam ) { m_StartParam->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_EndParam ) { m_EndParam->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_FixedReference ) { stream << "#" << m_FixedReference->m_tag; } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcFixedReferenceSweptAreaSolid::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcFixedReferenceSweptAreaSolid::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReference( args[0], m_SweptArea, map, errorStream );}
	if( num_args > 1 ){readEntityReference( args[1], m_Position, map, errorStream );}
	if( num_args > 2 ){readEntityReference( args[2], m_Directrix, map, errorStream );}
	if( num_args > 3 ){m_StartParam = IfcCurveMeasureSelect::createObjectFromSTEP( args[3], map, errorStream );}
	if( num_args > 4 ){m_EndParam = IfcCurveMeasureSelect::createObjectFromSTEP( args[4], map, errorStream );}
	if( num_args > 5 ){readEntityReference( args[5], m_FixedReference, map, errorStream );}
	if( num_args != 6 ){ errorStream << "Wrong parameter count for entity IfcFixedReferenceSweptAreaSolid, expecting 6, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcFixedReferenceSweptAreaSolid::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcDirectrixCurveSweptAreaSolid::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "FixedReference", m_FixedReference ) );
}
void IFC4X3::IfcFixedReferenceSweptAreaSolid::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcDirectrixCurveSweptAreaSolid::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcFixedReferenceSweptAreaSolid::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcDirectrixCurveSweptAreaSolid::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcFixedReferenceSweptAreaSolid::unlinkFromInverseCounterparts()
{
	IfcDirectrixCurveSweptAreaSolid::unlinkFromInverseCounterparts();
}
