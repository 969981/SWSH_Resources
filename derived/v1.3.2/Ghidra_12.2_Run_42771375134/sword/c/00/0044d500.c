/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044d500; name: FUN_0044d500
 */


void FUN_0044d500(undefined8 *param_1,code *param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,long param_7)

{
  long *plVar1;
  MutexType *pMVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  
  if (param_2 == (code *)0x0) {
    return;
  }
  pMVar2 = (MutexType *)(param_1 + 2);
  nn::os::LockMutex(pMVar2);
  plVar9 = (long *)*param_1;
  uVar7 = *(uint *)(param_1 + 1);
  uVar8 = (ulong)uVar7;
  plVar6 = plVar9;
  if (uVar7 == 0) {
LAB_0044d5a0:
    plVar1 = plVar9 + (ulong)uVar7 * 2;
    if (plVar6 != plVar1) {
      iVar3 = (int)plVar6[1];
      iVar4 = *(int *)((long)plVar6 + 0xc);
      iVar5 = iVar3 + -1;
      if (iVar3 == 0 || iVar5 == 0) {
        plVar6 = plVar9;
        if (uVar7 == 0) {
LAB_0044d634:
          if (plVar1 != plVar6) {
            if (plVar6 < plVar1 + -2) {
              uVar8 = (long)plVar9 + ~(ulong)plVar6 + uVar8 * 0x10 + -0x10;
              uVar7 = ((uint)(uVar8 >> 4) & 0xfffffff) + 1;
              if ((uVar7 & 7) != 0) {
                lVar10 = -((ulong)uVar7 & 7);
                plVar9 = plVar6;
                do {
                  plVar6 = plVar9 + 2;
                  *plVar9 = *plVar6;
                  plVar9[1] = plVar9[3];
                  lVar10 = lVar10 + 1;
                  plVar9 = plVar6;
                } while (lVar10 != 0);
              }
              if (0x6f < uVar8) {
                do {
                  *plVar6 = plVar6[2];
                  plVar6[1] = plVar6[3];
                  plVar6[2] = plVar6[4];
                  plVar6[3] = plVar6[5];
                  plVar6[4] = plVar6[6];
                  plVar6[5] = plVar6[7];
                  plVar6[6] = plVar6[8];
                  plVar6[7] = plVar6[9];
                  plVar6[8] = plVar6[10];
                  plVar6[9] = plVar6[0xb];
                  plVar6[10] = plVar6[0xc];
                  plVar6[0xb] = plVar6[0xd];
                  plVar6[0xc] = plVar6[0xe];
                  plVar6[0xd] = plVar6[0xf];
                  plVar9 = plVar6 + 0x10;
                  plVar6[0xe] = *plVar9;
                  plVar6[0xf] = plVar6[0x11];
                  plVar6 = plVar9;
                } while (plVar9 < plVar1 + -2);
              }
              uVar7 = *(uint *)(param_1 + 1);
            }
            *(uint *)(param_1 + 1) = uVar7 - 1;
          }
        }
        else {
          lVar10 = uVar8 << 4;
          do {
            if (*plVar6 == param_7) goto LAB_0044d634;
            lVar10 = lVar10 + -0x10;
            plVar6 = plVar6 + 2;
          } while (lVar10 != 0);
        }
      }
      else {
        *(int *)(plVar6 + 1) = iVar5;
        if (iVar4 != 0) {
          *(int *)((long)plVar6 + 0xc) = iVar4 + -1;
        }
      }
      nn::os::ClearEvent((EventType *)(param_1 + 6));
      nn::os::UnlockMutex(pMVar2);
      if (iVar4 == 0) {
        (*param_2)(param_3,param_4,param_5,param_6,param_7);
      }
      nn::os::SignalEvent((EventType *)(param_1 + 6));
      return;
    }
  }
  else {
    lVar10 = uVar8 << 4;
    do {
      if (*plVar6 == param_7) goto LAB_0044d5a0;
      lVar10 = lVar10 + -0x10;
      plVar6 = plVar6 + 2;
    } while (lVar10 != 0);
  }
  nn::os::UnlockMutex(pMVar2);
  return;
}


