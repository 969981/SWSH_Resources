/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00776990; name: FUN_00776990
 */


undefined8
FUN_00776990(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
            undefined1 (*param_5) [16])

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  local_30 = *param_3;
  uStack_2c = param_3[1];
  local_28 = param_3[2];
  local_48 = *param_4;
  auVar2._4_4_ = (int)param_4[1];
  auVar2._0_4_ = (int)local_48;
  auVar2._8_4_ = (int)local_48;
  auVar2._12_4_ = (int)param_4[1];
  auVar2 = NEON_ext(auVar2,*param_5,0xc,1);
  local_40 = auVar2._0_8_;
  auVar2 = NEON_ext(*param_5,*param_5,8,1);
  local_38 = NEON_ext(*(undefined8 *)*param_5,auVar2._0_8_,4,1);
  iVar1 = (**(code **)(**(long **)(param_1 + 0x80) + 0x60))
                    (*(long **)(param_1 + 0x80),param_2,&local_48);
  if (iVar1 == 1) {
    local_70 = local_48;
    uStack_58 = CONCAT44(uStack_2c,local_30);
    local_50 = local_28;
    local_60 = local_38;
    local_68 = local_40;
    FUN_007757e0(*(undefined8 *)(param_1 + 0x20),param_2,&local_70);
    return 1;
  }
  return 0;
}


