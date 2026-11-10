/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008cefe0; name: FUN_008cefe0
 */


void FUN_008cefe0(long param_1,ulong param_2)

{
  undefined8 local_28;
  
  if (*(char *)(param_1 + 0x648) == '\0') {
    FUN_00ffa290(param_1,0,1);
    FUN_00ffa160(param_1,0,1);
    return;
  }
  FUN_010364c0(param_1,3);
  *(undefined1 *)(param_1 + 0x648) = 0;
  if ((param_2 & 1) != 0) {
    local_28 = 0x31b5f77ad1a1d139;
    FUN_00ffd010(param_1 + 0x100,&local_28);
  }
  return;
}


