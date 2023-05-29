/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcBoundedCurve.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcCurve;
	class IFCQUERY_EXPORT IfcTrimmingSelect;
	class IFCQUERY_EXPORT IfcBoolean;
	class IFCQUERY_EXPORT IfcTrimmingPreference;
	//ENTITY
	class IFCQUERY_EXPORT IfcTrimmedCurve : public IfcBoundedCurve
	{
	public:
		IfcTrimmedCurve() = default;
		IfcTrimmedCurve( int id );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 5; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 3593883385; }

		// IfcRepresentationItem -----------------------------------------------------------
		// inverse attributes:
		//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
		//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

		// IfcGeometricRepresentationItem -----------------------------------------------------------

		// IfcCurve -----------------------------------------------------------

		// IfcBoundedCurve -----------------------------------------------------------

		// IfcTrimmedCurve -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcCurve>									m_BasisCurve;
		std::vector<shared_ptr<IfcTrimmingSelect> >				m_Trim1;
		std::vector<shared_ptr<IfcTrimmingSelect> >				m_Trim2;
		shared_ptr<IfcBoolean>									m_SenseAgreement;
		shared_ptr<IfcTrimmingPreference>						m_MasterRepresentation;
	};
}
