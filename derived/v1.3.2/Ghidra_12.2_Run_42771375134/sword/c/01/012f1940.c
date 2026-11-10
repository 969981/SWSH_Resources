/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f1940; name: FUN_012f1940
 */


void FUN_012f1940(long *param_1,long *param_2)

{
  bool bVar1;
  long **pplVar2;
  long **pplVar3;
  long **pplVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *local_50;
  long *local_48;
  long local_40;
  long *local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  pplVar2 = &local_50;
  pplVar3 = &local_50;
  local_30 = 0;
  local_50 = (long *)&local_50;
  local_48 = (long *)&local_50;
  local_28 = 0;
  local_40 = 0;
  local_38 = (long *)param_1[3];
  plVar5 = (long *)param_1[1];
  pplVar4 = &local_50;
  if (param_1 != plVar5) {
    if (&local_50 == (long **)param_1) {
      do {
        if (plVar5[2] == *param_2) {
          for (plVar6 = (long *)plVar5[1]; param_1 != plVar6; plVar6 = (long *)plVar6[1]) {
            if (plVar6[2] != plVar5[2]) {
              bVar1 = true;
              plVar9 = plVar6;
              goto joined_r0x012f1ab4;
            }
          }
          bVar1 = false;
          plVar9 = param_1;
joined_r0x012f1ab4:
          if (plVar5 != plVar9) {
            pplVar3 = (long **)*plVar6;
            *(long **)(*plVar5 + 8) = pplVar3[1];
            *pplVar3[1] = *plVar5;
            local_50[1] = (long)plVar5;
            *plVar5 = (long)local_50;
            local_50 = (long *)pplVar3;
            pplVar3[1] = (long *)&local_50;
          }
          plVar5 = plVar6;
          if (bVar1) goto LAB_012f1b08;
        }
        else {
          plVar9 = plVar5;
LAB_012f1b08:
          plVar5 = (long *)plVar9[1];
        }
        pplVar4 = pplVar3;
      } while (param_1 != plVar5);
    }
    else {
      do {
        if (plVar5[2] == *param_2) {
          for (plVar6 = (long *)plVar5[1]; param_1 != plVar6; plVar6 = (long *)plVar6[1]) {
            if (plVar6[2] != plVar5[2]) {
              bVar1 = true;
              plVar9 = plVar6;
              goto joined_r0x012f19c8;
            }
          }
          bVar1 = false;
          plVar9 = param_1;
joined_r0x012f19c8:
          if (plVar5 != plVar9) {
            pplVar2 = (long **)*plVar6;
            lVar7 = 1;
            if (pplVar2 != (long **)plVar5) {
              plVar8 = plVar5;
              do {
                plVar8 = (long *)plVar8[1];
                lVar7 = lVar7 + 1;
              } while ((long **)plVar8 != pplVar2);
            }
            param_1[2] = param_1[2] - lVar7;
            local_40 = local_40 + lVar7;
            *(long **)(*plVar5 + 8) = pplVar2[1];
            *pplVar2[1] = *plVar5;
            local_50[1] = (long)plVar5;
            *plVar5 = (long)local_50;
            local_50 = (long *)pplVar2;
            pplVar2[1] = (long *)&local_50;
          }
          plVar5 = plVar6;
          if (bVar1) goto LAB_012f1a58;
        }
        else {
          plVar9 = plVar5;
LAB_012f1a58:
          plVar5 = (long *)plVar9[1];
        }
        pplVar4 = pplVar2;
      } while (param_1 != plVar5);
    }
  }
  if (local_40 != 0) {
    *(long **)(*local_48 + 8) = pplVar4[1];
    *pplVar4[1] = *local_48;
    local_40 = 0;
    plVar5 = local_48;
    if ((long **)local_48 != &local_50) {
      do {
        plVar9 = (long *)plVar5[1];
        (**(code **)(*local_38 + 0x18))(local_38,plVar5,0x18,8);
        plVar5 = plVar9;
      } while ((long **)plVar9 != &local_50);
    }
  }
  return;
}


