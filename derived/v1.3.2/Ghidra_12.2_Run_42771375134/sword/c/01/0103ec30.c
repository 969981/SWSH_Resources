/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103ec30; name: FUN_0103ec30
 */


void FUN_0103ec30(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0xa4);
  uVar2 = *(uint *)(param_1 + 0xac);
  if (uVar1 == uVar2) {
    *(undefined4 *)(param_1 + 0xa4) = 0;
    return;
  }
  if (uVar1 + 1 < uVar2) {
    uVar2 = uVar1 + 1;
  }
  *(uint *)(param_1 + 0xa4) = uVar2;
  return;
}


