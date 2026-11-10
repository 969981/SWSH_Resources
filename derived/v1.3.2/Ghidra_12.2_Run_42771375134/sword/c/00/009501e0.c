/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009501e0; name: FUN_009501e0
 */


void FUN_009501e0(undefined8 param_1,undefined2 *param_2,undefined8 *param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_009423e0();
  uVar1 = FUN_00929240(uVar2,*param_3,*(undefined1 *)(param_3 + 1));
  *param_2 = uVar1;
  return;
}


