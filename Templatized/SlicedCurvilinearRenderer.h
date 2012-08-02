/***********************************************************************
SlicedCurvilinearRenderer - Class to render sliced curvilinear data
sets. Implemented as a specialization of the generic DataSetRenderer
class.
Copyright (c) 2008-2009 Oliver Kreylos

This file is part of the 3D Data Visualizer (Visualizer).

The 3D Data Visualizer is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License as published
by the Free Software Foundation; either version 2 of the License, or (at
your option) any later version.

The 3D Data Visualizer is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License along
with the 3D Data Visualizer; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
***********************************************************************/

#ifndef VISUALIZATION_SLICEDCURVILINEARRENDERER_INCLUDED
#define VISUALIZATION_SLICEDCURVILINEARRENDERER_INCLUDED

#include <Templatized/DataSetRenderer.h>
#include <Templatized/SlicedCurvilinear.h>
#include <Templatized/CurvilinearGridRenderer.h>

namespace Visualization {

namespace Templatized {

template <class ScalarParam,int dimensionParam,class ValueScalarParam>
class DataSetRenderer<SlicedCurvilinear<ScalarParam,dimensionParam,ValueScalarParam> >:public CurvilinearGridRenderer<SlicedCurvilinear<ScalarParam,dimensionParam,ValueScalarParam> >
	{
	/* Constructors and destructors: */
	public:
	DataSetRenderer(const SlicedCurvilinear<ScalarParam,dimensionParam,ValueScalarParam>* sDataSet) // Creates a renderer for the given data set
		:CurvilinearGridRenderer<SlicedCurvilinear<ScalarParam,dimensionParam,ValueScalarParam> >(sDataSet)
		{
		}
	};

}

}

#endif
