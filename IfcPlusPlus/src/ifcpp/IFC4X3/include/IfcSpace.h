/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcSpaceBoundarySelect.h"
#include "IfcSpatialStructureElement.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcSpaceTypeEnum;
	class IFCQUERY_EXPORT IfcLengthMeasure;
	class IFCQUERY_EXPORT IfcRelCoversSpaces;
	class IFCQUERY_EXPORT IfcRelSpaceBoundary;
	//ENTITY
	class IFCQUERY_EXPORT IfcSpace : virtual public IfcSpaceBoundarySelect, public IfcSpatialStructureElement
	{
	public:
		IfcSpace() = default;
		IfcSpace( int id );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 11; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 3856911033; }

		// IfcRoot -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcGloballyUniqueId>								m_GlobalId;
		//  shared_ptr<IfcOwnerHistory>									m_OwnerHistory;				//optional
		//  shared_ptr<IfcLabel>										m_Name;						//optional
		//  shared_ptr<IfcText>											m_Description;				//optional

		// IfcObjectDefinition -----------------------------------------------------------
		// inverse attributes:
		//  std::vector<weak_ptr<IfcRelAssigns> >						m_HasAssignments_inverse;
		//  std::vector<weak_ptr<IfcRelNests> >							m_Nests_inverse;
		//  std::vector<weak_ptr<IfcRelNests> >							m_IsNestedBy_inverse;
		//  std::vector<weak_ptr<IfcRelDeclares> >						m_HasContext_inverse;
		//  std::vector<weak_ptr<IfcRelAggregates> >					m_IsDecomposedBy_inverse;
		//  std::vector<weak_ptr<IfcRelAggregates> >					m_Decomposes_inverse;
		//  std::vector<weak_ptr<IfcRelAssociates> >					m_HasAssociations_inverse;

		// IfcObject -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcLabel>										m_ObjectType;				//optional
		// inverse attributes:
		//  std::vector<weak_ptr<IfcRelDefinesByObject> >				m_IsDeclaredBy_inverse;
		//  std::vector<weak_ptr<IfcRelDefinesByObject> >				m_Declares_inverse;
		//  std::vector<weak_ptr<IfcRelDefinesByType> >					m_IsTypedBy_inverse;
		//  std::vector<weak_ptr<IfcRelDefinesByProperties> >			m_IsDefinedBy_inverse;

		// IfcProduct -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcObjectPlacement>								m_ObjectPlacement;			//optional
		//  shared_ptr<IfcProductRepresentation>						m_Representation;			//optional
		// inverse attributes:
		//  std::vector<weak_ptr<IfcRelAssignsToProduct> >				m_ReferencedBy_inverse;
		//  std::vector<weak_ptr<IfcRelPositions> >						m_PositionedRelativeTo_inverse;
		//  std::vector<weak_ptr<IfcRelReferencedInSpatialStructure> >	m_ReferencedInStructures_inverse;

		// IfcSpatialElement -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcLabel>										m_LongName;					//optional
		// inverse attributes:
		//  std::vector<weak_ptr<IfcRelContainedInSpatialStructure> >	m_ContainsElements_inverse;
		//  std::vector<weak_ptr<IfcRelServicesBuildings> >				m_ServicedBySystems_inverse;
		//  std::vector<weak_ptr<IfcRelReferencedInSpatialStructure> >	m_ReferencesElements_inverse;
		//  std::vector<weak_ptr<IfcRelInterferesElements> >			m_IsInterferedByElements_inverse;
		//  std::vector<weak_ptr<IfcRelInterferesElements> >			m_InterferesElements_inverse;

		// IfcSpatialStructureElement -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcElementCompositionEnum>						m_CompositionType;			//optional

		// IfcSpace -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcSpaceTypeEnum>								m_PredefinedType;			//optional
		shared_ptr<IfcLengthMeasure>								m_ElevationWithFlooring;	//optional
		// inverse attributes:
		std::vector<weak_ptr<IfcRelCoversSpaces> >					m_HasCoverings_inverse;
		std::vector<weak_ptr<IfcRelSpaceBoundary> >					m_BoundedBy_inverse;
	};
}
