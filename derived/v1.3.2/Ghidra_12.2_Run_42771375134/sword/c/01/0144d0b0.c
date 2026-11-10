/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0144d0b0; name: FUN_0144d0b0
 */


void FUN_0144d0b0(void)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  iVar2 = 0;
  do {
    FUN_0152e1e0(lVar1,iVar2,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0xa7);
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0144d118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


