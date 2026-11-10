/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00770710; name: FUN_00770710
 */


undefined8 FUN_00770710(long param_1,ulong *param_2,int param_3,ulong param_4)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar4 = *param_2;
  if (uVar4 >> 0x38 == 0) {
    if (param_3 == 0) {
      if (uVar4 != 0) {
        uVar3 = 0;
        do {
          if (param_4 <= uVar3) goto LAB_00770804;
          *(char *)(param_1 + uVar3) = (char)uVar4;
          uVar5 = uVar3 + 1;
          uVar4 = param_2[uVar3 + 1];
          uVar3 = uVar5;
        } while (uVar4 != 0);
        goto LAB_007707f8;
      }
    }
    else if (uVar4 != 0) {
      uVar3 = 0;
      do {
        if (param_4 <= uVar3) goto LAB_00770804;
        *(int *)(param_1 + uVar3 * 4) = (int)uVar4;
        uVar5 = uVar3 + 1;
        uVar4 = param_2[uVar3 + 1];
        uVar3 = uVar5;
      } while (uVar4 != 0);
LAB_007707f8:
      uVar3 = uVar5 & 0xffffffff;
      goto LAB_00770804;
    }
  }
  else if (param_4 != 0) {
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 7;
    if (param_3 == 0) {
      do {
        puVar2 = param_2;
        if (uVar5 == 7) {
          puVar2 = param_2 + 1;
          uVar4 = *param_2;
        }
        uVar6 = (long)uVar4 >> (uVar5 << 3);
        if ((uVar6 & 0xff) == 0) break;
        *(char *)(param_1 + uVar3) = (char)uVar6;
        uVar3 = uVar3 + 1;
        uVar5 = (ulong)((int)uVar5 - 1) & 7;
        param_2 = puVar2;
      } while (uVar3 < param_4);
    }
    else {
      do {
        puVar2 = param_2;
        if (uVar5 == 7) {
          puVar2 = param_2 + 1;
          uVar4 = *param_2;
        }
        uVar6 = (long)uVar4 >> (uVar5 << 3);
        if ((uVar6 & 0xff) == 0) break;
        *(uint *)(param_1 + uVar3 * 4) = (uint)uVar6 & 0xff;
        uVar3 = uVar3 + 1;
        uVar5 = (ulong)((int)uVar5 - 1) & 7;
        param_2 = puVar2;
      } while (uVar3 < param_4);
    }
    goto LAB_00770804;
  }
  uVar3 = 0;
LAB_00770804:
  iVar1 = (int)uVar3;
  if (param_4 <= (uVar3 & 0xffffffff)) {
    iVar1 = (int)param_4 + -1;
  }
  if (-1 < iVar1) {
    if (param_3 != 0) {
      *(undefined4 *)(param_1 + (long)iVar1 * 4) = 0;
      return 0;
    }
    *(undefined1 *)(param_1 + iVar1) = 0;
  }
  return 0;
}


