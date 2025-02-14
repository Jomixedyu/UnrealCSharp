﻿#pragma once

#include "Reflection/Property/FPropertyDescriptor.h"

class FObjectPropertyDescriptor : public FPropertyDescriptor
{
public:
	using FPropertyDescriptor::FPropertyDescriptor;

public:
	virtual void Get(void* Src, void** Dest) const override;

	virtual void Set(void* Src, void* Dest) const override;

public:
	virtual bool Identical(const void* A, const void* B, uint32 PortFlags = 0) const override;
};
