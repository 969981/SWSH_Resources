/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f02f0; name: FUN_007f02f0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_007f02f0(long param_1,string *param_2,long param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7)

{
  byte *pbVar1;
  void *pvVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined8 *extraout_x1;
  long lVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  string local_f8 [16];
  void *local_e8;
  string local_e0 [16];
  void *local_d0;
  ulong local_c8;
  ulong local_c0;
  void *local_b8;
  ulong local_b0;
  ulong local_a8;
  void *local_a0;
  ulong local_98;
  ulong local_90;
  void *local_88;
  ulong local_80;
  ulong local_78;
  void *local_70;
  
  if (param_3 == 0) {
    param_3 = *(long *)(param_1 + 0x50);
  }
  uVar4 = FUN_007eb750(*(undefined8 *)(param_1 + 8),param_2,param_6,param_7);
  if ((uVar4 & 1) != 0) {
    uVar4 = FUN_007f1b30(*(undefined8 *)(param_1 + 0x58),param_3,param_4,param_6,param_7);
    if ((uVar4 & 1) == 0) {
      FUN_00801270(&local_80,2,
                   "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.cc"
                   ,0xe0f);
      uVar6 = FUN_00800f30(&local_80,&DAT_01d00162);
      uVar6 = FUN_00800f60(uVar6,param_2);
      uVar6 = FUN_00800f30(uVar6,
                           "\" not previously defined in symbols_by_name_, but was defined in symbols_by_parent_; this shouldn\'t be possible."
                          );
      FUN_00800fa0(&local_98,uVar6);
      FUN_00801290(&local_80);
      return 0;
    }
    return 1;
  }
  uVar3 = FUN_007e2eb0(*(undefined8 *)(param_1 + 8),param_2);
  puVar9 = extraout_x1;
  switch(uVar3) {
  case 1:
  case 4:
  case 6:
    puVar9 = (undefined8 *)extraout_x1[2];
    if (puVar9 != *(undefined8 **)(param_1 + 0x50)) break;
    goto LAB_007f03ac;
  case 2:
    puVar9 = (undefined8 *)extraout_x1[6];
    if (puVar9 == *(undefined8 **)(param_1 + 0x50)) goto LAB_007f03ac;
    break;
  case 3:
  case 7:
    lVar7 = extraout_x1[2];
    goto LAB_007f0654;
  case 5:
    lVar7 = extraout_x1[3];
LAB_007f0654:
    puVar9 = *(undefined8 **)(lVar7 + 0x10);
switchD_007f0398_caseD_8:
    if (puVar9 == *(undefined8 **)(param_1 + 0x50)) {
LAB_007f03ac:
      uVar4 = std::string::rfind((char)param_2,0x2e);
      if (uVar4 == 0xffffffffffffffff) {
        std::operator+("\"",param_2);
        puVar5 = (ulong *)std::string::append((char *)&local_98);
        local_80 = *puVar5;
        local_78 = puVar5[1];
        local_70 = (void *)puVar5[2];
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = 0;
        FUN_007eaaf0(param_1,param_2,param_5,0,&local_80);
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
        if ((local_98 & 1) == 0) {
          return 0;
        }
        local_d0 = local_88;
      }
      else {
        std::string::string(local_e0,param_2,uVar4 + 1,0xffffffffffffffff,(allocator *)param_2);
        puVar5 = (ulong *)std::string::insert((ulong)local_e0,(char *)0x0);
        local_c8 = *puVar5;
        local_c0 = puVar5[1];
        local_b8 = (void *)puVar5[2];
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = 0;
        puVar5 = (ulong *)std::string::append((char *)&local_c8);
        local_b0 = *puVar5;
        local_a8 = puVar5[1];
        local_a0 = (void *)puVar5[2];
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = 0;
        std::string::string(local_f8,param_2,0,uVar4,(allocator *)param_2);
        pvVar2 = (void *)((ulong)local_f8 | 1);
        if (((byte)local_f8[0] & 1) != 0) {
          pvVar2 = local_e8;
        }
        puVar5 = (ulong *)std::string::append((char *)&local_b0,(ulong)pvVar2);
        local_98 = *puVar5;
        local_90 = puVar5[1];
        local_88 = (void *)puVar5[2];
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = 0;
        puVar5 = (ulong *)std::string::append((char *)&local_98);
        local_80 = *puVar5;
        local_78 = puVar5[1];
        local_70 = (void *)puVar5[2];
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = 0;
        FUN_007eaaf0(param_1,param_2,param_5,0,&local_80);
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
        if ((local_98 & 1) != 0) {
          operator_delete(local_88);
        }
        if (((byte)local_f8[0] & 1) != 0) {
          operator_delete(local_e8);
        }
        if ((local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
        if ((local_c8 & 1) != 0) {
          operator_delete(local_b8);
        }
        if (((byte)local_e0[0] & 1) == 0) {
          return 0;
        }
      }
      goto LAB_007f0774;
    }
    break;
  case 8:
    goto switchD_007f0398_caseD_8;
  default:
    puVar9 = (undefined8 *)0x0;
    if (*(long *)(param_1 + 0x50) == 0) goto LAB_007f03ac;
  }
  std::operator+("\"",param_2);
  puVar5 = (ulong *)std::string::append((char *)&local_c8);
  local_b0 = *puVar5;
  local_a8 = puVar5[1];
  local_a0 = (void *)puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  pbVar8 = (byte *)*puVar9;
  pbVar1 = *(byte **)(pbVar8 + 0x10);
  if ((*pbVar8 & 1) == 0) {
    pbVar1 = pbVar8 + 1;
  }
  puVar5 = (ulong *)std::string::append((char *)&local_b0,(ulong)pbVar1);
  local_98 = *puVar5;
  local_90 = puVar5[1];
  local_88 = (void *)puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar5 = (ulong *)std::string::append((char *)&local_98);
  local_80 = *puVar5;
  local_78 = puVar5[1];
  local_70 = (void *)puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  FUN_007eaaf0(param_1,param_2,param_5,0,&local_80);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  local_d0 = local_b8;
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
    local_d0 = local_b8;
  }
  if ((local_c8 & 1) == 0) {
    return 0;
  }
  local_b8 = local_d0;
LAB_007f0774:
  operator_delete(local_d0);
  return 0;
}


