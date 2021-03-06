#pragma once
#include "SurfaceMeshPlugins.h"
class surfacemesh_filter_to_skeleton : public SurfaceMeshFilterPlugin{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "surfacemesh_filter_to_skeleton.plugin.starlab")
    Q_INTERFACES(FilterPlugin)

public:
    QString name() { return "Skeleton | SurfaceMesh to Skeleton"; }
    QString description() { return "Converts a SurfaceMeshModel into a CurveskelModel"; }
    void applyFilter(RichParameterSet* parameters);
};
