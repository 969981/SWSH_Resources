/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b37e0; name: FUN_014b37e0
 */


undefined4 FUN_014b37e0(ulong param_1,ulong param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long local_38;
  
  FUN_014b3920(param_1,param_2,param_4);
  puVar1 = PTR_DAT_027107a8;
  if (((int)param_1 == 0x34) && (param_4 == 2)) {
    local_68 = 0xf85ca2fdd6cfceb4;
    puStack_60 = &DAT_01d0a936;
    lVar3 = *(long *)PTR_DAT_027107a8;
    local_58 = 4;
    FUN_006cf0a0(&local_50,&local_68);
    FUN_00896220(0x3f800000,lVar3 + 0x108,&local_50,0);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
    local_50 = 0xe13d010acc120df;
    pcStack_48 = "Play_PV_EV_052_sp_roar";
    local_40 = 0x16;
    local_38 = 0;
    uVar2 = FUN_008962c0(*(long *)puVar1 + 0x108,&local_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
  }
  else {
    uVar2 = FUN_014b3460(param_1 & 0xffffffff,param_2 & 0xffffffff,param_3,param_4 != 0);
  }
  FUN_014b3cf0(param_1 & 0xffffffff);
  return uVar2;
}


