/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004659d0; name: FUN_004659d0
 */


long FUN_004659d0(long param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar5 = *param_2;
  if ((((uVar5 != 0) || (param_2[2] != 0)) || ((char)param_2[4] != -1)) ||
     (((char)param_2[6] != -1 || (*(long *)(param_2 + 8) != 0)))) {
    iVar6 = *(int *)(param_1 + 0x18) + -1;
    if (-1 < iVar6) {
      iVar7 = 0;
      do {
        while( true ) {
          iVar3 = iVar6 - iVar7;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar7 + (iVar3 >> 1);
          uVar2 = *(uint *)(*(long *)(param_1 + 0x10) + (long)iVar3 * 0x28 + 0x20);
          if (uVar5 > uVar2 || uVar2 == uVar5) break;
          iVar6 = iVar3 + -1;
          if (iVar6 < iVar7) goto LAB_00465a80;
        }
        if (uVar5 <= uVar2) {
          lVar4 = *(long *)(param_1 + 0x10) + (long)iVar3 * 0x28;
          if (lVar4 != 0) goto LAB_00465ad4;
          break;
        }
        iVar7 = iVar3 + 1;
      } while (iVar7 <= iVar6);
    }
LAB_00465a80:
    if (uVar5 != 0) {
      *param_2 = 0;
      uVar5 = *(int *)(param_1 + 0x18) - 1;
      if (-1 < (int)uVar5) {
        do {
          uVar2 = uVar5;
          if ((int)uVar5 < 0) {
            uVar2 = uVar5 + 1;
          }
          if (*(int *)(*(long *)(param_1 + 0x10) + (long)((int)uVar2 >> 1) * 0x28 + 0x20) == 0) {
            lVar4 = *(long *)(param_1 + 0x10) + ((long)((ulong)uVar2 << 0x20) >> 0x21) * 0x28;
            if (lVar4 != 0) {
LAB_00465ad4:
              lVar4 = FUN_00465b20(lVar4,param_2 + 2);
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
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 6) = 0xff;
  *(undefined1 *)(param_2 + 4) = 0xff;
  param_2[8] = 0;
  param_2[9] = 0;
  lVar4 = 0;
  if (*(char *)(param_1 + 0xc) != '\0') {
    lVar4 = param_1 + 8;
  }
  return lVar4;
}


