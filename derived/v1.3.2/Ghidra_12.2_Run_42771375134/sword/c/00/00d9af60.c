/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d9af60; name: FUN_00d9af60
 */


void FUN_00d9af60(long param_1)

{
  long lVar1;
  long local_38;
  undefined1 auStack_28 [8];
  
  *(undefined4 *)(param_1 + 0x364) = 1;
  FUN_00784d00(param_1 + 0x160,&DAT_02160458,PTR_DAT_027162c0);
  lVar1 = FUN_00d976a0(auStack_28,*(undefined8 *)(param_1 + 0x148));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x358) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x358) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x358) = 0;
  }
  local_38 = *(long *)(param_1 + 0x350);
  *(long *)(param_1 + 0x358) = lVar1;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_00785ed0(lVar1,&local_38,3,(&PTR_s_fade_logo_g_01_bflyt_0264e8c8)[*(int *)(param_1 + 0x158)],0
               ,0);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  FUN_007868f0(*(undefined8 *)(param_1 + 0x358),param_1 + 0x160);
  FUN_00702020(*(undefined8 *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0x358));
  FUN_00d9bb40(param_1);
  FUN_00788e30(*(undefined8 *)(param_1 + 0x350));
  lVar1 = FUN_00786910(*(undefined8 *)(param_1 + 0x358),*(undefined8 *)(param_1 + 0x60));
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  }
  lVar1 = FUN_00786910(*(undefined8 *)(param_1 + 0x358),*(undefined8 *)(param_1 + 0x68));
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  }
  lVar1 = FUN_00786910(*(undefined8 *)(param_1 + 0x358),*(undefined8 *)(param_1 + 0x70));
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  }
  lVar1 = FUN_00786910(*(undefined8 *)(param_1 + 0x358),*(undefined8 *)(param_1 + 0x78));
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  }
  return;
}


