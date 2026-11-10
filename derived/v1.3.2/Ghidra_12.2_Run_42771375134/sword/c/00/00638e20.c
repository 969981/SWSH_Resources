/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00638e20; name: FUN_00638e20
 */


void FUN_00638e20(long *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  *(undefined2 *)((long)param_1 + 0xd) = 0;
  *(undefined1 *)((long)param_1 + 0xf) = 0;
  if (param_2 == 0) {
    lVar1 = FUN_005bc6f0();
    *param_1 = lVar1;
    return;
  }
  return;
}


