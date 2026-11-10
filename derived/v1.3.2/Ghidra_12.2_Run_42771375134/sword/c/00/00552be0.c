/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00552be0; name: FUN_00552be0
 */


int * FUN_00552be0(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  iVar2 = *param_1;
  if (0 < iVar2) {
    uVar4 = (long)iVar2;
    do {
      if ((long)iVar2 < (long)uVar4) {
        iVar3 = isspace(0);
      }
      else {
        iVar3 = isspace((uint)*(byte *)(*(long *)(param_1 + 2) + uVar4 + -1));
      }
      uVar5 = uVar4;
    } while ((iVar3 != 0) &&
            (uVar5 = uVar4 - 1, bVar1 = 0 < (long)uVar4, uVar4 = uVar5, uVar5 != 0 && bVar1));
    iVar3 = (int)uVar5;
    if (iVar2 != iVar3) {
      FUN_005513d0(param_1,uVar5 & 0xffffffff,1);
      if (iVar2 <= iVar3) {
                    /* WARNING: Subroutine does not return */
        memset((void *)(*(long *)(param_1 + 2) + (long)*param_1),0x20,(long)iVar3 - (long)*param_1);
      }
      *param_1 = iVar3;
      if (param_1[1] != 0) {
        *(undefined1 *)(*(long *)(param_1 + 2) + (long)iVar3) = 0;
      }
    }
  }
  return param_1;
}


