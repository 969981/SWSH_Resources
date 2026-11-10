/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00867850; name: FUN_00867850
 */


/* WARNING: Removing unreachable block (ram,0x00867874) */

void FUN_00867850(long param_1,uint param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  long lVar3;
  
  param_2 = param_2 >> 1;
  if (param_2 != 0) {
    if (param_2 == 1) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      do {
        iVar2 = param_3 * 0x41c64e6d + 0x6073;
        puVar1 = (ushort *)(param_1 + lVar3 * 2);
        lVar3 = lVar3 + 2;
        param_3 = iVar2 * 0x41c64e6d + 0x6073;
        *puVar1 = *puVar1 ^ (ushort)((uint)iVar2 >> 0x10);
        puVar1[1] = puVar1[1] ^ (ushort)((uint)param_3 >> 0x10);
      } while ((ulong)param_2 - ((ulong)param_2 & 1) != lVar3);
      if ((param_2 & 1) == 0) {
        return;
      }
    }
    *(ushort *)(param_1 + lVar3 * 2) =
         *(ushort *)(param_1 + lVar3 * 2) ^ (ushort)((uint)(param_3 * 0x41c64e6d + 0x6073) >> 0x10);
  }
  return;
}


