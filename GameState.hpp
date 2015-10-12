//
//  GameState.hpp
//  Boundless
//
//  Created by Rick Chou on 10/3/15.
//  Copyright © 2015 Rick Chou. All rights reserved.
//

#ifndef GameState_hpp
#define GameState_hpp

#include "BNDGameContext.hpp"

class CGameState : public CState< CBNDGameContext > {
  
private:
    
    CGameInput m_GameInput;
   
    CWorldEntity * m_pPlayer;
    CGameVars * m_pGameVars;
    
    CFrameBufferObject m_ShadowsFBO, m_ShadowOcclusionFBO, m_SceneFBO;
    
public:
    
    void Init();
    void PostInit();
    void OnStateSwitch();
    
    void Input();
    void Think();
    void Draw();

};


#endif /* GameState_hpp */
