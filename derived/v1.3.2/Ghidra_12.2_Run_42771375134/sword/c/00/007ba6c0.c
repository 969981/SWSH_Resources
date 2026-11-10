/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ba6c0; name: FUN_007ba6c0
 */


undefined8 FUN_007ba6c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (((*(long *)(param_1 + 0x98) == 1) && (**(long **)(param_1 + 0x90) == param_1 + 0x550)) ||
     (uVar1 = FUN_007b7420(param_1), (uVar1 & 1) == 0)) {
    uVar1 = FUN_007b7420(param_1);
    if ((uVar1 & 1) == 0) {
      FUN_007b7800(param_1);
    }
    uVar2 = 1;
    *(undefined1 *)(param_1 + 0x630) = 1;
    FUN_007b8300(param_1,param_2);
    FUN_007b7390(param_1,param_3,param_4);
    FUN_007b7810(param_1,param_1 + 0x120);
    FUN_007b7810(param_1,param_1 + 0x4f8);
    FUN_007b7810(param_1,param_1 + 0x560);
    FUN_007b7810(param_1,param_1 + 0x1b0);
    FUN_007b7810(param_1,param_1 + 0x140);
    FUN_007b7810(param_1,param_1 + 0x150);
    if ((uVar1 & 1) == 0) {
      uVar2 = FUN_007b7980(param_1);
      return uVar2;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


