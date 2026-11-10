/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ce5e0; name: FUN_008ce5e0
 */


void FUN_008ce5e0(long param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 local_68;
  long local_58;
  
  lVar2 = *(long *)(param_1 + 0x2b0);
  param_4 = param_4 & 0xffffffff;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar2 + 0x2e0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN_014c9660(lVar3,0,*(undefined4 *)
                        (*(long *)(*(long *)(param_1 + 0x650) + 0xe0) + (param_2 & 0xffffffff) * 8))
  ;
  puVar1 = PTR_DAT_02717b38;
  uVar4 = *(undefined8 *)(PTR_DAT_02717b38 + param_4 * 0x90);
  local_58 = *(long *)(param_1 + 0x5e0);
  if (local_58 == 0) {
    FUN_008ce1c0(param_1,0xf86b70deb1ed6cd1,uVar4,&local_58,0);
  }
  else {
    plVar5 = (long *)(local_58 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_008ce1c0(param_1,0xf86b70deb1ed6cd1,uVar4,&local_58,0);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    local_58 = 0;
  }
  local_68 = *(undefined8 *)(puVar1 + param_4 * 0x90 + 0x80);
  FUN_00ffd510(0,param_1 + 0x100,&local_68);
  local_68 = *(undefined8 *)(puVar1 + param_4 * 0x90 + 0x88);
  FUN_00ffd510(0x3f800000,param_1 + 0x100,&local_68);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return;
}


