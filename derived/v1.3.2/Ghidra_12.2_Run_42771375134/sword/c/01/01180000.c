/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01180000; name: FUN_01180000
 */


bool FUN_01180000(void)

{
  long lVar1;
  int *piVar2;
  undefined1 auStack_280 [608];
  
  FUN_01211940(auStack_280,*(undefined8 *)PTR_DAT_02710958);
  lVar1 = FUN_01225ea0(auStack_280);
  piVar2 = (int *)FUN_0121b420(lVar1 + 4);
  return *piVar2 == 2;
}


