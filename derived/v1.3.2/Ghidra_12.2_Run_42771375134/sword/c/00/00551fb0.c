/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00551fb0; name: FUN_00551fb0
 */


int * FUN_00551fb0(int *param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  
  iVar8 = *param_1;
  if (0 < iVar8) {
    lVar6 = 0;
    do {
      if (0x20 < *(byte *)(*(long *)(param_1 + 2) + lVar6) ||
          (1L << ((ulong)*(byte *)(*(long *)(param_1 + 2) + lVar6) & 0x3f) & 0x100000600U) == 0) {
        uVar5 = lVar6 + 1;
        if (1 < (uint)uVar5) goto LAB_00552028;
        goto LAB_00552038;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar8);
    uVar5 = (ulong)((int)lVar6 + 1);
LAB_00552028:
    FUN_00551eb0(param_1,uVar5,iVar8);
    iVar8 = *param_1;
LAB_00552038:
    if (0 < iVar8) {
      uVar5 = (long)iVar8;
      do {
        if ((long)iVar8 < (long)uVar5) {
          iVar3 = isspace(0);
        }
        else {
          iVar3 = isspace((uint)*(byte *)(*(long *)(param_1 + 2) + uVar5 + -1));
        }
        uVar7 = uVar5;
      } while ((iVar3 != 0) &&
              (uVar7 = uVar5 - 1, bVar1 = 0 < (long)uVar5, uVar5 = uVar7, uVar7 != 0 && bVar1));
      iVar3 = (int)uVar7;
      if (iVar8 != iVar3) {
        FUN_005513d0(param_1,uVar7 & 0xffffffff,1);
        if (iVar8 <= iVar3) {
                    /* WARNING: Subroutine does not return */
          memset((void *)(*(long *)(param_1 + 2) + (long)*param_1),0x20,(long)iVar3 - (long)*param_1
                );
        }
        *param_1 = iVar3;
        iVar8 = iVar3;
        if (param_1[1] != 0) {
          *(undefined1 *)(*(long *)(param_1 + 2) + (long)iVar3) = 0;
          iVar8 = *param_1;
        }
      }
      if (((0 < iVar8) && (iVar8 != 1)) &&
         (cVar2 = **(char **)(param_1 + 2), cVar2 == (*(char **)(param_1 + 2))[(long)iVar8 + -1])) {
        sVar4 = strlen(param_2);
        if (0 < (int)sVar4) {
          lVar6 = 0;
          do {
            if (cVar2 == param_2[lVar6]) {
              FUN_00551eb0(param_1,2,iVar8 + -2);
              return param_1;
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 < (int)sVar4);
        }
      }
    }
  }
  return param_1;
}


