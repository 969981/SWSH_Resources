/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00659ca0; name: FUN_00659ca0
 */


undefined8 FUN_00659ca0(long *param_1,int *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long local_88 [5];
  undefined *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  plVar1 = (long *)FUN_005cbff0();
  plVar1 = (long *)(**(code **)(*plVar1 + 0x60))();
  plVar1 = (long *)(**(code **)(*plVar1 + 0x40))(plVar1,"SiGfx_NX_Special");
  uVar3 = 0;
  if (plVar1 != (long *)0x0) {
    local_38 = 0;
    local_50 = 0;
    local_60 = PTR_DAT_02714600 + 0x10;
    uStack_40 = 0;
    uStack_58 = 0;
    local_48 = local_60;
    plVar2 = (long *)FUN_006761c0(param_1[1],param_1[0x2f]);
    (**(code **)(*plVar2 + 0x38))(plVar2,"SiGfx::NXSpecialShaderEffect::CSCopyResource");
    (**(code **)(*plVar1 + 0xb0))(plVar1,plVar2);
    plVar1 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2);
    param_1[0x49] = (long)plVar2;
    (**(code **)(*plVar1 + 0x60))(plVar1,&local_48,"CSCopyBuffer");
    (**(code **)(*plVar2 + 0x60))(local_88,plVar2,0,&local_48,&local_60,0);
    if (local_88[0] == 0) {
      uVar3 = 0;
    }
    else {
      (**(code **)(*param_1 + 0x78))(param_1,local_88[0],(long)*param_2);
      *param_2 = *param_2 + 1;
      uVar3 = 1;
      param_1[0x4a] = local_88[0];
    }
  }
  return uVar3;
}


