/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcConnectionGeometry.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcCurveOrEdgeCurve;
	//ENTITY
	class IFCQUERY_EXPORT IfcConnectionCurveGeometry : public IfcConnectionGeometry
	{
	public:
		IfcConnectionCurveGeometry() = default;
		IfcConnectionCurveGeometry( int id );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 2; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 1981873012; }

		// IfcConnectionGeometry -----------------------------------------------------------

		// IfcConnectionCurveGeometry -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcCurveOrEdgeCurve>	m_CurveOnRelatingElement;
		shared_ptr<IfcCurveOrEdgeCurve>	m_CurveOnRelatedElement;	//optional
	};
}
