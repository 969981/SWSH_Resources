/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00105b40; name: FUN_00105b40
 */


void FUN_00105b40(long param_1)

{
  SystemEventType *pSVar1;
  ulong uVar2;
  
  pSVar1 = (SystemEventType *)(param_1 + 0x1050);
  uVar2 = nn::os::TryWaitSystemEvent(pSVar1);
  if ((uVar2 & 1) != 0) {
    FUN_001057d0();
    uVar2 = nn::os::TryWaitSystemEvent(pSVar1);
    if ((uVar2 & 1) != 0) {
      FUN_001057d0();
      uVar2 = nn::os::TryWaitSystemEvent(pSVar1);
      if ((uVar2 & 1) != 0) {
        FUN_001057d0();
        uVar2 = nn::os::TryWaitSystemEvent(pSVar1);
        if ((uVar2 & 1) != 0) {
          FUN_001057d0();
          uVar2 = nn::os::TryWaitSystemEvent(pSVar1);
          if ((uVar2 & 1) != 0) {
            FUN_001057d0();
            uVar2 = nn::os::TryWaitSystemEvent(pSVar1);
            if ((uVar2 & 1) != 0) {
              FUN_001057d0();
              uVar2 = nn::os::TryWaitSystemEvent(pSVar1);
              if ((uVar2 & 1) != 0) {
                FUN_001057d0();
                uVar2 = nn::os::TryWaitSystemEvent(pSVar1);
                if ((uVar2 & 1) != 0) {
                  FUN_001057d0();
                  uVar2 = nn::os::TryWaitSystemEvent(pSVar1);
                  if ((uVar2 & 1) != 0) {
                    FUN_001057d0();
                    uVar2 = nn::os::TryWaitSystemEvent(pSVar1);
                    if ((uVar2 & 1) != 0) {
                      FUN_001057d0();
                      uVar2 = nn::os::TryWaitSystemEvent(pSVar1);
                      if ((uVar2 & 1) != 0) {
                        FUN_001057d0();
                        uVar2 = nn::os::TryWaitSystemEvent(pSVar1);
                        if ((uVar2 & 1) != 0) {
                          FUN_001057d0();
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


