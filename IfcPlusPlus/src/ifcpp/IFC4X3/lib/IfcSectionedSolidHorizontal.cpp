/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcAxis2PlacementLinear.h"
#include "ifcpp/IFC4X3/include/IfcCurve.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcProfileDef.h"
#include "ifcpp/IFC4X3/include/IfcSectionedSolidHorizontal.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"

// ENTITY IfcSectionedSolidHorizontal 
IFC4X3::IfcSectionedSolidHorizontal::IfcSectionedSolidHorizontal( int tag ) { m_tag = tag; }
void IFC4X3::IfcSectionedSolidHorizontal::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCSECTIONEDSOLIDHORIZONTAL" << "(";
	if( m_Directrix ) { stream << "#" << m_Directrix->m_tag; } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_CrossSections );
	stream << ",";
	writeEntityList( stream, m_CrossSectionPositions );
	stream << ");";
}
void IFC4X3::IfcSectionedSolidHorizontal::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcSectionedSolidHorizontal::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReference( args[0], m_Directrix, map, errorStream );}
	if( num_args > 1 ){readEntityReferenceList( args[1], m_CrossSections, map, errorStream );}
	if( num_args > 2 ){readEntityReferenceList( args[2], m_CrossSectionPositions, map, errorStream );}
	if( num_args != 3 ){ errorStream << "Wrong parameter count for entity IfcSectionedSolidHorizontal, expecting 3, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcSectionedSolidHorizontal::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcSectionedSolid::getAttributes( vec_attributes );
	shared_ptr<AttributeObjectVector> CrossSectionPositions_vec_object( new AttributeObjectVector() );
	std::copy( m_CrossSectionPositions.begin(), m_CrossSectionPositions.end(), std::back_inserter( CrossSectionPositions_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "CrossSectionPositions", CrossSectionPositions_vec_object ) );
}
void IFC4X3::IfcSectionedSolidHorizontal::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcSectionedSolid::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcSectionedSolidHorizontal::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcSectionedSolid::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcSectionedSolidHorizontal::unlinkFromInverseCounterparts()
{
	IfcSectionedSolid::unlinkFromInverseCounterparts();
}
