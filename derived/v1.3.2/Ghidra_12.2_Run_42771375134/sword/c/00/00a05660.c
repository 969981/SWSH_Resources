/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a05660; name: FUN_00a05660
 */


void FUN_00a05660(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 == 0) {
    lVar2 = 0;
    *(undefined4 *)(param_1 + 0x6a8) = 0;
    lVar1 = *(long *)(param_1 + 0x6b8);
  }
  else {
    if (param_2 != 1) {
      return;
    }
    lVar2 = 1;
    *(undefined4 *)(param_1 + 0x6a8) = 1;
    lVar1 = *(long *)(param_1 + 0x6b8);
  }
  if (lVar1 == 0) {
    return;
  }
  FUN_016b7990(lVar1,&DAT_02153758 + lVar2 * 8,1,0);
  return;
}


