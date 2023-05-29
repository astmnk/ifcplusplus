/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcBoolean.h"
#include "ifcpp/IFC4X3/include/IfcCartesianPoint.h"
#include "ifcpp/IFC4X3/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcNonNegativeLengthMeasure.h"
#include "ifcpp/IFC4X3/include/IfcOpenCrossProfileDef.h"
#include "ifcpp/IFC4X3/include/IfcPlaneAngleMeasure.h"
#include "ifcpp/IFC4X3/include/IfcProfileProperties.h"
#include "ifcpp/IFC4X3/include/IfcProfileTypeEnum.h"

// ENTITY IfcOpenCrossProfileDef 
IFC4X3::IfcOpenCrossProfileDef::IfcOpenCrossProfileDef( int tag ) { m_tag = tag; }
void IFC4X3::IfcOpenCrossProfileDef::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCOPENCROSSPROFILEDEF" << "(";
	if( m_ProfileType ) { m_ProfileType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ProfileName ) { m_ProfileName->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_HorizontalWidths ) { m_HorizontalWidths->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	stream << "(";
	for( size_t ii = 0; ii < m_Widths.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcNonNegativeLengthMeasure>& type_object = m_Widths[ii];
		if( type_object )
		{
			type_object->getStepParameter( stream, false );
		}
		else
		{
			stream << "$";
		}
	}
	stream << ")";
	stream << ",";
	writeTypeOfRealList( stream, m_Slopes, false );
	stream << ",";
	if( m_Tags.size() > 0 )
	{
		stream << "(";
		for( size_t ii = 0; ii < m_Tags.size(); ++ii )
		{
			if( ii > 0 )
			{
				stream << ",";
			}
			const shared_ptr<IfcLabel>& type_object = m_Tags[ii];
			if( type_object )
			{
				type_object->getStepParameter( stream, false );
			}
			else
			{
				stream << "$";
			}
		}
		stream << ")";
	}
	else { stream << "$"; }
	stream << ",";
	if( m_OffsetPoint ) { stream << "#" << m_OffsetPoint->m_tag; } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcOpenCrossProfileDef::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcOpenCrossProfileDef::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_ProfileType = IfcProfileTypeEnum::createObjectFromSTEP( args[0], map, errorStream );}
	if( num_args > 1 ){m_ProfileName = IfcLabel::createObjectFromSTEP( args[1], map, errorStream );}
	if( num_args > 2 ){m_HorizontalWidths = IfcBoolean::createObjectFromSTEP( args[2], map, errorStream );}
	if( num_args > 3 ){readTypeOfRealList( args[3], m_Widths );}
	if( num_args > 4 ){readTypeOfRealList( args[4], m_Slopes );}
	if( num_args > 5 ){readTypeOfStringList( args[5], m_Tags );}
	if( num_args > 6 ){readEntityReference( args[6], m_OffsetPoint, map, errorStream );}
	if( num_args != 7 ){ errorStream << "Wrong parameter count for entity IfcOpenCrossProfileDef, expecting 7, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcOpenCrossProfileDef::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcProfileDef::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "HorizontalWidths", m_HorizontalWidths ) );
	shared_ptr<AttributeObjectVector> Widths_vec_object( new AttributeObjectVector() );
	std::copy( m_Widths.begin(), m_Widths.end(), std::back_inserter( Widths_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "Widths", Widths_vec_object ) );
	shared_ptr<AttributeObjectVector> Slopes_vec_object( new AttributeObjectVector() );
	std::copy( m_Slopes.begin(), m_Slopes.end(), std::back_inserter( Slopes_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "Slopes", Slopes_vec_object ) );
	shared_ptr<AttributeObjectVector> Tags_vec_object( new AttributeObjectVector() );
	std::copy( m_Tags.begin(), m_Tags.end(), std::back_inserter( Tags_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "Tags", Tags_vec_object ) );
	vec_attributes.emplace_back( std::make_pair( "OffsetPoint", m_OffsetPoint ) );
}
void IFC4X3::IfcOpenCrossProfileDef::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcProfileDef::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcOpenCrossProfileDef::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcProfileDef::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcOpenCrossProfileDef::unlinkFromInverseCounterparts()
{
	IfcProfileDef::unlinkFromInverseCounterparts();
}
