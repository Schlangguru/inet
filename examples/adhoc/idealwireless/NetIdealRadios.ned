//
// Copyright (C) 2013 OpenSim Ltd.
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA
//

package inet.examples.adhoc.idealwireless;

import inet.networklayer.configurator.ipv4.IPv4NetworkConfigurator;
import inet.node.inet.AdhocHost;
import inet.physicallayer.idealradio.IdealRadioMedium;
import inet.visualizer.integrated.IntegratedCanvasVisualizer;

network Net
{
    parameters:
        int numHosts;
        @display("bgb=600,400");
    submodules:
        visualizer: IntegratedCanvasVisualizer {
            parameters:
                @display("p=100,50");
        }
        configurator: IPv4NetworkConfigurator {
            parameters:
                @display("p=100,150");
        }
        radioMedium: IdealRadioMedium {
            parameters:
                @display("p=100,250");
        }
        host[numHosts]: AdhocHost {
            parameters:
                @display("r=,,#707070;p=250,58");
        }
}

