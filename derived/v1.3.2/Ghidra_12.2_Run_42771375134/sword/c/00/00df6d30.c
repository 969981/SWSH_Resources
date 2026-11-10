/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df6d30; name: FUN_00df6d30
 */


ulong FUN_00df6d30(ulong param_1,ulong param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  ulong *puVar5;
  ulong uVar6;
  byte local_40 [16];
  undefined8 local_28;
  
  uVar6 = 0xcbf29ce484222645;
  snprintf((char *)local_40,0x10,"TOWER_TRAINER_%d",*(int *)(param_3 + 0x70));
  iVar2 = *(int *)(param_3 + 0x70);
  uVar1 = iVar2 + 2;
  if (-1 < iVar2 + 1) {
    uVar1 = iVar2 + 1;
  }
  *(uint *)(param_3 + 0x70) = (iVar2 + 1) - (uVar1 & 0xfffffffe);
  if (local_40[0] != 0) {
    pbVar4 = (byte *)((ulong)local_40 | 1);
    do {
      uVar6 = (uVar6 ^ local_40[0]) * 0x100000001b3;
      local_40[0] = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (local_40[0] != 0);
  }
  puVar5 = (ulong *)(param_3 + 0x68);
  *puVar5 = uVar6;
  local_28 = 0xac6b1274261ea10;
  lVar3 = FUN_00e83140(&local_28,(long *)(param_3 + 0x130),puVar5,
                       *(long *)(param_3 + 0x130) == 0x11633d782b968469);
  *(undefined1 *)(lVar3 + 0xc0) = 1;
  *(ulong *)(lVar3 + 0xb8) = param_2 & 0xffffffff;
  *(ulong *)(lVar3 + 0xb0) = param_1 & 0xffffffff;
  return *puVar5;
}


