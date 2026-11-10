/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01052420; name: FUN_01052420
 */


uint FUN_01052420(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x158) == 1) {
    if (*(long *)(param_1 + 0x150) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x150) + 0x48) + 0x18))();
      uVar3 = 0;
      *(undefined8 *)(param_1 + 0x150) = 0;
      goto LAB_0105247c;
    }
    uVar3 = 0;
    iVar2 = 2;
  }
  else {
    if (*(int *)(param_1 + 0x158) != 0) {
      uVar3 = 0;
      goto LAB_0105249c;
    }
    (**(code **)(**(long **)(param_1 + 0x150) + 0x70))(*(long **)(param_1 + 0x150),0,0);
    uVar3 = 1;
LAB_0105247c:
    iVar2 = *(int *)(param_1 + 0x158) + 1;
  }
  *(int *)(param_1 + 0x158) = iVar2;
LAB_0105249c:
  uVar1 = FUN_010524c0(*(undefined8 *)(param_1 + 0x148));
  return uVar3 | uVar1 & 1;
}


