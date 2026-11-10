/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003cf7c0; name: FUN_003cf7c0
 */


void FUN_003cf7c0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  
  *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xff7fffff;
  uVar1 = *(uint *)(param_2 + 0x50);
  *(undefined4 *)(param_2 + 0x50) = 0xffffffff;
  uVar2 = *(int *)(param_1 + 0x38) - 1;
  *(uint *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)uVar1 * 8) =
       *(undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)uVar2 * 8);
  if (uVar1 < uVar2) {
    *(uint *)(*(long *)(*(long *)(param_1 + 0x30) + (ulong)uVar1 * 8) + 0x50) = uVar1;
  }
  return;
}


