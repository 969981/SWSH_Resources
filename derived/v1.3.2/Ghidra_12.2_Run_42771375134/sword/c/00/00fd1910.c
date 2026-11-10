/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd1910; name: FUN_00fd1910
 */


undefined8 FUN_00fd1910(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  lVar8 = *param_4;
  FUN_012b4190(auStack_80,lVar8 + 0x68,(long)*(int *)((long)param_2 + 0xc));
  local_88 = 7;
  local_98 = 0xc0f8c07cd4198abc;
  pcStack_90 = "showNum";
  FUN_012b4250(auStack_70,auStack_80,&local_98);
  iVar4 = FUN_012b4420(auStack_70,0);
  FUN_012b4190(auStack_80,lVar8 + 0x68,(long)*(int *)((long)param_1 + 0xc));
  local_98 = 0xc0f8c07cd4198abc;
  pcStack_90 = "showNum";
  local_88 = 7;
  FUN_012b4250(auStack_70,auStack_80,&local_98);
  iVar5 = FUN_012b4420(auStack_70,0);
  lVar8 = *param_4;
  FUN_012b4190(auStack_80,lVar8 + 0x68,(long)*(int *)((long)param_3 + 0xc));
  local_98 = 0xc0f8c07cd4198abc;
  pcStack_90 = "showNum";
  local_88 = 7;
  FUN_012b4250(auStack_70,auStack_80,&local_98);
  iVar6 = FUN_012b4420(auStack_70,0);
  FUN_012b4190(auStack_80,lVar8 + 0x68,(long)*(int *)((long)param_2 + 0xc));
  local_98 = 0xc0f8c07cd4198abc;
  pcStack_90 = "showNum";
  local_88 = 7;
  FUN_012b4250(auStack_70,auStack_80,&local_98);
  iVar7 = FUN_012b4420(auStack_70,0);
  if (iVar4 < iVar5) {
    if (iVar6 < iVar7) {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uVar3 = param_3[1];
      *param_1 = *param_3;
      param_1[1] = uVar3;
      *param_3 = uVar1;
      param_3[1] = uVar2;
      return 1;
    }
    local_98 = *param_1;
    pcStack_90 = (char *)param_1[1];
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    *param_2 = local_98;
    param_2[1] = pcStack_90;
    lVar8 = *param_4;
    FUN_012b4190(auStack_80,lVar8 + 0x68,(long)*(int *)((long)param_3 + 0xc));
    local_98 = 0xc0f8c07cd4198abc;
    pcStack_90 = "showNum";
    local_88 = 7;
    FUN_012b4250(auStack_70,auStack_80,&local_98);
    iVar4 = FUN_012b4420(auStack_70,0);
    FUN_012b4190(auStack_80,lVar8 + 0x68,(long)*(int *)((long)param_2 + 0xc));
    local_98 = 0xc0f8c07cd4198abc;
    pcStack_90 = "showNum";
    local_88 = 7;
    FUN_012b4250(auStack_70,auStack_80,&local_98);
    iVar5 = FUN_012b4420(auStack_70,0);
    if (iVar5 <= iVar4) {
      return 1;
    }
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = uVar3;
    *param_3 = uVar1;
    param_3[1] = uVar2;
  }
  else {
    if (iVar7 <= iVar6) {
      return 0;
    }
    local_98 = *param_2;
    pcStack_90 = (char *)param_2[1];
    uVar1 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = uVar1;
    *param_3 = local_98;
    param_3[1] = pcStack_90;
    lVar8 = *param_4;
    FUN_012b4190(auStack_80,lVar8 + 0x68,(long)*(int *)((long)param_2 + 0xc));
    local_98 = 0xc0f8c07cd4198abc;
    pcStack_90 = "showNum";
    local_88 = 7;
    FUN_012b4250(auStack_70,auStack_80,&local_98);
    iVar4 = FUN_012b4420(auStack_70,0);
    FUN_012b4190(auStack_80,lVar8 + 0x68,(long)*(int *)((long)param_1 + 0xc));
    local_98 = 0xc0f8c07cd4198abc;
    pcStack_90 = "showNum";
    local_88 = 7;
    FUN_012b4250(auStack_70,auStack_80,&local_98);
    iVar5 = FUN_012b4420(auStack_70,0);
    if (iVar5 <= iVar4) {
      return 1;
    }
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    *param_2 = uVar1;
    param_2[1] = uVar2;
  }
  return 2;
}


