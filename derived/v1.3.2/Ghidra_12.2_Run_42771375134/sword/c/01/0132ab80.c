/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0132ab80; name: FUN_0132ab80
 */


int FUN_0132ab80(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  iVar5 = 0;
  iVar4 = 0;
  plVar6 = param_1 + 0x15;
  while( true ) {
    uVar2 = 2;
    if (*param_1 == 0) {
      uVar2 = 1;
    }
    uVar1 = (uint)(*param_1 != 0);
    if (param_1[2] != 0) {
      uVar1 = uVar2;
    }
    if (param_1[4] != 0) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[6] != 0) {
      uVar1 = uVar1 + 1;
    }
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    if ((int)((int)param_1[0x54] + uVar1) <= iVar5) break;
    if (*(int *)((long)plVar6 + -0x24) != 0) {
      FUN_01329d10(auStack_80,*param_2);
      local_98 = 0x2854d33b80ec1509;
      pcStack_90 = "rare_grade";
      local_88 = 10;
      FUN_012b4250(auStack_70,auStack_80,&local_98);
      iVar3 = FUN_012b4420(auStack_70,0);
      iVar4 = iVar3 + iVar4;
      if ((int)plVar6[-4] != 0) {
        FUN_01329d10(auStack_80,*param_2);
        local_98 = 0x2854d33b80ec1509;
        pcStack_90 = "rare_grade";
        local_88 = 10;
        FUN_012b4250(auStack_70,auStack_80,&local_98);
        iVar3 = FUN_012b4420(auStack_70,0);
        iVar4 = iVar3 + iVar4;
        if (*(int *)((long)plVar6 + -0x1c) != 0) {
          FUN_01329d10(auStack_80,*param_2);
          local_98 = 0x2854d33b80ec1509;
          pcStack_90 = "rare_grade";
          local_88 = 10;
          FUN_012b4250(auStack_70,auStack_80,&local_98);
          iVar3 = FUN_012b4420(auStack_70,0);
          iVar4 = iVar3 + iVar4;
          if ((int)plVar6[-3] != 0) {
            FUN_01329d10(auStack_80,*param_2);
            local_98 = 0x2854d33b80ec1509;
            pcStack_90 = "rare_grade";
            local_88 = 10;
            FUN_012b4250(auStack_70,auStack_80,&local_98);
            iVar3 = FUN_012b4420(auStack_70,0);
            iVar4 = iVar3 + iVar4;
            if (*(int *)((long)plVar6 + -0x14) != 0) {
              FUN_01329d10(auStack_80,*param_2);
              local_98 = 0x2854d33b80ec1509;
              pcStack_90 = "rare_grade";
              local_88 = 10;
              FUN_012b4250(auStack_70,auStack_80,&local_98);
              iVar3 = FUN_012b4420(auStack_70,0);
              iVar4 = iVar3 + iVar4;
              if ((int)plVar6[-2] != 0) {
                FUN_01329d10(auStack_80,*param_2);
                local_98 = 0x2854d33b80ec1509;
                pcStack_90 = "rare_grade";
                local_88 = 10;
                FUN_012b4250(auStack_70,auStack_80,&local_98);
                iVar3 = FUN_012b4420(auStack_70,0);
                iVar4 = iVar3 + iVar4;
                if (*(int *)((long)plVar6 + -0xc) != 0) {
                  FUN_01329d10(auStack_80,*param_2);
                  local_98 = 0x2854d33b80ec1509;
                  pcStack_90 = "rare_grade";
                  local_88 = 10;
                  FUN_012b4250(auStack_70,auStack_80,&local_98);
                  iVar3 = FUN_012b4420(auStack_70,0);
                  iVar4 = iVar3 + iVar4;
                  if ((int)plVar6[-1] != 0) {
                    FUN_01329d10(auStack_80,*param_2);
                    local_98 = 0x2854d33b80ec1509;
                    pcStack_90 = "rare_grade";
                    local_88 = 10;
                    FUN_012b4250(auStack_70,auStack_80,&local_98);
                    iVar3 = FUN_012b4420(auStack_70,0);
                    iVar4 = iVar3 + iVar4;
                    if (*(int *)((long)plVar6 + -4) != 0) {
                      FUN_01329d10(auStack_80,*param_2);
                      local_98 = 0x2854d33b80ec1509;
                      pcStack_90 = "rare_grade";
                      local_88 = 10;
                      FUN_012b4250(auStack_70,auStack_80,&local_98);
                      iVar3 = FUN_012b4420(auStack_70,0);
                      iVar4 = iVar3 + iVar4;
                      if ((int)*plVar6 != 0) {
                        FUN_01329d10(auStack_80,*param_2);
                        local_98 = 0x2854d33b80ec1509;
                        pcStack_90 = "rare_grade";
                        local_88 = 10;
                        FUN_012b4250(auStack_70,auStack_80,&local_98);
                        iVar3 = FUN_012b4420(auStack_70,0);
                        iVar4 = iVar3 + iVar4;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar5 = iVar5 + 1;
    plVar6 = plVar6 + 6;
  }
  return iVar4;
}


