/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093a470; name: FUN_0093a470
 */


void FUN_0093a470(long param_1,long param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_00917fb0(*(undefined8 *)(param_1 + 0x18),0xb7);
  *(undefined2 *)(param_2 + 6) = uVar1;
  uVar1 = FUN_00917fb0(*(undefined8 *)(param_1 + 0x18),0x97);
  *(undefined2 *)(param_2 + 8) = uVar1;
  uVar1 = FUN_00917fb0(*(undefined8 *)(param_1 + 0x18),0xb8);
  *(undefined2 *)(param_2 + 10) = uVar1;
  return;
}


