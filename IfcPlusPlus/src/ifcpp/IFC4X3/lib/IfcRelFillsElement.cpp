/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcElement.h"
#include "ifcpp/IFC4X3/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcOpeningElement.h"
#include "ifcpp/IFC4X3/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4X3/include/IfcRelFillsElement.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcRelFillsElement 
IFC4X3::IfcRelFillsElement::IfcRelFillsElement( int tag ) { m_tag = tag; }
void IFC4X3::IfcRelFillsElement::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCRELFILLSELEMENT" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_RelatingOpeningElement ) { stream << "#" << m_RelatingOpeningElement->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_RelatedBuildingElement ) { stream << "#" << m_RelatedBuildingElement->m_tag; } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcRelFillsElement::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcRelFillsElement::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map, errorStream );}
	if( num_args > 1 ){readEntityReference( args[1], m_OwnerHistory, map, errorStream );}
	if( num_args > 2 ){m_Name = IfcLabel::createObjectFromSTEP( args[2], map, errorStream );}
	if( num_args > 3 ){m_Description = IfcText::createObjectFromSTEP( args[3], map, errorStream );}
	if( num_args > 4 ){readEntityReference( args[4], m_RelatingOpeningElement, map, errorStream );}
	if( num_args > 5 ){readEntityReference( args[5], m_RelatedBuildingElement, map, errorStream );}
	if( num_args != 6 ){ errorStream << "Wrong parameter count for entity IfcRelFillsElement, expecting 6, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcRelFillsElement::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcRelConnects::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "RelatingOpeningElement", m_RelatingOpeningElement ) );
	vec_attributes.emplace_back( std::make_pair( "RelatedBuildingElement", m_RelatedBuildingElement ) );
}
void IFC4X3::IfcRelFillsElement::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcRelConnects::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcRelFillsElement::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcRelConnects::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcRelFillsElement> ptr_self = dynamic_pointer_cast<IfcRelFillsElement>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcRelFillsElement::setInverseCounterparts: type mismatch" ); }
	if( m_RelatedBuildingElement )
	{
		m_RelatedBuildingElement->m_FillsVoids_inverse.emplace_back( ptr_self );
	}
	if( m_RelatingOpeningElement )
	{
		m_RelatingOpeningElement->m_HasFillings_inverse.emplace_back( ptr_self );
	}
}
void IFC4X3::IfcRelFillsElement::unlinkFromInverseCounterparts()
{
	IfcRelConnects::unlinkFromInverseCounterparts();
	if( m_RelatedBuildingElement )
	{
		std::vector<weak_ptr<IfcRelFillsElement> >& FillsVoids_inverse = m_RelatedBuildingElement->m_FillsVoids_inverse;
		for( auto it_FillsVoids_inverse = FillsVoids_inverse.begin(); it_FillsVoids_inverse != FillsVoids_inverse.end(); )
		{
			weak_ptr<IfcRelFillsElement> self_candidate_weak = *it_FillsVoids_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_FillsVoids_inverse;
				continue;
			}
			shared_ptr<IfcRelFillsElement> self_candidate( *it_FillsVoids_inverse );
			if( self_candidate.get() == this )
			{
				it_FillsVoids_inverse= FillsVoids_inverse.erase( it_FillsVoids_inverse );
			}
			else
			{
				++it_FillsVoids_inverse;
			}
		}
	}
	if( m_RelatingOpeningElement )
	{
		std::vector<weak_ptr<IfcRelFillsElement> >& HasFillings_inverse = m_RelatingOpeningElement->m_HasFillings_inverse;
		for( auto it_HasFillings_inverse = HasFillings_inverse.begin(); it_HasFillings_inverse != HasFillings_inverse.end(); )
		{
			weak_ptr<IfcRelFillsElement> self_candidate_weak = *it_HasFillings_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_HasFillings_inverse;
				continue;
			}
			shared_ptr<IfcRelFillsElement> self_candidate( *it_HasFillings_inverse );
			if( self_candidate.get() == this )
			{
				it_HasFillings_inverse= HasFillings_inverse.erase( it_HasFillings_inverse );
			}
			else
			{
				++it_HasFillings_inverse;
			}
		}
	}
}
