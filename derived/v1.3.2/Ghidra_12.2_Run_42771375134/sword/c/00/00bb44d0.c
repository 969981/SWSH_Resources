/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb44d0; name: FUN_00bb44d0
 */


void FUN_00bb44d0(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  if (*(char *)(param_1 + 0x620) == '\0') {
    local_18 = 0x24b1606b667538d3;
    uVar1 = FUN_00ffdef0(param_1 + 0x100,&local_18);
    FUN_016b2da0(uVar1,param_2 & 1);
    return;
  }
  return;
}


