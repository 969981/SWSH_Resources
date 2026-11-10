/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b50f0; name: FUN_006b50f0
 */


undefined8 FUN_006b50f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_006b6600(*(undefined8 *)(param_1 + 0x1b0));
  uVar2 = FUN_006ac340();
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  FUN_0069f1b0(param_2,param_3);
  FUN_0069f2a0(0x3f800000,param_2,uVar1);
  FUN_0069f3b0(param_2);
  FUN_0069f490(param_2,param_1 + 0x88);
  return 1;
}


