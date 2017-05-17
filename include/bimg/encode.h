/*
 * Copyright 2011-2017 Branimir Karadzic. All rights reserved.
 * License: https://github.com/bkaradzic/bimg#license-bsd-2-clause
 */

#ifndef BIMG_ENCODE_H_HEADER_GUARD
#define BIMG_ENCODE_H_HEADER_GUARD

#include "bimg.h"

namespace bimg
{
	struct Quality
	{
		enum Enum
		{
			Default,
			Highest,
			Fastest,

			Count
		};
	};

	///
	bool imageEncodeFromRgba8(
		  void* _dst
		, const void* _src
		, uint32_t _width
		, uint32_t _height
		, TextureFormat::Enum _format
		, Quality::Enum _quality
		);

	///
	bool imageEncodeFromRgba32f(
		  bx::AllocatorI* _allocator
		, void* _dst
		, const void* _src
		, uint32_t _width
		, uint32_t _height
		, TextureFormat::Enum _format
		, Quality::Enum _quality
		);

	///
	void imageRgba32f11to01(
		  void* _dst
		, uint32_t _width
		, uint32_t _height
		, uint32_t _pitch
		, const void* _src
		);

	///
	void imageMakeDist(
		  bx::AllocatorI* _allocator
		, void* _dst
		, uint32_t _width
		, uint32_t _height
		, uint32_t _srcPitch
		, float _edge
		, const void* _src
		);

	///
	float imageQualityRgba8(
		  const void* _reference
		, const void* _data
		, uint16_t _width
		, uint16_t _height
		);

	///
	bool imageResizeRgba32fLinear(
		  ImageContainer* _dst
		, const ImageContainer* _src
		);

} // namespace bimg

#endif // BIMG_ENCODE_H_HEADER_GUARD
