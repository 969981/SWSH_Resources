/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00207ce0; name: FUN_00207ce0
 */


void FUN_00207ce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00217f90(param_1,param_3);
  puVar3 = (undefined8 *)(param_1 + 0x10);
  if (*(short *)(param_1 + 0x18) == 1) {
    puVar2 = puVar3;
  }
  else {
    puVar2 = (undefined8 *)*puVar3;
  }
  FUN_0039a990(param_2,puVar2[uVar1 & 0xffffffff]);
  if (*(short *)(param_1 + 0x18) != 1) {
    puVar3 = (undefined8 *)*puVar3;
  }
  puVar3[uVar1 & 0xffffffff] = 0xffffffff;
  return;
}


