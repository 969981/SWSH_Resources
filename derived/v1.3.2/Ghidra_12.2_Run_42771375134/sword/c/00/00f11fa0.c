/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f11fa0; name: FUN_00f11fa0
 */


void FUN_00f11fa0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined8 local_28;
  
  if (*(char *)(param_1 + 0xf0) != '\0') {
    plVar2 = *(long **)(*(long *)(param_1 + 0x88) + 0x418);
    if (((plVar2 != *(long **)(*(long *)(param_1 + 0x88) + 0x420)) && (lVar3 = *plVar2, lVar3 != 0))
       && (puVar4 = *(undefined8 **)(lVar3 + 0x60), puVar4 != (undefined8 *)0x0)) {
      plVar2 = (long *)(**(code **)*puVar4)(puVar4);
      lVar3 = FUN_00c781c0();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar4 = puVar4 + -10;
          goto LAB_00f12010;
        }
      }
    }
    puVar4 = (undefined8 *)0x0;
LAB_00f12010:
    local_28 = FUN_0069d2b0(puVar4);
    switch(*(undefined4 *)(param_1 + 0xf4)) {
    case 0:
      *(undefined4 *)(param_1 + 0xf4) = 1;
      break;
    case 1:
      uVar1 = FUN_006b94c0(&local_28);
      if ((uVar1 & 1) != 0) {
        return;
      }
      *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
    case 2:
      fVar5 = (float)FUN_006b9480(&local_28);
      if (1.0 <= fVar5) {
        (**(code **)(**(long **)(param_1 + 0x88) + 0x180))
                  (*(undefined4 *)PTR_DAT_0271ecd0,*(long **)(param_1 + 0x88),PTR_DAT_0271e870);
        *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
      }
      break;
    case 3:
      uVar1 = FUN_006b94c0(&local_28);
      if ((uVar1 & 1) != 0) {
        return;
      }
      *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
    case 4:
      *(undefined1 *)(param_1 + 0xf0) = 0;
    }
  }
  return;
}


