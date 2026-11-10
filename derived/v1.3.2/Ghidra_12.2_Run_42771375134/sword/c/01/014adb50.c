/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014adb50; name: FUN_014adb50
 */


undefined4 FUN_014adb50(undefined8 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  
  uVar2 = FUN_0087f070();
  FUN_008783b0(param_1);
  uVar4 = FUN_0087d610(param_1,2);
  FUN_0087d200(param_1);
  uVar3 = FUN_0087ccf0(param_1);
  FUN_0087f0c0(param_1,uVar2 & 1);
  uVar1 = 2;
  if ((uVar4 & 1) == 0) {
    uVar1 = uVar3;
  }
  return uVar1;
}


