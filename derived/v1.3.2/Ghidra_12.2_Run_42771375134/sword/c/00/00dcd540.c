/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dcd540; name: FUN_00dcd540
 */


void FUN_00dcd540(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_0271e8d0;
  lVar2 = *(long *)(param_1 + 0xa50);
  lVar3 = *(long *)(param_1 + 0xa58);
  if (lVar2 != lVar3) {
    do {
      FUN_00dcd5c0(lVar2,param_2,param_1 + 0xa88);
      if (*(int *)(param_1 + 0xa98) != -1) {
        FUN_00dcd740(*(undefined8 *)puVar1,lVar2 + 0x80);
      }
      lVar2 = lVar2 + 0x230;
    } while (lVar3 != lVar2);
  }
  return;
}


