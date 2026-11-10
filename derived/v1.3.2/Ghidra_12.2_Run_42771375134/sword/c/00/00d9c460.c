/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d9c460; name: FUN_00d9c460
 */


void FUN_00d9c460(long param_1)

{
  long lVar1;
  long local_38;
  undefined1 auStack_28 [8];
  
  *(undefined4 *)(param_1 + 0x2b4) = 1;
  FUN_00784d00(param_1 + 0xb0,&DAT_021604d4,PTR_DAT_027162c0);
  lVar1 = FUN_00d976a0(auStack_28,*(undefined8 *)(param_1 + 0x98));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x2a8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2a8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2a8) = 0;
  }
  local_38 = *(long *)(param_1 + 0x2a0);
  *(long *)(param_1 + 0x2a8) = lVar1;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_00785ed0(lVar1,&local_38,2,"fade_rotom_00.bflyt",0,0);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  FUN_007868f0(*(undefined8 *)(param_1 + 0x2a8),param_1 + 0xb0);
  FUN_00702020(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x2a8));
  FUN_00786c60(*(undefined8 *)(param_1 + 0x2a8),0,*(undefined8 *)(param_1 + 0x78),0);
  FUN_00786c60(*(undefined8 *)(param_1 + 0x2a8),1,*(undefined8 *)(param_1 + 0x88),0);
  FUN_00788e30(*(undefined8 *)(param_1 + 0x2a0));
  lVar1 = FUN_00786910(*(undefined8 *)(param_1 + 0x2a8),*(undefined8 *)(param_1 + 0x60));
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  }
  return;
}


