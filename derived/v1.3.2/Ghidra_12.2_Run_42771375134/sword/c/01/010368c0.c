/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010368c0; name: FUN_010368c0
 */


uint FUN_010368c0(long param_1,int param_2)

{
  uint uVar1;
  undefined8 local_18;
  
  if (param_2 - 1U < 3) {
    local_18 = *(undefined8 *)(&DAT_02162b40 + (long)(int)(param_2 - 1U) * 8);
  }
  else {
    local_18 = 0xd5a646e9eb5de80c;
  }
  if (*(long *)(param_1 + 0x2b0) == 0) {
    return 0;
  }
  uVar1 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_18);
  return (uVar1 ^ 1) & 1;
}


