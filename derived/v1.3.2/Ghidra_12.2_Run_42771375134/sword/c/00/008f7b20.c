/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f7b20; name: FUN_008f7b20
 */


void FUN_008f7b20(long param_1,byte param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long local_48;
  
  plVar5 = (long *)(param_1 + (ulong)param_2 * 8 + 0xe8);
  plVar2 = (long *)*plVar5;
  if ((plVar2 != (long *)0x0) && (*param_3 != 0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,*param_3);
    param_1 = param_1 + (ulong)param_2 * 8;
    plVar2 = *(long **)(param_1 + 0x110);
    (**(code **)(*plVar2 + 0x68))(plVar2,*param_3);
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(plVar5[9] + 0x10))();
    }
    iVar1 = FUN_00884820(plVar5);
    if (iVar1 != 0) {
      iVar4 = 0;
      do {
        while (lVar3 = (**(code **)(*plVar5 + 0x50))(plVar5,iVar4), lVar3 != 0) {
          plVar2 = (long *)(lVar3 + 0x48);
          (**(code **)(*plVar2 + 0x10))(plVar2);
          local_48 = lVar3;
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_008fb2f0(&local_48);
          (**(code **)(*plVar2 + 0x18))(plVar2);
          local_48 = 0;
          (**(code **)(*plVar2 + 0x18))(plVar2);
          iVar4 = iVar4 + 1;
          if (iVar1 == iVar4) goto LAB_008f7c44;
        }
        local_48 = 0;
        FUN_008fb2f0(&local_48);
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
LAB_008f7c44:
    if (plVar5 != (long *)0x0) {
      (**(code **)(plVar5[9] + 0x18))(plVar5 + 9);
    }
    plVar2 = *(long **)(param_1 + 0x110);
    if (plVar2 != (long *)0x0) {
      (**(code **)(plVar2[9] + 0x10))();
    }
    iVar1 = FUN_00884820(plVar2);
    if (iVar1 != 0) {
      iVar4 = 0;
      do {
        while (lVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,iVar4), lVar3 != 0) {
          plVar5 = (long *)(lVar3 + 0x48);
          (**(code **)(*plVar5 + 0x10))(plVar5);
          local_48 = lVar3;
          (**(code **)(*plVar5 + 0x10))(plVar5);
          FUN_008fb2f0(&local_48);
          (**(code **)(*plVar5 + 0x18))(plVar5);
          local_48 = 0;
          (**(code **)(*plVar5 + 0x18))(plVar5);
          iVar4 = iVar4 + 1;
          if (iVar1 == iVar4) goto LAB_008f7d20;
        }
        local_48 = 0;
        FUN_008fb2f0(&local_48);
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
LAB_008f7d20:
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008f7d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(plVar2[9] + 0x18))(plVar2 + 9);
      return;
    }
  }
  return;
}


