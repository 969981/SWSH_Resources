/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e3810; name: FUN_008e3810
 */


void FUN_008e3810(long param_1,short param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *(short *)(param_1 + 0x74) + param_2;
  uVar2 = *(ushort *)(param_1 + 0x72);
  if (uVar1 <= *(ushort *)(param_1 + 0x72)) {
    uVar2 = uVar1;
  }
  *(ushort *)(param_1 + 0x74) = uVar2;
  return;
}


