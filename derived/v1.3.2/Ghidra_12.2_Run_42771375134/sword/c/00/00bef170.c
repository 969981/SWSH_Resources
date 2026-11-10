/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bef170; name: FUN_00bef170
 */


void FUN_00bef170(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  uVar4 = 0;
  piVar5 = (int *)(param_1 + 0x640);
  do {
    plVar1 = *(long **)(piVar5 + 0xc);
    if (plVar1 != (long *)0x0) {
      local_38 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x10))((long *)(local_38 + 0x48));
        plVar1 = *(long **)(piVar5 + 0xc);
        if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,&local_38);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      iVar2 = *piVar5;
      if (iVar2 == 7) {
        uVar3 = *(undefined8 *)(param_1 + 0x840);
        local_40 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
        if (local_40 != 0) {
          (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
        }
        FUN_016bb930(uVar3,4,7,&local_40);
        if (local_40 != 0) {
          (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
          local_40 = 0;
        }
        iVar2 = *piVar5;
      }
      if (iVar2 == 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x840);
        local_48 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
        }
        FUN_016bb930(uVar3,3,0,&local_48);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
        }
      }
      iVar2 = *piVar5;
      if (iVar2 == 2) {
        uVar3 = *(undefined8 *)(param_1 + 0x840);
        local_50 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
        if (local_50 != 0) {
          (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
        }
        FUN_016bb930(uVar3,2,2,&local_50);
        if (local_50 != 0) {
          (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
          local_50 = 0;
        }
        iVar2 = *piVar5;
      }
      if (iVar2 == 3) {
        uVar3 = *(undefined8 *)(param_1 + 0x840);
        local_58 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
        }
        FUN_016bb930(uVar3,1,3,&local_58);
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          local_58 = 0;
        }
      }
      if (*piVar5 == 1) {
        uVar3 = *(undefined8 *)(param_1 + 0x840);
        local_60 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
        if (local_60 != 0) {
          (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
        }
        FUN_016bb930(uVar3,0,1,&local_60);
        if (local_60 != 0) {
          (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
          local_60 = 0;
        }
      }
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 0x10;
  } while (uVar4 < 8);
  return;
}


