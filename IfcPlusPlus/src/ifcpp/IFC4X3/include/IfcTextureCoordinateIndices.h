/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcPositiveInteger;
	class IFCQUERY_EXPORT IfcIndexedPolygonalFace;
	class IFCQUERY_EXPORT IfcIndexedPolygonalTextureMap;
	//ENTITY
	class IFCQUERY_EXPORT IfcTextureCoordinateIndices : public BuildingEntity
	{
	public:
		IfcTextureCoordinateIndices() = default;
		IfcTextureCoordinateIndices( int id );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 2; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 222769930; }

		// IfcTextureCoordinateIndices -----------------------------------------------------------
		// attributes:
		std::vector<shared_ptr<IfcPositiveInteger> >	m_TexCoordIndex;
		shared_ptr<IfcIndexedPolygonalFace>				m_TexCoordsOf;
		// inverse attributes:
		weak_ptr<IfcIndexedPolygonalTextureMap>			m_ToTexMap_inverse;
	};
}
