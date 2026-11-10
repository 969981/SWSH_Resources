/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080fb80; name: FUN_0080fb80
 */


int FUN_0080fb80(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = ((int)plVar3[1] - (int)*plVar3 & 0xfffffff0U) + 0x18;
    if (plVar3[1] != *plVar3) {
      lVar5 = 0;
      uVar6 = 0;
      do {
        lVar1 = *plVar3 + lVar5;
        if (*(int *)(lVar1 + 4) == 4) {
          iVar2 = FUN_0080fb80(*(undefined8 *)(lVar1 + 8));
          iVar4 = iVar4 + iVar2 + 8;
        }
        else if (*(int *)(lVar1 + 4) == 3) {
          iVar2 = FUN_008163d0(*(undefined8 *)(lVar1 + 8));
          iVar4 = iVar4 + iVar2 + 0x18;
        }
        plVar3 = (long *)*param_1;
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x10;
      } while (uVar6 < (ulong)(plVar3[1] - *plVar3 >> 4));
    }
  }
  return iVar4;
}


