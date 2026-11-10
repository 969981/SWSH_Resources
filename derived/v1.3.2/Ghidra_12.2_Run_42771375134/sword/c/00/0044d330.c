/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044d330; name: FUN_0044d330
 */


void FUN_0044d330(undefined8 *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  nn::os::LockMutex((MutexType *)(param_1 + 2));
  plVar6 = (long *)*param_1;
  uVar4 = *(uint *)(param_1 + 1);
  uVar5 = (ulong)uVar4;
  plVar3 = plVar6;
  if (uVar4 == 0) {
LAB_0044d390:
    plVar1 = plVar6 + (ulong)uVar4 * 2;
    if (plVar3 != plVar1) {
      iVar2 = (int)plVar3[1] + -1;
      if ((int)plVar3[1] == 0 || iVar2 == 0) {
        plVar3 = plVar6;
        if (uVar4 == 0) {
LAB_0044d3f0:
          if (plVar1 != plVar3) {
            if (plVar3 < plVar1 + -2) {
              uVar5 = (long)plVar6 + ~(ulong)plVar3 + uVar5 * 0x10 + -0x10;
              uVar4 = ((uint)(uVar5 >> 4) & 0xfffffff) + 1;
              if ((uVar4 & 7) != 0) {
                lVar7 = -((ulong)uVar4 & 7);
                plVar6 = plVar3;
                do {
                  plVar3 = plVar6 + 2;
                  *plVar6 = *plVar3;
                  plVar6[1] = plVar6[3];
                  lVar7 = lVar7 + 1;
                  plVar6 = plVar3;
                } while (lVar7 != 0);
              }
              if (0x6f < uVar5) {
                do {
                  *plVar3 = plVar3[2];
                  plVar3[1] = plVar3[3];
                  plVar3[2] = plVar3[4];
                  plVar3[3] = plVar3[5];
                  plVar3[4] = plVar3[6];
                  plVar3[5] = plVar3[7];
                  plVar3[6] = plVar3[8];
                  plVar3[7] = plVar3[9];
                  plVar3[8] = plVar3[10];
                  plVar3[9] = plVar3[0xb];
                  plVar3[10] = plVar3[0xc];
                  plVar3[0xb] = plVar3[0xd];
                  plVar3[0xc] = plVar3[0xe];
                  plVar3[0xd] = plVar3[0xf];
                  plVar6 = plVar3 + 0x10;
                  plVar3[0xe] = *plVar6;
                  plVar3[0xf] = plVar3[0x11];
                  plVar3 = plVar6;
                } while (plVar6 < plVar1 + -2);
              }
              uVar4 = *(uint *)(param_1 + 1);
            }
            *(uint *)(param_1 + 1) = uVar4 - 1;
          }
        }
        else {
          lVar7 = uVar5 << 4;
          do {
            if (*plVar3 == param_2) goto LAB_0044d3f0;
            lVar7 = lVar7 + -0x10;
            plVar3 = plVar3 + 2;
          } while (lVar7 != 0);
        }
      }
      else {
        *(int *)(plVar3 + 1) = iVar2;
      }
    }
  }
  else {
    lVar7 = uVar5 << 4;
    do {
      if (*plVar3 == param_2) goto LAB_0044d390;
      lVar7 = lVar7 + -0x10;
      plVar3 = plVar3 + 2;
    } while (lVar7 != 0);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 2));
  lVar8 = *(long *)PTR_DAT_02713000;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar8 == lVar7) {
    return;
  }
  nn::os::WaitEvent((EventType *)(param_1 + 6));
  return;
}


