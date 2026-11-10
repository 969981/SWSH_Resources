/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bbfc0; name: FUN_014bbfc0
 */


undefined8 FUN_014bbfc0(undefined8 param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *param_2;
  if ((uVar1 - 0x430 < 0x20) ||
     (uVar2 = uVar1 - 0xe3, uVar2 < 0x1c && (1 << (ulong)(uVar2 & 0x1f) & 0xc60a205U) != 0)) {
    *param_2 = uVar1 - 0x20;
    return 1;
  }
  return 0;
}


