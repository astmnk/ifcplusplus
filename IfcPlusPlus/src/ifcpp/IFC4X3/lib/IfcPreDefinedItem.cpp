/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcPreDefinedItem.h"

// ENTITY IfcPreDefinedItem 
IFC4X3::IfcPreDefinedItem::IfcPreDefinedItem( int tag ) { m_tag = tag; }
void IFC4X3::IfcPreDefinedItem::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCPREDEFINEDITEM" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcPreDefinedItem::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcPreDefinedItem::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_Name = IfcLabel::createObjectFromSTEP( args[0], map, errorStream );}
	if( num_args != 1 ){ errorStream << "Wrong parameter count for entity IfcPreDefinedItem, expecting 1, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcPreDefinedItem::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcPresentationItem::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Name", m_Name ) );
}
void IFC4X3::IfcPreDefinedItem::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcPresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcPreDefinedItem::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcPreDefinedItem::unlinkFromInverseCounterparts()
{
	IfcPresentationItem::unlinkFromInverseCounterparts();
}
