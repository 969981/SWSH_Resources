/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0046b210; name: FUN_0046b210
 */


void FUN_0046b210(long param_1,ulong *param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  uVar2 = *param_2;
  if ((((uVar2 == 0) && ((int)param_2[1] == 0)) && ((int)param_2[2] == 0)) &&
     ((((char)param_2[3] == -1 && ((char)param_2[4] == -1)) && (param_2[5] == 0)))) {
    if (*(char *)(param_1 + 0x10) != '\0') {
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x20) + -1;
    if (-1 < iVar3) {
      lVar7 = *(long *)(param_1 + 0x18);
      iVar4 = 0;
      do {
        while( true ) {
          iVar1 = iVar3 - iVar4;
          if (iVar1 < 0) {
            iVar1 = iVar1 + 1;
          }
          iVar1 = iVar4 + (iVar1 >> 1);
          lVar8 = (long)iVar1;
          uVar5 = *(ulong *)(lVar7 + (long)iVar1 * 0x30 + 0x28);
          if (uVar2 < uVar5) break;
          if (uVar2 <= uVar5) {
            lVar6 = lVar7 + lVar8 * 0x30;
            if (lVar6 == 0) {
              return;
            }
            FUN_00471920(lVar6,param_2 + 1);
            if (*(char *)(lVar7 + lVar8 * 0x30 + 0x10) != '\0') {
              return;
            }
            if (*(int *)(lVar7 + lVar8 * 0x30 + 0x20) == 0) {
              FUN_0046e730(lVar6);
              FUN_00471a80((long *)(param_1 + 0x18),*param_2);
              return;
            }
            return;
          }
          iVar4 = iVar1 + 1;
          if (iVar3 < iVar4) {
            return;
          }
        }
        iVar3 = iVar1 + -1;
      } while (iVar4 <= iVar3);
    }
  }
  return;
}


