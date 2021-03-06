/*
 *  Scene_House_Bathroom_Cabinet.h
 *  enigma
 *
 *  Created by Rockford on 22/11/10.
 *  Copyright 2010 Casual Games France. All rights reserved.
 *
 */

#ifndef  _ENIGMA_SCENEBATHCAB_H
#define  _ENIGMA_SCENEBATHCAB_H

#include "EScene.h"
#include "KPTK.h"
#include "KSound.h"

class Scene_House_Bathroom_Cabinet: public EScene {
public:
   Scene_House_Bathroom_Cabinet(ESceneDirector *lpSceneDirector);
   ~Scene_House_Bathroom_Cabinet();
   
   void Init ();
   void Close ();
   bool AskForClose();
   
   /** 3 steps rendering **/
   void Check ();
   void Logic ();
   void Draw ();
   
   bool ObjectClicked(const char *szObjectName, float x, float y);
   bool ObjectOver(char *szObjectName, float x, float y);
   bool ItemUsed(const char *szItemName, const char *szObjectName);
   void MiniGameDone(const char *szGameName, bool bIsRevolved);
   
   bool IsNeedIHM()
   {
      return true;
   }
private:
   KGraphic *_lpBgGraphic;
   
protected:
   
};

#endif