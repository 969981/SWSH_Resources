/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00207c40; name: FUN_00207c40
 */


void FUN_00207c40(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00217f90(param_1,param_4);
  if (*(short *)(param_1 + 1) == 1) {
    puVar3 = param_1;
  }
  else {
    puVar3 = (undefined8 *)*param_1;
  }
  uVar2 = FUN_0039a800(param_2,puVar3[uVar1 & 0xffffffff],param_3,
                       *(short *)(param_3 + 8) == 6 || *(short *)(param_3 + 8) == 0x10,0,0);
  puVar3 = param_1 + 2;
  if (*(short *)(param_1 + 3) != 1) {
    puVar3 = (undefined8 *)*puVar3;
  }
  puVar3[uVar1 & 0xffffffff] = uVar2;
  return;
}


