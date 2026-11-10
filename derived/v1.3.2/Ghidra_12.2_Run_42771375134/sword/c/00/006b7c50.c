/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b7c50; name: FUN_006b7c50
 */


float FUN_006b7c50(float param_1,undefined8 *param_2)

{
  uint uVar1;
  int *piVar2;
  ulong uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  piVar2 = (int *)*param_2;
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x13) ||
     (uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[9], uVar3 == 0)) {
    iVar4 = 0;
    uVar3 = FUN_006b47f0(param_2 + 0x15);
    if ((uVar3 & 1) == 0) goto LAB_006b7ca4;
LAB_006b7ce4:
    fVar7 = (float)FUN_006b4930(param_2 + 0x15);
  }
  else {
    iVar4 = *(int *)((long)piVar2 + uVar3);
    uVar3 = FUN_006b47f0(param_2 + 0x15);
    if ((uVar3 & 1) != 0) goto LAB_006b7ce4;
LAB_006b7ca4:
    piVar2 = (int *)*param_2;
    fVar7 = 0.0;
    if ((10 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
       (uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5], uVar3 != 0)) {
      fVar7 = *(float *)((long)piVar2 + uVar3);
    }
  }
  fVar5 = (float)FUN_006b7d80(param_2[0x10]);
  if (fVar7 * fVar5 == 0.0) {
    return 1.0;
  }
  if (iVar4 == 0) {
    fVar6 = (float)FUN_006b6670(param_2[0xf]);
    uVar1 = FUN_006b66c0(param_2[0xf]);
    param_1 = *(float *)(param_2 + 0x11) + fVar6 * (float)uVar1 * param_1;
  }
  else {
    if (iVar4 != 1) {
      param_1 = *(float *)(param_2 + 0x11);
      goto LAB_006b7d58;
    }
    param_1 = *(float *)(param_2 + 0x11) + param_1;
  }
  *(float *)(param_2 + 0x11) = param_1;
LAB_006b7d58:
  return param_1 / (fVar7 * fVar5);
}


