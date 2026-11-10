/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00877720; name: FUN_00877720
 */


undefined1 FUN_00877720(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (param_2 == param_4) {
    uVar2 = 2;
  }
  uVar1 = param_2 == param_4;
  if (param_1 != param_3) {
    uVar1 = uVar2;
  }
  return uVar1;
}


