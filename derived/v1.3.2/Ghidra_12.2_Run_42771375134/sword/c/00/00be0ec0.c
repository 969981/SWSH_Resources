/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00be0ec0; name: FUN_00be0ec0
 */


undefined8 FUN_00be0ec0(undefined4 *param_1,long *param_2,long param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long local_a0;
  undefined1 auStack_94 [36];
  char local_70 [8];
  undefined *local_68 [3];
  undefined8 local_50;
  long local_38;
  
  local_38 = *param_2;
  if (local_38 == 0) {
    uVar4 = FUN_00be08d0(param_1,&local_38,param_3);
  }
  else {
    plVar7 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    uVar4 = FUN_00be08d0(param_1,&local_38,param_3);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    local_38 = 0;
  }
  if (((uVar4 & 1) == 0) || (FUN_00be0540(local_70,*param_1), local_70[0] == '\0')) {
    uVar5 = 0;
  }
  else {
    iVar2 = FUN_017d1040(local_68);
    FUN_0077dfd0(auStack_94,0x11,local_50,(long)iVar2);
    FUN_0077d7e0(param_3 + 0x294,auStack_94,0x11);
    uVar3 = FUN_009fe1a0(*param_2,0x19);
    *(undefined4 *)(param_3 + 0x2b8) = uVar3;
    lVar6 = *param_2;
    uVar3 = FUN_008d3750();
    FUN_009fef60(&local_a0,lVar6,4,uVar3);
    uVar5 = FUN_0077d470(local_a0);
    FUN_0077d7e0(param_3 + 700,uVar5,0xd);
    uVar1 = FUN_009fe1a0(*param_2,0x1a);
    *(undefined1 *)(param_3 + 0x2ee) = uVar1;
    uVar1 = FUN_009fe1a0(*param_2,0x1b);
    *(undefined1 *)(param_3 + 0x2ef) = uVar1;
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
      local_a0 = 0;
    }
    if (local_70[0] != '\0') {
      local_68[0] = PTR_DAT_027167e8 + 0x10;
      FUN_017d0720(local_68);
    }
    uVar5 = 1;
  }
  return uVar5;
}


