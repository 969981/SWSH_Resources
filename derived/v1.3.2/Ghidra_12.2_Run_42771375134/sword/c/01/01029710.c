/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01029710; name: FUN_01029710
 */


/* WARNING: Removing unreachable block (ram,0x01029758) */

uint FUN_01029710(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  
  *(undefined2 *)(param_1 + 0x180) = 0;
  pbVar6 = *(byte **)(*(long *)(param_1 + 0x68) + 400);
  if (pbVar6 == (byte *)0x0) {
    return 0;
  }
  FUN_0075def0();
  uVar4 = *(ulong *)(*(long *)(param_1 + 0x68) + 0x180);
  if ((long)uVar4 < 1) {
    *(undefined2 *)(param_1 + 0x180) = 0;
    return 0;
  }
  if (uVar4 == 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    lVar5 = (uVar4 & 1) - uVar4;
    do {
      bVar2 = *pbVar6;
      pbVar1 = pbVar6 + 1;
      pbVar6 = pbVar6 + 2;
      uVar3 = (uint)(ushort)(*(ushort *)
                              (PTR_DAT_02715fd8 +
                              ((ulong)((uint)*pbVar1 ^
                                      (uint)*(ushort *)
                                             (PTR_DAT_02715fd8 + ((ulong)(bVar2 ^ uVar3) & 0xff) * 2
                                             ) ^ uVar3 >> 8) & 0xff) * 2) ^
                            *(ushort *)(PTR_DAT_02715fd8 + ((ulong)(bVar2 ^ uVar3) & 0xff) * 2) >> 8
                            );
      lVar5 = lVar5 + 2;
    } while (lVar5 != 0);
    if ((uVar4 & 1) == 0) goto LAB_010297e8;
  }
  uVar3 = (uint)*(ushort *)(PTR_DAT_02715fd8 + ((ulong)(*pbVar6 ^ uVar3) & 0xff) * 2) ^ uVar3 >> 8;
LAB_010297e8:
  *(short *)(param_1 + 0x180) = (short)uVar3;
  return uVar3;
}


