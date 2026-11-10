/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fb320; name: FUN_004fb320
 */


undefined4
FUN_004fb320(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5)

{
  long lVar1;
  undefined4 uVar2;
  
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined1 *)(param_1 + 0x69) = 0;
  lVar1 = FUN_004f8890(param_3,param_4,param_5);
  *(long *)(param_1 + 0x18) = lVar1;
  uVar2 = 1;
  if (lVar1 == 0) {
    uVar2 = 2;
  }
  return uVar2;
}


