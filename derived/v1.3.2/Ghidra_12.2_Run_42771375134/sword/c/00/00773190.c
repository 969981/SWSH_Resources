/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00773190; name: FUN_00773190
 */


void FUN_00773190(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[2];
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *(undefined8 *)(param_1 + 0x214) = param_2[3];
  *(undefined8 *)(param_1 + 0x20c) = uVar1;
  *(undefined8 *)(param_1 + 0x204) = uVar3;
  *(undefined8 *)(param_1 + 0x1fc) = uVar2;
  return;
}


