/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00818800; name: FUN_00818800
 */


undefined8 FUN_00818800(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined *local_50;
  undefined *puStack_48;
  undefined1 local_40;
  undefined1 auStack_18 [8];
  
  if (*(int *)(param_2 + 0x40) != 3) {
    FUN_00801270(&local_50,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/message.cc"
                 ,0x1ac);
    uVar1 = FUN_00800f30(&local_50,"CHECK failed: field->is_repeated(): ");
    FUN_00800fa0(auStack_18,uVar1);
    FUN_00801290(&local_50);
  }
  switch(*(undefined4 *)(PTR_DAT_02716e20 + (ulong)*(uint *)(param_2 + 0x3c) * 4)) {
  case 1:
    lVar3 = *(long *)PTR_DAT_02716fc8;
    break;
  case 2:
    if (*(long *)PTR_DAT_02717000 != 2) {
      local_40 = 0;
      local_50 = PTR_DAT_02716670 + 0x10;
      puStack_48 = PTR_LAB_02717008;
      FUN_00801c10(PTR_DAT_02717000,&local_50);
      FUN_00801390(&local_50);
    }
    return *(undefined8 *)PTR_DAT_02717010;
  case 3:
    if (*(long *)PTR_DAT_02717018 != 2) {
      local_40 = 0;
      local_50 = PTR_DAT_02716670 + 0x10;
      puStack_48 = PTR_LAB_02717020;
      FUN_00801c10(PTR_DAT_02717018,&local_50);
      FUN_00801390(&local_50);
    }
    return *(undefined8 *)PTR_DAT_02717028;
  case 4:
    if (*(long *)PTR_DAT_02717030 != 2) {
      local_40 = 0;
      local_50 = PTR_DAT_02716670 + 0x10;
      puStack_48 = PTR_LAB_02717038;
      FUN_00801c10(PTR_DAT_02717030,&local_50);
      FUN_00801390(&local_50);
    }
    return *(undefined8 *)PTR_DAT_02717040;
  case 5:
    if (*(long *)PTR_DAT_02716fd0 != 2) {
      local_40 = 0;
      local_50 = PTR_DAT_02716670 + 0x10;
      puStack_48 = PTR_LAB_02716fd8;
      FUN_00801c10(PTR_DAT_02716fd0,&local_50);
      FUN_00801390(&local_50);
    }
    return *(undefined8 *)PTR_DAT_02716fe0;
  case 6:
    if (*(long *)PTR_DAT_02717048 != 2) {
      local_40 = 0;
      local_50 = PTR_DAT_02716670 + 0x10;
      puStack_48 = PTR_LAB_02717050;
      FUN_00801c10(PTR_DAT_02717048,&local_50);
      FUN_00801390(&local_50);
    }
    return *(undefined8 *)PTR_DAT_02717058;
  case 7:
    if (*(long *)PTR_DAT_02717060 != 2) {
      local_40 = 0;
      local_50 = PTR_DAT_02716670 + 0x10;
      puStack_48 = PTR_LAB_02717068;
      FUN_00801c10(PTR_DAT_02717060,&local_50);
      FUN_00801390(&local_50);
    }
    return *(undefined8 *)PTR_DAT_02717070;
  case 8:
    lVar3 = *(long *)PTR_DAT_02716fc8;
    break;
  case 9:
    if (*(long *)PTR_DAT_02717088 != 2) {
      local_40 = 0;
      local_50 = PTR_DAT_02716670 + 0x10;
      puStack_48 = PTR_FUN_02717090;
      FUN_00801c10(PTR_DAT_02717088,&local_50);
      FUN_00801390(&local_50);
    }
    return *(undefined8 *)PTR_DAT_02717098;
  case 10:
    uVar2 = FUN_007e4b30(param_2);
    if ((uVar2 & 1) == 0) {
      if (*(long *)PTR_DAT_027170a0 != 2) {
        local_40 = 0;
        local_50 = PTR_DAT_02716670 + 0x10;
        puStack_48 = PTR_FUN_027170a8;
        FUN_00801c10(PTR_DAT_027170a0,&local_50);
        FUN_00801390(&local_50);
      }
      return *(undefined8 *)PTR_DAT_027170b0;
    }
    if (*(long *)PTR_DAT_02716fe8 != 2) {
      local_40 = 0;
      local_50 = PTR_DAT_02716670 + 0x10;
      puStack_48 = PTR_LAB_02716ff0;
      FUN_00801c10(PTR_DAT_02716fe8,&local_50);
      FUN_00801390(&local_50);
    }
    return *(undefined8 *)PTR_DAT_02716ff8;
  default:
    FUN_00801270(&local_50,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/message.cc"
                 ,0x1c8);
    uVar1 = FUN_00800f30(&local_50,"Should not reach here.");
    FUN_00800fa0(auStack_18,uVar1);
    FUN_00801290(&local_50);
    return 0;
  }
  if (lVar3 != 2) {
    local_40 = 0;
    local_50 = PTR_DAT_02716670 + 0x10;
    puStack_48 = PTR_LAB_02717078;
    FUN_00801c10(PTR_DAT_02716fc8,&local_50);
    FUN_00801390(&local_50);
  }
  return *(undefined8 *)PTR_DAT_02717080;
}


