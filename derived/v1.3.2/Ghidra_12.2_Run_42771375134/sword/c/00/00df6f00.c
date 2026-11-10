/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df6f00; name: FUN_00df6f00
 */


ulong FUN_00df6f00(long param_1)

{
  int param3;
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  byte local_50 [32];
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x290);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  uVar3 = 0xcbf29ce484222645;
  param3 = FUN_01502fd0(lVar2,*(undefined4 *)(param_1 + 0xb0));
  snprintf((char *)local_50,0x20,"mes_tower_tr_%03d_00",param3);
  if (local_50[0] != 0) {
    pbVar1 = (byte *)((ulong)local_50 | 1);
    do {
      uVar3 = (uVar3 ^ local_50[0]) * 0x100000001b3;
      local_50[0] = *pbVar1;
      pbVar1 = pbVar1 + 1;
    } while (local_50[0] != 0);
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return uVar3;
}


