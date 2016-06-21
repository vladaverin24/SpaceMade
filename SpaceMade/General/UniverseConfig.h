//
//  UniverseConfig.h
//  SpaceMade
//
//  Created by Vladislav Averin on 21/06/16.
//  Copyright © 2016 Vladislav Averin. All rights reserved.
//

#ifndef UniverseConfig_h
#define UniverseConfig_h

#define SANDBOX_MODE



#ifdef SANDBOX_MODE

#define NUMBER_OF_UNIVERSES 1

#define MAX_NUMBER_OF_GALAXIES_PER_UNIVERSE 1
#define MAX_NUMBER_OF_STAR_SYSTEMS_PER_GALAXY 1
#define MAX_NUMBER_OF_STARS_PER_STAR_SYSTEM 1
#define MAX_NUMBER_OF_PLANETS_PER_STAR_SYSTEM 1

#define MIN_NUMBER_OF_STAR_SYSTEMS_PER_GALAXY 1
#define MIN_NUMBER_OF_STARS_PER_STAR_SYSTEM 1
#define MIN_NUMBER_OF_PLANETS_PER_STAR_SYSTEM 1

#else

#define NUMBER_OF_UNIVERSES 1

#define MAX_NUMBER_OF_GALAXIES_PER_UNIVERSE 1
#define MAX_NUMBER_OF_STAR_SYSTEMS_PER_GALAXY 1
#define MAX_NUMBER_OF_STARS_PER_STAR_SYSTEM 1
#define MAX_NUMBER_OF_PLANETS_PER_STAR_SYSTEM 1

#define MIN_NUMBER_OF_STAR_SYSTEMS_PER_GALAXY 1
#define MIN_NUMBER_OF_STARS_PER_STAR_SYSTEM 1
#define MIN_NUMBER_OF_PLANETS_PER_STAR_SYSTEM 1

#endif


#endif /* UniverseConfig_h */
