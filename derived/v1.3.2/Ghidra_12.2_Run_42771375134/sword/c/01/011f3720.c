/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f3720; name: FUN_011f3720
 */


undefined * FUN_011f3720(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_3238 [12808];
  
  if (*(long *)PTR_DAT_02710878 == 0) {
    lVar3 = *(long *)(param_2 + 0x20);
    puVar4 = PTR_DAT_02725ce8;
  }
  else {
    auVar6 = FUN_01025b70();
    lVar3 = *(long *)(param_2 + 0x20);
    puVar4 = PTR_DAT_02725ce8;
    if (*(long *)(param_2 + 0x20) == auVar6._0_8_) {
      lVar3 = auVar6._0_8_;
      if (*(long *)(param_2 + 0x28) == auVar6._8_8_) goto LAB_011f3920;
    }
  }
  PTR_DAT_02725ce8 = puVar4;
  if ((lVar3 == 0) && (*(long *)(param_2 + 0x28) == 0)) {
LAB_011f3920:
    return PTR_DAT_02725ce8 + 8;
  }
  lVar1 = *(long *)(puVar4 + 8);
  lVar2 = *(long *)(puVar4 + 0x10);
  lVar5 = lVar1;
  if (lVar2 == lVar1) {
LAB_011f37cc:
    if (lVar5 != lVar2) goto LAB_011f3920;
  }
  else {
    do {
      if ((lVar3 == *(long *)(lVar5 + 0x20)) &&
         (*(long *)(param_2 + 0x28) == *(long *)(lVar5 + 0x28))) goto LAB_011f37cc;
      lVar5 = lVar5 + 0x80;
    } while (lVar2 != lVar5);
  }
  FUN_011f3950(puVar4 + 8,lVar1,param_2);
  if (100 < (ulong)(*(long *)(puVar4 + 0x10) - *(long *)(puVar4 + 8) >> 7)) {
    *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + -0x80;
  }
                    /* WARNING: Subroutine does not return */
  memset(auStack_3238,0,0x3208);
}


