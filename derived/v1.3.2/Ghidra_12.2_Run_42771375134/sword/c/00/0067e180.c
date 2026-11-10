/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0067e180; name: FUN_0067e180
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0067e180(long *param_1,long param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  *param_1 = (long)(PTR_DAT_02714e18 + 0x10);
  FUN_005bf710(param_1 + 1);
  *(undefined1 *)(param_1 + 3) = 0;
  puVar3 = PTR_DAT_02714e20;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0x50;
  param_1[9] = 0;
  param_1[4] = (long)(puVar3 + 0x10);
  param_1[5] = param_2;
  if (param_2 == 0) {
    lVar4 = FUN_005bc6f0();
    param_1[5] = lVar4;
  }
  plVar5 = param_1 + 0x13;
  *plVar5 = 0;
  puVar3 = PTR_DAT_02714328;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 1;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0xe] = (long)(puVar3 + 0x10);
  param_1[0xf] = param_2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  if (param_2 == 0) {
    lVar4 = FUN_005bc6f0();
    param_1[0xf] = lVar4;
  }
  plVar7 = param_1 + 0x1d;
  *plVar7 = 0;
  puVar3 = PTR_DAT_02714e28;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 4;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x18] = (long)(puVar3 + 0x10);
  param_1[0x19] = param_2;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (param_2 == 0) {
    lVar4 = FUN_005bc6f0();
    param_1[0x19] = lVar4;
  }
  puVar3 = PTR_DAT_02714e30;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 1;
  param_1[0x27] = 0;
  param_1[0x22] = (long)(puVar3 + 0x10);
  param_1[0x23] = param_2;
  if (param_2 == 0) {
    lVar4 = FUN_005bc6f0();
    param_1[0x23] = lVar4;
    if (0xfff < (ulong)param_1[0x11]) goto LAB_0067e28c;
LAB_0067e31c:
    plVar6 = (long *)param_1[0xf];
    if (plVar6 != (long *)0x0) {
      uVar11 = param_1[0x10];
      lVar4 = (**(code **)(*plVar6 + 0x40))
                        (plVar6,1,0x1000,0x10,"../../../../Include\\SiCore/SiCore_Array.h",0x5d1);
      uVar8 = uVar11;
      if (0xfff < uVar11) {
        uVar8 = 0x1000;
      }
      if (lVar4 != 0) {
        if (uVar8 != 0) {
          if (uVar11 == 1) {
            lVar9 = 0;
          }
          else {
            uVar2 = 0xffffffffffffefff;
            if (0xffffffffffffefff < ~uVar11) {
              uVar2 = ~uVar11;
            }
            lVar9 = 0;
            do {
              puVar1 = (undefined1 *)(lVar4 + lVar9);
              *puVar1 = *(undefined1 *)(*plVar5 + lVar9);
              lVar10 = *plVar5 + lVar9;
              lVar9 = lVar9 + 2;
              puVar1[1] = *(undefined1 *)(lVar10 + 1);
            } while (~(uVar8 & 1) - uVar2 != lVar9);
          }
          if ((uVar8 & 1) != 0) {
            *(undefined1 *)(lVar4 + lVar9) = *(undefined1 *)(*plVar5 + lVar9);
          }
        }
        if (((*(byte *)(param_1 + 0x17) & 1) == 0) && (*plVar5 != 0)) {
          plVar6 = (long *)param_1[0xf];
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x48))
                      (plVar6,*plVar5,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
          }
          *plVar5 = 0;
        }
        param_1[0x14] = 0;
        param_1[0x17] = 0;
        param_1[0x15] = 0;
        param_1[0x13] = lVar4;
        param_1[0x10] = uVar8;
        param_1[0x11] = 0x1000;
        if (uVar8 == 0) {
          param_1[0x14] = 0;
          param_1[0x15] = 0;
          uVar8 = param_1[0x1b];
        }
        else {
          param_1[0x14] = lVar4;
          param_1[0x15] = lVar4 + uVar8;
          uVar8 = param_1[0x1b];
        }
        goto joined_r0x0067e58c;
      }
    }
    param_1[0x10] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    uVar8 = param_1[0x1b];
  }
  else {
    if ((ulong)param_1[0x11] < 0x1000) goto LAB_0067e31c;
LAB_0067e28c:
    uVar8 = param_1[0x1b];
  }
