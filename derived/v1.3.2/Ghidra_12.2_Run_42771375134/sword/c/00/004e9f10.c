/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e9f10; name: FUN_004e9f10
 */


long * FUN_004e9f10(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  
  if ((*(int *)(param_1 + 0x40) == 0) && (uVar4 = FUN_004e6f50(param_1 + 0x28,1), (uVar4 & 1) == 0))
  {
    plVar5 = (long *)0x0;
  }
  else {
    puVar2 = PTR_DAT_02712a90;
    plVar5 = (long *)**(undefined8 **)(param_1 + 0x38);
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x60);
      if (plVar5 != (long *)0x0) {
        FUN_00496070(plVar5);
        **(long **)(param_1 + 0x38) = (long)plVar5;
        plVar5[1] = param_1;
        iVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,*(undefined8 *)(param_1 + 0x48));
        if (iVar3 != 1) {
          uVar1 = *(undefined4 *)puVar2;
          (**(code **)*plVar5)(plVar5);
          FUN_00404870(uVar1,plVar5);
          plVar5 = (long *)0x0;
          **(undefined8 **)(param_1 + 0x38) = 0;
        }
      }
    }
  }
  return plVar5;
}


