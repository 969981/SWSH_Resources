/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bbcf0; name: FUN_014bbcf0
 */


ulong FUN_014bbcf0(long param_1,undefined2 *param_2)

{
  long lVar1;
  ushort uVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0xaf8) == 4) {
    uVar3 = FUN_014bba60(*(undefined8 *)PTR_DAT_02710898,param_2);
    return uVar3;
  }
  if (*(int *)(param_1 + 0xaf8) == 3) {
    uVar3 = FUN_014bb5f0(*(undefined8 *)PTR_DAT_02710898,param_2);
    return uVar3;
  }
  uVar3 = FUN_014ba2e0(*param_2,1);
  lVar1 = 2;
  if ((uVar3 & 1) == 0) {
    lVar1 = 0;
  }
  uVar2 = *(ushort *)((long)param_2 + lVar1);
  if (uVar2 < 0x100) {
    return (ulong)((*(uint *)(&DAT_01d4da20 + (ulong)(uVar2 >> 5) * 4) & 1 << (ulong)(uVar2 & 0x1f))
                  != 0);
  }
  return 0;
}


