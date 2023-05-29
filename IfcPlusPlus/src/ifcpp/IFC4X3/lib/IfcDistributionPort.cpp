/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcDistributionPort.h"
#include "ifcpp/IFC4X3/include/IfcDistributionPortTypeEnum.h"
#include "ifcpp/IFC4X3/include/IfcDistributionSystemEnum.h"
#include "ifcpp/IFC4X3/include/IfcFlowDirectionEnum.h"
#include "ifcpp/IFC4X3/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcObjectPlacement.h"
#include "ifcpp/IFC4X3/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4X3/include/IfcProductRepresentation.h"
#include "ifcpp/IFC4X3/include/IfcRelAggregates.h"
#include "ifcpp/IFC4X3/include/IfcRelAssigns.h"
#include "ifcpp/IFC4X3/include/IfcRelAssignsToProduct.h"
#include "ifcpp/IFC4X3/include/IfcRelAssociates.h"
#include "ifcpp/IFC4X3/include/IfcRelConnectsPortToElement.h"
#include "ifcpp/IFC4X3/include/IfcRelConnectsPorts.h"
#include "ifcpp/IFC4X3/include/IfcRelDeclares.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByObject.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByType.h"
#include "ifcpp/IFC4X3/include/IfcRelNests.h"
#include "ifcpp/IFC4X3/include/IfcRelPositions.h"
#include "ifcpp/IFC4X3/include/IfcRelReferencedInSpatialStructure.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcDistributionPort 
IFC4X3::IfcDistributionPort::IfcDistributionPort( int tag ) { m_tag = tag; }
void IFC4X3::IfcDistributionPort::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCDISTRIBUTIONPORT" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ObjectType ) { m_ObjectType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ObjectPlacement ) { stream << "#" << m_ObjectPlacement->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Representation ) { stream << "#" << m_Representation->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_FlowDirection ) { m_FlowDirection->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_PredefinedType ) { m_PredefinedType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_SystemType ) { m_SystemType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcDistributionPort::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcDistributionPort::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map, errorStream );}
	if( num_args > 1 ){readEntityReference( args[1], m_OwnerHistory, map, errorStream );}
	if( num_args > 2 ){m_Name = IfcLabel::createObjectFromSTEP( args[2], map, errorStream );}
	if( num_args > 3 ){m_Description = IfcText::createObjectFromSTEP( args[3], map, errorStream );}
	if( num_args > 4 ){m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map, errorStream );}
	if( num_args > 5 ){readEntityReference( args[5], m_ObjectPlacement, map, errorStream );}
	if( num_args > 6 ){readEntityReference( args[6], m_Representation, map, errorStream );}
	if( num_args > 7 ){m_FlowDirection = IfcFlowDirectionEnum::createObjectFromSTEP( args[7], map, errorStream );}
	if( num_args > 8 ){m_PredefinedType = IfcDistributionPortTypeEnum::createObjectFromSTEP( args[8], map, errorStream );}
	if( num_args > 9 ){m_SystemType = IfcDistributionSystemEnum::createObjectFromSTEP( args[9], map, errorStream );}
	if( num_args != 10 ){ errorStream << "Wrong parameter count for entity IfcDistributionPort, expecting 10, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcDistributionPort::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcPort::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "FlowDirection", m_FlowDirection ) );
	vec_attributes.emplace_back( std::make_pair( "PredefinedType", m_PredefinedType ) );
	vec_attributes.emplace_back( std::make_pair( "SystemType", m_SystemType ) );
}
void IFC4X3::IfcDistributionPort::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcPort::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcDistributionPort::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPort::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcDistributionPort::unlinkFromInverseCounterparts()
{
	IfcPort::unlinkFromInverseCounterparts();
}
