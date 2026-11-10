/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a65260; name: FUN_00a65260
 */


void FUN_00a65260(long param_1,int param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  
  FUN_00a82b80(param_1,*(char *)(param_1 + 0x14c0) == '\0');
  uVar1 = (ulong)*(byte *)(param_1 + 0x14c0);
  *(int *)(param_1 + uVar1 * 0x460 + 0xc00) = param_2;
  if (param_2 - 1U < 4) {
    param_1 = param_1 + uVar1 * 0x460;
    FUN_00adc890(*(undefined8 *)(param_1 + 0xc08),param_1 + 0xc20,3,1,0);
    FUN_00adc890(*(undefined8 *)(param_1 + 0xc10),param_1 + 0xc20,3,1,1);
    FUN_00adc890(*(undefined8 *)(param_1 + 0xc18),param_1 + 0xd30,4,1,0);
    lVar2 = *(long *)(param_1 + 0xc18);
    *(undefined8 *)(lVar2 + 0x3d8) = param_3[1];
    *(undefined8 *)(lVar2 + 0x3d0) = *param_3;
  }
  else if (param_2 - 5U < 2) {
    param_1 = param_1 + uVar1 * 0x460;
    FUN_00adc890(*(undefined8 *)(param_1 + 0xc08),param_1 + 0xc20,3,1,0);
    FUN_00adc890(*(undefined8 *)(param_1 + 0xc10),param_1 + 0xc20,3,1,1);
    return;
  }
  return;
}


