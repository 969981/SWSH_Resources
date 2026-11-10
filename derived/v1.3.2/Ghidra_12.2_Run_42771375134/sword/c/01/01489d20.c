/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01489d20; name: FUN_01489d20
 */


/* WARNING: Removing unreachable block (ram,0x01489ea0) */
/* WARNING: Removing unreachable block (ram,0x01489ecc) */

void FUN_01489d20(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x5e8);
  if ((*(long *)(param_1 + 0x70) != 0) &&
     (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x70) + 0x60), puVar3 != (undefined8 *)0x0)) {
    plVar1 = (long *)(**(code **)*puVar3)(puVar3);
    lVar2 = FUN_006f10c0();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        (**(code **)(puVar3[-1] + 0x10))(puVar3 + -1);
        FUN_00702020(puVar3 + -10,*(undefined8 *)(lVar4 + 0x70));
        (**(code **)(puVar3[-1] + 0x18))(puVar3 + -1);
        goto LAB_01489da0;
      }
    }
  }
  FUN_00702020(0,*(undefined8 *)(lVar4 + 0x70));
LAB_01489da0:
  lVar4 = *(long *)(param_1 + 0x608);
  if ((*(long *)(param_1 + 0x70) != 0) &&
     (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x70) + 0x60), puVar3 != (undefined8 *)0x0)) {
    plVar1 = (long *)(**(code **)*puVar3)(puVar3);
    lVar2 = FUN_006f10c0();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        (**(code **)(puVar3[-1] + 0x10))(puVar3 + -1);
        FUN_00702020(puVar3 + -10,*(undefined8 *)(lVar4 + 0x70));
        (**(code **)(puVar3[-1] + 0x18))(puVar3 + -1);
        goto LAB_01489e0c;
      }
    }
  }
  FUN_00702020(0,*(undefined8 *)(lVar4 + 0x70));
LAB_01489e0c:
  lVar4 = *(long *)(param_1 + 0x628);
  if ((*(long *)(param_1 + 0x70) != 0) &&
     (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x70) + 0x60), puVar3 != (undefined8 *)0x0)) {
    plVar1 = (long *)(**(code **)*puVar3)(puVar3);
    lVar2 = FUN_006f10c0();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        (**(code **)(puVar3[-1] + 0x10))(puVar3 + -1);
        FUN_00702020(puVar3 + -10,*(undefined8 *)(lVar4 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x01489f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(puVar3[-1] + 0x18))(puVar3 + -1);
        return;
      }
    }
  }
  FUN_00702020(0,*(undefined8 *)(lVar4 + 0x70));
  return;
}


