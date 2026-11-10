/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c4df0; name: FUN_009c4df0
 */


void FUN_009c4df0(long *param_1,undefined1 param_2,byte param_3,long *param_4)

{
  long lVar1;
  
  lVar1 = *param_4;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN_009150e0(param_1 + 1);
  FUN_009150e0(param_1 + 0x4e6);
  *(undefined1 *)(param_1 + 0x9cb) = 0;
  *(undefined1 *)((long)param_1 + 0x4e59) = param_2;
  *(undefined4 *)((long)param_1 + 0x4e5c) = 0;
  *(undefined1 *)(param_1 + 0x9cc) = 0;
  *(byte *)((long)param_1 + 0x4e61) = param_3 & 1;
  *(undefined1 *)((long)param_1 + 0x4e62) = 0;
  return;
}


