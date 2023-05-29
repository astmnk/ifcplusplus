/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcColourRgbList.h"
#include "ifcpp/IFC4X3/include/IfcNormalisedRatioMeasure.h"

// ENTITY IfcColourRgbList 
IFC4X3::IfcColourRgbList::IfcColourRgbList( int tag ) { m_tag = tag; }
void IFC4X3::IfcColourRgbList::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCCOLOURRGBLIST" << "(";
	writeTypeOfRealList2D( stream, m_ColourList, false );
	stream << ");";
}
void IFC4X3::IfcColourRgbList::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcColourRgbList::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readTypeOfRealList2D( args[0], m_ColourList );}
	if( num_args != 1 ){ errorStream << "Wrong parameter count for entity IfcColourRgbList, expecting 1, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcColourRgbList::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcPresentationItem::getAttributes( vec_attributes );
	shared_ptr<AttributeObjectVector> ColourList_vector( new AttributeObjectVector() );
	vec_attributes.emplace_back( std::make_pair( "ColourList", ColourList_vector ) );
	for( size_t ii=0; ii<m_ColourList.size(); ++ii )
	{
		const std::vector<shared_ptr<IfcNormalisedRatioMeasure> >& vec_ii = m_ColourList[ii];
		shared_ptr<AttributeObjectVector> inner_vector( new AttributeObjectVector() );
		ColourList_vector->m_vec.push_back( inner_vector );
		std::copy(vec_ii.begin(), vec_ii.end(), std::back_inserter(inner_vector->m_vec));
	}
}
void IFC4X3::IfcColourRgbList::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcPresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcColourRgbList::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcColourRgbList::unlinkFromInverseCounterparts()
{
	IfcPresentationItem::unlinkFromInverseCounterparts();
}
