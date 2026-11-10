/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a24d80; name: FUN_00a24d80
 */


void FUN_00a24d80(long param_1,uint param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x740) != 0) {
    FUN_00a112b0(*(long *)(param_1 + 0x740),0);
  }
  if (*(long *)(param_1 + 0x758) != 0) {
    FUN_00a112b0(*(long *)(param_1 + 0x758),0);
  }
  if (*(long *)(param_1 + 0x770) != 0) {
    FUN_00a112b0(*(long *)(param_1 + 0x770),0);
  }
  if (*(long *)(param_1 + 0x788) != 0) {
    FUN_00a112b0(*(long *)(param_1 + 0x788),0);
  }
  if (*(long *)(param_1 + 0x7a0) != 0) {
    FUN_00a112b0(*(long *)(param_1 + 0x7a0),0);
  }
  if (*(long *)(param_1 + 0x7b8) != 0) {
    FUN_00a112b0(*(long *)(param_1 + 0x7b8),0);
  }
  if (*(long *)(param_1 + 2000) != 0) {
    FUN_00a112b0(*(long *)(param_1 + 2000),0);
  }
  if (param_2 != 0xff) {
    lVar1 = *(long *)(param_1 + (ulong)param_2 * 0x18 + 0x740);
    if (lVar1 != 0) {
      FUN_00a112b0(lVar1,1);
      return;
    }
  }
  return;
}


