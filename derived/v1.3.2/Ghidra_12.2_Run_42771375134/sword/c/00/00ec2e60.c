/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ec2e60; name: FUN_00ec2e60
 */


void FUN_00ec2e60(long param_1,int *param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  undefined1 auStack_28 [8];
  
  iVar3 = *param_2;
  if (1 < iVar3) {
    iVar3 = 2;
  }
  *(int *)(param_1 + 0x58) = iVar3;
  lVar2 = *(long *)PTR_DAT_02710848;
  *(long *)(param_1 + 0x60) = lVar2;
  lVar2 = *(long *)(lVar2 + 0x68);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  *(long *)(param_1 + 0x68) = lVar2;
  puVar1 = PTR_DAT_0271f740;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 4);
  lVar2 = FUN_00ec9940(auStack_28,*(undefined8 *)(*(long *)puVar1 + 8));
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x130) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x130) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  *(long *)(param_1 + 0x130) = lVar2;
  return;
}


