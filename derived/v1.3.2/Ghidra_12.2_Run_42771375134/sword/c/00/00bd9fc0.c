/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd9fc0; name: FUN_00bd9fc0
 */


void FUN_00bd9fc0(undefined1 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  if (*(char *)(param_2 + 0xa40) != '\0') {
    uVar2 = *(undefined8 *)(param_2 + 0xa42);
    uVar3 = *(undefined8 *)(param_2 + 0xa4a);
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0xa52);
    *(undefined8 *)(param_1 + 10) = uVar3;
    *(undefined8 *)(param_1 + 2) = uVar2;
    uVar3 = *(undefined8 *)(param_2 + 0xa5a);
    uVar2 = *(undefined8 *)(param_2 + 0xa62);
    uVar1 = *(undefined4 *)(param_2 + 0xa72);
    *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0xa6a);
    *(undefined4 *)(param_1 + 0x32) = uVar1;
    *(undefined8 *)(param_1 + 0x22) = uVar2;
    *(undefined8 *)(param_1 + 0x1a) = uVar3;
    *param_1 = 1;
  }
  return;
}


