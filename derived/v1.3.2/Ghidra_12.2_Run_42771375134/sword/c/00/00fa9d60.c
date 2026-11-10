/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa9d60; name: FUN_00fa9d60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fa9d60(long param_1,uint param_2)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar2 == 0) {
    lVar2 = *(long *)(_DAT_00000060 + 0x630);
    plVar3 = (long *)PTR_DAT_02710798;
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = *(long *)(*(long *)(lVar2 + 0x60) + 0x630);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    plVar3 = (long *)PTR_DAT_02710798;
  }
  if (lVar2 == 0) {
    PTR_DAT_02710798 = (undefined *)plVar3;
    return;
  }
  lVar4 = *(long *)(*plVar3 + 0x208);
  PTR_DAT_02710798 = (undefined *)plVar3;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  uVar1 = FUN_01538ec0(lVar4);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  lVar4 = *(long *)(*plVar3 + 0x1e8);
  if (lVar4 == 0) {
    uVar1 = FUN_01524e00(0);
    *(undefined4 *)(param_1 + 0x88) = uVar1;
  }
  else {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar1 = FUN_01524e00(lVar4);
    *(undefined4 *)(param_1 + 0x88) = uVar1;
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  FUN_016b0af0(lVar2,param_1 + 0x68);
  FUN_016b0a00(lVar2,param_2 & 1);
  return;
}


