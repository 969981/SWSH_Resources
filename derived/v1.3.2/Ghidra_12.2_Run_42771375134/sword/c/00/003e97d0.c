/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e97d0; name: FUN_003e97d0
 */


void FUN_003e97d0(long param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 local_28;
  
  uVar2 = *(uint *)(param_1 + 0x28);
  if ((*(byte *)(param_1 + 0x110e) >> 1 & 1) == 0) {
    plVar9 = *(long **)(param_1 + 0x20);
    lVar10 = *(long *)(param_1 + 0x10f0);
    uVar3 = *(uint *)(param_1 + 0x10f8);
  }
  else {
    plVar9 = (long *)(*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x30) * 8);
    uVar2 = uVar2 - *(uint *)(param_1 + 0x30);
    lVar10 = *(long *)(param_1 + 0x10f0);
    uVar3 = *(uint *)(param_1 + 0x10f8);
  }
  if (uVar3 != 0) {
    uVar8 = (ulong)uVar3;
    if (uVar8 - 1 < 3) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      plVar7 = (long *)(lVar10 + 0x10);
      do {
        *(undefined4 *)(plVar7[-2] + 0x18) = 0;
        *(undefined4 *)(plVar7[-1] + 0x18) = 0;
        *(undefined4 *)(*plVar7 + 0x18) = 0;
        plVar1 = plVar7 + 1;
        lVar6 = lVar6 + 4;
        plVar7 = plVar7 + 4;
        *(undefined4 *)(*plVar1 + 0x18) = 0;
      } while (uVar8 - (uVar8 & 3) != lVar6);
    }
    if ((uVar3 & 3) != 0) {
      lVar5 = -(uVar8 & 3);
      plVar7 = (long *)(lVar10 + lVar6 * 8);
      do {
        lVar5 = lVar5 + 1;
        *(undefined4 *)(*plVar7 + 0x18) = 0;
        plVar7 = plVar7 + 1;
      } while (lVar5 != 0);
    }
  }
  if (uVar2 != 0) {
    uVar8 = (ulong)uVar2;
    do {
      while (iVar4 = FUN_003bead0(*plVar9), iVar4 == 0) {
        local_28 = FUN_003d9790(*plVar9);
        lVar6 = *(long *)(lVar10 + (ulong)*(byte *)(*plVar9 + 0xb) * 8);
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (uVar2 < (*(uint *)(lVar6 + 0x1c) & 0x7fffffff)) {
          *(undefined8 *)(*(long *)(lVar6 + 0x10) + (ulong)uVar2 * 8) = local_28;
          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
          break;
        }
        FUN_001c70f0(lVar6 + 0x10,&local_28);
        plVar9 = plVar9 + 1;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) {
          return;
        }
      }
      uVar8 = uVar8 - 1;
      plVar9 = plVar9 + 1;
    } while (uVar8 != 0);
  }
  return;
}


