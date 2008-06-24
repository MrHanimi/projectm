#ifndef Pipeline_HPP
#define Pipeline_HPP

#include <vector>
#include "PerPixelMesh.hpp"
#include "Renderable.hpp"
#include "Filters.hpp"
#include "BeatDetect.hpp"
#include "PipelineContext.hpp"

class Pipeline
{
public:

	 bool textureWrap;
	 float screenDecay;

	 float videoEchoAlpha;
	 float videoEchoZoom;
	 float videoEchoOrientation;

	 std::vector<RenderItem*> drawables;
	 std::vector<RenderItem*> compositeDrawables;

	 Pipeline();
	 virtual void Render(const BeatDetect &music, const PipelineContext &context);
	 virtual Point PerPixel(Point p, const PerPixelContext context);
};

#endif
