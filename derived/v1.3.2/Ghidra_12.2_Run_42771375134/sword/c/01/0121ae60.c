/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121ae60; name: FUN_0121ae60
 */


bool FUN_0121ae60(void *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = memcmp(param_1,param_2,0x10);
  if (iVar1 != 0) {
    return false;
  }
  if (*(long *)((long)param_1 + 0x10) != *(long *)((long)param_2 + 0x10)) {
    return false;
  }
  if (*(long *)((long)param_1 + 0x18) == *(long *)((long)param_2 + 0x18)) {
    return *(long *)((long)param_1 + 0x20) == *(long *)((long)param_2 + 0x20);
  }
  return false;
}


