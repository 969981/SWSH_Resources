/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094bc60; name: FUN_0094bc60
 */


void FUN_0094bc60(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  *param_2 = 0;
  uVar1 = FUN_009423e0();
  uVar2 = FUN_009282c0(uVar1,*param_3,*(undefined4 *)(param_3 + 1),
                       *(undefined1 *)((long)param_3 + 0xc));
  if ((uVar2 & 1) != 0) {
    *param_2 = 1;
  }
  return;
}


