/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004664b0; name: FUN_004664b0
 */


void FUN_004664b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long local_28;
  long lStack_20;
  undefined8 local_18;
  
  lStack_20 = *(long *)(param_1 + 0x30);
  if (*(char *)(lStack_20 + 0xf0) == '\0') {
    local_18 = 4;
    local_28 = param_1;
    FUN_004779e0(*(undefined8 *)PTR_DAT_02712dc0,&local_28,param_2,param_3);
    return;
  }
  return;
}


