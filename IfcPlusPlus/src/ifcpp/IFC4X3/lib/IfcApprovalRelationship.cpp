/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcApproval.h"
#include "ifcpp/IFC4X3/include/IfcApprovalRelationship.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcApprovalRelationship 
IFC4X3::IfcApprovalRelationship::IfcApprovalRelationship( int tag ) { m_tag = tag; }
void IFC4X3::IfcApprovalRelationship::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCAPPROVALRELATIONSHIP" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_RelatingApproval ) { stream << "#" << m_RelatingApproval->m_tag; } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_RelatedApprovals );
	stream << ");";
}
void IFC4X3::IfcApprovalRelationship::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcApprovalRelationship::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_Name = IfcLabel::createObjectFromSTEP( args[0], map, errorStream );}
	if( num_args > 1 ){m_Description = IfcText::createObjectFromSTEP( args[1], map, errorStream );}
	if( num_args > 2 ){readEntityReference( args[2], m_RelatingApproval, map, errorStream );}
	if( num_args > 3 ){readEntityReferenceList( args[3], m_RelatedApprovals, map, errorStream );}
	if( num_args != 4 ){ errorStream << "Wrong parameter count for entity IfcApprovalRelationship, expecting 4, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcApprovalRelationship::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcResourceLevelRelationship::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "RelatingApproval", m_RelatingApproval ) );
	shared_ptr<AttributeObjectVector> RelatedApprovals_vec_object( new AttributeObjectVector() );
	std::copy( m_RelatedApprovals.begin(), m_RelatedApprovals.end(), std::back_inserter( RelatedApprovals_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "RelatedApprovals", RelatedApprovals_vec_object ) );
}
void IFC4X3::IfcApprovalRelationship::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcResourceLevelRelationship::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcApprovalRelationship::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcResourceLevelRelationship::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcApprovalRelationship> ptr_self = dynamic_pointer_cast<IfcApprovalRelationship>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcApprovalRelationship::setInverseCounterparts: type mismatch" ); }
	for( size_t i=0; i<m_RelatedApprovals.size(); ++i )
	{
		if( m_RelatedApprovals[i] )
		{
			m_RelatedApprovals[i]->m_IsRelatedWith_inverse.emplace_back( ptr_self );
		}
	}
	if( m_RelatingApproval )
	{
		m_RelatingApproval->m_Relates_inverse.emplace_back( ptr_self );
	}
}
void IFC4X3::IfcApprovalRelationship::unlinkFromInverseCounterparts()
{
	IfcResourceLevelRelationship::unlinkFromInverseCounterparts();
	for( size_t i=0; i<m_RelatedApprovals.size(); ++i )
	{
		if( m_RelatedApprovals[i] )
		{
			std::vector<weak_ptr<IfcApprovalRelationship> >& IsRelatedWith_inverse = m_RelatedApprovals[i]->m_IsRelatedWith_inverse;
			for( auto it_IsRelatedWith_inverse = IsRelatedWith_inverse.begin(); it_IsRelatedWith_inverse != IsRelatedWith_inverse.end(); )
			{
				weak_ptr<IfcApprovalRelationship> self_candidate_weak = *it_IsRelatedWith_inverse;
				if( self_candidate_weak.expired() )
				{
					++it_IsRelatedWith_inverse;
					continue;
				}
				shared_ptr<IfcApprovalRelationship> self_candidate( *it_IsRelatedWith_inverse );
				if( self_candidate.get() == this )
				{
					it_IsRelatedWith_inverse= IsRelatedWith_inverse.erase( it_IsRelatedWith_inverse );
				}
				else
				{
					++it_IsRelatedWith_inverse;
				}
			}
		}
	}
	if( m_RelatingApproval )
	{
		std::vector<weak_ptr<IfcApprovalRelationship> >& Relates_inverse = m_RelatingApproval->m_Relates_inverse;
		for( auto it_Relates_inverse = Relates_inverse.begin(); it_Relates_inverse != Relates_inverse.end(); )
		{
			weak_ptr<IfcApprovalRelationship> self_candidate_weak = *it_Relates_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_Relates_inverse;
				continue;
			}
			shared_ptr<IfcApprovalRelationship> self_candidate( *it_Relates_inverse );
			if( self_candidate.get() == this )
			{
				it_Relates_inverse= Relates_inverse.erase( it_Relates_inverse );
			}
			else
			{
				++it_Relates_inverse;
			}
		}
	}
}
