/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c6920; name: FUN_004c6920
 */


undefined8 FUN_004c6920(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  uVar2 = FUN_004da740(param_2,param_1);
  puVar1 = PTR_DAT_02713110;
  if ((int)uVar2 != 0x3f) {
    plVar5 = (long *)(PTR_DAT_02713110 + 8);
    lVar4 = 0;
    do {
      lVar3 = lVar4;
      lVar4 = *plVar5;
      plVar5 = (long *)(lVar4 + 0x68);
    } while (lVar4 != 0 && lVar4 != param_2);
    if (lVar4 != 0) {
      plVar5 = (long *)(PTR_DAT_02713110 + 8);
      if (*(long *)(PTR_DAT_02713110 + 8) != lVar4) {
        plVar5 = (long *)(lVar3 + 0x68);
      }
      *plVar5 = *(long *)(lVar4 + 0x68);
      if (*(long *)puVar1 == lVar4) {
        *(long *)puVar1 = lVar3;
      }
    }
    if ((int)uVar2 == 1) {
      uVar2 = FUN_004c6270(param_2);
      return uVar2;
    }
    FUN_00468b10(param_2,1);
    uVar2 = 2;
  }
  return uVar2;
}


