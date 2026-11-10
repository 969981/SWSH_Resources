/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a5a600; name: FUN_00a5a600
 */


undefined8 FUN_00a5a600(long param_1,byte param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(byte *)(param_1 + 0x628) = param_2 & 1;
  if (*(char *)(param_1 + 0x640) != '\0') {
    FUN_00a5b660(*(undefined8 *)(param_1 + 0x620),1);
    FUN_00a5b690(*(undefined8 *)(param_1 + 0x620),2,0xf);
    return 1;
  }
  FUN_00a5b660(*(undefined8 *)(param_1 + 0x620),0);
  if ((param_2 & 1) == 0) {
    if ((param_3 & 1) != 0) {
      uVar1 = 2;
      uVar2 = 0;
      goto LAB_00a5a680;
    }
    uVar1 = 3;
  }
  else {
    uVar1 = 1;
  }
  uVar2 = 0xf;
LAB_00a5a680:
  FUN_00a5b690(*(undefined8 *)(param_1 + 0x620),uVar1,uVar2);
  return 0;
}


