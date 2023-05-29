/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcRelConnects.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcPort;
	class IFCQUERY_EXPORT IfcElement;
	//ENTITY
	class IFCQUERY_EXPORT IfcRelConnectsPorts : public IfcRelConnects
	{
	public:
		IfcRelConnectsPorts() = default;
		IfcRelConnectsPorts( int id );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 7; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 3190031847; }

		// IfcRoot -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcGloballyUniqueId>	m_GlobalId;
		//  shared_ptr<IfcOwnerHistory>		m_OwnerHistory;				//optional
		//  shared_ptr<IfcLabel>			m_Name;						//optional
		//  shared_ptr<IfcText>				m_Description;				//optional

		// IfcRelationship -----------------------------------------------------------

		// IfcRelConnects -----------------------------------------------------------

		// IfcRelConnectsPorts -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcPort>				m_RelatingPort;
		shared_ptr<IfcPort>				m_RelatedPort;
		shared_ptr<IfcElement>			m_RealizingElement;			//optional
	};
}
