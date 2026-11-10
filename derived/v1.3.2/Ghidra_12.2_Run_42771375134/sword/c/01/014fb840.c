/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014fb840; name: FUN_014fb840
 */


undefined1 FUN_014fb840(long param_1,ushort param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  
  uVar1 = (uint)param_2;
  puVar2 = (undefined1 *)(param_1 + (ulong)(ushort)(param_2 - 0x27) * 8 + 0x22328);
  if (uVar1 < 0x27) {
    puVar2 = (undefined1 *)(param_1 + (ulong)(ushort)(param_2 - 0x1f) * 8 + 0x222e8);
  }
  if (uVar1 < 0x1f) {
    puVar2 = (undefined1 *)(param_1 + (ulong)uVar1 * 8 + 0x221f0);
  }
  return *puVar2;
}


