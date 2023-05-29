/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcShell.h"
#include "ifcpp/IFC4X3/include/IfcShellBasedSurfaceModel.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"

// ENTITY IfcShellBasedSurfaceModel 
IFC4X3::IfcShellBasedSurfaceModel::IfcShellBasedSurfaceModel( int tag ) { m_tag = tag; }
void IFC4X3::IfcShellBasedSurfaceModel::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCSHELLBASEDSURFACEMODEL" << "(";
	stream << "(";
	for( size_t ii = 0; ii < m_SbsmBoundary.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcShell>& type_object = m_SbsmBoundary[ii];
		if( type_object )
		{
			type_object->getStepParameter( stream, true );
		}
		else
		{
			stream << "$";
		}
	}
	stream << ")";
	stream << ");";
}
void IFC4X3::IfcShellBasedSurfaceModel::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcShellBasedSurfaceModel::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readSelectList( args[0], m_SbsmBoundary, map, errorStream );}
	if( num_args != 1 ){ errorStream << "Wrong parameter count for entity IfcShellBasedSurfaceModel, expecting 1, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcShellBasedSurfaceModel::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcGeometricRepresentationItem::getAttributes( vec_attributes );
	shared_ptr<AttributeObjectVector> SbsmBoundary_vec_object( new AttributeObjectVector() );
	std::copy( m_SbsmBoundary.begin(), m_SbsmBoundary.end(), std::back_inserter( SbsmBoundary_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "SbsmBoundary", SbsmBoundary_vec_object ) );
}
void IFC4X3::IfcShellBasedSurfaceModel::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcGeometricRepresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcShellBasedSurfaceModel::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcGeometricRepresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcShellBasedSurfaceModel::unlinkFromInverseCounterparts()
{
	IfcGeometricRepresentationItem::unlinkFromInverseCounterparts();
}
