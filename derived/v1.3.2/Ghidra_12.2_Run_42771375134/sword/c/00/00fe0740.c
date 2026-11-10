/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe0740; name: FUN_00fe0740
 */


void FUN_00fe0740(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long *local_60;
  long *local_58;
  long lStack_50;
  long local_48;
  
  plVar4 = param_1 + 1;
  *plVar4 = param_2;
  plVar5 = param_1 + 2;
  *plVar5 = param_3;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  puVar1 = PTR_DAT_02723138;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar3 = FUN_00ff93d0();
  FUN_00fe0f30(&local_60,uVar3,plVar4,plVar5);
  (**(code **)(*local_60 + 0x10))();
  plVar2 = local_60;
  local_60 = (long *)0x0;
  puVar6 = (undefined8 *)param_1[3];
  param_1[3] = (long)plVar2;
  if (puVar6 == (undefined8 *)0x0) {
    param_1[5] = lStack_50;
    param_1[6] = local_48;
    param_1[4] = (long)local_58;
    local_60 = (long *)0x0;
  }
  else {
    (**(code **)*puVar6)(puVar6);
    (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],puVar6,param_1[5],param_1[6]);
    plVar2 = local_60;
    param_1[5] = lStack_50;
    param_1[6] = local_48;
    param_1[4] = (long)local_58;
    local_60 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)*plVar2)(plVar2);
      (**(code **)(*local_58 + 0x18))(local_58,plVar2,lStack_50,local_48);
    }
  }
  local_a8 = DAT_021621d8;
  uStack_a0 = DAT_021621e0;
  local_b8 = DAT_021621c8;
  uStack_b0 = DAT_021621d0;
  local_88 = DAT_021621f8;
  uStack_80 = DAT_02162200;
  local_98 = DAT_021621e8;
  uStack_90 = DAT_021621f0;
  local_68 = DAT_02162218;
  local_78 = DAT_02162208;
  uStack_70 = DAT_02162210;
  FUN_00fe11b0(param_1[3],&local_b8);
  FUN_00fe1bc0(param_1[3]);
  uVar3 = FUN_00ff93d0(param_1);
  FUN_00fe0f30(&local_60,uVar3,plVar4,plVar5);
  (**(code **)(*local_60 + 0x10))();
  plVar2 = local_60;
  local_60 = (long *)0x0;
  puVar6 = (undefined8 *)param_1[7];
  param_1[7] = (long)plVar2;
  if (puVar6 == (undefined8 *)0x0) {
    param_1[9] = lStack_50;
    param_1[10] = local_48;
    param_1[8] = (long)local_58;
    local_60 = (long *)0x0;
  }
  else {
    (**(code **)*puVar6)(puVar6);
    (**(code **)(*(long *)param_1[8] + 0x18))((long *)param_1[8],puVar6,param_1[9],param_1[10]);
    plVar2 = local_60;
    param_1[9] = lStack_50;
    param_1[10] = local_48;
    param_1[8] = (long)local_58;
    local_60 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)*plVar2)(plVar2);
      (**(code **)(*local_58 + 0x18))(local_58,plVar2,lStack_50,local_48);
    }
  }
  local_a8 = DAT_02162230;
  uStack_a0 = DAT_02162238;
  local_b8 = DAT_02162220;
  uStack_b0 = DAT_02162228;
  local_88 = DAT_02162250;
  uStack_80 = DAT_02162258;
  local_98 = DAT_02162240;
  uStack_90 = DAT_02162248;
  local_68 = DAT_02162270;
  local_78 = DAT_02162260;
  uStack_70 = DAT_02162268;
  FUN_00fe11b0(param_1[7],&local_b8);
  FUN_00fe1bc0(param_1[7]);
  uVar3 = FUN_00ff93d0(param_1);
  FUN_00fe0f30(&local_60,uVar3,plVar4,plVar5);
  (**(code **)(*local_60 + 0x10))();
  plVar2 = local_60;
  local_60 = (long *)0x0;
  puVar6 = (undefined8 *)param_1[0xb];
  param_1[0xb] = (long)plVar2;
  if (puVar6 == (undefined8 *)0x0) {
    param_1[0xd] = lStack_50;
    param_1[0xe] = local_48;
    param_1[0xc] = (long)local_58;
    local_60 = (long *)0x0;
  }
  else {
    (**(code **)*puVar6)(puVar6);
    (**(code **)(*(long *)param_1[0xc] + 0x18))
              ((long *)param_1[0xc],puVar6,param_1[0xd],param_1[0xe]);
    plVar2 = local_60;
    param_1[0xd] = lStack_50;
    param_1[0xe] = local_48;
    param_1[0xc] = (long)local_58;
    local_60 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)*plVar2)(plVar2);
      (**(code **)(*local_58 + 0x18))(local_58,plVar2,lStack_50,local_48);
    }
  }
  local_a8 = DAT_02162288;
  uStack_a0 = DAT_02162290;
  local_b8 = DAT_02162278;
  uStack_b0 = DAT_02162280;
  local_88 = DAT_021622a8;
  uStack_80 = DAT_021622b0;
  local_98 = DAT_02162298;
  uStack_90 = DAT_021622a0;
  local_68 = DAT_021622c8;
  local_78 = DAT_021622b8;
  uStack_70 = DAT_021622c0;
  FUN_00fe11b0(param_1[0xb],&local_b8);
  FUN_00fe1bc0(param_1[0xb]);
  uVar3 = FUN_00ff93d0(param_1);
  FUN_00fe0f30(&local_60,uVar3,plVar4,plVar5);
  (**(code **)(*local_60 + 0x10))();
  plVar2 = local_60;
  local_60 = (long *)0x0;
  puVar6 = (undefined8 *)param_1[0xf];
  param_1[0xf] = (long)plVar2;
  if (puVar6 == (undefined8 *)0x0) {
    param_1[0x11] = lStack_50;
    param_1[0x12] = local_48;
    param_1[0x10] = (long)local_58;
    local_60 = (long *)0x0;
  }
  else {
    (**(code **)*puVar6)(puVar6);
    (**(code **)(*(long *)param_1[0x10] + 0x18))
              ((long *)param_1[0x10],puVar6,param_1[0x11],param_1[0x12]);
    plVar2 = local_60;
    param_1[0x11] = lStack_50;
    param_1[0x12] = local_48;
    param_1[0x10] = (long)local_58;
    local_60 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)*plVar2)(plVar2);
      (**(code **)(*local_58 + 0x18))(local_58,plVar2,lStack_50,local_48);
    }
  }
  local_a8 = DAT_021622e0;
  uStack_a0 = DAT_021622e8;
  local_b8 = DAT_021622d0;
  uStack_b0 = DAT_021622d8;
  local_88 = DAT_02162300;
  uStack_80 = DAT_02162308;
  local_98 = DAT_021622f0;
  uStack_90 = DAT_021622f8;
  local_68 = DAT_02162320;
  local_78 = DAT_02162310;
  uStack_70 = DAT_02162318;
  FUN_00fe11b0(param_1[0xf],&local_b8);
  FUN_00fe1bc0(param_1[0xf]);
  FUN_00fe1bc0(param_1[3]);
  FUN_00fe1bc0(param_1[7]);
  FUN_00fe1bc0(param_1[0xb]);
  FUN_00fe1bc0(param_1[0xf]);
  return;
}


