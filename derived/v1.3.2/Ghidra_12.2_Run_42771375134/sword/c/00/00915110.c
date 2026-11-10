/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00915110; name: FUN_00915110
 */


void FUN_00915110(long *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  
  *param_1 = (long)(PTR_DAT_02717d68 + 0x10);
  uVar3 = *(ushort *)(param_2 + 0xc);
  bVar1 = *(byte *)(param_2 + 0xe);
  bVar2 = *(byte *)(param_2 + 10);
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 8);
  *(ushort *)((long)param_1 + 0xe) = (ushort)bVar1;
  *(ushort *)((long)param_1 + 10) = (ushort)bVar2;
  *(ushort *)((long)param_1 + 0xc) = uVar3;
  memcpy(param_1 + 2,(void *)(param_2 + 0x10),(ulong)uVar3);
  return;
}


