/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004399e0; name: FUN_004399e0
 */


undefined8 FUN_004399e0(long param_1,long *param_2,long param_3,int param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined4 local_a8 [18];
  
  plVar7 = *(long **)(param_1 + 0x28);
  if (plVar7 != (long *)0x0) {
    plVar8 = (long *)0x0;
    do {
      plVar5 = (long *)plVar7[2];
      lVar6 = plVar5[1];
      plVar2 = (long *)FUN_0043e8c0(lVar6);
      if (param_2 == (long *)0x0) {
LAB_00439b5c:
        if ((((param_3 != 0) && (plVar5[8] != param_3)) ||
            ((param_4 != 0 && ((int)plVar5[6] != param_4)))) || (*(short *)(lVar6 + 0x34) == 0x1820)
           ) goto LAB_00439b8c;
        local_a8[0] = 0;
        plVar4 = (long *)plVar5[1];
        if (*(short *)((long)plVar4 + 0x34) == 0x503) {
          FUN_00441d50();
          plVar4 = (long *)plVar5[1];
LAB_00439a50:
          (**(code **)(*plVar4 + 0x58))(plVar4,local_a8);
        }
        else if (*(short *)((long)plVar4 + 0x34) == 0x403) goto LAB_00439a50;
        FUN_0048fd60(*(undefined8 *)PTR_DAT_02712ad0,(int)plVar5[6]);
        plVar3 = (long *)*plVar7;
        plVar4 = (long *)(param_1 + 0x28);
        if (*(long **)(param_1 + 0x28) != plVar7) {
          plVar4 = plVar8;
        }
        *plVar4 = (long)plVar3;
        if (*(long **)(param_1 + 0x30) == plVar7) {
          *(long **)(param_1 + 0x30) = plVar8;
        }
        *plVar7 = *(long *)(param_1 + 0x38);
        *(long **)(param_1 + 0x38) = plVar7;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
        (**(code **)(*(long *)plVar5[1] + 0x18))();
        uVar1 = *(undefined4 *)PTR_DAT_02712a90;
        (**(code **)(*plVar5 + 8))(plVar5);
        FUN_00404870(uVar1,plVar5);
      }
      else {
        if (plVar2 != (long *)0x0) {
          if (plVar2 != param_2) {
            plVar3 = (long *)plVar2[0x10];
            for (plVar4 = (long *)plVar2[0xf]; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[0xf])
            {
              while( true ) {
                if (plVar4 == param_2) goto LAB_00439b5c;
                if (plVar3 == (long *)0x0) break;
                plVar4 = (long *)plVar4[0xf];
                if (plVar4 == (long *)0x0) goto joined_r0x00439b44;
              }
              plVar3 = (long *)plVar4[0x10];
            }
joined_r0x00439b44:
            do {
              if (plVar3 == (long *)0x0) goto LAB_00439b8c;
              if (plVar3 == param_2) break;
              plVar3 = (long *)plVar3[0x10];
            } while( true );
          }
          goto LAB_00439b5c;
        }
LAB_00439b8c:
        plVar3 = (long *)*plVar7;
        plVar8 = plVar7;
      }
      plVar7 = plVar3;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    } while (plVar7 != (long *)0x0);
  }
  plVar7 = *(long **)(param_1 + 0x50);
  if (plVar7 != (long *)0x0) {
    plVar8 = (long *)0x0;
    do {
      plVar5 = (long *)plVar7[2];
      lVar6 = plVar5[1];
      plVar2 = (long *)FUN_0043e8c0(lVar6);
      if (param_2 == (long *)0x0) {
LAB_00439cfc:
        if (((param_3 != 0) && (plVar5[8] != param_3)) ||
           (((param_4 != 0 && ((int)plVar5[6] != param_4)) || (*(short *)(lVar6 + 0x34) == 0x1820)))
           ) goto LAB_00439d2c;
        local_a8[0] = 0;
        plVar4 = (long *)plVar5[1];
        if (*(short *)((long)plVar4 + 0x34) == 0x503) {
          FUN_00441d50();
          plVar4 = (long *)plVar5[1];
LAB_00439bf0:
          (**(code **)(*plVar4 + 0x58))(plVar4,local_a8);
        }
        else if (*(short *)((long)plVar4 + 0x34) == 0x403) goto LAB_00439bf0;
        FUN_0048fd60(*(undefined8 *)PTR_DAT_02712ad0,(int)plVar5[6]);
        plVar3 = (long *)*plVar7;
        plVar4 = (long *)(param_1 + 0x50);
        if (*(long **)(param_1 + 0x50) != plVar7) {
          plVar4 = plVar8;
        }
        *plVar4 = (long)plVar3;
        if (*(long **)(param_1 + 0x58) == plVar7) {
          *(long **)(param_1 + 0x58) = plVar8;
        }
        *plVar7 = *(long *)(param_1 + 0x60);
        *(long **)(param_1 + 0x60) = plVar7;
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        (**(code **)(*(long *)plVar5[1] + 0x18))();
        uVar1 = *(undefined4 *)PTR_DAT_02712a90;
        (**(code **)(*plVar5 + 8))(plVar5);
        FUN_00404870(uVar1,plVar5);
      }
      else {
        if (plVar2 != (long *)0x0) {
          if (plVar2 != param_2) {
            plVar3 = (long *)plVar2[0x10];
            for (plVar4 = (long *)plVar2[0xf]; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[0xf])
            {
              while( true ) {
                if (plVar4 == param_2) goto LAB_00439cfc;
                if (plVar3 == (long *)0x0) break;
                plVar4 = (long *)plVar4[0xf];
                if (plVar4 == (long *)0x0) goto joined_r0x00439ce4;
              }
              plVar3 = (long *)plVar4[0x10];
            }
joined_r0x00439ce4:
            do {
              if (plVar3 == (long *)0x0) goto LAB_00439d2c;
              if (plVar3 == param_2) break;
              plVar3 = (long *)plVar3[0x10];
            } while( true );
          }
          goto LAB_00439cfc;
        }
LAB_00439d2c:
        plVar3 = (long *)*plVar7;
        plVar8 = plVar7;
      }
      plVar7 = plVar3;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    } while (plVar7 != (long *)0x0);
  }
  return 1;
}


