/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01416510; name: FUN_01416510
 */


void FUN_01416510(undefined4 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  undefined8 local_28;
  
  if (*(int *)(param_3 + 0x10) == 1) {
    lVar1 = *(long *)(param_3 + 0x20);
  }
  else if (*(int *)(param_3 + 0x10) == 0) {
    lVar1 = *(long *)(param_3 + 0x18);
  }
  else {
    lVar1 = 0;
  }
  local_28 = 0x4e3a5fa08722d94;
  lVar1 = FUN_0167b6b0(*(undefined8 *)(lVar1 + 0x2b0),&local_28);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x30) = param_1;
    *(undefined4 *)(lVar1 + 0x34) = param_2;
    *(undefined4 *)(lVar1 + 0x38) = 0;
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 0x10;
  }
  return;
}


