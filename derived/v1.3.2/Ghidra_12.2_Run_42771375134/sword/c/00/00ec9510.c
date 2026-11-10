/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ec9510; name: FUN_00ec9510
 */


void FUN_00ec9510(undefined8 param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long local_28;
  
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x208);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  iVar1 = FUN_01539230(lVar3);
  uVar2 = iVar1 + 1;
  if (0x7f < (uVar2 & 0xffff)) {
    local_28 = *param_2;
    if (local_28 == 0) {
      FUN_00ec9600(param_1,&local_28);
      FUN_01539240(lVar3,0);
      goto joined_r0x00ec95e4;
    }
    plVar4 = (long *)(local_28 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_00ec9600(param_1,&local_28);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    uVar2 = 0;
    local_28 = 0;
  }
  FUN_01539240(lVar3,uVar2);
joined_r0x00ec95e4:
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00ec95c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


