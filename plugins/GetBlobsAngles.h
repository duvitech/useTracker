/*----------------------------------------------------------------------------*/
/*    Copyright (C) 2015 Alexandre Campo                                      */
/*                                                                            */
/*    This file is part of USE Tracker.                                       */
/*                                                                            */
/*    USE Tracker is free software: you can redistribute it and/or modify     */
/*    it under the terms of the GNU General Public License as published by    */
/*    the Free Software Foundation, either version 3 of the License, or       */
/*    (at your option) any later version.                                     */
/*                                                                            */
/*    USE Tracker is distributed in the hope that it will be useful,          */
/*    but WITHOUT ANY WARRANTY; without even the implied warranty of          */
/*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           */
/*    GNU General Public License for more details.                            */
/*                                                                            */
/*    You should have received a copy of the GNU General Public License       */
/*    along with USE Tracker.  If not, see <http://www.gnu.org/licenses/>.    */
/*----------------------------------------------------------------------------*/

#ifndef GETBLOBSANGLES_H
#define GETBLOBSANGLES_H

#include "PipelinePlugin.h"


class GetBlobsAngles : public PipelinePlugin
{
public:

    struct StatData
    {
	StatData()
	    {
		cov = 0;
		varx = 0;
		vary = 0;
		maxdist = 0;
	    }

	int cov;
	int varx;
	int vary;
	int maxdist;
    };

    GetBlobsAngles();

    void Apply();
    void OutputHud (cv::Mat& hud);

    void LoadXML (cv::FileNode& fn);
    void SaveXML (cv::FileStorage& fs);
};

#endif
