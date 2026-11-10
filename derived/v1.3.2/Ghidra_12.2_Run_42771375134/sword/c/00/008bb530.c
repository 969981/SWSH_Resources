/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008bb530; name: FUN_008bb530
 */


undefined8 FUN_008bb530(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_50 [24];
  long local_38;
  
  switch(*(undefined4 *)(param_1 + 0x98)) {
  case 0:
    iVar1 = *(int *)(*(long *)(param_1 + 0x80) + 0x630);
    if (iVar1 == 1) {
      FUN_008c12f0();
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
      plVar7 = (long *)(**(code **)*puVar5)(puVar5);
      lVar6 = FUN_00897d00();
      for (; plVar7 != (long *)lVar6; plVar7 = (long *)*plVar7) {
      }
      if (*(char *)(puVar5[0xb] + 0x2b) == '\0') {
        *(undefined4 *)(param_1 + 0x94) = 0;
        return 1;
      }
      FUN_01038270(*(undefined8 *)(param_1 + 0x88),1);
      *(undefined4 *)(param_1 + 0x94) = 1;
      return 1;
    }
    if (iVar1 != 0) {
      return 0;
    }
    FUN_008c12f0();
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 != (undefined8 *)0x0)) {
      plVar7 = (long *)(**(code **)*puVar5)(puVar5);
      lVar6 = FUN_00897d00();
      for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        if (plVar7 == (long *)lVar6) {
          puVar5 = puVar5 + -10;
          goto LAB_008bb5c0;
        }
      }
    }
    puVar5 = (undefined8 *)0x0;
LAB_008bb5c0:
    FUN_008a6f90(puVar5,*(undefined4 *)(*(long *)(param_1 + 0x80) + 0x640));
    uVar2 = 1;
    goto LAB_008bb60c;
  case 1:
    uVar3 = FUN_008bb7c0(param_1);
    if ((uVar3 & 1) == 0) {
      FUN_008bba30(param_1);
    }
    if (*(int *)(param_1 + 0x94) != 2) {
      FUN_006cf0a0(auStack_50,&DAT_02617cf8);
      FUN_016d3620(auStack_50);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
      *(undefined8 *)(param_1 + 0x94) = 0x200000003;
      return 0;
    }
    if (*(char *)(param_1 + 0x9c) == '\0') {
      return 1;
    }
    FUN_01038270(*(undefined8 *)(param_1 + 0x88),1);
    uVar2 = 3;
LAB_008bb60c:
    *(undefined4 *)(param_1 + 0x98) = uVar2;
    break;
  case 2:
    uVar3 = FUN_010384a0(*(undefined8 *)(param_1 + 0x88));
    if ((uVar3 & 1) != 0) {
      FUN_008c9530(*(undefined8 *)(param_1 + 0x78));
      if (*(char *)(param_1 + 0x90) == '\0') {
        FUN_01038270(*(undefined8 *)(param_1 + 0x88),1);
        return 1;
      }
      lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
      if (lVar6 == 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x78);
        uVar2 = FUN_008c8330(uVar4);
        uVar2 = FUN_01521090(0,uVar2);
        FUN_008c92f0(uVar4,uVar2);
        return 1;
      }
      plVar7 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      uVar4 = *(undefined8 *)(param_1 + 0x78);
      uVar2 = FUN_008c8330(uVar4);
      uVar2 = FUN_01521090(lVar6,uVar2);
      FUN_008c92f0(uVar4,uVar2);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      return 1;
    }
    break;
  case 3:
    uVar3 = FUN_010386c0(*(undefined8 *)(param_1 + 0x88));
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}


