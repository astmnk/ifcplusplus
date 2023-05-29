/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcSweptAreaSolid.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcCurve;
	class IFCQUERY_EXPORT IfcCurveMeasureSelect;
	//ENTITY
	class IFCQUERY_EXPORT IfcDirectrixCurveSweptAreaSolid : public IfcSweptAreaSolid
	{
	public:
		IfcDirectrixCurveSweptAreaSolid() = default;
		IfcDirectrixCurveSweptAreaSolid( int id );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 5; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 593015953; }

		// IfcRepresentationItem -----------------------------------------------------------
		// inverse attributes:
		//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
		//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

		// IfcGeometricRepresentationItem -----------------------------------------------------------

		// IfcSolidModel -----------------------------------------------------------

		// IfcSweptAreaSolid -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcProfileDef>								m_SweptArea;
		//  shared_ptr<IfcAxis2Placement3D>							m_Position;					//optional

		// IfcDirectrixCurveSweptAreaSolid -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcCurve>									m_Directrix;
		shared_ptr<IfcCurveMeasureSelect>						m_StartParam;				//optional
		shared_ptr<IfcCurveMeasureSelect>						m_EndParam;					//optional
	};
}
