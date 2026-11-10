/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01499de0; name: FUN_01499de0
 */


bool FUN_01499de0(int *param_1,int *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  int local_ac;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  undefined1 auStack_70 [16];
  
  switch((long)param_2 - (long)param_1 >> 2) {
  case 0:
  case 1:
    break;
  case 2:
    local_88 = 0x2a939633d19cfb16;
    pcStack_80 = "ribbon_table";
    local_78 = 0xc;
    FUN_012b4250(auStack_70,*param_3 + 0x798,&local_88);
    FUN_012b4190(auStack_a8,auStack_70,(long)param_2[-1]);
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
      *param_1 = param_2[-1];
      param_2[-1] = iVar2;
      return true;
    }
    break;
  case 3:
    FUN_014993d0(param_1,param_1 + 1,param_2 + -1,param_3);
    return true;
  case 4:
    FUN_01499770(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_01499a30(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    return true;
  default:
    FUN_014993d0(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      lVar7 = 0;
      local_ac = 0;
      piVar6 = param_1 + 3;
      piVar9 = param_1 + 2;
      do {
        piVar5 = piVar6;
        local_88 = 0x2a939633d19cfb16;
        pcStack_80 = "ribbon_table";
        local_78 = 0xc;
        FUN_012b4250(auStack_70,*param_3 + 0x798,&local_88);
        FUN_012b4190(auStack_a8,auStack_70,(long)*piVar5);
        local_88 = 0xc0f8c07cd4198abc;
        pcStack_80 = "showNum";
        local_78 = 7;
        FUN_012b4250(auStack_98,auStack_a8,&local_88);
        iVar2 = FUN_012b4420(auStack_98,0);
        FUN_012b4190(auStack_a8,auStack_70,(long)*piVar9);
        local_88 = 0xc0f8c07cd4198abc;
        pcStack_80 = "showNum";
        local_78 = 7;
        FUN_012b4250(auStack_98,auStack_a8,&local_88);
        iVar3 = FUN_012b4420(auStack_98,0);
        if (iVar2 < iVar3) {
          iVar2 = *piVar5;
          lVar1 = lVar7;
          do {
            lVar8 = lVar1;
            *(undefined4 *)((long)param_1 + lVar8 + 0xc) =
                 *(undefined4 *)((long)param_1 + lVar8 + 8);
            if (lVar8 == -8) {
              piVar6 = param_1;
              goto LAB_0149a0f8;
            }
            local_88 = 0x2a939633d19cfb16;
            pcStack_80 = "ribbon_table";
            local_78 = 0xc;
            FUN_012b4250(auStack_70,*param_3 + 0x798,&local_88);
            FUN_012b4190(auStack_a8,auStack_70,(long)iVar2);
            local_88 = 0xc0f8c07cd4198abc;
            pcStack_80 = "showNum";
            local_78 = 7;
            FUN_012b4250(auStack_98,auStack_a8,&local_88);
            iVar3 = FUN_012b4420(auStack_98,0);
            FUN_012b4190(auStack_a8,auStack_70,(long)*(int *)((long)param_1 + lVar8 + 4));
            local_88 = 0xc0f8c07cd4198abc;
            pcStack_80 = "showNum";
            local_78 = 7;
            FUN_012b4250(auStack_98,auStack_a8,&local_88);
            iVar4 = FUN_012b4420(auStack_98,0);
            lVar1 = lVar8 + -4;
          } while (iVar3 < iVar4);
          piVar6 = (int *)((long)param_1 + lVar8 + 8);
LAB_0149a0f8:
          *piVar6 = iVar2;
          local_ac = local_ac + 1;
          if (local_ac == 8) {
            return piVar5 + 1 == param_2;
          }
        }
        lVar7 = lVar7 + 4;
        piVar6 = piVar5 + 1;
        piVar9 = piVar5;
      } while (piVar5 + 1 != param_2);
    }
  }
  return true;
}


