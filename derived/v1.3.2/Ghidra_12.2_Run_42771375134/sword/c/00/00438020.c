/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00438020; name: FUN_00438020
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00438184) */

void FUN_00438020(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined4 local_88 [18];
  
  puVar4 = PTR_DAT_02712ee8;
  puVar3 = PTR_DAT_02712ad0;
  puVar2 = PTR_DAT_02712a90;
  puVar7 = *(undefined8 **)(param_1 + 0x28);
  do {
    if ((puVar7 == (undefined8 *)0x0) || (*(uint *)(param_1 + 0x78) < *(uint *)(puVar7 + 1))) {
      return;
    }
    plVar9 = (long *)puVar7[2];
    *(undefined8 *)(param_1 + 0x28) = *puVar7;
    if (*(undefined8 **)(param_1 + 0x30) == puVar7) {
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    *puVar7 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 **)(param_1 + 0x38) = puVar7;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
    local_88[0] = 0;
    plVar5 = (long *)plVar9[1];
    if (*(short *)((long)plVar5 + 0x34) == 0x503) {
      uVar6 = FUN_00441d50();
      if ((uVar6 & 1) != 0) {
        plVar5 = (long *)plVar9[1];
        goto LAB_004380d4;
      }
    }
    else if (*(short *)((long)plVar5 + 0x34) == 0x403) {
LAB_004380d4:
      (**(code **)(*plVar5 + 0x58))(plVar5,local_88);
    }
    lVar8 = plVar9[8];
    if (((lVar8 != 0) && (*(int *)(lVar8 + 0x40) != 0)) && (**(long **)(lVar8 + 0x38) != 0)) {
      FUN_004963c0();
    }
    (**(code **)(*(long *)plVar9[1] + 0x40))((long *)plVar9[1],plVar9);
    if ((int)plVar9[6] != 0) {
      FUN_0048fd60(*(undefined8 *)puVar3);
    }
    (**(code **)(*(long *)plVar9[1] + 0x18))();
    uVar1 = *(undefined4 *)puVar2;
    (**(code **)(*plVar9 + 8))(plVar9);
    FUN_00404870(uVar1,plVar9);
    *(int *)puVar4 = *(int *)puVar4 + 1;
    puVar7 = *(undefined8 **)(param_1 + 0x28);
  } while( true );
}


