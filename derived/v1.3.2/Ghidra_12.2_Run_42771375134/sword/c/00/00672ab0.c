/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00672ab0; name: FUN_00672ab0
 */


undefined8 FUN_00672ab0(long param_1,long *param_2,int param_3)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int local_58;
  int local_54;
  
  uVar3 = FUN_00672cf0();
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  uVar3 = (ulong)local_58;
  if (*(ulong *)(param_1 + 0x108) == uVar3) {
LAB_00672b30:
    if (0 < local_58) {
      lVar6 = 0;
      lVar7 = 0;
      do {
        FUN_00682fc0(param_2,(long)param_3);
        lVar1 = *(long *)(param_1 + 0x120) + lVar6;
        (**(code **)(*param_2 + 0x118))(param_2,lVar1,1);
        FUN_00682fc0(param_2,(long)param_3);
        uVar2 = (**(code **)(*param_2 + 0xf8))(param_2,1);
        *(undefined4 *)(lVar1 + 0x30) = uVar2;
        uVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
        *(undefined4 *)(lVar1 + 0x38) = uVar2;
        uVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
        *(undefined4 *)(lVar1 + 0x3c) = uVar2;
        uVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
        *(undefined4 *)(lVar1 + 0x40) = uVar2;
        uVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
        *(undefined4 *)(lVar1 + 0x44) = uVar2;
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + 0x48;
      } while (lVar7 < *(int *)(param_1 + 0x108));
    }
    if (*(long *)(param_1 + 0xb8) == (long)local_54) goto joined_r0x00672c90;
  }
  else {
    if ((uVar3 < *(ulong *)(param_1 + 0x110)) ||
       (uVar4 = FUN_00674140(param_1 + 0xf8,uVar3,1), (uVar4 & 1) != 0)) {
      *(ulong *)(param_1 + 0x108) = uVar3;
      if (local_58 != 0) {
        *(long *)(param_1 + 0x128) = *(long *)(param_1 + 0x120);
        *(ulong *)(param_1 + 0x130) = *(long *)(param_1 + 0x120) + uVar3 * 0x48;
        goto LAB_00672b30;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x108) = 0;
    }
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
    if (*(long *)(param_1 + 0xb8) == (long)local_54) goto joined_r0x00672c90;
  }
  uVar3 = (ulong)local_54;
  if ((uVar3 < *(ulong *)(param_1 + 0xc0)) ||
     (uVar4 = FUN_00673a40(param_1 + 0xa8,uVar3,1), (uVar4 & 1) != 0)) {
    *(ulong *)(param_1 + 0xb8) = uVar3;
    if (local_54 == 0) {
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      return 1;
    }
    *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd0);
    *(ulong *)(param_1 + 0xe0) = *(long *)(param_1 + 0xd0) + uVar3 * 8;
  }
  else {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
joined_r0x00672c90:
  if (0 < local_54) {
    iVar5 = 0;
    do {
      FUN_00672e20(param_1,param_2,param_3);
      iVar5 = iVar5 + 1;
    } while (local_54 != iVar5);
  }
  return 1;
}


