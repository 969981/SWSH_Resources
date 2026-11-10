/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ed31a0; name: FUN_00ed31a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ed31a0(long param_1,long *param_2,int param_3,int param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  
  puVar1 = PTR_DAT_02710848;
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x78);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 400) = _DAT_00000060;
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(lVar4 + 0x60);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  lVar4 = *param_2;
  if (lVar4 < 0x5742865396e549d0) {
    if (lVar4 == 0x257a58616e996cf2) {
      uVar3 = 6;
    }
    else {
      if (lVar4 != 0x4bfdbfcd09095ca0) {
LAB_00ed32b8:
        if (param_4 != 3) {
          if (param_4 != 4) {
            uVar3 = 1;
            goto LAB_00ed3308;
          }
          if ((param_3 == 1) &&
             (uVar2 = FUN_01002950(*(undefined8 *)PTR_DAT_027108d0), (uVar2 & 1) == 0))
          goto LAB_00ed330c;
        }
      }
      uVar3 = 2;
    }
  }
  else if (lVar4 == 0x674edc539f9f74a6) {
    uVar3 = 5;
  }
  else if (lVar4 == 0x5ea5c3539ab81c81) {
    uVar3 = 4;
  }
  else {
    if (lVar4 != 0x5742865396e549d0) goto LAB_00ed32b8;
    uVar3 = 3;
  }
LAB_00ed3308:
  *(undefined4 *)(param_1 + 400) = uVar3;
LAB_00ed330c:
  if (*(long *)(*(long *)puVar1 + 0x78) == 0) {
    return;
  }
  plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0x78) + 0x48);
  (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00ed3348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5);
  return;
}


