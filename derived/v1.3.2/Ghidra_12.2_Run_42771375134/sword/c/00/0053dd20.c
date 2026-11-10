/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053dd20; name: FUN_0053dd20
 */


int FUN_0053dd20(int *param_1,long *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*param_1 == 0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 4) + 200))(*(long **)(param_1 + 4),param_1[7]);
    uVar3 = (**(code **)(**(long **)(param_1 + 2) + 200))(*(long **)(param_1 + 2),param_1[6]);
    uVar1 = (**(code **)(*param_2 + 0x238))(param_2,uVar3,uVar2);
    return -(~uVar1 & 1);
  }
  return -1;
}


