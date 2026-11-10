/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00463030; name: FUN_00463030
 */


void FUN_00463030(long param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  if (uVar2 != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      iVar1 = *(int *)(*(long *)(param_1 + 0x40) + lVar3 + 8);
      if (0 < iVar1) {
        *(undefined4 *)
         (*(long *)(*(long *)(param_1 + 0x40) + lVar3) + (long)(iVar1 + -1) * 0x10 + 0xc) =
             *(undefined4 *)(param_1 + 0x2c);
        uVar2 = *(uint *)(param_1 + 0x48);
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (uVar4 < uVar2);
  }
  return;
}


