/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ecf310; name: FUN_00ecf310
 */


void FUN_00ecf310(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long local_90;
  long local_88;
  long local_80;
  undefined1 auStack_78 [24];
  long local_60;
  undefined8 local_58;
  char *local_50;
  undefined8 local_48;
  long local_38;
  
  lVar4 = *(long *)PTR_DAT_02710798;
  uVar3 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68);
  lVar2 = *(long *)(lVar4 + 0x250);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  FUN_01551430(lVar2,3);
  uVar1 = FUN_00ecf520();
  FUN_00f4a470(&local_38,*(undefined8 *)(param_1 + 0x88),param_1 + 0x90,uVar3);
  FUN_00878a90(local_38,uVar1);
  local_58 = 0xb09ab66ab938fc2f;
  local_50 = "MEET_BY_WILD";
  local_48 = 0xc;
  FUN_006cf0a0(auStack_78,&local_58);
  local_80 = local_38;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_014af470(auStack_78,&local_80);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  local_88 = local_38;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_014b48d0(uVar3,&local_88,0,0);
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  lVar4 = *(long *)(lVar4 + 0x1f8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN_01534a40(lVar4,local_38,0);
  local_90 = local_38;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_015513b0(lVar2,3,&local_90);
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