joined_r0x0067e58c:
  if (uVar8 < 0x400) {
    plVar5 = (long *)param_1[0x19];
    if (plVar5 != (long *)0x0) {
      uVar11 = param_1[0x1a];
      lVar4 = (**(code **)(*plVar5 + 0x40))
                        (plVar5,4,0x400,0x10,"../../../../Include\\SiCore/SiCore_Array.h",0x5d1);
      uVar8 = uVar11;
      if (0x3ff < uVar11) {
        uVar8 = 0x400;
      }
      if (lVar4 != 0) {
        if (uVar8 != 0) {
          if (uVar11 == 1) {
            lVar9 = 0;
          }
          else {
            uVar2 = 0xfffffffffffffbff;
            if (0xfffffffffffffbff < ~uVar11) {
              uVar2 = ~uVar11;
            }
            lVar9 = 0;
            do {
              lVar10 = lVar9 * 4;
              lVar9 = lVar9 + 2;
              *(undefined4 *)(lVar4 + lVar10) = *(undefined4 *)(*plVar7 + lVar10);
              ((undefined4 *)(lVar4 + lVar10))[1] = *(undefined4 *)(*plVar7 + lVar10 + 4);
            } while (~(uVar8 & 1) - uVar2 != lVar9);
          }
          if ((uVar8 & 1) != 0) {
            *(undefined4 *)(lVar4 + lVar9 * 4) = *(undefined4 *)(*plVar7 + lVar9 * 4);
          }
        }
        if (((*(byte *)(param_1 + 0x21) & 1) == 0) && (*plVar7 != 0)) {
          plVar5 = (long *)param_1[0x19];
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x48))
                      (plVar5,*plVar7,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
          }
          *plVar7 = 0;
        }
        param_1[0x1e] = 0;
        param_1[0x21] = 0;
        param_1[0x1f] = 0;
        param_1[0x1d] = lVar4;
        param_1[0x1a] = uVar8;
        param_1[0x1b] = 0x400;
        if (uVar8 == 0) {
          param_1[0x1e] = 0;
          param_1[0x1f] = 0;
          uVar8 = param_1[0x25];
        }
        else {
          param_1[0x1e] = lVar4;
          param_1[0x1f] = lVar4 + uVar8 * 4;
          uVar8 = param_1[0x25];
        }
        goto joined_r0x0067e680;
      }
    }
    param_1[0x1a] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    uVar8 = param_1[0x25];
  }
  else {
    uVar8 = param_1[0x25];
  }
joined_r0x0067e680:
  if (uVar8 < 0x400) {
    plVar5 = (long *)param_1[0x23];
    if (plVar5 != (long *)0x0) {
      uVar11 = param_1[0x24];
      lVar4 = (**(code **)(*plVar5 + 0x40))
                        (plVar5,1,0x400,0x10,"../../../../Include\\SiCore/SiCore_Array.h",0x5d1);
      uVar8 = uVar11;
      if (0x3ff < uVar11) {
        uVar8 = 0x400;
      }
      if (lVar4 != 0) {
        plVar5 = param_1 + 0x27;
        if (uVar8 != 0) {
          if (uVar11 == 1) {
            lVar9 = 0;
          }
          else {
            uVar2 = 0xfffffffffffffbff;
            if (0xfffffffffffffbff < ~uVar11) {
              uVar2 = ~uVar11;
            }
            lVar9 = 0;
            do {
              puVar1 = (undefined1 *)(lVar4 + lVar9);
              *puVar1 = *(undefined1 *)(*plVar5 + lVar9);
              lVar10 = *plVar5 + lVar9;
              lVar9 = lVar9 + 2;
              puVar1[1] = *(undefined1 *)(lVar10 + 1);
            } while (~(uVar8 & 1) - uVar2 != lVar9);
          }
          if ((uVar8 & 1) != 0) {
            *(undefined1 *)(lVar4 + lVar9) = *(undefined1 *)(*plVar5 + lVar9);
          }
        }
        if (((*(byte *)(param_1 + 0x2b) & 1) == 0) && (*plVar5 != 0)) {
          plVar7 = (long *)param_1[0x23];
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x48))
                      (plVar7,*plVar5,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
          }
          *plVar5 = 0;
        }
        param_1[0x2b] = 0;
        param_1[0x27] = lVar4;
        param_1[0x28] = 0;
        param_1[0x29] = 0;
        param_1[0x24] = uVar8;
        param_1[0x25] = 0x400;
        if (uVar8 == 0) {
          param_1[0x28] = 0;
          param_1[0x29] = 0;
          return;
        }
        param_1[0x28] = lVar4;
        param_1[0x29] = lVar4 + uVar8;
        return;
      }
    }
    param_1[0x24] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
  }
  return;
}


