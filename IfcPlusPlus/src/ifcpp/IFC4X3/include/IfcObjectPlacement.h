/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcObjectPlacement;
	class IFCQUERY_EXPORT IfcProduct;
	//ENTITY
	class IFCQUERY_EXPORT IfcObjectPlacement : public BuildingEntity
	{
	public:
		IfcObjectPlacement() = default;
		IfcObjectPlacement( int id );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 1; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 3701648758; }

		// IfcObjectPlacement -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcObjectPlacement>				m_PlacementRelTo;			//optional
		// inverse attributes:
		std::vector<weak_ptr<IfcProduct> >			m_PlacesObject_inverse;
		std::vector<weak_ptr<IfcObjectPlacement> >	m_ReferencedByPlacements_inverse;
	};
}
