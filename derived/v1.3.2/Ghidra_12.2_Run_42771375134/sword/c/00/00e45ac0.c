/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e45ac0; name: FUN_00e45ac0
 */


void FUN_00e45ac0(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar3 + 0x7d8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar2 = FUN_00e331a0(lVar4,param_2);
  if ((lVar2 == 0) || (uVar1 = FUN_00e332e0(lVar4,lVar2), 2 < uVar1)) {
    *(undefined4 *)(param_1 + 0x5b8) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x5b8) = *(undefined4 *)(&DAT_02160b88 + (long)(int)uVar1 * 4);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
                    /* WARNING: Could not recover jumptable at 0x00e45b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


