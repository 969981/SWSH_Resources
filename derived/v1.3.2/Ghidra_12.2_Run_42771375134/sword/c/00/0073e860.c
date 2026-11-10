/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0073e860; name: FUN_0073e860
 */


void FUN_0073e860(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (((*(long **)(param_1 + 8) == (long *)0x0) ||
      (uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x58))(), (uVar1 & 1) != 0)) ||
     (*(int *)(param_1 + 0x18) != 0)) {
    lVar8 = *(long *)(param_1 + 0x6d8);
    lVar3 = param_1 + 0x20;
    if (lVar8 == *(long *)(param_1 + 0x6e0)) {
      FUN_007421a0(param_1 + 0x6d0,lVar3);
      lVar8 = *(long *)(param_1 + 0x760);
      if (lVar8 == *(long *)(param_1 + 0x758)) {
LAB_0073e9c0:
        FUN_0073c500(lVar3,*(undefined8 *)(param_1 + 0x10));
        return;
      }
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x6e8);
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_0073ea64:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar5;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      uVar1 = *(ulong *)(param_1 + 0x5f0);
      *(ulong *)(lVar8 + 0x5d0) = uVar1;
      if (3 < uVar1) goto LAB_0073ea64;
      lVar9 = *(long *)(param_1 + 0x5f0);
      if (lVar9 != 0) {
        lVar6 = lVar3;
        lVar7 = lVar8;
        do {
          lVar9 = lVar9 + -1;
          FUN_0071c9a0(lVar7,lVar6);
          lVar6 = lVar6 + 0x1f0;
          lVar7 = lVar7 + 0x1f0;
        } while (lVar9 != 0);
      }
      lVar9 = *(long *)(param_1 + 0x600);
      *(long *)(lVar8 + 0x5e0) = lVar9;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
      }
      lVar9 = *(long *)(param_1 + 0x608);
      *(long *)(lVar8 + 0x5e8) = lVar9;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
      }
      *(undefined4 *)(lVar8 + 0x5f0) = *(undefined4 *)(param_1 + 0x610);
      lVar9 = *(long *)(param_1 + 0x618);
      *(long *)(lVar8 + 0x5f8) = lVar9;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
      }
      lVar9 = *(long *)(param_1 + 0x620);
      *(long *)(lVar8 + 0x600) = lVar9;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
      }
      memcpy((void *)(lVar8 + 0x608),(void *)(param_1 + 0x628),0xa4);
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      *(long *)(param_1 + 0x6d8) = *(long *)(param_1 + 0x6d8) + 0x6b0;
      lVar8 = *(long *)(param_1 + 0x760);
      if (lVar8 == *(long *)(param_1 + 0x758)) goto LAB_0073e9c0;
    }
    lVar3 = *(long *)(lVar8 + -8);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar8 = *(long *)(param_1 + 0x608);
    *(long *)(param_1 + 0x608) = lVar3;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    plVar4 = (long *)(*(long *)(param_1 + 0x760) + -8);
    if (*plVar4 != 0) {
      (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
      *plVar4 = 0;
    }
    *(long **)(param_1 + 0x760) = plVar4;
  }
  return;
}


