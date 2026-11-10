/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0017c5a0; name: FUN_0017c5a0
 */


void FUN_0017c5a0(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x2d28) = 0;
  if ((*(uint *)(param_1 + 0x2d2c) & 0x7fffffff) < (param_2 + 0x3fU & 0xffffffc0)) {
    FUN_0017c680(param_1 + 0x2d20);
  }
  uVar1 = param_3 | param_3 >> 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  uVar1 = uVar1 | uVar1 >> 0x10;
  uVar2 = 0x10;
  if (0x10 < uVar1 + 1) {
    uVar2 = uVar1 + 1;
  }
  *(undefined4 *)(param_1 + 0x2de0) = 0;
  if ((*(uint *)(param_1 + 0x2de4) & 0x7fffffff) < uVar2) {
    FUN_0017c790(param_1 + 0x2dd8);
  }
  *(undefined8 *)(param_1 + 0x2dc0) = *(undefined8 *)(param_1 + 0x2cf0);
  *(uint *)(param_1 + 0x2de0) = param_3;
  *(undefined8 *)(param_1 + 0x2dd0) = *(undefined8 *)(param_1 + 0x2d20);
  return;
}


