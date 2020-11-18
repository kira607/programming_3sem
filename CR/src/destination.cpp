//
// Created by kirill on 18.11.2020.
//

#include "destination.h"

std::string str(Destination destination)
{
    switch(destination)
    {
        case Destination::Omsk: return "Omsk";
        case Destination::Kaliningrad: return "Kaliningrad";
        case Destination::StPetersburg: return "StPetersburg";
        case Destination::Novgorod: return "Novgorod";
        case Destination::Sochi: return "Sochi";
        case Destination::Murmansk: return "Murmansk";
        case Destination::NONE: return "NONE";
    }
}