/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e5ad0; name: FUN_008e5ad0
 */


undefined8 FUN_008e5ad0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_009a3d80(*(undefined2 *)(param_1 + 0x70),*(undefined1 *)(param_1 + 0x33d));
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  uVar2 = FUN_00879860(*(undefined8 *)(param_1 + 0x60));
  return uVar2;
}


