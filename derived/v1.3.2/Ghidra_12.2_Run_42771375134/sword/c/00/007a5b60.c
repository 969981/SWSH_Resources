/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a5b60; name: FUN_007a5b60
 */


void FUN_007a5b60(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar2 = 0;
  if (uVar1 != 0) {
    if ((int)uVar1 < 0) {
      *(undefined4 *)(param_1 + 0x18) = 0xb;
      return;
    }
    if (0x7f < uVar1) {
      iVar3 = FUN_0080e440();
      *(int *)(param_1 + 0x18) = iVar3 + 1;
      return;
    }
    uVar2 = 2;
  }
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  return;
}


