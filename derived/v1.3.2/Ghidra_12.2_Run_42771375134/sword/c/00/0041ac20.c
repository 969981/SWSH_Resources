/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041ac20; name: FUN_0041ac20
 */


void FUN_0041ac20(long param_1,long param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  puVar2 = PTR_DAT_02712a90;
  plVar5 = *(long **)(param_1 + 0x70);
  if (param_4 <= param_3) {
    param_3 = param_4;
  }
  if (plVar5 == (long *)0x0) {
    return;
  }
  plVar6 = (long *)0x0;
LAB_0041ac64:
  plVar7 = plVar5;
  do {
    iVar3 = (**(code **)(*plVar7 + 0x10))(plVar7);
    if (iVar3 == 1) {
      if ((((int)plVar7[2] < param_3) || (*(long *)(plVar7[3] + 0x80) != *(long *)(param_2 + 0x10)))
         || (uVar4 = FUN_0041dfb0(param_2,*(undefined4 *)(plVar7[3] + 0x88)), (uVar4 & 1) == 0))
      break;
    }
    else if (((iVar3 != 0) || ((int)plVar7[2] < param_3)) ||
            ((plVar7[3] != *(long *)(param_2 + 0x10) ||
             (uVar4 = FUN_0041dfb0(param_2,(int)plVar7[4]), (uVar4 & 1) != 0)))) break;
    plVar8 = (long *)plVar7[1];
    plVar5 = (long *)(param_1 + 0x70);
    if (*(long **)(param_1 + 0x70) != plVar7) {
      plVar5 = plVar6 + 1;
    }
    *plVar5 = (long)plVar8;
    if (*(long **)(param_1 + 0x68) == plVar7) {
      *(long **)(param_1 + 0x68) = plVar6;
    }
    uVar1 = *(undefined4 *)puVar2;
    (**(code **)*plVar7)(plVar7);
    FUN_00404870(uVar1,plVar7);
    plVar7 = plVar8;
    if (plVar8 == (long *)0x0) {
      return;
    }
  } while( true );
  plVar5 = (long *)plVar7[1];
  plVar6 = plVar7;
  if (plVar5 == (long *)0x0) {
    return;
  }
  goto LAB_0041ac64;
}


