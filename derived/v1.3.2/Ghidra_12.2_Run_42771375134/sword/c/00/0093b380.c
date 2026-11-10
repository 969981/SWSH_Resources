/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093b380; name: FUN_0093b380
 */


undefined8 FUN_0093b380(long param_1,long param_2,uint *param_3)

{
  ulong uVar1;
  
  if ((ulong)*(byte *)(param_1 + 0x4c) == 0) {
    return 0;
  }
  uVar1 = 0;
  while ((*(long *)(param_1 + uVar1 * 8) != param_2 || (*(char *)(param_1 + uVar1 + 0x3c) != '\x01')
         )) {
    uVar1 = uVar1 + 1;
    if (*(byte *)(param_1 + 0x4c) <= uVar1) {
      return 0;
    }
  }
  *param_3 = (uint)*(ushort *)(param_1 + uVar1 * 2 + 0x28);
  return 1;
}


