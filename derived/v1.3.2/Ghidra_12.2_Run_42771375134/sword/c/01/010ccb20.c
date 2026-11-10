/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010ccb20; name: FUN_010ccb20
 */


void FUN_010ccb20(long param_1)

{
  undefined8 local_18;
  
  if (*(char *)(param_1 + 0x5cb) == '\0') {
    local_18 = 0x3b8f5513c2470901;
    FUN_00ffd010(param_1 + 0x100,&local_18);
    FUN_010364c0(param_1,2);
    *(undefined1 *)(param_1 + 0x5cb) = 1;
    return;
  }
  return;
}


