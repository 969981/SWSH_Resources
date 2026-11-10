/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014993d0; name: FUN_014993d0
 */


undefined8 FUN_014993d0(int *param_1,int *param_2,int *param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  undefined1 auStack_70 [16];
  
  local_88 = 0x2a939633d19cfb16;
  pcStack_80 = "ribbon_table";
  local_78 = 0xc;
  FUN_012b4250(auStack_70,*param_4 + 0x798,&local_88);
  FUN_012b4190(auStack_a8,auStack_70,(long)*param_2);
  local_78 = 7;
  local_88 = 0xc0f8c07cd4198abc;
  pcStack_80 = "showNum";
  FUN_012b4250(auStack_98,auStack_a8,&local_88);
  iVar1 = FUN_012b4420(auStack_98,0);
  FUN_012b4190(auStack_a8,auStack_70,(long)*param_1);
  local_88 = 0xc0f8c07cd4198abc;
  pcStack_80 = "showNum";
  local_78 = 7;
  FUN_012b4250(auStack_98,auStack_a8,&local_88);
  iVar2 = FUN_012b4420(auStack_98,0);
  local_88 = 0x2a939633d19cfb16;
  pcStack_80 = "ribbon_table";
  local_78 = 0xc;
  FUN_012b4250(auStack_70,*param_4 + 0x798,&local_88);
  FUN_012b4190(auStack_a8,auStack_70,(long)*param_3);
  local_88 = 0xc0f8c07cd4198abc;
  pcStack_80 = "showNum";
  local_78 = 7;
  FUN_012b4250(auStack_98,auStack_a8,&local_88);
  iVar3 = FUN_012b4420(auStack_98,0);
  FUN_012b4190(auStack_a8,auStack_70,(long)*param_2);
  local_88 = 0xc0f8c07cd4198abc;
  pcStack_80 = "showNum";
  local_78 = 7;
  FUN_012b4250(auStack_98,auStack_a8,&local_88);
  iVar4 = FUN_012b4420(auStack_98,0);
  if (iVar1 < iVar2) {
    iVar1 = *param_1;
    if (iVar3 < iVar4) {
      *param_1 = *param_3;
      *param_3 = iVar1;
    }
    else {
      *param_1 = *param_2;
      *param_2 = iVar1;
      local_88 = 0x2a939633d19cfb16;
      pcStack_80 = "ribbon_table";
      local_78 = 0xc;
      FUN_012b4250(auStack_70,*param_4 + 0x798,&local_88);
      FUN_012b4190(auStack_a8,auStack_70,(long)*param_3);
      local_88 = 0xc0f8c07cd4198abc;
      pcStack_80 = "showNum";
      local_78 = 7;
      FUN_012b4250(auStack_98,auStack_a8,&local_88);
      iVar1 = FUN_012b4420(auStack_98,0);
      FUN_012b4190(auStack_a8,auStack_70,(long)*param_2);
      local_88 = 0xc0f8c07cd4198abc;
      pcStack_80 = "showNum";
      local_78 = 7;
      FUN_012b4250(auStack_98,auStack_a8,&local_88);
      iVar2 = FUN_012b4420(auStack_98,0);
      if (iVar1 < iVar2) {
        iVar1 = *param_2;
        *param_2 = *param_3;
        *param_3 = iVar1;
        return 2;
      }
    }
  }
  else {
    if (iVar4 <= iVar3) {
      return 0;
    }
    iVar1 = *param_2;
    *param_2 = *param_3;
    *param_3 = iVar1;
    local_88 = 0x2a939633d19cfb16;
    pcStack_80 = "ribbon_table";
    local_78 = 0xc;
    FUN_012b4250(auStack_70,*param_4 + 0x798,&local_88);
    FUN_012b4190(auStack_a8,auStack_70,(long)*param_2);
    local_88 = 0xc0f8c07cd4198abc;
    pcStack_80 = "showNum";
    local_78 = 7;
    FUN_012b4250(auStack_98,auStack_a8,&local_88);
    iVar1 = FUN_012b4420(auStack_98,0);
    FUN_012b4190(auStack_a8,auStack_70,(long)*param_1);
    local_88 = 0xc0f8c07cd4198abc;
    pcStack_80 = "showNum";
    local_78 = 7;
    FUN_012b4250(auStack_98,auStack_a8,&local_88);
    iVar2 = FUN_012b4420(auStack_98,0);
    if (iVar1 < iVar2) {
      iVar1 = *param_1;
      *param_1 = *param_2;
      *param_2 = iVar1;
      return 2;
    }
  }
  return 1;
}


