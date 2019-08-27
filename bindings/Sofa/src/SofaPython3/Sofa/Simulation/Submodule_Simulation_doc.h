/*********************************************************************
Copyright 2019, CNRS, University of Lille, INRIA

This file is part of sofaPython3

sofaPython3 is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

sofaPython3 is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with sofaqtquick. If not, see <http://www.gnu.org/licenses/>.
*********************************************************************/
/********************************************************************
 Contributors:
    - damien.marchal@univ-lille.fr
    - bruno.josue.marques@inria.fr
    - eve.le-guillou@centrale.centralelille.fr
    - jean-nicolas.brunet@inria.fr
    - thierry.gaugry@inria.fr
********************************************************************/

#pragma once
namespace sofapython3::doc::simulation {

static auto Class =
        R"(
        Controlling a simulation
        ------------------------
        Main controller of the scene.
        It defines how the scene is inited at the beginning, and updated at each time step.
        It derives from Base in order to use smart pointers and model the parameters as Datas,
        which makes their edition easy in the GUI.

        Example:

           .. code-block:: python

             import Sofa.Core
             import SofaRuntime
             SofaRuntime.importPlugin("SofaAllCommonComponents")

             n = Sofa.Core.Node("MyNode")
             Sofa.Simulation.init(n)
             Sofa.Simulation.print(n)

        Functions:

        .. autosummary::
            Sofa.Simulation.animate
            Sofa.Simulation.init
            Sofa.Simulation.print
            Sofa.Simulation.reset
            Sofa.Simulation.load
            Sofa.Simulation.unload
        )";
static auto print =
        R"(
        Print all objects in the graph.
        )";

static auto init =
        R"(
        Initialize the objects.
        )";

static auto animate =
        R"(
        Execute one timestep. If dt is 0, the dt parameter in the graph will be used.
        :param dt: the duration of the step.
        )";

static auto reset =
        R"(
        Reset to initial state.
        )";
static auto load =
        R"(
        Load a scene from a file.
        :param filename: name of the file to be loaded
        :param reload: default to false. It signals if the scene is being reloaded or loaded for
        the first time.
        :param sceneArgs: default to an empty vector. Contains the arguments of the scene.
        )";

static auto unload =
        R"(
        Unload a scene from a Node.
        )";
}
