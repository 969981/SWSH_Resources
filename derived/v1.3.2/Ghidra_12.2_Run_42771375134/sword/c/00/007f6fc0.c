/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f6fc0; name: FUN_007f6fc0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_007f6fc0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  void *pvVar2;
  byte *pbVar3;
  bool bVar4;
  ulong *puVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  string *this;
  byte *pbVar9;
  undefined ***local_108;
  undefined **local_100;
  void *local_f8;
  undefined **local_e8;
  undefined8 local_e0;
  void *local_d8;
  void *local_d0;
  ulong local_c8;
  ulong local_c0;
  void *local_b8;
  undefined *local_98;
  undefined8 local_90;
  void *local_88;
  ulong local_80;
  ulong local_78;
  void *local_70;
  ulong local_68;
  ulong local_60;
  void *local_58;
  
  if ((*(byte *)(param_1[2] + 0x10) >> 6 & 1) == 0) {
    std::operator+("Option \"",(string *)param_2[1]);
    puVar5 = (ulong *)std::string::append((char *)&local_98);
    local_80 = *puVar5;
    local_78 = puVar5[1];
    local_70 = (void *)puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    pbVar9 = (byte *)*param_2;
    pbVar3 = *(byte **)(pbVar9 + 0x10);
    if ((*pbVar9 & 1) == 0) {
      pbVar3 = pbVar9 + 1;
    }
    puVar5 = (ulong *)std::string::append((char *)&local_80,(ulong)pbVar3);
    local_68 = *puVar5;
    local_60 = puVar5[1];
    local_58 = (void *)puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    puVar5 = (ulong *)std::string::append((char *)&local_68);
    local_108 = (undefined ***)*puVar5;
    local_100 = (undefined **)puVar5[1];
    local_f8 = (void *)puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    pbVar9 = (byte *)*param_2;
    pbVar3 = *(byte **)(pbVar9 + 0x10);
    if ((*pbVar9 & 1) == 0) {
      pbVar3 = pbVar9 + 1;
    }
    puVar5 = (ulong *)std::string::append((char *)&local_108,(ulong)pbVar3);
    local_e8 = (undefined **)*puVar5;
    local_e0 = puVar5[1];
    local_d8 = (void *)puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    puVar5 = (ulong *)std::string::append((char *)&local_e8);
    local_c8 = *puVar5;
    local_c0 = puVar5[1];
    local_b8 = (void *)puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_007eaaf0(*param_1,param_1[1] + 0x18,param_1[2],8,&local_c8);
    if ((local_c8 & 1) != 0) {
      operator_delete(local_b8);
    }
    if (((ulong)local_e8 & 1) != 0) {
      operator_delete(local_d8);
    }
    if (((ulong)local_108 & 1) != 0) {
      operator_delete(local_f8);
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if (((byte)local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    return 0;
  }
  plVar6 = (long *)FUN_008178c0(param_1 + 3,param_2[0xd]);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x18))();
  if (plVar6 == (long *)0x0) {
    FUN_00801270(&local_c8,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.cc"
                 ,0x1808);
    uVar7 = FUN_00800f30(&local_c8,"CHECK failed: dynamic.get() != NULL: ");
    uVar7 = FUN_00800f30(uVar7,"Could not create an instance of ");
    local_108 = (undefined ***)((ulong)local_108 & 0xffffffffff000000);
    FUN_007e8c60(&local_e8,param_2,&local_108);
    uVar7 = FUN_00800f60(uVar7,&local_e8);
    FUN_00800fa0(&local_108,uVar7);
    if (((byte)local_e8 & 1) != 0) {
      operator_delete(local_d8);
    }
    FUN_00801290(&local_c8);
  }
  local_e8 = &PTR_LAB_02613570;
  local_e0 = 0;
  local_d8 = (void *)0x0;
  local_d0 = (void *)0x0;
  local_98 = PTR_DAT_02716e78 + 0x10;
  local_90 = *param_1;
  FUN_008023c0(&local_108);
  local_100 = &local_98;
  local_108 = &local_e8;
  uVar8 = FUN_008026e0(&local_108,*(undefined8 *)(param_1[2] + 0x58),plVar6);
  if ((uVar8 & 1) == 0) {
    std::operator+("Error while parsing option value for \"",(string *)*param_2);
    puVar5 = (ulong *)std::string::append((char *)&local_80);
    local_68 = *puVar5;
    local_60 = puVar5[1];
    local_58 = (void *)puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    pvVar2 = local_d0;
    if ((local_e0 & 1) == 0) {
      pvVar2 = (void *)((long)&local_e0 + 1);
    }
    puVar5 = (ulong *)std::string::append((char *)&local_68,(ulong)pvVar2);
    local_c8 = *puVar5;
    local_c0 = puVar5[1];
    local_b8 = (void *)puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_007eaaf0(*param_1,param_1[1] + 0x18,param_1[2],8,&local_c8);
    if ((local_c8 & 1) != 0) {
      operator_delete(local_b8);
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    if (((byte)local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    uVar7 = 0;
    goto LAB_007f7440;
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = (void *)0x0;
  FUN_0080c700(plVar6,&local_68);
  if (*(int *)((long)param_2 + 0x3c) == 10) {
LAB_007f73fc:
    uVar7 = FUN_00810180(param_3,*(undefined4 *)(param_2 + 7));
    bVar4 = (local_68 & 1) != 0;
    pvVar2 = (void *)((ulong)&local_68 | 1);
    if (bVar4) {
      pvVar2 = local_58;
    }
    uVar1 = (uint)((byte)local_68._0_1_ >> 1);
    if (bVar4) {
      uVar1 = (uint)local_60;
    }
    FUN_008103b0(uVar7,pvVar2,uVar1);
  }
  else {
    if (*(int *)((long)param_2 + 0x3c) != 0xb) {
      FUN_00801270(&local_c8,3,
                   "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.cc"
                   ,0x181c);
      uVar7 = FUN_00800f30(&local_c8,
                           "CHECK failed: (option_field->type()) == (FieldDescriptor::TYPE_GROUP): "
                          );
      FUN_00800fa0(&local_80,uVar7);
      FUN_00801290(&local_c8);
      goto LAB_007f73fc;
    }
    this = (string *)FUN_00810030(param_3,*(undefined4 *)(param_2 + 7));
    std::string::operator=(this,(string *)&local_68);
  }
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  uVar7 = 1;
LAB_007f7440:
  FUN_008023d0(&local_108);
  FUN_008023b0(&local_98);
  local_e8 = &PTR_LAB_02613570;
  if ((local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
  FUN_00841bc0(&local_e8);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
  return uVar7;
}


