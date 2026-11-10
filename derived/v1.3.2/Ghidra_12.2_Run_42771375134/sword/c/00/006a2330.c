/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a2330; name: FUN_006a2330
 */


undefined1  [16] FUN_006a2330(long param_1,long param_2,uint param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar3 = (undefined8 *)(*(long *)(param_2 + 0x1b8) + (long)(int)param_3 * 0x130);
  uStack_38 = puVar3[5];
  local_48 = puVar3[3];
  uStack_58 = puVar3[1];
  local_60 = *puVar3;
  local_50 = puVar3[2];
  local_40 = puVar3[4];
  if ((*(long *)(param_1 + 0x10) != *(long *)(param_1 + 0x18)) &&
     (lVar6 = (long)*(short *)(*(long *)(param_1 + 0x10) + (ulong)param_3 * 2), -1 < lVar6)) {
    lVar8 = *(long *)(param_1 + 0x70);
    lVar7 = *(long *)(param_1 + 0x40);
    uVar4 = *(ulong *)(lVar8 + lVar6 * 8);
    uVar2 = (uint)uVar4;
    if ((uVar4 & 1) != 0) {
      puVar3 = (undefined8 *)(lVar7 + lVar6 * 0x30);
      uStack_68 = puVar3[1];
      local_70 = *puVar3;
      FUN_0075e300(&local_60,&local_70);
      uVar2 = (uint)*(undefined8 *)(lVar8 + lVar6 * 8);
    }
    if ((uVar2 >> 1 & 1) != 0) {
      lVar5 = lVar7 + lVar6 * 0x30;
      uStack_68 = *(undefined8 *)(lVar5 + 0x18);
      local_70 = *(undefined8 *)(lVar5 + 0x10);
      FUN_0075e320(&local_60,&local_70);
      uVar2 = (uint)*(undefined8 *)(lVar8 + lVar6 * 8);
    }
    if ((uVar2 >> 2 & 1) != 0) {
      lVar7 = lVar7 + lVar6 * 0x30;
      uStack_68 = *(undefined8 *)(lVar7 + 0x28);
      local_70 = *(undefined8 *)(lVar7 + 0x20);
      FUN_0075e340(&local_60,&local_70);
    }
  }
  auVar1._8_8_ = uStack_58;
  auVar1._0_8_ = local_60;
  return auVar1;
}


