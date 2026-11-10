/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ad170; name: FUN_007ad170
 */


bool FUN_007ad170(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  int local_28 [6];
  
  bVar2 = false;
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_01852540(local_28);
    puVar1 = PTR_LAB_02716800;
    if (local_28[0] < 0) {
      puVar1 = (undefined *)0x0;
    }
    bVar2 = puVar1 != (undefined *)0x0;
  }
  return bVar2;
}


