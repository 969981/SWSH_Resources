/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d94fe0; name: FUN_00d94fe0
 */


void FUN_00d94fe0(long param_1)

{
  long lVar1;
  long lVar2;
  long local_38;
  undefined8 uStack_28;
  
  *(undefined4 *)(param_1 + 0x5d4) = 1;
  lVar2 = param_1 + 0x3d0;
  uStack_28 = 0x438078000000000;
  FUN_00784d30(lVar2,&uStack_28);
  FUN_00784d00(lVar2,&DAT_02160404,PTR_DAT_027162c0);
  lVar1 = FUN_00d976a0(&uStack_28,*(undefined8 *)(param_1 + 0x3b8));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x5c8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x5c8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x5c8) = 0;
  }
  local_38 = *(long *)(param_1 + 0x5c0);
  *(long *)(param_1 + 0x5c8) = lVar1;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_00785ed0(lVar1,&local_38,0x21,"fade_common_00.bflyt",0,0);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  FUN_007868f0(*(undefined8 *)(param_1 + 0x5c8),lVar2);
  FUN_00702020(*(undefined8 *)(param_1 + 0x3c0),*(undefined8 *)(param_1 + 0x5c8));
  FUN_00d96520(param_1);
  FUN_00788e30(*(undefined8 *)(param_1 + 0x5c0));
  lVar2 = FUN_00786910(*(undefined8 *)(param_1 + 0x5c8),*(undefined8 *)(param_1 + 0x60));
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  }
  lVar2 = FUN_00786910(*(undefined8 *)(param_1 + 0x5c8),*(undefined8 *)(param_1 + 0x68));
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  }
  lVar2 = FUN_00786910(*(undefined8 *)(param_1 + 0x5c8),*(undefined8 *)(param_1 + 0x70));
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  }
  lVar2 = FUN_00786910(*(undefined8 *)(param_1 + 0x5c8),*(undefined8 *)(param_1 + 0x78));
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  }
  lVar2 = FUN_00786910(*(undefined8 *)(param_1 + 0x5c8),*(undefined8 *)(param_1 + 0x80));
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  }
  lVar2 = FUN_00786910(*(undefined8 *)(param_1 + 0x5c8),*(undefined8 *)(param_1 + 0x88));
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  }
  lVar2 = FUN_00786910(*(undefined8 *)(param_1 + 0x5c8),*(undefined8 *)(param_1 + 0x90));
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  }
  lVar2 = FUN_00786910(*(undefined8 *)(param_1 + 0x5c8),*(undefined8 *)(param_1 + 0x98));
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  }
  lVar2 = FUN_00786910(*(undefined8 *)(param_1 + 0x5c8),*(undefined8 *)(param_1 + 0xa0));
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  }
  lVar2 = FUN_00786910(*(undefined8 *)(param_1 + 0x5c8),*(undefined8 *)(param_1 + 0xa8));
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  }
  lVar2 = FUN_00786910(*(undefined8 *)(param_1 + 0x5c8),*(undefined8 *)(param_1 + 0xb0));
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  }
  lVar2 = FUN_00786910(*(undefined8 *)(param_1 + 0x5c8),*(undefined8 *)(param_1 + 0xb8));
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  }
  lVar2 = FUN_00786910(*(undefined8 *)(param_1 + 0x5c8),*(undefined8 *)(param_1 + 0xc0));
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  }
  lVar2 = FUN_00786910(*(undefined8 *)(param_1 + 0x5c8),*(undefined8 *)(param_1 + 200));
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  }
  lVar2 = FUN_00786910(*(undefined8 *)(param_1 + 0x5c8),*(undefined8 *)(param_1 + 0xd0));
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  }
  lVar2 = FUN_00786910(*(undefined8 *)(param_1 + 0x5c8),*(undefined8 *)(param_1 + 0xd8));
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  }
  lVar2 = FUN_00786910(*(undefined8 *)(param_1 + 0x5c8),*(undefined8 *)(param_1 + 0xe0));
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  }
  return;
}


