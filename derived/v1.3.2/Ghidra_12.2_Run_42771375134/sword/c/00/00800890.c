/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00800890; name: FUN_00800890
 */


void FUN_00800890(int param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  size_t sVar3;
  ulong uVar4;
  void *pvVar5;
  void *pvVar6;
  ulong local_130;
  size_t local_128;
  void *local_120;
  ulong local_118;
  size_t local_110;
  void *local_108;
  int local_100;
  char *local_f8;
  undefined4 local_f0;
  ulong local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined1 local_c0;
  undefined1 local_51;
  
  if (3000000 < (int)param_2) {
    local_f8 = 
    "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/stubs/common.cc"
    ;
    local_100 = 3;
    local_f0 = 0x43;
    local_e0 = 0;
    local_d8 = (void *)0x0;
    local_e8 = 0;
    std::string::append((char *)&local_e8);
    snprintf((char *)&local_d0,0x80,"%d.%d.%d",param_2 / 1000000,
             param_2 / 1000 + (int)(((ulong)param_2 * 0x10624dd3) / 0xfa0000000000) * -1000,
             param_2 % 1000);
    local_51 = 0;
    local_118 = 0;
    local_110 = 0;
    local_108 = (void *)0x0;
    sVar3 = strlen((char *)&local_d0);
    if (0xffffffffffffffef < sVar3) goto LAB_00800f14;
    if (sVar3 < 0x17) {
      local_118 = CONCAT71(local_118._1_7_,(char)((int)sVar3 << 1));
      pvVar5 = (void *)((ulong)&local_118 | 1);
      pvVar6 = pvVar5;
      if (sVar3 != 0) goto LAB_008009b8;
    }
    else {
      uVar4 = sVar3 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = operator_new(uVar4);
      local_118 = uVar4 | 1;
      pvVar6 = (void *)((ulong)&local_118 | 1);
      local_110 = sVar3;
      local_108 = pvVar5;
LAB_008009b8:
      memcpy(pvVar5,&local_d0,sVar3);
    }
    *(undefined1 *)((long)pvVar5 + sVar3) = 0;
    if ((local_118 & 1) != 0) {
      pvVar6 = local_108;
    }
    std::string::append((char *)&local_e8,(ulong)pvVar6);
    std::string::append((char *)&local_e8);
    snprintf((char *)&local_d0,0x80,"%d.%d.%d",3,0,0);
    local_51 = 0;
    local_130 = 0;
    local_128 = 0;
    local_120 = (void *)0x0;
    sVar3 = strlen((char *)&local_d0);
    if (0xffffffffffffffef < sVar3) goto LAB_00800f1c;
    if (sVar3 < 0x17) {
      local_130 = CONCAT71(local_130._1_7_,(char)((int)sVar3 << 1));
      pvVar6 = (void *)((ulong)&local_130 | 1);
      if (sVar3 != 0) goto LAB_00800a88;
    }
    else {
      uVar4 = sVar3 + 0x10 & 0xfffffffffffffff0;
      pvVar6 = operator_new(uVar4);
      local_130 = uVar4 | 1;
      local_128 = sVar3;
      local_120 = pvVar6;
LAB_00800a88:
      memcpy(pvVar6,&local_d0,sVar3);
    }
    *(undefined1 *)((long)pvVar6 + sVar3) = 0;
    pvVar6 = (void *)((ulong)&local_130 | 1);
    if ((local_130 & 1) != 0) {
      pvVar6 = local_120;
    }
    std::string::append((char *)&local_e8,(ulong)pvVar6);
    std::string::append((char *)&local_e8);
    std::string::append((char *)&local_e8);
    std::string::append((char *)&local_e8);
    if (local_100 == 3) {
      iVar2 = 3;
LAB_00800b68:
      (*(code *)PTR_FUN_02613600)(iVar2,local_f8,local_f0,&local_e8);
    }
    else {
      if (*(long *)PTR_DAT_02716ed0 != 2) {
        local_c0 = 0;
        local_d0 = PTR_DAT_02716670 + 0x10;
        puStack_c8 = PTR_LAB_02716ed8;
        FUN_00801c10(PTR_DAT_02716ed0,&local_d0);
      }
      uVar1 = DAT_029f55f0;
      FUN_00801420(DAT_029f55f0);
      iVar2 = DAT_029f55e8;
      FUN_008014c0(uVar1);
      if (iVar2 < 1) {
        iVar2 = local_100;
        goto LAB_00800b68;
      }
    }
    if (local_100 == 3) goto LAB_00800f24;
    if ((local_130 & 1) != 0) {
      operator_delete(local_120);
    }
    if ((local_118 & 1) != 0) {
      operator_delete(local_108);
    }
    if ((local_e8 & 1) != 0) {
      operator_delete(local_d8);
    }
  }
  if (2999999 < param_1) {
    return;
  }
  local_e8 = 0;
  local_f8 = 
  "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/stubs/common.cc"
  ;
  local_100 = 3;
  local_f0 = 0x4e;
  local_e0 = 0;
  local_d8 = (void *)0x0;
  std::string::append((char *)&local_e8);
  snprintf((char *)&local_d0,0x80,"%d.%d.%d",param_1 / 1000000,(param_1 / 1000) % 1000,
           param_1 % 1000);
  local_51 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = (void *)0x0;
  sVar3 = strlen((char *)&local_d0);
  if (0xffffffffffffffef < sVar3) {
LAB_00800f14:
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar3 < 0x17) {
    local_118 = CONCAT71(local_118._1_7_,(char)((int)sVar3 << 1));
    pvVar5 = (void *)((ulong)&local_118 | 1);
    pvVar6 = pvVar5;
    if (sVar3 != 0) goto LAB_00800cbc;
  }
  else {
    uVar4 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = operator_new(uVar4);
    local_118 = uVar4 | 1;
    pvVar6 = (void *)((ulong)&local_118 | 1);
    local_110 = sVar3;
    local_108 = pvVar5;
LAB_00800cbc:
    memcpy(pvVar5,&local_d0,sVar3);
  }
  *(undefined1 *)((long)pvVar5 + sVar3) = 0;
  if ((local_118 & 1) != 0) {
    pvVar6 = local_108;
  }
  std::string::append((char *)&local_e8,(ulong)pvVar6);
  std::string::append((char *)&local_e8);
  snprintf((char *)&local_d0,0x80,"%d.%d.%d",3,0,0);
  local_51 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = (void *)0x0;
  sVar3 = strlen((char *)&local_d0);
  if (0xffffffffffffffef < sVar3) {
LAB_00800f1c:
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar3 < 0x17) {
    local_130 = CONCAT71(local_130._1_7_,(char)((int)sVar3 << 1));
    pvVar6 = (void *)((ulong)&local_130 | 1);
    if (sVar3 != 0) goto LAB_00800db0;
  }
  else {
    uVar4 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar6 = operator_new(uVar4);
    local_130 = uVar4 | 1;
    local_128 = sVar3;
    local_120 = pvVar6;
LAB_00800db0:
    memcpy(pvVar6,&local_d0,sVar3);
  }
  *(undefined1 *)((long)pvVar6 + sVar3) = 0;
  pvVar6 = (void *)((ulong)&local_130 | 1);
  if ((local_130 & 1) != 0) {
    pvVar6 = local_120;
  }
  std::string::append((char *)&local_e8,(ulong)pvVar6);
  std::string::append((char *)&local_e8);
  std::string::append((char *)&local_e8);
  std::string::append((char *)&local_e8);
  if (local_100 == 3) {
    iVar2 = 3;
LAB_00800e90:
    (*(code *)PTR_FUN_02613600)(iVar2,local_f8,local_f0,&local_e8);
  }
  else {
    if (*(long *)PTR_DAT_02716ed0 != 2) {
      local_c0 = 0;
      local_d0 = PTR_DAT_02716670 + 0x10;
      puStack_c8 = PTR_LAB_02716ed8;
      FUN_00801c10(PTR_DAT_02716ed0,&local_d0);
    }
    uVar1 = DAT_029f55f0;
    FUN_00801420(DAT_029f55f0);
    iVar2 = DAT_029f55e8;
    FUN_008014c0(uVar1);
    if (iVar2 < 1) {
      iVar2 = local_100;
      goto LAB_00800e90;
    }
  }
  if (local_100 != 3) {
    if ((local_130 & 1) != 0) {
      operator_delete(local_120);
    }
    if ((local_118 & 1) != 0) {
      operator_delete(local_108);
    }
    if ((local_e8 & 1) != 0) {
      operator_delete(local_d8);
    }
    return;
  }
LAB_00800f24:
                    /* WARNING: Subroutine does not return */
  abort();
}


