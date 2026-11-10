/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bda9c0; name: FUN_00bda9c0
 */


void FUN_00bda9c0(undefined1 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  if (*(char *)(param_2 + 0x18b0) != '\0') {
    uVar1 = *(undefined8 *)(param_2 + 0x18c0);
    uVar2 = *(undefined8 *)(param_2 + 0x18c8);
    uVar3 = *(undefined8 *)(param_2 + 0x18d0);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x18b8);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    *param_1 = 1;
  }
  return;
}


