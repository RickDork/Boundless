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
    
    CTextureImage * m_pPlayerSprite;
    CWorldEntity * m_pPlayer;
    
public:
    
    void Init();
    void PostInit();
    void OnStateSwitch();
    
    void Input();
    void Think();
    void Draw();

};


#endif /* GameState_hpp */
