/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00608400; name: FUN_00608400
 */


ushort FUN_00608400(long param_1)

{
  ushort *puVar1;
  ushort uVar2;
  
  puVar1 = *(ushort **)(param_1 + 0x40);
  if ((long)puVar1 + 1U < *(ulong *)(param_1 + 0x48)) {
    uVar2 = *puVar1;
    *(ushort **)(param_1 + 0x40) = puVar1 + 1;
    return uVar2 >> 8 | uVar2 << 8;
  }
  *(ushort **)(param_1 + 0x40) = puVar1;
  return 0;
}


