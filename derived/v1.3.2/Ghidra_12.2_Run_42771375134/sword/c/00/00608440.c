/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00608440; name: FUN_00608440
 */


ulong FUN_00608440(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  
  pbVar1 = *(byte **)(param_1 + 0x40);
  if (pbVar1 + 3 < *(byte **)(param_1 + 0x48)) {
    bVar2 = *pbVar1;
    bVar3 = pbVar1[1];
    bVar4 = pbVar1[2];
    bVar5 = pbVar1[3];
    *(byte **)(param_1 + 0x40) = pbVar1 + 4;
    return (ulong)bVar2 << 0x18 | (ulong)bVar3 << 0x10 | (ulong)bVar4 << 8 | (ulong)bVar5;
  }
  *(byte **)(param_1 + 0x40) = pbVar1;
  return 0;
}


