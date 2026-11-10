/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01499770; name: FUN_01499770
 */


int FUN_01499770(int *param_1,int *param_2,int *param_3,int *param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  undefined1 auStack_70 [16];
  
  iVar1 = FUN_014993d0();
  local_88 = 0x2a939633d19cfb16;
  pcStack_80 = "ribbon_table";
  local_78 = 0xc;
  FUN_012b4250(auStack_70,*param_5 + 0x798,&local_88);
  FUN_012b4190(auStack_a8,auStack_70,(long)*param_4);
  local_78 = 7;
  local_88 = 0xc0f8c07cd4198abc;
  pcStack_80 = "showNum";
  FUN_012b4250(auStack_98,auStack_a8,&local_88);
  iVar2 = FUN_012b4420(auStack_98,0);
  FUN_012b4190(auStack_a8,auStack_70,(long)*param_3);
  local_88 = 0xc0f8c07cd4198abc;
  pcStack_80 = "showNum";
  local_78 = 7;
  FUN_012b4250(auStack_98,auStack_a8,&local_88);
  iVar3 = FUN_012b4420(auStack_98,0);
  if (iVar2 < iVar3) {
    iVar2 = *param_3;
    *param_3 = *param_4;
    *param_4 = iVar2;
    local_88 = 0x2a939633d19cfb16;
    pcStack_80 = "ribbon_table";
    local_78 = 0xc;
    FUN_012b4250(auStack_70,*param_5 + 0x798,&local_88);
    FUN_012b4190(auStack_a8,auStack_70,(long)*param_3);
    local_88 = 0xc0f8c07cd4198abc;
    pcStack_80 = "showNum";
    local_78 = 7;
    FUN_012b4250(auStack_98,auStack_a8,&local_88);
    iVar2 = FUN_012b4420(auStack_98,0);
    FUN_012b4190(auStack_a8,auStack_70,(long)*param_2);
    local_88 = 0xc0f8c07cd4198abc;
    pcStack_80 = "showNum";
    local_78 = 7;
    FUN_012b4250(auStack_98,auStack_a8,&local_88);
    iVar3 = FUN_012b4420(auStack_98,0);
    if (iVar2 < iVar3) {
      iVar2 = *param_2;
      *param_2 = *param_3;
      *param_3 = iVar2;
      local_88 = 0x2a939633d19cfb16;
      pcStack_80 = "ribbon_table";
      local_78 = 0xc;
      FUN_012b4250(auStack_70,*param_5 + 0x798,&local_88);
      FUN_012b4190(auStack_a8,auStack_70,(long)*param_2);
      local_88 = 0xc0f8c07cd4198abc;
      pcStack_80 = "showNum";
      local_78 = 7;
      FUN_012b4250(auStack_98,auStack_a8,&local_88);
      iVar2 = FUN_012b4420(auStack_98,0);
      FUN_012b4190(auStack_a8,auStack_70,(long)*param_1);
      local_88 = 0xc0f8c07cd4198abc;
      pcStack_80 = "showNum";
      local_78 = 7;
      FUN_012b4250(auStack_98,auStack_a8,&local_88);
      iVar3 = FUN_012b4420(auStack_98,0);
      if (iVar2 < iVar3) {
        iVar2 = *param_1;
        iVar1 = iVar1 + 3;
        *param_1 = *param_2;
        *param_2 = iVar2;
      }
      else {
        iVar1 = iVar1 + 2;
      }
    }
    else {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


