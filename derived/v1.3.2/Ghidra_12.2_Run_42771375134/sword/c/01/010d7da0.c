/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010d7da0; name: FUN_010d7da0
 */


void FUN_010d7da0(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(param_1 + 0x2b0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (param_2 != 0) {
    uVar4 = (ulong)param_2;
    puVar3 = &DAT_02163fd0;
    do {
      FUN_0167b9b0(lVar1,puVar3,1);
      puVar3 = puVar3 + 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    if (5 < param_2) goto LAB_010d7e2c;
  }
  lVar2 = (ulong)param_2 << 3;
  do {
    FUN_0167b9b0(lVar1,&DAT_02163fd0 + lVar2,0);
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x30);
LAB_010d7e2c:
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x010d7e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


