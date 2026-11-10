/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e4b6d0; name: FUN_00e4b6d0
 */


void FUN_00e4b6d0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x78);
  lVar2 = *param_2;
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  lVar1 = *(long *)(lVar4 + 0x68);
  *(long *)(lVar4 + 0x68) = lVar2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00e4b744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return;
}


