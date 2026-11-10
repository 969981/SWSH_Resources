/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121af80; name: FUN_0121af80
 */


bool FUN_0121af80(void *param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = memcmp(param_1,&DAT_02168930,0x10);
  bVar1 = false;
  if (iVar2 != 0) {
    if (*(long *)((long)param_1 + 0x10) == 0) {
      return *(long *)((long)param_1 + 0x18) != 0;
    }
    bVar1 = true;
  }
  return bVar1;
}


