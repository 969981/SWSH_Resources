/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010d3820; name: FUN_010d3820
 */


void FUN_010d3820(long param_1,ulong param_2)

{
  undefined8 local_18;
  
  if (*(char *)(param_1 + 0x5cb) != '\0') {
    return;
  }
  if ((param_2 & 1) == 0) {
    local_18 = 0x3b8f5513c2470901;
    FUN_00ffd010(param_1 + 0x100,&local_18);
  }
  else {
    FUN_010364c0(param_1,0);
  }
  FUN_010364c0(param_1,2);
  *(undefined1 *)(param_1 + 0x5cb) = 1;
  return;
}


