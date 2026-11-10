/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01157bd0; name: FUN_01157bd0
 */


void FUN_01157bd0(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar4 = (long *)(param_1 + 0xc0);
  *plVar4 = 0;
  uVar2 = *(uint *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 200) = 0;
  if (uVar2 == 0x13) {
    FUN_0115ed40(*(undefined8 *)(param_1 + 0xa0));
LAB_01157c18:
    uVar2 = *(uint *)(param_1 + 0x78);
  }
  else if (uVar2 == 0x20) {
    FUN_0115a460(*(undefined8 *)(param_1 + 0xa8),1);
    goto LAB_01157c18;
  }
  if (uVar2 < 0x2d) {
    uVar3 = (ulong)uVar2;
    if ((1L << (uVar3 & 0x3f) & 0x1e92e756baeeU) != 0) {
      *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xb0);
      iVar1 = *(int *)(param_1 + 0x7c);
      goto joined_r0x01157c88;
    }
    if ((1L << (uVar3 & 0x3f) & 0x14d18210501U) == 0) {
      if (uVar3 == 0x13) {
        *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0xa0);
        iVar1 = *(int *)(param_1 + 0x7c);
        goto joined_r0x01157c88;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0xa8);
    }
  }
  iVar1 = *(int *)(param_1 + 0x7c);
joined_r0x01157c88:
  if (iVar1 == 0x20) {
    FUN_0115a460(*(undefined8 *)(param_1 + 0xa8),0);
  }
  if (*plVar4 != 0) {
    FUN_00ffa3d0(*plVar4,0);
    (**(code **)(*(long *)*plVar4 + 0xa0))();
  }
  if (*(long *)(param_1 + 200) == 0) {
    return;
  }
  FUN_00ffa3d0(*(long *)(param_1 + 200),0);
  FUN_01160360(*(undefined8 *)(param_1 + 200));
  return;
}


