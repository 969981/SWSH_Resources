/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103cfe0; name: FUN_0103cfe0
 */


undefined8 FUN_0103cfe0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  undefined1 auStack_70 [16];
  long local_60;
  undefined8 local_58;
  long local_48;
  undefined1 auStack_40 [16];
  
  FUN_0103ce40(auStack_40);
  uVar1 = FUN_012b4090(auStack_40);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  local_88 = 0x5b83eccec485bfa2;
  local_80 = "picturename";
  local_78 = 0xb;
  FUN_012b4250(auStack_70,auStack_40,&local_88);
  local_a8 = 0xcbf29ce484222645;
  local_a0 = &DAT_01d38550;
  uStack_98 = 0;
  local_90 = 0;
  FUN_012b4820(&local_60,auStack_70,&local_a8);
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  if (local_48 == 0) {
    if (local_60 == -0x5098ffb379f8bd48) {
      return 0;
    }
LAB_0103d0e8:
    if (*(long *)(param_1 + 400) != 0) {
      uVar3 = FUN_007890e0(*(long *)(param_1 + 400),local_58);
      FUN_00788e30(*(undefined8 *)(param_1 + 400));
      goto joined_r0x0103d108;
    }
  }
  else {
    plVar2 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    if (local_60 != -0x5098ffb379f8bd48) goto LAB_0103d0e8;
  }
  uVar3 = 0;
joined_r0x0103d108:
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return uVar3;
}


