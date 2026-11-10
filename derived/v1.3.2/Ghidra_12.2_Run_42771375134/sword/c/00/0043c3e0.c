/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043c3e0; name: FUN_0043c3e0
 */


void FUN_0043c3e0(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined4 local_a8 [18];
  
  puVar2 = PTR_DAT_02712a90;
  plVar7 = *(long **)(param_1 + 0x50);
  if (plVar7 != (long *)0x0) {
    if (param_2 == (long *)0x0) {
      do {
        plVar8 = (long *)FUN_0043e8c0(*(undefined8 *)(plVar7[2] + 8));
        plVar7 = (long *)*plVar7;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x18))();
        }
      } while (plVar7 != (long *)0x0);
    }
    else {
      plVar8 = (long *)0x0;
      do {
        plVar6 = (long *)plVar7[2];
        plVar3 = (long *)FUN_0043e8c0(plVar6[1]);
        if (plVar3 == (long *)0x0) {
LAB_0043c574:
          plVar5 = (long *)*plVar7;
          plVar8 = plVar7;
        }
        else {
          if (plVar3 != param_2) {
            plVar4 = (long *)plVar3[0x10];
            for (plVar5 = (long *)plVar3[0xf]; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[0xf])
            {
              while( true ) {
                if (plVar5 == param_2) goto LAB_0043c454;
                if (plVar4 == (long *)0x0) break;
                plVar5 = (long *)plVar5[0xf];
                if (plVar5 == (long *)0x0) goto joined_r0x0043c560;
              }
              plVar4 = (long *)plVar5[0x10];
            }
joined_r0x0043c560:
            do {
              if (plVar4 == (long *)0x0) goto LAB_0043c574;
              if (plVar4 == param_2) break;
              plVar4 = (long *)plVar4[0x10];
            } while( true );
          }
LAB_0043c454:
          local_a8[0] = 0;
          plVar5 = (long *)plVar6[1];
          if (*(short *)((long)plVar5 + 0x34) == 0x403) {
LAB_0043c478:
            (**(code **)(*plVar5 + 0x58))(plVar5,local_a8);
          }
          else if (*(short *)((long)plVar5 + 0x34) == 0x503) {
            FUN_00441d50();
            plVar5 = (long *)plVar6[1];
            goto LAB_0043c478;
          }
          FUN_0048fd60(*(undefined8 *)PTR_DAT_02712ad0,(int)plVar6[6]);
          plVar5 = (long *)*plVar7;
          plVar4 = (long *)(param_1 + 0x50);
          if (*(long **)(param_1 + 0x50) != plVar7) {
            plVar4 = plVar8;
          }
          *plVar4 = (long)plVar5;
          if (*(long **)(param_1 + 0x58) == plVar7) {
            *(long **)(param_1 + 0x58) = plVar8;
          }
          *plVar7 = *(long *)(param_1 + 0x60);
          *(long **)(param_1 + 0x60) = plVar7;
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
          (**(code **)(*(long *)plVar6[1] + 0x18))();
          uVar1 = *(undefined4 *)puVar2;
          (**(code **)(*plVar6 + 8))(plVar6);
          FUN_00404870(uVar1,plVar6);
        }
        plVar7 = plVar5;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
      } while (plVar7 != (long *)0x0);
    }
  }
  return;
}


