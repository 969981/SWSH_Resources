/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043c220; name: FUN_0043c220
 */


void FUN_0043c220(long param_1,long *param_2)

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
  
  plVar8 = *(long **)(param_1 + 0x28);
  if (plVar8 != (long *)0x0) {
    plVar7 = (long *)0x0;
    do {
      plVar5 = (long *)plVar8[2];
      lVar6 = plVar5[1];
      plVar2 = (long *)FUN_0043e8c0(lVar6);
      if ((param_2 == (long *)0x0) || (plVar2 == (long *)0x0)) {
LAB_0043c39c:
        plVar4 = (long *)*plVar8;
        plVar7 = plVar8;
      }
      else {
        if (plVar2 != param_2) {
          plVar3 = (long *)plVar2[0x10];
          for (plVar4 = (long *)plVar2[0xf]; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[0xf]) {
            while( true ) {
              if (plVar4 == param_2) goto LAB_0043c390;
              if (plVar3 == (long *)0x0) break;
              plVar4 = (long *)plVar4[0xf];
              if (plVar4 == (long *)0x0) goto joined_r0x0043c378;
            }
            plVar3 = (long *)plVar4[0x10];
          }
joined_r0x0043c378:
          do {
            if (plVar3 == (long *)0x0) goto LAB_0043c39c;
            if (plVar3 == param_2) break;
            plVar3 = (long *)plVar3[0x10];
          } while( true );
        }
LAB_0043c390:
        if (*(short *)(lVar6 + 0x34) == 0x1820) goto LAB_0043c39c;
        local_a8[0] = 0;
        plVar4 = (long *)plVar5[1];
        if (*(short *)((long)plVar4 + 0x34) == 0x503) {
          FUN_00441d50();
          plVar4 = (long *)plVar5[1];
LAB_0043c288:
          (**(code **)(*plVar4 + 0x58))(plVar4,local_a8);
        }
        else if (*(short *)((long)plVar4 + 0x34) == 0x403) goto LAB_0043c288;
        FUN_0048fd60(*(undefined8 *)PTR_DAT_02712ad0,(int)plVar5[6]);
        plVar4 = (long *)*plVar8;
        plVar3 = (long *)(param_1 + 0x28);
        if (*(long **)(param_1 + 0x28) != plVar8) {
          plVar3 = plVar7;
        }
        *plVar3 = (long)plVar4;
        if (*(long **)(param_1 + 0x30) == plVar8) {
          *(long **)(param_1 + 0x30) = plVar7;
        }
        *plVar8 = *(long *)(param_1 + 0x38);
        *(long **)(param_1 + 0x38) = plVar8;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
        (**(code **)(*(long *)plVar5[1] + 0x18))();
        uVar1 = *(undefined4 *)PTR_DAT_02712a90;
        (**(code **)(*plVar5 + 8))(plVar5);
        FUN_00404870(uVar1,plVar5);
      }
      plVar8 = plVar4;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    } while (plVar8 != (long *)0x0);
  }
  return;
}


