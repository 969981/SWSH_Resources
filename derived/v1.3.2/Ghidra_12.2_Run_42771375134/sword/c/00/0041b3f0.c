/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041b3f0; name: FUN_0041b3f0
 */


void FUN_0041b3f0(long param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  puVar3 = PTR_DAT_02712a90;
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    plVar7 = (long *)0x0;
    do {
      while ((plVar6 = plVar5, iVar4 = (**(code **)(*plVar6 + 0x10))(plVar6), iVar4 == 1 &&
             (plVar6[3] == param_2))) {
        plVar5 = (long *)plVar6[1];
        plVar1 = (long *)(param_1 + 0x10);
        if (*(long **)(param_1 + 0x10) != plVar6) {
          plVar1 = plVar7 + 1;
        }
        *plVar1 = (long)plVar5;
        if (*(long **)(param_1 + 8) == plVar6) {
          *(long **)(param_1 + 8) = plVar7;
        }
        uVar2 = *(undefined4 *)puVar3;
        (**(code **)*plVar6)(plVar6);
        FUN_00404870(uVar2,plVar6);
        if (plVar5 == (long *)0x0) {
          return;
        }
      }
      plVar5 = (long *)plVar6[1];
      plVar7 = plVar6;
    } while ((long *)plVar6[1] != (long *)0x0);
  }
  return;
}


