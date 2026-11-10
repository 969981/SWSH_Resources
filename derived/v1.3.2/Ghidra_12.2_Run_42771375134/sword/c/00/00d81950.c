/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d81950; name: FUN_00d81950
 */


void FUN_00d81950(long param_1,uint *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 local_48 [4];
  byte local_44 [4];
  undefined8 local_38;
  
  lVar1 = *(long *)(*(long *)PTR_DAT_02710798 + 0x218);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x5f0) + 0xe0) + (ulong)*param_2 * 0x10);
  local_44[0] = 0;
  if (*(int *)(param_1 + 0x5dc) == 0xb) {
    local_48[0] = *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x278) + 0x58);
    FUN_00d70a10(lVar2 + 0x18,local_48);
    local_44[0] = FUN_00d714a0();
  }
  else {
    local_44[0] = FUN_0153a2b0(lVar1,*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar2 + 0x10));
  }
  local_44[0] = local_44[0] & 1;
  FUN_00d7e620(param_1,param_3,local_44,lVar2 + 0x38);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  lVar1 = FUN_00d70850(param_3);
  local_38 = *(undefined8 *)(lVar1 + 0x50);
  lVar1 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_38);
  *(byte *)(lVar1 + 0x58) =
       *(byte *)(lVar1 + 0x58) & 0xfe |
       **(byte **)(*(long *)(*(long *)(param_1 + 0x5f0) + 0xe0) + (ulong)*param_2 * 0x10);
  return;
}


