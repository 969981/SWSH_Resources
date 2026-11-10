/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094a2a0; name: FUN_0094a2a0
 */


void FUN_0094a2a0(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  *param_2 = 0;
  FUN_00942390();
  uVar1 = FUN_00931930();
  uVar2 = FUN_00932ae0(uVar1,2);
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_009423e0(param_1);
    uVar2 = FUN_00927ed0(uVar1,*param_3,*(undefined1 *)(param_3 + 1));
    if ((uVar2 & 1) != 0) {
      *param_2 = 1;
    }
  }
  return;
}


