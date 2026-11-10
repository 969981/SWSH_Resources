/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006445f0; name: FUN_006445f0
 */


undefined8 FUN_006445f0(long param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x28) = iVar1 + 1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    lVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x108))();
    fVar3 = *(float *)(lVar2 + 0x34);
    lVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x108))();
    FUN_005ee0d0(&local_60,(float)(int)fVar3,(float)(int)*(float *)(lVar2 + 0x38),0x3f800000,
                 0x40000000);
    *(undefined8 *)(param_1 + 0xe8) = uStack_58;
    *(undefined8 *)(param_1 + 0xe0) = local_60;
    *(undefined8 *)(param_1 + 0xf8) = uStack_48;
    *(undefined8 *)(param_1 + 0xf0) = uStack_50;
    *(undefined8 *)(param_1 + 0x108) = uStack_38;
    *(undefined8 *)(param_1 + 0x100) = local_40;
    *(undefined8 *)(param_1 + 0x118) = uStack_28;
    *(undefined8 *)(param_1 + 0x110) = uStack_30;
    return 1;
  }
  return 1;
}


