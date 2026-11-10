/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043a3f0; name: FUN_0043a3f0
 */


undefined8 FUN_0043a3f0(long param_1,long *param_2,long param_3,int param_4)

{
  undefined4 uVar1;
  short sVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined4 local_a8 [18];
  
  plVar10 = *(long **)(param_1 + 0x28);
  if (plVar10 != (long *)0x0) {
    plVar9 = (long *)0x0;
    do {
      plVar7 = (long *)plVar10[2];
      lVar8 = plVar7[1];
      plVar3 = (long *)FUN_0043e8c0(lVar8);
      if (param_2 == (long *)0x0) {
LAB_0043a554:
        if ((((param_3 != 0) && (plVar7[8] != param_3)) ||
            ((param_4 != 0 && ((int)plVar7[6] != param_4)))) ||
           ((sVar2 = *(short *)(lVar8 + 0x34), sVar2 != 0x403 &&
            ((sVar2 != 0x503 ||
             (uVar4 = FUN_00441e10(plVar7[1],param_2,plVar7[8],plVar7), (uVar4 & 1) == 0))))))
        goto LAB_0043a5bc;
        local_a8[0] = 0;
        plVar6 = (long *)plVar7[1];
        if (*(short *)((long)plVar6 + 0x34) == 0x503) {
          FUN_00441d50();
          plVar6 = (long *)plVar7[1];
LAB_0043a440:
          (**(code **)(*plVar6 + 0x58))(plVar6,local_a8);
        }
        else if (*(short *)((long)plVar6 + 0x34) == 0x403) goto LAB_0043a440;
        FUN_0048fd60(*(undefined8 *)PTR_DAT_02712ad0,(int)plVar7[6]);
        plVar5 = (long *)*plVar10;
        plVar6 = (long *)(param_1 + 0x28);
        if (*(long **)(param_1 + 0x28) != plVar10) {
          plVar6 = plVar9;
        }
        *plVar6 = (long)plVar5;
        if (*(long **)(param_1 + 0x30) == plVar10) {
          *(long **)(param_1 + 0x30) = plVar9;
        }
        *plVar10 = *(long *)(param_1 + 0x38);
        *(long **)(param_1 + 0x38) = plVar10;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
        (**(code **)(*(long *)plVar7[1] + 0x18))();
        uVar1 = *(undefined4 *)PTR_DAT_02712a90;
        (**(code **)(*plVar7 + 8))(plVar7);
        FUN_00404870(uVar1,plVar7);
      }
      else {
        if (plVar3 != (long *)0x0) {
          if (plVar3 != param_2) {
            plVar5 = (long *)plVar3[0x10];
            for (plVar6 = (long *)plVar3[0xf]; plVar6 != (long *)0x0; plVar6 = (long *)plVar6[0xf])
            {
              while( true ) {
                if (plVar6 == param_2) goto LAB_0043a554;
                if (plVar5 == (long *)0x0) break;
                plVar6 = (long *)plVar6[0xf];
                if (plVar6 == (long *)0x0) goto joined_r0x0043a53c;
              }
              plVar5 = (long *)plVar6[0x10];
            }
joined_r0x0043a53c:
            do {
              if (plVar5 == (long *)0x0) goto LAB_0043a5bc;
              if (plVar5 == param_2) break;
              plVar5 = (long *)plVar5[0x10];
            } while( true );
          }
          goto LAB_0043a554;
        }
LAB_0043a5bc:
        plVar5 = (long *)*plVar10;
        plVar9 = plVar10;
      }
      plVar10 = plVar5;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    } while (plVar10 != (long *)0x0);
  }
  plVar10 = *(long **)(param_1 + 0x50);
  if (plVar10 != (long *)0x0) {
    plVar9 = (long *)0x0;
    do {
      plVar7 = (long *)plVar10[2];
      lVar8 = plVar7[1];
      plVar3 = (long *)FUN_0043e8c0(lVar8);
      if (param_2 == (long *)0x0) {
LAB_0043a710:
        if ((((param_3 != 0) && (plVar7[8] != param_3)) ||
            ((param_4 != 0 && ((int)plVar7[6] != param_4)))) ||
           ((*(short *)(lVar8 + 0x34) != 0x503 ||
            (uVar4 = FUN_00441e10(plVar7[1],param_2,plVar7[8],plVar7), (uVar4 & 1) == 0))))
        goto LAB_0043a770;
        local_a8[0] = 0;
        plVar6 = (long *)plVar7[1];
        if (*(short *)((long)plVar6 + 0x34) == 0x503) {
          FUN_00441d50();
          plVar6 = (long *)plVar7[1];
LAB_0043a5fc:
          (**(code **)(*plVar6 + 0x58))(plVar6,local_a8);
        }
        else if (*(short *)((long)plVar6 + 0x34) == 0x403) goto LAB_0043a5fc;
        FUN_0048fd60(*(undefined8 *)PTR_DAT_02712ad0,(int)plVar7[6]);
        plVar5 = (long *)*plVar10;
        plVar6 = (long *)(param_1 + 0x50);
        if (*(long **)(param_1 + 0x50) != plVar10) {
          plVar6 = plVar9;
        }
        *plVar6 = (long)plVar5;
        if (*(long **)(param_1 + 0x58) == plVar10) {
          *(long **)(param_1 + 0x58) = plVar9;
        }
        *plVar10 = *(long *)(param_1 + 0x60);
        *(long **)(param_1 + 0x60) = plVar10;
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        (**(code **)(*(long *)plVar7[1] + 0x18))();
        uVar1 = *(undefined4 *)PTR_DAT_02712a90;
        (**(code **)(*plVar7 + 8))(plVar7);
        FUN_00404870(uVar1,plVar7);
      }
      else {
        if (plVar3 != (long *)0x0) {
          if (plVar3 != param_2) {
            plVar5 = (long *)plVar3[0x10];
            for (plVar6 = (long *)plVar3[0xf]; plVar6 != (long *)0x0; plVar6 = (long *)plVar6[0xf])
            {
              while( true ) {
                if (plVar6 == param_2) goto LAB_0043a710;
                if (plVar5 == (long *)0x0) break;
                plVar6 = (long *)plVar6[0xf];
                if (plVar6 == (long *)0x0) goto joined_r0x0043a6f8;
              }
              plVar5 = (long *)plVar6[0x10];
            }
joined_r0x0043a6f8:
            do {
              if (plVar5 == (long *)0x0) goto LAB_0043a770;
              if (plVar5 == param_2) break;
              plVar5 = (long *)plVar5[0x10];
            } while( true );
          }
          goto LAB_0043a710;
        }
LAB_0043a770:
        plVar5 = (long *)*plVar10;
        plVar9 = plVar10;
      }
      plVar10 = plVar5;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    } while (plVar10 != (long *)0x0);
  }
  return 1;
}


