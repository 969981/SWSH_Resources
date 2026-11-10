/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0132aac0; name: FUN_0132aac0
 */


uint FUN_0132aac0(long param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  
  bVar2 = *(int *)(param_1 + 0x1a0) != 0;
  uVar3 = 2;
  if (!bVar2) {
    uVar3 = 1;
  }
  uVar1 = (uint)bVar2;
  if (*(int *)(param_1 + 0x180) != 0) {
    uVar1 = uVar3;
  }
  if (*(int *)(param_1 + 0x1c0) != 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x1e0) != 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x200) != 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x220) != 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x240) != 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x260) != 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x280) != 0) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}


