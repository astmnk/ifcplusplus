/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcPlaneAngleMeasure;
	class IFCQUERY_EXPORT IfcLuminousIntensityDistributionMeasure;
	//ENTITY
	class IFCQUERY_EXPORT IfcLightDistributionData : public BuildingEntity
	{
	public:
		IfcLightDistributionData() = default;
		IfcLightDistributionData( int id );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 3; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 4162380809; }

		// IfcLightDistributionData -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcPlaneAngleMeasure>									m_MainPlaneAngle;
		std::vector<shared_ptr<IfcPlaneAngleMeasure> >						m_SecondaryPlaneAngle;
		std::vector<shared_ptr<IfcLuminousIntensityDistributionMeasure> >	m_LuminousIntensity;
	};
}
