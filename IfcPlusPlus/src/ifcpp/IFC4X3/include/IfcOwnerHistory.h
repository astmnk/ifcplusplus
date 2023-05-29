/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcPersonAndOrganization;
	class IFCQUERY_EXPORT IfcApplication;
	class IFCQUERY_EXPORT IfcStateEnum;
	class IFCQUERY_EXPORT IfcChangeActionEnum;
	class IFCQUERY_EXPORT IfcTimeStamp;
	//ENTITY
	class IFCQUERY_EXPORT IfcOwnerHistory : public BuildingEntity
	{
	public:
		IfcOwnerHistory() = default;
		IfcOwnerHistory( int id );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 8; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 1207048766; }

		// IfcOwnerHistory -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcPersonAndOrganization>	m_OwningUser;
		shared_ptr<IfcApplication>				m_OwningApplication;
		shared_ptr<IfcStateEnum>				m_State;					//optional
		shared_ptr<IfcChangeActionEnum>			m_ChangeAction;				//optional
		shared_ptr<IfcTimeStamp>				m_LastModifiedDate;			//optional
		shared_ptr<IfcPersonAndOrganization>	m_LastModifyingUser;		//optional
		shared_ptr<IfcApplication>				m_LastModifyingApplication;	//optional
		shared_ptr<IfcTimeStamp>				m_CreationDate;
	};
}
