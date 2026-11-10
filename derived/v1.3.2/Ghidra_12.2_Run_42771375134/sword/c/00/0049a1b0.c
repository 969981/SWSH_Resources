/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049a1b0; name: FUN_0049a1b0
 */


void FUN_0049a1b0(long param_1,ulong *param_2)

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
    if (*(char *)(param_1 + 0xc) != '\0') {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x18) + -1;
    if (-1 < iVar3) {
      lVar7 = *(long *)(param_1 + 0x10);
      iVar4 = 0;
      do {
        while( true ) {
          iVar1 = iVar3 - iVar4;
          if (iVar1 < 0) {
            iVar1 = iVar1 + 1;
          }
          iVar1 = iVar4 + (iVar1 >> 1);
          lVar8 = (long)iVar1;
          uVar5 = *(ulong *)(lVar7 + (long)iVar1 * 0x28 + 0x20);
          if (uVar2 < uVar5) break;
          if (uVar2 <= uVar5) {
            lVar6 = lVar7 + lVar8 * 0x28;
            if (lVar6 == 0) {
              return;
            }
            FUN_004a0eb0(lVar6,param_2 + 1);
            if (*(char *)(lVar7 + lVar8 * 0x28 + 0xc) != '\0') {
              return;
            }
            if (*(int *)(lVar7 + lVar8 * 0x28 + 0x18) == 0) {
              FUN_0049f990(lVar6);
              FUN_0049fad0((long *)(param_1 + 0x10),*param_2);
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


