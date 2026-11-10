/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00435fb0; name: FUN_00435fb0
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00435fb0(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined4 local_88 [18];
  
  puVar4 = PTR_DAT_02712ad0;
  puVar3 = PTR_DAT_02712a90;
  plVar2 = (long *)*(long *)(param_1 + 0x28);
  do {
    if (plVar2 == (long *)0x0) {
      return;
    }
    plVar6 = (long *)plVar2[2];
    local_88[0] = 0;
    plVar5 = (long *)plVar6[1];
    if (*(short *)((long)plVar5 + 0x34) == 0x503) {
      FUN_00441d50();
      plVar5 = (long *)plVar6[1];
LAB_00436010:
      (**(code **)(*plVar5 + 0x58))(plVar5,local_88);
    }
    else if (*(short *)((long)plVar5 + 0x34) == 0x403) goto LAB_00436010;
    FUN_0048fd60(*(undefined8 *)puVar4,(int)plVar6[6]);
    if ((long *)*(long *)(param_1 + 0x28) != plVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    lVar7 = *plVar2;
    *(long *)(param_1 + 0x28) = lVar7;
    if ((long *)*(long *)(param_1 + 0x30) == plVar2) {
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    *plVar2 = *(undefined8 *)(param_1 + 0x38);
    *(long **)(param_1 + 0x38) = plVar2;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
    (**(code **)(*(long *)plVar6[1] + 0x18))();
    uVar1 = *(undefined4 *)puVar3;
    (**(code **)(*plVar6 + 8))(plVar6);
    FUN_00404870(uVar1,plVar6);
    plVar2 = (long *)lVar7;
  } while( true );
}


