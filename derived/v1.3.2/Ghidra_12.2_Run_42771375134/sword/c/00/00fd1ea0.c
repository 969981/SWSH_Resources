/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd1ea0; name: FUN_00fd1ea0
 */


int FUN_00fd1ea0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5,long *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  iVar4 = FUN_00fd1c30();
  lVar7 = *param_6;
  FUN_012b4190(auStack_80,lVar7 + 0x68,(long)*(int *)((long)param_5 + 0xc));
  local_88 = 7;
  local_98 = 0xc0f8c07cd4198abc;
  pcStack_90 = "showNum";
  FUN_012b4250(auStack_70,auStack_80,&local_98);
  iVar5 = FUN_012b4420(auStack_70,0);
  FUN_012b4190(auStack_80,lVar7 + 0x68,(long)*(int *)((long)param_4 + 0xc));
  local_98 = 0xc0f8c07cd4198abc;
  pcStack_90 = "showNum";
  local_88 = 7;
  FUN_012b4250(auStack_70,auStack_80,&local_98);
  iVar6 = FUN_012b4420(auStack_70,0);
  if (iVar5 < iVar6) {
    local_98 = *param_4;
    pcStack_90 = (char *)param_4[1];
    uVar1 = param_5[1];
    *param_4 = *param_5;
    param_4[1] = uVar1;
    *param_5 = local_98;
    param_5[1] = pcStack_90;
    lVar7 = *param_6;
    FUN_012b4190(auStack_80,lVar7 + 0x68,(long)*(int *)((long)param_4 + 0xc));
    local_88 = 7;
    local_98 = 0xc0f8c07cd4198abc;
    pcStack_90 = "showNum";
    FUN_012b4250(auStack_70,auStack_80,&local_98);
    iVar5 = FUN_012b4420(auStack_70,0);
    FUN_012b4190(auStack_80,lVar7 + 0x68,(long)*(int *)((long)param_3 + 0xc));
    local_98 = 0xc0f8c07cd4198abc;
    pcStack_90 = "showNum";
    local_88 = 7;
    FUN_012b4250(auStack_70,auStack_80,&local_98);
    iVar6 = FUN_012b4420(auStack_70,0);
    if (iVar5 < iVar6) {
      local_98 = *param_3;
      pcStack_90 = (char *)param_3[1];
      uVar1 = param_4[1];
      *param_3 = *param_4;
      param_3[1] = uVar1;
      *param_4 = local_98;
      param_4[1] = pcStack_90;
      lVar7 = *param_6;
      FUN_012b4190(auStack_80,lVar7 + 0x68,(long)*(int *)((long)param_3 + 0xc));
      local_98 = 0xc0f8c07cd4198abc;
      pcStack_90 = "showNum";
      local_88 = 7;
      FUN_012b4250(auStack_70,auStack_80,&local_98);
      iVar5 = FUN_012b4420(auStack_70,0);
      FUN_012b4190(auStack_80,lVar7 + 0x68,(long)*(int *)((long)param_2 + 0xc));
      local_98 = 0xc0f8c07cd4198abc;
      pcStack_90 = "showNum";
      local_88 = 7;
      FUN_012b4250(auStack_70,auStack_80,&local_98);
      iVar6 = FUN_012b4420(auStack_70,0);
      if (iVar5 < iVar6) {
        local_98 = *param_2;
        pcStack_90 = (char *)param_2[1];
        uVar1 = param_3[1];
        *param_2 = *param_3;
        param_2[1] = uVar1;
        *param_3 = local_98;
        param_3[1] = pcStack_90;
        lVar7 = *param_6;
        FUN_012b4190(auStack_80,lVar7 + 0x68,(long)*(int *)((long)param_2 + 0xc));
        local_98 = 0xc0f8c07cd4198abc;
        pcStack_90 = "showNum";
        local_88 = 7;
        FUN_012b4250(auStack_70,auStack_80,&local_98);
        iVar5 = FUN_012b4420(auStack_70,0);
        FUN_012b4190(auStack_80,lVar7 + 0x68,(long)*(int *)((long)param_1 + 0xc));
        local_98 = 0xc0f8c07cd4198abc;
        pcStack_90 = "showNum";
        local_88 = 7;
        FUN_012b4250(auStack_70,auStack_80,&local_98);
        iVar6 = FUN_012b4420(auStack_70,0);
        if (iVar5 < iVar6) {
          uVar1 = *param_1;
          uVar2 = param_1[1];
          iVar4 = iVar4 + 4;
          uVar3 = param_2[1];
          *param_1 = *param_2;
          param_1[1] = uVar3;
          *param_2 = uVar1;
          param_2[1] = uVar2;
        }
        else {
          iVar4 = iVar4 + 3;
        }
      }
      else {
        iVar4 = iVar4 + 2;
      }
    }
    else {
      iVar4 = iVar4 + 1;
    }
  }
  return iVar4;
}


