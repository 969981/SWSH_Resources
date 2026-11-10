/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0055ff40; name: FUN_0055ff40
 */


uint FUN_0055ff40(long *param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong local_70;
  ulong local_68;
  
  if ((param_1 == (long *)0x0) || (lVar8 = param_1[7], lVar8 == 0)) {
LAB_0055ffd8:
    uVar6 = 0xfffffffe;
  }
  else {
    uVar6 = 2;
    if (param_2 != 1) {
      uVar6 = param_2;
    }
    if (4 < uVar6) {
      return 0xfffffffe;
    }
    if ((1 << (ulong)(uVar6 & 0x1f) & 0x15U) == 0) {
      return 0xfffffffe;
    }
    iVar4 = *(int *)(lVar8 + 0x2b00);
    piVar1 = (int *)(lVar8 + 0xab0c);
    uVar7 = 8;
    if (0 < *(int *)(lVar8 + 0x2b08)) {
      uVar7 = 9;
    }
    lVar3 = param_1[1];
    *(undefined4 *)(lVar8 + 0x2b00) = 0;
    if (-1 < *piVar1) {
      if ((uVar6 != 4) && (*(uint *)(lVar8 + 0x2b04) != 0)) goto LAB_0055ffd8;
      *(uint *)(lVar8 + 0x2b04) = *(uint *)(lVar8 + 0x2b04) | (uint)(uVar6 == 4);
      if ((uVar6 == 4) && (iVar4 != 0)) {
        local_68 = (ulong)*(uint *)(param_1 + 1);
        local_70 = (ulong)*(uint *)(param_1 + 4);
        iVar4 = FUN_005603e0(lVar8,*param_1,&local_68,param_1[3],param_1[3],&local_70,uVar7 | 4);
        *piVar1 = iVar4;
        *(int *)(param_1 + 1) = (int)param_1[1] - (int)local_68;
        *param_1 = *param_1 + (local_68 & 0xffffffff);
        param_1[2] = param_1[2] + (local_68 & 0xffffffff);
        param_1[0xc] = (ulong)*(uint *)(lVar8 + 0x1c);
        *(int *)(param_1 + 4) = (int)param_1[4] - (int)local_70;
        param_1[3] = param_1[3] + (local_70 & 0xffffffff);
        param_1[5] = param_1[5] + (local_70 & 0xffffffff);
        if (-1 < iVar4) {
          if (iVar4 == 0) {
            return 1;
          }
          *piVar1 = -1;
          return 0xfffffffb;
        }
      }
      else {
        uVar2 = uVar7 | 2;
        if (uVar6 == 4) {
          uVar2 = uVar7;
        }
        uVar7 = *(uint *)(lVar8 + 0x2afc);
        if (uVar7 != 0) {
          if (*(uint *)(param_1 + 4) <= uVar7) {
            uVar7 = *(uint *)(param_1 + 4);
          }
          uVar9 = (ulong)uVar7;
          memcpy((void *)param_1[3],(void *)(lVar8 + (ulong)*(uint *)(lVar8 + 11000) + 0x2b0c),uVar9
                );
          param_1[3] = param_1[3] + uVar9;
          *(uint *)(param_1 + 4) = (int)param_1[4] - uVar7;
          param_1[5] = param_1[5] + uVar9;
          iVar4 = *(int *)(lVar8 + 0x2afc) - uVar7;
          *(int *)(lVar8 + 0x2afc) = iVar4;
          *(uint *)(lVar8 + 11000) = *(int *)(lVar8 + 11000) + uVar7 & 0x7fff;
          if (*piVar1 != 0) {
            return 0;
          }
LAB_00560284:
          return (uint)(iVar4 == 0);
        }
        uVar9 = (ulong)*(uint *)(lVar8 + 11000);
        if ((int)lVar3 == 0) {
          while( true ) {
            local_68 = (ulong)*(uint *)(param_1 + 1);
            local_70 = (ulong)(0x8000 - (int)uVar9);
            iVar5 = FUN_005603e0(lVar8,*param_1,&local_68,lVar8 + 0x2b0c,lVar8 + 0x2b0c + uVar9,
                                 &local_70,uVar2);
            *piVar1 = iVar5;
            *(int *)(param_1 + 1) = (int)param_1[1] - (int)local_68;
            *param_1 = *param_1 + (local_68 & 0xffffffff);
            param_1[2] = param_1[2] + (local_68 & 0xffffffff);
            param_1[0xc] = (ulong)*(uint *)(lVar8 + 0x1c);
            *(uint *)(lVar8 + 0x2afc) = (uint)local_70;
            uVar7 = (uint)local_70;
            if (*(uint *)(param_1 + 4) <= (uint)local_70) {
              uVar7 = *(uint *)(param_1 + 4);
            }
            uVar9 = (ulong)uVar7;
            memcpy((void *)param_1[3],(void *)(lVar8 + 0x2b0c + (ulong)*(uint *)(lVar8 + 11000)),
                   uVar9);
            param_1[3] = param_1[3] + uVar9;
            *(uint *)(param_1 + 4) = (int)param_1[4] - uVar7;
            param_1[5] = param_1[5] + uVar9;
            iVar4 = *(int *)(lVar8 + 0x2afc) - uVar7;
            *(int *)(lVar8 + 0x2afc) = iVar4;
            uVar7 = *(int *)(lVar8 + 11000) + uVar7 & 0x7fff;
            uVar9 = (ulong)uVar7;
            *(uint *)(lVar8 + 11000) = uVar7;
            if (iVar5 < 0) break;
            if (iVar5 == 1) {
              return 0xfffffffb;
            }
            if (uVar6 == 4) {
              if (iVar5 == 0) {
LAB_005603b8:
                uVar6 = 0xfffffffb;
                if (iVar4 == 0) {
                  uVar6 = 1;
                }
                return uVar6;
              }
              if ((int)param_1[4] == 0) {
                return 0xfffffffb;
              }
            }
            else {
              if (iVar5 == 0) goto LAB_00560284;
              if ((int)param_1[1] == 0) {
                return 0;
              }
              if (iVar4 != 0) {
                return 0;
              }
              if ((int)param_1[4] == 0) {
                return 0;
              }
            }
          }
        }
        else {
          while( true ) {
            local_68 = (ulong)*(uint *)(param_1 + 1);
            local_70 = (ulong)(0x8000 - (int)uVar9);
            iVar5 = FUN_005603e0(lVar8,*param_1,&local_68,lVar8 + 0x2b0c,lVar8 + 0x2b0c + uVar9,
                                 &local_70,uVar2);
            *piVar1 = iVar5;
            *(int *)(param_1 + 1) = (int)param_1[1] - (int)local_68;
            *param_1 = *param_1 + (local_68 & 0xffffffff);
            param_1[2] = param_1[2] + (local_68 & 0xffffffff);
            param_1[0xc] = (ulong)*(uint *)(lVar8 + 0x1c);
            *(uint *)(lVar8 + 0x2afc) = (uint)local_70;
            uVar7 = (uint)local_70;
            if (*(uint *)(param_1 + 4) <= (uint)local_70) {
              uVar7 = *(uint *)(param_1 + 4);
            }
            uVar9 = (ulong)uVar7;
            memcpy((void *)param_1[3],(void *)(lVar8 + 0x2b0c + (ulong)*(uint *)(lVar8 + 11000)),
                   uVar9);
            param_1[3] = param_1[3] + uVar9;
            *(uint *)(param_1 + 4) = (int)param_1[4] - uVar7;
            param_1[5] = param_1[5] + uVar9;
            iVar4 = *(int *)(lVar8 + 0x2afc) - uVar7;
            *(int *)(lVar8 + 0x2afc) = iVar4;
            uVar7 = *(int *)(lVar8 + 11000) + uVar7 & 0x7fff;
            uVar9 = (ulong)uVar7;
            *(uint *)(lVar8 + 11000) = uVar7;
            if (iVar5 < 0) break;
            if (uVar6 == 4) {
              if (iVar5 == 0) goto LAB_005603b8;
              if ((int)param_1[4] == 0) {
                return 0xfffffffb;
              }
            }
            else {
              if (iVar5 == 0) goto LAB_00560284;
              if ((int)param_1[1] == 0) {
                return 0;
              }
              if (iVar4 != 0) {
                return 0;
              }
              if ((int)param_1[4] == 0) {
                return 0;
              }
            }
          }
        }
      }
    }
    uVar6 = 0xfffffffd;
  }
  return uVar6;
}


