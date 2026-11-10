/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075dd70; name: FUN_0075dd70
 */


/* WARNING: Removing unreachable block (ram,0x0075dda4) */

uint FUN_0075dd70(byte *param_1,ulong param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  
  FUN_0075def0();
  if ((long)param_2 < 1) {
    return 0;
  }
  if (param_2 == 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    lVar4 = (param_2 & 1) - param_2;
    do {
      bVar2 = *param_1;
      pbVar1 = param_1 + 1;
      param_1 = param_1 + 2;
      uVar3 = (uint)(ushort)(*(ushort *)
                              (PTR_DAT_02715fd8 +
                              ((ulong)((uint)*pbVar1 ^
                                      (uint)*(ushort *)
                                             (PTR_DAT_02715fd8 + ((ulong)(bVar2 ^ uVar3) & 0xff) * 2
                                             ) ^ uVar3 >> 8) & 0xff) * 2) ^
                            *(ushort *)(PTR_DAT_02715fd8 + ((ulong)(bVar2 ^ uVar3) & 0xff) * 2) >> 8
                            );
      lVar4 = lVar4 + 2;
    } while (lVar4 != 0);
    if ((param_2 & 1) == 0) {
      return uVar3;
    }
  }
  return (uint)*(ushort *)(PTR_DAT_02715fd8 + ((ulong)(*param_1 ^ uVar3) & 0xff) * 2) ^ uVar3 >> 8;
}


