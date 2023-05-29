/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcBoundaryCondition.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcModulusOfTranslationalSubgradeReactionSelect;
	class IFCQUERY_EXPORT IfcModulusOfRotationalSubgradeReactionSelect;
	//ENTITY
	class IFCQUERY_EXPORT IfcBoundaryEdgeCondition : public IfcBoundaryCondition
	{
	public:
		IfcBoundaryEdgeCondition() = default;
		IfcBoundaryEdgeCondition( int id );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 7; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 1560379544; }

		// IfcBoundaryCondition -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcLabel>										m_Name;						//optional

		// IfcBoundaryEdgeCondition -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcModulusOfTranslationalSubgradeReactionSelect>	m_TranslationalStiffnessByLengthX;	//optional
		shared_ptr<IfcModulusOfTranslationalSubgradeReactionSelect>	m_TranslationalStiffnessByLengthY;	//optional
		shared_ptr<IfcModulusOfTranslationalSubgradeReactionSelect>	m_TranslationalStiffnessByLengthZ;	//optional
		shared_ptr<IfcModulusOfRotationalSubgradeReactionSelect>	m_RotationalStiffnessByLengthX;	//optional
		shared_ptr<IfcModulusOfRotationalSubgradeReactionSelect>	m_RotationalStiffnessByLengthY;	//optional
		shared_ptr<IfcModulusOfRotationalSubgradeReactionSelect>	m_RotationalStiffnessByLengthZ;	//optional
	};
}
