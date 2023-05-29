/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcFace.h"
#include "ifcpp/IFC4X3/include/IfcSurfaceTexture.h"
#include "ifcpp/IFC4X3/include/IfcTextureMap.h"
#include "ifcpp/IFC4X3/include/IfcTextureVertex.h"

// ENTITY IfcTextureMap 
IFC4X3::IfcTextureMap::IfcTextureMap( int tag ) { m_tag = tag; }
void IFC4X3::IfcTextureMap::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCTEXTUREMAP" << "(";
	writeEntityList( stream, m_Maps );
	stream << ",";
	writeEntityList( stream, m_Vertices );
	stream << ",";
	if( m_MappedTo ) { stream << "#" << m_MappedTo->m_tag; } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcTextureMap::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcTextureMap::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReferenceList( args[0], m_Maps, map, errorStream );}
	if( num_args > 1 ){readEntityReferenceList( args[1], m_Vertices, map, errorStream );}
	if( num_args > 2 ){readEntityReference( args[2], m_MappedTo, map, errorStream );}
	if( num_args != 3 ){ errorStream << "Wrong parameter count for entity IfcTextureMap, expecting 3, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcTextureMap::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcTextureCoordinate::getAttributes( vec_attributes );
	shared_ptr<AttributeObjectVector> Vertices_vec_object( new AttributeObjectVector() );
	std::copy( m_Vertices.begin(), m_Vertices.end(), std::back_inserter( Vertices_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "Vertices", Vertices_vec_object ) );
	vec_attributes.emplace_back( std::make_pair( "MappedTo", m_MappedTo ) );
}
void IFC4X3::IfcTextureMap::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcTextureCoordinate::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcTextureMap::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcTextureCoordinate::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcTextureMap> ptr_self = dynamic_pointer_cast<IfcTextureMap>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcTextureMap::setInverseCounterparts: type mismatch" ); }
	if( m_MappedTo )
	{
		m_MappedTo->m_HasTextureMaps_inverse.emplace_back( ptr_self );
	}
}
void IFC4X3::IfcTextureMap::unlinkFromInverseCounterparts()
{
	IfcTextureCoordinate::unlinkFromInverseCounterparts();
	if( m_MappedTo )
	{
		std::vector<weak_ptr<IfcTextureMap> >& HasTextureMaps_inverse = m_MappedTo->m_HasTextureMaps_inverse;
		for( auto it_HasTextureMaps_inverse = HasTextureMaps_inverse.begin(); it_HasTextureMaps_inverse != HasTextureMaps_inverse.end(); )
		{
			weak_ptr<IfcTextureMap> self_candidate_weak = *it_HasTextureMaps_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_HasTextureMaps_inverse;
				continue;
			}
			shared_ptr<IfcTextureMap> self_candidate( *it_HasTextureMaps_inverse );
			if( self_candidate.get() == this )
			{
				it_HasTextureMaps_inverse= HasTextureMaps_inverse.erase( it_HasTextureMaps_inverse );
			}
			else
			{
				++it_HasTextureMaps_inverse;
			}
		}
	}
}
