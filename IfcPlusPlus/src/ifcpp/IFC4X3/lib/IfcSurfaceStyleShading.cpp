/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcColourRgb.h"
#include "ifcpp/IFC4X3/include/IfcNormalisedRatioMeasure.h"
#include "ifcpp/IFC4X3/include/IfcSurfaceStyleShading.h"

// ENTITY IfcSurfaceStyleShading 
IFC4X3::IfcSurfaceStyleShading::IfcSurfaceStyleShading( int tag ) { m_tag = tag; }
void IFC4X3::IfcSurfaceStyleShading::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCSURFACESTYLESHADING" << "(";
	if( m_SurfaceColour ) { stream << "#" << m_SurfaceColour->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Transparency ) { m_Transparency->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcSurfaceStyleShading::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcSurfaceStyleShading::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReference( args[0], m_SurfaceColour, map, errorStream );}
	if( num_args > 1 ){m_Transparency = IfcNormalisedRatioMeasure::createObjectFromSTEP( args[1], map, errorStream );}
	if( num_args != 2 ){ errorStream << "Wrong parameter count for entity IfcSurfaceStyleShading, expecting 2, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcSurfaceStyleShading::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcPresentationItem::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "SurfaceColour", m_SurfaceColour ) );
	vec_attributes.emplace_back( std::make_pair( "Transparency", m_Transparency ) );
}
void IFC4X3::IfcSurfaceStyleShading::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcPresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcSurfaceStyleShading::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcSurfaceStyleShading::unlinkFromInverseCounterparts()
{
	IfcPresentationItem::unlinkFromInverseCounterparts();
}
