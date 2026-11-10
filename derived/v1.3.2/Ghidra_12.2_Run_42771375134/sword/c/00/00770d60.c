/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00770d60; name: FUN_00770d60
 */


/* WARNING: Removing unreachable block (ram,0x00770e2c) */
/* WARNING: Removing unreachable block (ram,0x00770e38) */
/* WARNING: Removing unreachable block (ram,0x00770f84) */
/* WARNING: Removing unreachable block (ram,0x00770f88) */
/* WARNING: Removing unreachable block (ram,0x00770fa8) */
/* WARNING: Removing unreachable block (ram,0x00771124) */
/* WARNING: Removing unreachable block (ram,0x00771174) */
/* WARNING: Removing unreachable block (ram,0x00771180) */
/* WARNING: Removing unreachable block (ram,0x00771130) */
/* WARNING: Removing unreachable block (ram,0x00771138) */

undefined8 FUN_00770d60(undefined8 param_1,ulong *param_2,long *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong *puVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  undefined1 local_c4 [99];
  undefined1 local_61;
  
  pcVar5 = (code *)&LAB_007712d0;
  if (param_3 == (long *)0x0) {
    iVar6 = 0;
    lVar12 = 0;
    iVar7 = 0x7fffffff;
    uVar2 = *param_2;
  }
  else {
    pcVar5 = (code *)&LAB_007712d0;
    if ((code *)param_3[3] != (code *)0x0) {
      pcVar5 = (code *)param_3[3];
    }
    lVar12 = param_3[5];
    if (*param_3 != 0) {
      uVar2 = *param_2 >> 0x38;
      if (uVar2 == 0) {
        if (*param_2 == 0) {
          return 0;
        }
                    /* WARNING: Could not recover jumptable at 0x007710fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)((long)&switchD_007710fc::switchdataD_0213f938 +
                          (long)(int)switchD_007710fc::switchdataD_0213f938))();
        return uVar1;
      }
      if (uVar2 == 0) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x00770e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)((long)&switchD_00770e08::switchdataD_0213f948 +
                        (long)(int)switchD_00770e08::switchdataD_0213f948))();
      return uVar1;
    }
    iVar6 = *(int *)((long)param_3 + 0xc);
    iVar7 = (int)param_3[2];
    uVar2 = *param_2;
  }
  uVar4 = uVar2 >> 0x38;
  if (uVar4 == 0) {
    if (uVar2 == 0) {
      return 0;
    }
    iVar3 = 0;
    puVar9 = param_2 + 1;
LAB_00771064:
    do {
      if (iVar6 < 1) {
        local_c4[iVar3] = (char)uVar2;
        iVar3 = iVar3 + 1;
        if (iVar3 == 99) {
          local_61 = 0;
          (*pcVar5)(lVar12,local_c4);
          iVar3 = 0;
          uVar2 = *puVar9;
          puVar9 = puVar9 + 1;
          iVar6 = iVar6 + -1;
          if (uVar2 == 0) break;
          goto LAB_00771064;
        }
      }
      uVar2 = *puVar9;
      puVar9 = puVar9 + 1;
      iVar6 = iVar6 + -1;
    } while (uVar2 != 0);
  }
  else {
    if (uVar4 == 0) {
      return 0;
    }
    uVar10 = 0;
    iVar3 = 0;
    uVar11 = 7;
    do {
      if (iVar6 < 1) {
        iVar8 = iVar7 + -1;
        if (iVar7 < 1) break;
        local_c4[iVar3] = (char)uVar4;
        if (iVar3 + 1 == 99) {
          local_61 = 0;
          (*pcVar5)(lVar12,local_c4);
          iVar3 = 0;
        }
        else {
          iVar3 = iVar3 + 1;
        }
      }
      else {
        iVar6 = iVar6 + -1;
        iVar8 = iVar7;
      }
      if (uVar11 == 0) {
        uVar10 = uVar10 + 1;
      }
      uVar11 = uVar11 - 1 & 7;
      uVar4 = param_2[uVar10] >> (uVar11 << 3);
      iVar7 = iVar8;
    } while ((uVar4 & 0xff) != 0);
  }
  if (0 < iVar3) {
    local_c4[iVar3] = 0;
    (*pcVar5)(lVar12,local_c4);
  }
  return 0;
}


