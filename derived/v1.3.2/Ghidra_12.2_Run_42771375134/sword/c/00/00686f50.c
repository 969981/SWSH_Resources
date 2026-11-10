/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00686f50; name: FUN_00686f50
 */


void FUN_00686f50(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  if (*(long *)(param_2 + 0x18) == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    return;
  }
  plVar1 = (long *)(param_1 + 0x28);
  if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (*plVar1 != 0)) {
    plVar2 = *(long **)(param_1 + 8);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  puVar7 = (ulong *)(param_1 + 0x10);
  *puVar7 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(long *)(param_2 + 0x18) == 0) {
    uVar3 = 0;
    lVar4 = *(long *)(param_2 + 0x10);
  }
  else {
    uVar3 = FUN_006870f0(param_1,*(long *)(param_2 + 0x18),1);
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      uVar8 = *(ulong *)(param_1 + 0x18);
      uVar3 = *(ulong *)(param_1 + 0x10);
      if (uVar8 < *(ulong *)(param_1 + 0x10)) {
        *puVar7 = uVar8;
        uVar3 = uVar8;
      }
      if (uVar3 != 0) {
        *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
        *(ulong *)(param_1 + 0x38) = *(long *)(param_1 + 0x28) + uVar3 * 8;
        lVar4 = *(long *)(param_2 + 0x10);
        goto joined_r0x00687030;
      }
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    lVar4 = *(long *)(param_2 + 0x10);
  }
joined_r0x00687030:
  if (lVar4 != 0) {
    uVar8 = 0;
    do {
      uVar5 = *(ulong *)(param_1 + 0x18);
      lVar4 = *(long *)(param_2 + 0x28);
      if (uVar3 < uVar5) {
LAB_00687094:
        *(undefined8 *)(*(long *)(param_1 + 0x28) + uVar3 * 8) = *(undefined8 *)(lVar4 + uVar8 * 8);
        uVar3 = *(long *)(param_1 + 0x10) + 1;
        *(ulong *)(param_1 + 0x10) = uVar3;
        *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
        *(ulong *)(param_1 + 0x38) = *(long *)(param_1 + 0x28) + uVar3 * 8;
      }
      else {
        lVar6 = uVar5 * 2;
        if (lVar6 == 0) {
          lVar6 = 1;
        }
        if (*(long *)(param_1 + 0x40) != 0) {
          lVar6 = *(long *)(param_1 + 0x40) + uVar5;
        }
        uVar3 = FUN_006870f0(param_1,lVar6,1);
        if ((uVar3 & 1) != 0) {
          uVar3 = *puVar7;
          goto LAB_00687094;
        }
        uVar3 = 0;
        *puVar7 = 0;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ulong *)(param_2 + 0x10));
  }
  return;
}


