/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043b5c0; name: FUN_0043b5c0
 */


undefined8 FUN_0043b5c0(long *param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  short sVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined4 local_a8 [18];
  
  plVar4 = param_1 + 5;
  plVar6 = (long *)*plVar4;
  plVar3 = param_1;
  if (plVar6 != (long *)0x0) {
    if (param_2 == 0) {
      plVar7 = (long *)0x0;
LAB_0043b740:
      do {
        plVar5 = (long *)plVar6[2];
        if (((param_4 == 0) || ((int)plVar5[6] == param_4)) &&
           (plVar3 = (long *)FUN_0043b440(plVar3,plVar5[1],param_3), ((ulong)plVar3 & 1) == 0)) {
          plVar3 = (long *)plVar5[1];
          sVar2 = *(short *)((long)plVar3 + 0x34);
          if (sVar2 != 0x1820) {
            local_a8[0] = 0;
            if (sVar2 == 0x403) {
LAB_0043b7a4:
              (**(code **)(*plVar3 + 0x58))(plVar3,local_a8);
            }
            else if (sVar2 == 0x503) {
              FUN_00441d50();
              plVar3 = (long *)plVar5[1];
              goto LAB_0043b7a4;
            }
            FUN_0048fd60(*(undefined8 *)PTR_DAT_02712ad0,(int)plVar5[6]);
            plVar8 = (long *)*plVar6;
            plVar3 = plVar4;
            if ((long *)param_1[5] != plVar6) {
              plVar3 = plVar7;
            }
            *plVar3 = (long)plVar8;
            if ((long *)param_1[6] == plVar6) {
              param_1[6] = (long)plVar7;
            }
            *plVar6 = param_1[7];
            param_1[7] = (long)plVar6;
            *(int *)((long)param_1 + 0x4c) = *(int *)((long)param_1 + 0x4c) + -1;
            (**(code **)(*(long *)plVar5[1] + 0x18))();
            uVar1 = *(undefined4 *)PTR_DAT_02712a90;
            (**(code **)(*plVar5 + 8))(plVar5);
            plVar3 = (long *)FUN_00404870(uVar1,plVar5);
            plVar6 = plVar8;
            if (plVar8 == (long *)0x0) break;
            goto LAB_0043b740;
          }
        }
        plVar5 = (long *)*plVar6;
        plVar7 = plVar6;
        plVar6 = plVar5;
      } while (plVar5 != (long *)0x0);
    }
    else {
      plVar7 = (long *)0x0;
      do {
        while (((plVar5 = (long *)plVar6[2], plVar5[8] != param_2 ||
                ((param_4 != 0 && ((int)plVar5[6] != param_4)))) ||
               (plVar3 = (long *)FUN_0043b440(plVar3,plVar5[1],param_3), ((ulong)plVar3 & 1) != 0)))
        {
LAB_0043b654:
          plVar5 = (long *)*plVar6;
          plVar7 = plVar6;
          plVar6 = plVar5;
          if (plVar5 == (long *)0x0) goto LAB_0043b84c;
        }
        plVar3 = (long *)plVar5[1];
        sVar2 = *(short *)((long)plVar3 + 0x34);
        if (sVar2 == 0x1820) goto LAB_0043b654;
        local_a8[0] = 0;
        if (sVar2 == 0x503) {
          FUN_00441d50();
          plVar3 = (long *)plVar5[1];
LAB_0043b688:
          (**(code **)(*plVar3 + 0x58))(plVar3,local_a8);
        }
        else if (sVar2 == 0x403) goto LAB_0043b688;
        FUN_0048fd60(*(undefined8 *)PTR_DAT_02712ad0,(int)plVar5[6]);
        plVar8 = (long *)*plVar6;
        plVar3 = plVar4;
        if ((long *)param_1[5] != plVar6) {
          plVar3 = plVar7;
        }
        *plVar3 = (long)plVar8;
        if ((long *)param_1[6] == plVar6) {
          param_1[6] = (long)plVar7;
        }
        *plVar6 = param_1[7];
        param_1[7] = (long)plVar6;
        *(int *)((long)param_1 + 0x4c) = *(int *)((long)param_1 + 0x4c) + -1;
        (**(code **)(*(long *)plVar5[1] + 0x18))();
        uVar1 = *(undefined4 *)PTR_DAT_02712a90;
        (**(code **)(*plVar5 + 8))(plVar5);
        plVar3 = (long *)FUN_00404870(uVar1,plVar5);
        plVar6 = plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
LAB_0043b84c:
  plVar4 = param_1 + 10;
  plVar6 = (long *)*plVar4;
  if (plVar6 != (long *)0x0) {
    if (param_2 != 0) {
      plVar7 = (long *)0x0;
      do {
        while (((plVar5 = (long *)plVar6[2], plVar5[8] != param_2 ||
                ((param_4 != 0 && ((int)plVar5[6] != param_4)))) ||
               (plVar3 = (long *)FUN_0043b440(plVar3,plVar5[1],param_3), ((ulong)plVar3 & 1) != 0)))
        {
LAB_0043b8a8:
          plVar5 = (long *)*plVar6;
          plVar7 = plVar6;
          plVar6 = plVar5;
          if (plVar5 == (long *)0x0) {
            return 1;
          }
        }
        plVar3 = (long *)plVar5[1];
        sVar2 = *(short *)((long)plVar3 + 0x34);
        if (sVar2 == 0x1820) goto LAB_0043b8a8;
        local_a8[0] = 0;
        if (sVar2 == 0x503) {
          FUN_00441d50();
          plVar3 = (long *)plVar5[1];
LAB_0043b8dc:
          (**(code **)(*plVar3 + 0x58))(plVar3,local_a8);
        }
        else if (sVar2 == 0x403) goto LAB_0043b8dc;
        FUN_0048fd60(*(undefined8 *)PTR_DAT_02712ad0,(int)plVar5[6]);
        plVar8 = (long *)*plVar6;
        plVar3 = plVar4;
        if ((long *)param_1[10] != plVar6) {
          plVar3 = plVar7;
        }
        *plVar3 = (long)plVar8;
        if ((long *)param_1[0xb] == plVar6) {
          param_1[0xb] = (long)plVar7;
        }
        *plVar6 = param_1[0xc];
        param_1[0xc] = (long)plVar6;
        *(int *)((long)param_1 + 0x74) = *(int *)((long)param_1 + 0x74) + -1;
        (**(code **)(*(long *)plVar5[1] + 0x18))();
        uVar1 = *(undefined4 *)PTR_DAT_02712a90;
        (**(code **)(*plVar5 + 8))(plVar5);
        plVar3 = (long *)FUN_00404870(uVar1,plVar5);
        plVar6 = plVar8;
        if (plVar8 == (long *)0x0) {
          return 1;
        }
      } while( true );
    }
    plVar7 = (long *)0x0;
    do {
      while (((plVar8 = plVar6, plVar5 = (long *)plVar8[2], param_4 == 0 ||
              ((int)plVar5[6] == param_4)) &&
             (plVar3 = (long *)FUN_0043b440(plVar3,plVar5[1],param_3), ((ulong)plVar3 & 1) == 0))) {
        plVar3 = (long *)plVar5[1];
        sVar2 = *(short *)((long)plVar3 + 0x34);
        if (sVar2 == 0x1820) break;
        local_a8[0] = 0;
        if (sVar2 == 0x403) {
LAB_0043b9f8:
          (**(code **)(*plVar3 + 0x58))(plVar3,local_a8);
        }
        else if (sVar2 == 0x503) {
          FUN_00441d50();
          plVar3 = (long *)plVar5[1];
          goto LAB_0043b9f8;
        }
        FUN_0048fd60(*(undefined8 *)PTR_DAT_02712ad0,(int)plVar5[6]);
        plVar6 = (long *)*plVar8;
        plVar3 = plVar4;
        if ((long *)param_1[10] != plVar8) {
          plVar3 = plVar7;
        }
        *plVar3 = (long)plVar6;
        if ((long *)param_1[0xb] == plVar8) {
          param_1[0xb] = (long)plVar7;
        }
        *plVar8 = param_1[0xc];
        param_1[0xc] = (long)plVar8;
        *(int *)((long)param_1 + 0x74) = *(int *)((long)param_1 + 0x74) + -1;
        (**(code **)(*(long *)plVar5[1] + 0x18))();
        uVar1 = *(undefined4 *)PTR_DAT_02712a90;
        (**(code **)(*plVar5 + 8))(plVar5);
        plVar3 = (long *)FUN_00404870(uVar1,plVar5);
        if (plVar6 == (long *)0x0) {
          return 1;
        }
      }
      plVar6 = (long *)*plVar8;
      plVar7 = plVar8;
    } while ((long *)*plVar8 != (long *)0x0);
  }
  return 1;
}


