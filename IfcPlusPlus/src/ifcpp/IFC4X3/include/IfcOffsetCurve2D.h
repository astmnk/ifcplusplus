/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcOffsetCurve.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcLengthMeasure;
	class IFCQUERY_EXPORT IfcLogical;
	//ENTITY
	class IFCQUERY_EXPORT IfcOffsetCurve2D : public IfcOffsetCurve
	{
	public:
		IfcOffsetCurve2D() = default;
		IfcOffsetCurve2D( int id );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 3; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 3388369263; }

		// IfcRepresentationItem -----------------------------------------------------------
		// inverse attributes:
		//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
		//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

		// IfcGeometricRepresentationItem -----------------------------------------------------------

		// IfcCurve -----------------------------------------------------------

		// IfcOffsetCurve -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcCurve>									m_BasisCurve;

		// IfcOffsetCurve2D -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcLengthMeasure>							m_Distance;
		shared_ptr<IfcLogical>									m_SelfIntersect;
	};
}
