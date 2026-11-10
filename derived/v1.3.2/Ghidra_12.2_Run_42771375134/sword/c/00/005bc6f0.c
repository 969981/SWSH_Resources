/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005bc6f0; name: FUN_005bc6f0
 */


undefined * FUN_005bc6f0(void)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = FUN_005bf860();
  puVar4 = PTR_DAT_02713df8;
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_005bf860();
    puVar3 = (undefined *)(**(code **)(*plVar2 + 0x60))();
    if (puVar3 != (undefined *)0x0) {
      puVar4 = puVar3;
    }
  }
  return puVar4;
}


