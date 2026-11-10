/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ca160; name: FUN_005ca160
 */


/* WARNING: Removing unreachable block (ram,0x005ca5b4) */

void FUN_005ca160(long *param_1,long param_2,void *param_3,ulong param_4,ulong param_5,uint param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long **pplVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  size_t sVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long *local_80;
  long *local_78;
  long *local_70;
  long local_68;
  
  if (param_5 == 0) {
    param_5 = param_1[2];
    local_80 = (long *)*param_1;
  }
  else {
    local_80 = (long *)*param_1;
  }
  if (local_80 == (long *)0x0) {
    local_68 = 0;
    local_70 = (long *)0x0;
    local_78 = (long *)0x0;
    local_80 = (long *)FUN_005bc6f0();
  }
  else {
    local_68 = 0;
    local_70 = (long *)0x0;
    local_78 = (long *)0x0;
  }
  if (param_2 == 0) {
    uVar22 = 0;
  }
  else {
    uVar15 = 0;
    do {
      uVar22 = uVar15;
      uVar15 = uVar22 + 1;
    } while (*(char *)(param_2 + uVar22) != '\0');
  }
  do {
    lVar7 = FUN_005c9a50(param_1,param_2,param_4,param_6 & 1);
    if (lVar7 == -1) break;
    plVar8 = (long *)(**(code **)(*local_80 + 0x38))
                               (local_80,0x28,0x10,"../../../../Include\\SiCore/SiCore_LinkedList.h"
                                ,0x2e5);
    *plVar8 = (long)&local_80;
    plVar8[1] = 0;
    plVar8[4] = lVar7;
    plVar8[2] = 0;
    plVar8[3] = 0;
    if (plVar8 != (long *)0x0) {
      if (local_78 == (long *)0x0) {
        local_78 = plVar8;
      }
      else {
        local_70[2] = (long)plVar8;
        plVar8[1] = (long)local_70;
      }
      local_68 = local_68 + 1;
      local_70 = plVar8;
    }
    param_4 = lVar7 + uVar22;
  } while (param_4 < param_5);
  lVar7 = local_68;
  plVar8 = local_70;
  if (local_68 != 0) {
    if (param_3 == (void *)0x0) {
      uVar15 = 0;
    }
    else {
      uVar9 = 0;
      do {
        uVar15 = uVar9;
        uVar9 = uVar15 + 1;
      } while (*(char *)((long)param_3 + uVar15) != '\0');
    }
    uVar9 = param_1[2];
    lVar20 = uVar15 - uVar22;
    uVar12 = uVar9 + lVar20 * local_68;
    plVar8 = local_78;
    if ((ulong)param_1[4] <= uVar12 && (ulong)param_1[4] < uVar12 + 1) {
      FUN_005c5e00(param_1,uVar12 + 1,1);
      plVar8 = local_78;
    }
    local_78 = plVar8;
    if (uVar15 < uVar22) {
      if (plVar8 != (long *)0x0) {
        lVar7 = 0;
        lVar21 = -uVar22;
        do {
          lVar13 = plVar8[4];
          lVar1 = lVar13 + lVar7;
          uVar9 = lVar1 + uVar22;
          uVar16 = lVar1 + uVar15;
          sVar18 = param_1[2] - uVar9;
          if ((uVar22 != uVar15) && (sVar18 != 0)) {
            if (uVar9 < uVar16) {
              if (0 < (long)sVar18) {
                lVar10 = param_1[2] + -1;
                do {
                  *(undefined1 *)(param_1[1] + lVar20 + lVar10) =
                       *(undefined1 *)(param_1[1] + lVar10);
                  lVar10 = lVar10 + -1;
                } while (1 < (lVar21 - lVar13) + lVar10 + 2);
              }
            }
            else {
              memcpy((void *)(param_1[1] + uVar16),(void *)(param_1[1] + uVar9),sVar18);
            }
            *(undefined1 *)(param_1[1] + sVar18 + uVar16) = 0;
          }
          if (sVar18 == 0) {
            *(undefined1 *)(param_1[1] + uVar16) = 0;
            param_1[2] = uVar16;
          }
          memcpy((void *)(param_1[1] + lVar1),param_3,uVar15);
          plVar8 = (long *)plVar8[2];
          lVar7 = lVar20 + lVar7;
          lVar21 = lVar21 + (uVar22 - uVar15);
        } while (plVar8 != (long *)0x0);
      }
      *(undefined1 *)(param_1[1] + uVar12) = 0;
    }
    else {
      lVar21 = lVar20 * (lVar7 + -1);
      lVar7 = (uVar15 + lVar21 + -1) - uVar22;
      pplVar11 = &local_70;
      uVar16 = param_1[2];
      while( true ) {
        plVar8 = *pplVar11;
        uVar19 = plVar8[4];
        uVar2 = uVar19 + uVar22;
        uVar3 = uVar19 + lVar21 + uVar15;
        sVar18 = uVar16 - uVar2;
        if (uVar2 != uVar3 && sVar18 != 0) {
          uVar17 = param_1[2];
          lVar1 = 0;
          if (uVar17 <= uVar16) {
            lVar1 = sVar18 + uVar3;
          }
          if (uVar2 < uVar3) {
            if (0 < (long)sVar18) {
              uVar14 = uVar16;
              do {
                *(undefined1 *)(param_1[1] + lVar7 + uVar14) =
                     *(undefined1 *)(param_1[1] + uVar14 + -1);
                uVar14 = uVar14 - 1;
              } while (1 < (long)((uVar14 - uVar2) + 1));
            }
          }
          else {
            memcpy((void *)(param_1[1] + uVar3),(void *)(param_1[1] + uVar2),sVar18);
          }
          if (uVar17 <= uVar16) {
            *(undefined1 *)(param_1[1] + lVar1) = 0;
          }
        }
        memcpy((void *)(param_1[1] + uVar19 + lVar21),param_3,uVar15);
        if (uVar9 <= uVar3) {
          *(undefined1 *)(param_1[1] + uVar12) = 0;
        }
        if (plVar8 == local_78) break;
        pplVar11 = &local_70;
        if (plVar8 != (long *)0x0) {
          pplVar11 = (long **)(plVar8 + 1);
        }
        lVar21 = lVar21 - lVar20;
        lVar7 = lVar7 + (uVar22 - uVar15);
        uVar16 = uVar19;
      }
    }
    param_1[2] = uVar12;
    plVar8 = local_70;
  }
  do {
    local_70 = plVar8;
    if (local_78 == (long *)0x0) {
      return;
    }
    while( true ) {
      plVar6 = local_70;
      plVar5 = local_78;
      plVar8 = (long *)local_78[1];
      plVar4 = (long *)local_78[2];
      if (plVar8 != (long *)0x0) {
        plVar8[2] = (long)plVar4;
      }
      if (plVar4 != (long *)0x0) {
        plVar4[1] = (long)plVar8;
      }
      local_68 = local_68 + -1;
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x48))
                  (local_80,local_78,"../../../../Include\\SiCore/SiCore_LinkedList.h",0x4db);
      }
      local_78 = plVar4;
      if (plVar6 == plVar5) break;
      if (plVar4 == (long *)0x0) {
        return;
      }
    }
  } while( true );
}


