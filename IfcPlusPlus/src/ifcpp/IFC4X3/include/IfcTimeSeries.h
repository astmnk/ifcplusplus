/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcMetricValueSelect.h"
#include "IfcObjectReferenceSelect.h"
#include "IfcResourceObjectSelect.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcLabel;
	class IFCQUERY_EXPORT IfcText;
	class IFCQUERY_EXPORT IfcDateTime;
	class IFCQUERY_EXPORT IfcTimeSeriesDataTypeEnum;
	class IFCQUERY_EXPORT IfcDataOriginEnum;
	class IFCQUERY_EXPORT IfcUnit;
	class IFCQUERY_EXPORT IfcExternalReferenceRelationship;
	//ENTITY
	class IFCQUERY_EXPORT IfcTimeSeries : virtual public IfcMetricValueSelect, virtual public IfcObjectReferenceSelect, virtual public IfcResourceObjectSelect, public BuildingEntity
	{
	public:
		IfcTimeSeries() = default;
		IfcTimeSeries( int id );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 8; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 3101149627; }

		// IfcTimeSeries -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcLabel>										m_Name;
		shared_ptr<IfcText>											m_Description;				//optional
		shared_ptr<IfcDateTime>										m_StartTime;
		shared_ptr<IfcDateTime>										m_EndTime;
		shared_ptr<IfcTimeSeriesDataTypeEnum>						m_TimeSeriesDataType;
		shared_ptr<IfcDataOriginEnum>								m_DataOrigin;
		shared_ptr<IfcLabel>										m_UserDefinedDataOrigin;	//optional
		shared_ptr<IfcUnit>											m_Unit;						//optional
		// inverse attributes:
		std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_HasExternalReference_inverse;
	};
}
