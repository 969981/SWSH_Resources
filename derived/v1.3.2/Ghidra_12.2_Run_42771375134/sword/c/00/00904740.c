/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00904740; name: FUN_00904740
 */


undefined8 FUN_00904740(long param_1,undefined8 param_2,undefined1 *param_3,undefined2 *param_4)

{
  short sVar1;
  undefined8 uVar2;
  
  sVar1 = FUN_008e2d30(param_2,*(undefined8 *)(param_1 + 0xe0));
  if (sVar1 == 0x127) {
    return 5;
  }
  uVar2 = FUN_00905070(param_1,param_2,param_3,param_4);
  if ((int)uVar2 == 5) {
    *param_3 = 0x1f;
    *param_4 = 0;
  }
  return uVar2;
}


