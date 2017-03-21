/**
 * TGen - Simple Tangent Generator
 *
 * 2016 by Max Limper, Fraunhofer IGD
 *
 * This code is public domain.
 * 
 */

#ifndef TGEN_DEBUG_H
#define TGEN_DEBUG_H

#include "tgen.h"


namespace tgen
{

    /**
     * To ease debugging and visualization of results, this code writes
     * the mesh and the tangent space frames at each vertex to an X3D file.
     *
     * Requirements for input:
     * - triIndicesPos and triIndicesUV must be of the same size
     * - triIndicesPos refers to (at maximum) num3DVertices different elements
     * - triIndicesUV  refers to (at maximum) numUVVertices different elements
     * - positions3D  must have a size of num3DVertices * 3
     * - normals3D    must have a size of numUVVertices * 3
     * - uvs2D        must have a size of numUVVertices * 2
     * - tangents3D   must have a size of numUVVertices * 3
     * - bitangents3D must have a size of numUVVertices * 3
     * - filename must be the name of a writeable file in an existing directory
     */
    void dumpDebugX3D(const std::vector<tgen::VIndexT> & triIndicesPos,
                      const std::vector<tgen::VIndexT> & triIndicesUV,
                      const std::vector<tgen::RealT>   & positions3D,
                      const std::vector<tgen::RealT>   & normals3D,
                      const std::vector<tgen::RealT>   & uvs2D,
                      const std::vector<tgen::RealT>   & tangents3D,
                      const std::vector<tgen::RealT>   & bitangents3D,
                      const char                       * filename      );

    //-------------------------------------------------------------------------
    
}

#endif //TGEN_DEBUG_H
