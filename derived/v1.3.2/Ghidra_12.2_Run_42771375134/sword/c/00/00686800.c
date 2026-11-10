/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00686800; name: FUN_00686800
 */


void FUN_00686800(undefined8 param_1,long param_2,long *param_3)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  iVar2 = (**(code **)(*param_3 + 0x78))(param_3);
  if (0 < iVar2) {
    lVar6 = 0;
    do {
      uVar3 = (**(code **)(*param_3 + 0x80))(param_3,lVar6);
      uVar4 = *(ulong *)(param_2 + 0x10);
      uVar1 = *(ulong *)(param_2 + 0x18);
      if (uVar4 < uVar1) {
LAB_00686894:
        *(undefined8 *)(*(long *)(param_2 + 0x28) + uVar4 * 8) = uVar3;
        lVar5 = *(long *)(param_2 + 0x10) + 1;
        *(long *)(param_2 + 0x10) = lVar5;
        *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x28);
        *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x28) + lVar5 * 8;
      }
      else {
        lVar5 = uVar1 * 2;
        if (lVar5 == 0) {
          lVar5 = 1;
        }
        if (*(long *)(param_2 + 0x40) != 0) {
          lVar5 = *(long *)(param_2 + 0x40) + uVar1;
        }
        uVar4 = FUN_006870f0(param_2,lVar5,1);
        if ((uVar4 & 1) != 0) {
          uVar4 = *(ulong *)(param_2 + 0x10);
          goto LAB_00686894;
        }
        *(undefined8 *)(param_2 + 0x10) = 0;
        *(undefined8 *)(param_2 + 0x30) = 0;
        *(undefined8 *)(param_2 + 0x38) = 0;
      }
      lVar6 = lVar6 + 1;
      iVar2 = (**(code **)(*param_3 + 0x78))(param_3);
    } while (lVar6 < iVar2);
  }
  iVar2 = (**(code **)(*param_3 + 0x60))(param_3);
  if (0 < iVar2) {
    lVar6 = 0;
    do {
      uVar3 = (**(code **)(*param_3 + 0x68))(param_3,lVar6);
      uVar4 = *(ulong *)(param_2 + 0x10);
      uVar1 = *(ulong *)(param_2 + 0x18);
      if (uVar4 < uVar1) {
LAB_00686950:
        *(undefined8 *)(*(long *)(param_2 + 0x28) + uVar4 * 8) = uVar3;
        lVar5 = *(long *)(param_2 + 0x10) + 1;
        *(long *)(param_2 + 0x10) = lVar5;
        *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x28);
        *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x28) + lVar5 * 8;
      }
      else {
        lVar5 = uVar1 * 2;
        if (lVar5 == 0) {
          lVar5 = 1;
        }
        if (*(long *)(param_2 + 0x40) != 0) {
          lVar5 = *(long *)(param_2 + 0x40) + uVar1;
        }
        uVar4 = FUN_006870f0(param_2,lVar5,1);
        if ((uVar4 & 1) != 0) {
          uVar4 = *(ulong *)(param_2 + 0x10);
          goto LAB_00686950;
        }
        *(undefined8 *)(param_2 + 0x10) = 0;
        *(undefined8 *)(param_2 + 0x30) = 0;
        *(undefined8 *)(param_2 + 0x38) = 0;
      }
      FUN_00686800(param_1,param_2,uVar3);
      lVar6 = lVar6 + 1;
      iVar2 = (**(code **)(*param_3 + 0x60))(param_3);
    } while (lVar6 < iVar2);
  }
  return;
}


