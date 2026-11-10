/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a1010; name: FUN_004a1010
 */


void FUN_004a1010(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  uVar1 = *param_2;
  if ((((uVar1 == 0) && ((char)param_2[2] == -1)) && ((char)param_2[4] == -1)) &&
     (*(long *)(param_2 + 6) == 0)) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x18) + -1;
    if (-1 < iVar4) {
      lVar7 = *(long *)(param_1 + 0x10);
      iVar5 = 0;
      do {
        while( true ) {
          iVar3 = iVar4 - iVar5;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar5 + (iVar3 >> 1);
          lVar8 = (long)iVar3;
          uVar2 = *(uint *)(lVar7 + (long)iVar3 * 0x28 + 0x20);
          if (uVar1 < uVar2) break;
          if (uVar1 <= uVar2) {
            lVar6 = lVar7 + lVar8 * 0x28;
            if (lVar6 == 0) {
              return;
            }
            FUN_004a1130(lVar6,param_2 + 2);
            if (*(char *)(lVar7 + lVar8 * 0x28 + 0xc) != '\0') {
              return;
            }
            if (*(int *)(lVar7 + lVar8 * 0x28 + 0x18) == 0) {
              FUN_004a0300(lVar6);
              FUN_004a0450((long *)(param_1 + 0x10),*param_2);
              return;
            }
            return;
          }
          iVar5 = iVar3 + 1;
          if (iVar4 < iVar5) {
            return;
          }
        }
        iVar4 = iVar3 + -1;
      } while (iVar5 <= iVar4);
    }
  }
  return;
}


