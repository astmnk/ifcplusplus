/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcBoundaryFaceCondition.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcModulusOfSubgradeReactionSelect.h"

// ENTITY IfcBoundaryFaceCondition 
IFC4X3::IfcBoundaryFaceCondition::IfcBoundaryFaceCondition( int tag ) { m_tag = tag; }
void IFC4X3::IfcBoundaryFaceCondition::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCBOUNDARYFACECONDITION" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_TranslationalStiffnessByAreaX ) { m_TranslationalStiffnessByAreaX->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_TranslationalStiffnessByAreaY ) { m_TranslationalStiffnessByAreaY->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_TranslationalStiffnessByAreaZ ) { m_TranslationalStiffnessByAreaZ->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ");";
}
void IFC4X3::IfcBoundaryFaceCondition::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcBoundaryFaceCondition::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_Name = IfcLabel::createObjectFromSTEP( args[0], map, errorStream );}
	if( num_args > 1 ){m_TranslationalStiffnessByAreaX = IfcModulusOfSubgradeReactionSelect::createObjectFromSTEP( args[1], map, errorStream );}
	if( num_args > 2 ){m_TranslationalStiffnessByAreaY = IfcModulusOfSubgradeReactionSelect::createObjectFromSTEP( args[2], map, errorStream );}
	if( num_args > 3 ){m_TranslationalStiffnessByAreaZ = IfcModulusOfSubgradeReactionSelect::createObjectFromSTEP( args[3], map, errorStream );}
	if( num_args != 4 ){ errorStream << "Wrong parameter count for entity IfcBoundaryFaceCondition, expecting 4, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcBoundaryFaceCondition::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcBoundaryCondition::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "TranslationalStiffnessByAreaX", m_TranslationalStiffnessByAreaX ) );
	vec_attributes.emplace_back( std::make_pair( "TranslationalStiffnessByAreaY", m_TranslationalStiffnessByAreaY ) );
	vec_attributes.emplace_back( std::make_pair( "TranslationalStiffnessByAreaZ", m_TranslationalStiffnessByAreaZ ) );
}
void IFC4X3::IfcBoundaryFaceCondition::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcBoundaryCondition::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcBoundaryFaceCondition::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcBoundaryCondition::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcBoundaryFaceCondition::unlinkFromInverseCounterparts()
{
	IfcBoundaryCondition::unlinkFromInverseCounterparts();
}
