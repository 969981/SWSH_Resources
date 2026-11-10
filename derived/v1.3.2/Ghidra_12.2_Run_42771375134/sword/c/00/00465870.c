/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00465870; name: FUN_00465870
 */


long FUN_00465870(long param_1,ulong *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  
  uVar6 = *param_2;
  if ((((uVar6 != 0) || ((int)param_2[1] != 0)) || ((int)param_2[2] != 0)) ||
     ((((char)param_2[3] != -1 || ((char)param_2[4] != -1)) || (param_2[5] != 0)))) {
    iVar7 = *(int *)(param_1 + 0x18) + -1;
    if (-1 < iVar7) {
      iVar8 = 0;
      do {
        while( true ) {
          iVar3 = iVar7 - iVar8;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar8 + (iVar3 >> 1);
          uVar9 = *(ulong *)(*(long *)(param_1 + 0x10) + (long)iVar3 * 0x28 + 0x20);
          if (uVar6 > uVar9 || uVar9 == uVar6) break;
          iVar7 = iVar3 + -1;
          if (iVar7 < iVar8) goto LAB_00465928;
        }
        if (uVar6 <= uVar9) {
          lVar4 = *(long *)(param_1 + 0x10) + (long)iVar3 * 0x28;
          if (lVar4 != 0) goto LAB_0046597c;
          break;
        }
        iVar8 = iVar3 + 1;
      } while (iVar8 <= iVar7);
    }
LAB_00465928:
    if (uVar6 != 0) {
      *param_2 = 0;
      uVar5 = *(int *)(param_1 + 0x18) - 1;
      if (-1 < (int)uVar5) {
        do {
          uVar2 = uVar5;
          if ((int)uVar5 < 0) {
            uVar2 = uVar5 + 1;
          }
          if (*(long *)(*(long *)(param_1 + 0x10) + (long)((int)uVar2 >> 1) * 0x28 + 0x20) == 0) {
            lVar4 = *(long *)(param_1 + 0x10) + ((long)((ulong)uVar2 << 0x20) >> 0x21) * 0x28;
            if (lVar4 != 0) {
LAB_0046597c:
              lVar4 = FUN_004659d0(lVar4,param_2 + 1);
              if (lVar4 != 0) {
                return lVar4;
              }
            }
            break;
          }
          bVar1 = 1 < (int)uVar5;
          uVar5 = ((int)uVar2 >> 1) - 1;
        } while (bVar1);
      }
    }
  }
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined1 *)(param_2 + 3) = 0xff;
  *(undefined1 *)(param_2 + 4) = 0xff;
  param_2[5] = 0;
  lVar4 = 0;
  if (*(char *)(param_1 + 0xc) != '\0') {
    lVar4 = param_1 + 8;
  }
  return lVar4;
}


