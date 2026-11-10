/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b8030; name: FUN_011b8030
 */


uint FUN_011b8030(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  
  pbVar5 = *(byte **)(param_1 + 0x60);
  if (pbVar5 == (byte *)0x0) {
    return 0;
  }
  if (5 < *(uint *)(pbVar5 + 0xc)) {
    FUN_0075def0();
    return 0;
  }
  uVar6 = *(ulong *)(&DAT_021676e0 + (long)(int)*(uint *)(pbVar5 + 0xc) * 8);
  FUN_0075def0();
  uVar3 = 0;
  lVar4 = -(uVar6 & 0xfffffffffffffffe);
  do {
    bVar2 = *pbVar5;
    pbVar1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 2;
    uVar3 = (uint)(ushort)(*(ushort *)
                            (PTR_DAT_02715fd8 +
                            ((ulong)((uint)*pbVar1 ^
                                    (uint)*(ushort *)
                                           (PTR_DAT_02715fd8 + ((ulong)(bVar2 ^ uVar3) & 0xff) * 2)
                                    ^ uVar3 >> 8) & 0xff) * 2) ^
                          *(ushort *)(PTR_DAT_02715fd8 + ((ulong)(bVar2 ^ uVar3) & 0xff) * 2) >> 8);
    lVar4 = lVar4 + 2;
  } while (lVar4 != 0);
  return uVar3;
}


