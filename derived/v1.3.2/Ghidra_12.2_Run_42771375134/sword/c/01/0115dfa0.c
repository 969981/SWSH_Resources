/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0115dfa0; name: FUN_0115dfa0
 */


void FUN_0115dfa0(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 local_28;
  undefined8 local_18;
  
  lVar1 = *(long *)(param_1 + 0x738);
  if ((param_2 & 1) == 0) {
    if (*(char *)(lVar1 + 0x83) != '\0') {
      FUN_016b2da0(lVar1,0);
      FUN_016b76f0(*(undefined8 *)(param_1 + 0x730),*(long *)(param_1 + 0x738) + 0x60);
      return;
    }
  }
  else if (*(char *)(lVar1 + 0x83) == '\0') {
    FUN_016b2da0(lVar1,1);
    local_18 = 0x100000000;
    local_28 = 0x100000001;
    FUN_016b7620(*(undefined8 *)(param_1 + 0x730),*(long *)(param_1 + 0x738) + 0x60,&local_18,
                 &local_28);
  }
  return;
}


