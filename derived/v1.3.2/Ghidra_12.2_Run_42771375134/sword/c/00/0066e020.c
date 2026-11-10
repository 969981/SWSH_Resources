/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0066e020; name: FUN_0066e020
 */


void FUN_0066e020(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  long local_58;
  
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
  if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (lVar2 = *(long *)(param_1 + 0x28), lVar2 != 0)) {
    local_58 = lVar2;
    FUN_0066def0(*(undefined8 *)(param_1 + 8),&local_58,"../../../../Include\\SiCore/SiCore_Array.h"
                 ,0x5f2);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  puVar6 = (ulong *)(param_1 + 0x10);
  *puVar6 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(long *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(long *)(param_2 + 0x18) == 0) {
    uVar1 = 0;
    lVar2 = *(long *)(param_2 + 0x10);
  }
  else {
    uVar1 = FUN_0066e430(param_1,*(long *)(param_2 + 0x18),1);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      uVar7 = *(ulong *)(param_1 + 0x18);
      uVar1 = *(ulong *)(param_1 + 0x10);
      if (uVar7 < *(ulong *)(param_1 + 0x10)) {
        *puVar6 = uVar7;
        uVar1 = uVar7;
      }
      if (uVar1 != 0) {
        *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
        *(ulong *)(param_1 + 0x38) = *(long *)(param_1 + 0x28) + uVar1 * 0x60;
        lVar2 = *(long *)(param_2 + 0x10);
        goto joined_r0x0066e108;
      }
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    lVar2 = *(long *)(param_2 + 0x10);
  }
joined_r0x0066e108:
  if (lVar2 != 0) {
    uVar7 = 0;
    lVar2 = 0x30;
    do {
      uVar3 = *(ulong *)(param_1 + 0x18);
      lVar5 = *(long *)(param_2 + 0x28);
      if (uVar1 < uVar3) {
LAB_0066e174:
        lVar4 = *(long *)(param_1 + 0x28) + uVar1 * 0x60;
        lVar5 = lVar5 + lVar2;
        FUN_005c80d0(lVar4,lVar5 + -0x30);
        FUN_005c80d0(lVar4 + 0x30,lVar5);
        uVar1 = *(long *)(param_1 + 0x10) + 1;
        *(ulong *)(param_1 + 0x10) = uVar1;
        *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
        *(ulong *)(param_1 + 0x38) = *(long *)(param_1 + 0x28) + uVar1 * 0x60;
      }
      else {
        lVar4 = uVar3 * 2;
        if (lVar4 == 0) {
          lVar4 = 1;
        }
        if (*(long *)(param_1 + 0x40) != 0) {
          lVar4 = *(long *)(param_1 + 0x40) + uVar3;
        }
        uVar1 = FUN_0066e430(param_1,lVar4,1);
        if ((uVar1 & 1) != 0) {
          uVar1 = *puVar6;
          goto LAB_0066e174;
        }
        uVar1 = 0;
        *puVar6 = 0;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      uVar7 = uVar7 + 1;
      lVar2 = lVar2 + 0x60;
    } while (uVar7 < *(ulong *)(param_2 + 0x10));
  }
  return;
}


