/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd21d0; name: FUN_00fd21d0
 */


bool FUN_00fd21d0(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  int local_b4;
  long local_b0;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  switch((long)param_2 - (long)param_1 >> 4) {
  case 0:
  case 1:
    break;
  case 2:
    lVar8 = *param_3;
    FUN_012b4190(auStack_80,lVar8 + 0x68,(long)*(int *)((long)param_2 + -4));
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
    if (iVar4 < iVar5) {
      uVar9 = *param_1;
      uVar1 = param_1[1];
      uVar2 = param_2[-1];
      *param_1 = param_2[-2];
      param_1[1] = uVar2;
      param_2[-2] = uVar9;
      param_2[-1] = uVar1;
      return true;
    }
    break;
  case 3:
    FUN_00fd1910(param_1,param_1 + 2,param_2 + -2,param_3);
    return true;
  case 4:
    FUN_00fd1c30(param_1,param_1 + 2,param_1 + 4,param_2 + -2,param_3);
    break;
  case 5:
    FUN_00fd1ea0(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2,param_3);
    return true;
  default:
    FUN_00fd1910(param_1,param_1 + 2,param_1 + 4,param_3);
    if (param_1 + 6 != param_2) {
      local_b0 = 0;
      local_b4 = 0;
      puVar10 = param_1 + 6;
      puVar11 = param_1 + 4;
      do {
        puVar7 = puVar10;
        lVar8 = *param_3;
        FUN_012b4190(auStack_80,lVar8 + 0x68,(long)*(int *)((long)puVar7 + 0xc));
        local_98 = 0xc0f8c07cd4198abc;
        pcStack_90 = "showNum";
        local_88 = 7;
        FUN_012b4250(auStack_70,auStack_80,&local_98);
        iVar4 = FUN_012b4420(auStack_70,0);
        FUN_012b4190(auStack_80,lVar8 + 0x68,(long)*(int *)((long)puVar11 + 0xc));
        local_98 = 0xc0f8c07cd4198abc;
        pcStack_90 = "showNum";
        local_88 = 7;
        FUN_012b4250(auStack_70,auStack_80,&local_98);
        iVar5 = FUN_012b4420(auStack_70,0);
        if (iVar4 < iVar5) {
          uVar9 = *puVar7;
          uVar3 = *(undefined4 *)(puVar7 + 1);
          iVar4 = *(int *)((long)puVar7 + 0xc);
          lVar8 = local_b0;
          do {
            lVar12 = lVar8;
            *(undefined8 *)((long)param_1 + lVar12 + 0x30) =
                 *(undefined8 *)((long)param_1 + lVar12 + 0x20);
            *(undefined8 *)((long)param_1 + lVar12 + 0x38) =
                 *(undefined8 *)((long)param_1 + lVar12 + 0x28);
            if (lVar12 == -0x20) {
              puVar10 = param_1;
              goto LAB_00fd2470;
            }
            lVar8 = *param_3;
            FUN_012b4190(auStack_80,lVar8 + 0x68,(long)iVar4);
            local_98 = 0xc0f8c07cd4198abc;
            pcStack_90 = "showNum";
            local_88 = 7;
            FUN_012b4250(auStack_70,auStack_80,&local_98);
            iVar5 = FUN_012b4420(auStack_70,0);
            FUN_012b4190(auStack_80,lVar8 + 0x68,(long)*(int *)((long)param_1 + lVar12 + 0x1c));
            local_98 = 0xc0f8c07cd4198abc;
            pcStack_90 = "showNum";
            local_88 = 7;
            FUN_012b4250(auStack_70,auStack_80,&local_98);
            iVar6 = FUN_012b4420(auStack_70,0);
            lVar8 = lVar12 + -0x10;
          } while (iVar5 < iVar6);
          puVar10 = (undefined8 *)((long)param_1 + lVar12 + 0x20);
LAB_00fd2470:
          *puVar10 = uVar9;
          *(undefined4 *)(puVar10 + 1) = uVar3;
          *(int *)((long)puVar10 + 0xc) = iVar4;
          local_b4 = local_b4 + 1;
          if (local_b4 == 8) {
            return puVar7 + 2 == param_2;
          }
        }
        local_b0 = local_b0 + 0x10;
        puVar10 = puVar7 + 2;
        puVar11 = puVar7;
      } while (puVar7 + 2 != param_2);
    }
  }
  return true;
}


