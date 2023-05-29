/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcConnectionGeometry.h"
#include "ifcpp/IFC4X3/include/IfcElement.h"
#include "ifcpp/IFC4X3/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4X3/include/IfcIdentifier.h"
#include "ifcpp/IFC4X3/include/IfcInterferenceSelect.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcLogical.h"
#include "ifcpp/IFC4X3/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4X3/include/IfcRelInterferesElements.h"
#include "ifcpp/IFC4X3/include/IfcSpatialElement.h"
#include "ifcpp/IFC4X3/include/IfcSpatialZone.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcRelInterferesElements 
IFC4X3::IfcRelInterferesElements::IfcRelInterferesElements( int tag ) { m_tag = tag; }
void IFC4X3::IfcRelInterferesElements::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCRELINTERFERESELEMENTS" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_RelatingElement ) { m_RelatingElement->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_RelatedElement ) { m_RelatedElement->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_InterferenceGeometry ) { stream << "#" << m_InterferenceGeometry->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_InterferenceType ) { m_InterferenceType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ImpliedOrder ) { m_ImpliedOrder->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_InterferenceSpace ) { stream << "#" << m_InterferenceSpace->m_tag; } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcRelInterferesElements::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcRelInterferesElements::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map, errorStream );}
	if( num_args > 1 ){readEntityReference( args[1], m_OwnerHistory, map, errorStream );}
	if( num_args > 2 ){m_Name = IfcLabel::createObjectFromSTEP( args[2], map, errorStream );}
	if( num_args > 3 ){m_Description = IfcText::createObjectFromSTEP( args[3], map, errorStream );}
	if( num_args > 4 ){m_RelatingElement = IfcInterferenceSelect::createObjectFromSTEP( args[4], map, errorStream );}
	if( num_args > 5 ){m_RelatedElement = IfcInterferenceSelect::createObjectFromSTEP( args[5], map, errorStream );}
	if( num_args > 6 ){readEntityReference( args[6], m_InterferenceGeometry, map, errorStream );}
	if( num_args > 7 ){m_InterferenceType = IfcIdentifier::createObjectFromSTEP( args[7], map, errorStream );}
	if( num_args > 8 ){m_ImpliedOrder = IfcLogical::createObjectFromSTEP( args[8], map, errorStream );}
	if( num_args > 9 ){readEntityReference( args[9], m_InterferenceSpace, map, errorStream );}
	if( num_args != 10 ){ errorStream << "Wrong parameter count for entity IfcRelInterferesElements, expecting 10, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcRelInterferesElements::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcRelConnects::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "RelatingElement", m_RelatingElement ) );
	vec_attributes.emplace_back( std::make_pair( "RelatedElement", m_RelatedElement ) );
	vec_attributes.emplace_back( std::make_pair( "InterferenceGeometry", m_InterferenceGeometry ) );
	vec_attributes.emplace_back( std::make_pair( "InterferenceType", m_InterferenceType ) );
	vec_attributes.emplace_back( std::make_pair( "ImpliedOrder", m_ImpliedOrder ) );
	vec_attributes.emplace_back( std::make_pair( "InterferenceSpace", m_InterferenceSpace ) );
}
void IFC4X3::IfcRelInterferesElements::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcRelConnects::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcRelInterferesElements::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcRelConnects::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcRelInterferesElements> ptr_self = dynamic_pointer_cast<IfcRelInterferesElements>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcRelInterferesElements::setInverseCounterparts: type mismatch" ); }
	shared_ptr<IfcElement>  RelatedElement_IfcElement = dynamic_pointer_cast<IfcElement>( m_RelatedElement );
	if( RelatedElement_IfcElement )
	{
		RelatedElement_IfcElement->m_IsInterferedByElements_inverse.emplace_back( ptr_self );
	}
	shared_ptr<IfcSpatialElement>  RelatedElement_IfcSpatialElement = dynamic_pointer_cast<IfcSpatialElement>( m_RelatedElement );
	if( RelatedElement_IfcSpatialElement )
	{
		RelatedElement_IfcSpatialElement->m_IsInterferedByElements_inverse.emplace_back( ptr_self );
	}
	shared_ptr<IfcElement>  RelatingElement_IfcElement = dynamic_pointer_cast<IfcElement>( m_RelatingElement );
	if( RelatingElement_IfcElement )
	{
		RelatingElement_IfcElement->m_InterferesElements_inverse.emplace_back( ptr_self );
	}
	shared_ptr<IfcSpatialElement>  RelatingElement_IfcSpatialElement = dynamic_pointer_cast<IfcSpatialElement>( m_RelatingElement );
	if( RelatingElement_IfcSpatialElement )
	{
		RelatingElement_IfcSpatialElement->m_InterferesElements_inverse.emplace_back( ptr_self );
	}
}
void IFC4X3::IfcRelInterferesElements::unlinkFromInverseCounterparts()
{
	IfcRelConnects::unlinkFromInverseCounterparts();
	shared_ptr<IfcElement>  RelatedElement_IfcElement = dynamic_pointer_cast<IfcElement>( m_RelatedElement );
	if( RelatedElement_IfcElement )
	{
		std::vector<weak_ptr<IfcRelInterferesElements> >& IsInterferedByElements_inverse = RelatedElement_IfcElement->m_IsInterferedByElements_inverse;
		for( auto it_IsInterferedByElements_inverse = IsInterferedByElements_inverse.begin(); it_IsInterferedByElements_inverse != IsInterferedByElements_inverse.end(); )
		{
			weak_ptr<IfcRelInterferesElements> self_candidate_weak = *it_IsInterferedByElements_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_IsInterferedByElements_inverse;
				continue;
			}
			shared_ptr<IfcRelInterferesElements> self_candidate( *it_IsInterferedByElements_inverse );
			if( self_candidate.get() == this )
			{
				it_IsInterferedByElements_inverse= IsInterferedByElements_inverse.erase( it_IsInterferedByElements_inverse );
			}
			else
			{
				++it_IsInterferedByElements_inverse;
			}
		}
	}
	shared_ptr<IfcSpatialElement>  RelatedElement_IfcSpatialElement = dynamic_pointer_cast<IfcSpatialElement>( m_RelatedElement );
	if( RelatedElement_IfcSpatialElement )
	{
		std::vector<weak_ptr<IfcRelInterferesElements> >& IsInterferedByElements_inverse = RelatedElement_IfcSpatialElement->m_IsInterferedByElements_inverse;
		for( auto it_IsInterferedByElements_inverse = IsInterferedByElements_inverse.begin(); it_IsInterferedByElements_inverse != IsInterferedByElements_inverse.end(); )
		{
			weak_ptr<IfcRelInterferesElements> self_candidate_weak = *it_IsInterferedByElements_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_IsInterferedByElements_inverse;
				continue;
			}
			shared_ptr<IfcRelInterferesElements> self_candidate( *it_IsInterferedByElements_inverse );
			if( self_candidate.get() == this )
			{
				it_IsInterferedByElements_inverse= IsInterferedByElements_inverse.erase( it_IsInterferedByElements_inverse );
			}
			else
			{
				++it_IsInterferedByElements_inverse;
			}
		}
	}
	shared_ptr<IfcElement>  RelatingElement_IfcElement = dynamic_pointer_cast<IfcElement>( m_RelatingElement );
	if( RelatingElement_IfcElement )
	{
		std::vector<weak_ptr<IfcRelInterferesElements> >& InterferesElements_inverse = RelatingElement_IfcElement->m_InterferesElements_inverse;
		for( auto it_InterferesElements_inverse = InterferesElements_inverse.begin(); it_InterferesElements_inverse != InterferesElements_inverse.end(); )
		{
			weak_ptr<IfcRelInterferesElements> self_candidate_weak = *it_InterferesElements_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_InterferesElements_inverse;
				continue;
			}
			shared_ptr<IfcRelInterferesElements> self_candidate( *it_InterferesElements_inverse );
			if( self_candidate.get() == this )
			{
				it_InterferesElements_inverse= InterferesElements_inverse.erase( it_InterferesElements_inverse );
			}
			else
			{
				++it_InterferesElements_inverse;
			}
		}
	}
	shared_ptr<IfcSpatialElement>  RelatingElement_IfcSpatialElement = dynamic_pointer_cast<IfcSpatialElement>( m_RelatingElement );
	if( RelatingElement_IfcSpatialElement )
	{
		std::vector<weak_ptr<IfcRelInterferesElements> >& InterferesElements_inverse = RelatingElement_IfcSpatialElement->m_InterferesElements_inverse;
		for( auto it_InterferesElements_inverse = InterferesElements_inverse.begin(); it_InterferesElements_inverse != InterferesElements_inverse.end(); )
		{
			weak_ptr<IfcRelInterferesElements> self_candidate_weak = *it_InterferesElements_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_InterferesElements_inverse;
				continue;
			}
			shared_ptr<IfcRelInterferesElements> self_candidate( *it_InterferesElements_inverse );
			if( self_candidate.get() == this )
			{
				it_InterferesElements_inverse= InterferesElements_inverse.erase( it_InterferesElements_inverse );
			}
			else
			{
				++it_InterferesElements_inverse;
			}
		}
	}
}
