/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0085e5e0; name: FUN_0085e5e0
 */


void FUN_0085e5e0(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_2 != param_1) {
    (**(code **)(*param_1 + 0x38))();
    FUN_0085e470(param_1 + 3,param_2 + 3);
    uVar1 = param_2[1];
    if ((uVar1 & 1) != 0) {
      uVar2 = param_1[1];
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_009bb7d0(param_1 + 1);
        uVar1 = param_2[1];
      }
      else {
        uVar2 = uVar2 & 0xfffffffffffffffe;
      }
      if ((uVar1 & 1) == 0) {
        uVar1 = FUN_0080f460();
      }
      else {
        uVar1 = uVar1 & 0xfffffffffffffffe;
      }
      FUN_0080f7b0(uVar2,uVar1);
      return;
    }
  }
  return;
}


