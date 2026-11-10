/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01371830; name: FUN_01371830
 */


void FUN_01371830(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    plVar1 = *(long **)(param_1 + lVar2 + 0x550);
    if ((plVar1 != (long *)0x0) && (*(char *)(param_1 + lVar2 + 0x558) != '\0')) {
      (**(code **)(*plVar1 + 0x58))();
    }
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x200);
  return;
}


