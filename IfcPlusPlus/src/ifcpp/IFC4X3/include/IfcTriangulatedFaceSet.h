/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcTessellatedFaceSet.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcParameterValue;
	class IFCQUERY_EXPORT IfcBoolean;
	class IFCQUERY_EXPORT IfcPositiveInteger;
	//ENTITY
	class IFCQUERY_EXPORT IfcTriangulatedFaceSet : public IfcTessellatedFaceSet
	{
	public:
		IfcTriangulatedFaceSet() = default;
		IfcTriangulatedFaceSet( int id );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 5; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 2916149573; }

		// IfcRepresentationItem -----------------------------------------------------------
		// inverse attributes:
		//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
		//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

		// IfcGeometricRepresentationItem -----------------------------------------------------------

		// IfcTessellatedItem -----------------------------------------------------------

		// IfcTessellatedFaceSet -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcCartesianPointList3D>						m_Coordinates;
		// inverse attributes:
		//  std::vector<weak_ptr<IfcIndexedColourMap> >				m_HasColours_inverse;
		//  std::vector<weak_ptr<IfcIndexedTextureMap> >			m_HasTextures_inverse;

		// IfcTriangulatedFaceSet -----------------------------------------------------------
		// attributes:
		std::vector<std::vector<shared_ptr<IfcParameterValue> > >	m_Normals;					//optional
		shared_ptr<IfcBoolean>									m_Closed;					//optional
		std::vector<std::vector<shared_ptr<IfcPositiveInteger> > >	m_CoordIndex;
		std::vector<shared_ptr<IfcPositiveInteger> >			m_PnIndex;					//optional
	};
}
