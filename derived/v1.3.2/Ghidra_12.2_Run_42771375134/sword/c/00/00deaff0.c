/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00deaff0; name: FUN_00deaff0
 */


void FUN_00deaff0(long param_1)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined8 local_28;
  
  if (*(char *)(param_1 + 0x1c0) == '\0') {
    if (*(int *)(param_1 + 0x1c4) != 0) {
      return;
    }
    uVar1 = FUN_00e45920(*(undefined8 *)(param_1 + 0x88));
    if ((uVar1 & 1) == 0) {
      return;
    }
    plVar3 = *(long **)(param_1 + 0x88);
    if (*(char *)((long)plVar3 + 0x6cc) != '\0') {
      (**(code **)(*plVar3 + 400))(plVar3,PTR_DAT_0271ed08,6);
      (**(code **)(**(long **)(param_1 + 0x88) + 0x1b0))
                (*(long **)(param_1 + 0x88),PTR_DAT_0271ed10);
    }
    goto LAB_00deb140;
  }
  plVar3 = *(long **)(*(long *)(param_1 + 0x88) + 0x418);
  if (((plVar3 != *(long **)(*(long *)(param_1 + 0x88) + 0x420)) && (lVar4 = *plVar3, lVar4 != 0))
     && (puVar5 = *(undefined8 **)(lVar4 + 0x60), puVar5 != (undefined8 *)0x0)) {
    plVar3 = (long *)(**(code **)*puVar5)(puVar5);
    lVar4 = FUN_00c781c0();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        puVar5 = puVar5 + -10;
        goto LAB_00deb060;
      }
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_00deb060:
  local_28 = FUN_0069d2b0(puVar5);
  switch(*(undefined4 *)(param_1 + 0x1c4)) {
  case 0:
    iVar2 = 1;
    goto LAB_00deb148;
  case 1:
    uVar1 = FUN_006b94c0(&local_28);
    if ((uVar1 & 1) != 0) {
      return;
    }
    *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c4) + 1;
  case 2:
    fVar6 = (float)FUN_006b9480(&local_28);
    if (1.0 <= fVar6) {
      *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c4) + 1;
switchD_00deb084_caseD_3:
      (**(code **)(**(long **)(param_1 + 0x88) + 0x180))
                (*(undefined4 *)PTR_DAT_0271ecd0,*(long **)(param_1 + 0x88),PTR_DAT_0271e870);
LAB_00deb140:
      iVar2 = *(int *)(param_1 + 0x1c4) + 1;
LAB_00deb148:
      *(int *)(param_1 + 0x1c4) = iVar2;
      return;
    }
    break;
  case 3:
    goto switchD_00deb084_caseD_3;
  case 4:
    uVar1 = FUN_006b94c0(&local_28);
    if ((uVar1 & 1) != 0) {
      return;
    }
    *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c4) + 1;
  case 5:
    *(undefined1 *)(param_1 + 0x1c0) = 0;
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    break;
  default:
    break;
  }
  return;
}


