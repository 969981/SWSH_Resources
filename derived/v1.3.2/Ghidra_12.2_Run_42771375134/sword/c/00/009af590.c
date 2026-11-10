/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009af590; name: FUN_009af590
 */


bool FUN_009af590(long *param_1,byte param_2)

{
  uint uVar1;
  byte bVar2;
  uint *puVar3;
  
  puVar3 = (uint *)((long)param_1 + (ulong)param_2 * 4 + 0xc);
  uVar1 = *puVar3;
  bVar2 = *(byte *)(*param_1 + (ulong)uVar1);
  if ((bVar2 & 0x70) == 0x20) {
    *puVar3 = uVar1 + 1;
    return (char)bVar2 < '\0';
  }
  return false;
}


