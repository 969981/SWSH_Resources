/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015083a0; name: FUN_015083a0
 */


void FUN_015083a0(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0xb8,8);
  if (lVar3 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00866110(lVar3,param_2);
  *(long **)(lVar3 + 8) = param_2;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0xb8;
  *(undefined8 *)(lVar3 + 0x20) = 8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  plVar1 = (long *)(lVar3 + 0x48);
  if (lVar3 != 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  lVar2 = 0;
  param_1 = param_1 + 0x60;
  do {
    lVar6 = 0x1e;
    lVar5 = param_1;
    if (lVar3 == 0) {
      do {
        FUN_008664b0(0,lVar5);
        uVar4 = FUN_008787d0(0);
        if (((uVar4 & 1) == 0) && (uVar4 = FUN_0087d610(0,2), (uVar4 & 1) == 0)) {
          FUN_00878370(0);
          FUN_008664a0(0,lVar5);
        }
        lVar5 = lVar5 + 0x158;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    else {
      do {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))(plVar1);
        FUN_008664b0(lVar3,lVar5);
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(plVar1);
        uVar4 = FUN_008787d0(lVar3);
        if (((uVar4 & 1) == 0) && (uVar4 = FUN_0087d610(lVar3,2), (uVar4 & 1) == 0)) {
          FUN_00878370(lVar3);
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))(plVar1);
          FUN_008664a0(lVar3,lVar5);
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(plVar1);
        }
        lVar5 = lVar5 + 0x158;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    lVar2 = lVar2 + 1;
    param_1 = param_1 + 0x2850;
  } while (lVar2 != 0x20);
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01508580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1);
  return;
}


