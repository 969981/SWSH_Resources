/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ded10; name: FUN_003ded10
 */


void FUN_003ded10(long param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  long *plVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_90 [26];
  undefined2 local_76;
  undefined8 local_70;
  undefined4 local_68;
  
  if ((param_2 & 1) == 0) {
    uVar8 = 0x11;
    if (*(int *)(param_1 + 0x860) == *(int *)(*(long *)(param_1 + 0x1118) + 0x38)) {
      uVar8 = 1;
    }
    lVar10 = *(long *)(param_1 + 0x1048);
    uVar2 = *(uint *)(lVar10 + 0x10);
  }
  else {
    uVar8 = 1;
    lVar10 = *(long *)(param_1 + 0x1048);
    uVar2 = *(uint *)(lVar10 + 0x10);
  }
  if (uVar2 != 0) {
    lVar10 = *(long *)(lVar10 + 8);
    uVar9 = 0;
    do {
      if (uVar9 < uVar2 - 1) {
        Hint_Prefetch(*(undefined8 *)(lVar10 + uVar9 * 8 + 8),0,0,0);
      }
      lVar13 = *(long *)(lVar10 + uVar9 * 8);
      lVar12 = *(long *)(lVar13 + 0x18);
      uVar1 = uVar9 + 1;
      if ((*(byte *)(lVar12 + 10) >> 1 & 1) == 0) {
        if (uVar1 < uVar2) {
          uVar9 = *(ulong *)(*(long *)(lVar10 + uVar9 * 8 + 8) + 0x18);
          Hint_Prefetch(uVar9,0,0,0);
        }
        local_76 = 0;
        FUN_003e6630(uVar9,param_1,auStack_90,lVar13,lVar12,uVar8);
        lVar13 = *(long *)(lVar13 + 0x18);
        bVar3 = *(byte *)(lVar13 + 0x28);
        lVar11 = *(long *)(*(long *)(param_1 + 0x10f0) + (ulong)bVar3 * 8);
        bVar4 = *(byte *)(lVar13 + 0x29);
        bVar5 = *(byte *)(lVar13 + 0x2a);
        plVar7 = *(long **)(lVar11 + 0x48);
        if ((plVar7 != (long *)0x0) &&
           ((bVar3 == bVar4 ||
            (((*(byte *)(lVar13 + 0x2b) & *(byte *)(lVar11 + 0x40)) >> 1 & 1) != 0)))) {
          (**(code **)(*plVar7 + 0x18))(plVar7,auStack_90,local_70,local_68);
        }
        if (bVar3 != bVar4) {
          lVar13 = *(long *)(*(long *)(param_1 + 0x10f0) + (ulong)bVar4 * 8);
          plVar7 = *(long **)(lVar13 + 0x48);
          if ((plVar7 != (long *)0x0) && (((bVar5 & *(byte *)(lVar13 + 0x40)) >> 1 & 1) != 0)) {
            (**(code **)(*plVar7 + 0x18))(plVar7,auStack_90,local_70,local_68);
          }
        }
        *(undefined2 *)(lVar12 + 4) = *(undefined2 *)(lVar12 + 6);
        uVar6 = *(ushort *)(lVar12 + 8) >> 4;
        if ((*(ushort *)(lVar12 + 8) & 0xf) != 0) {
          uVar6 = uVar6 + 1;
        }
        *(ushort *)(lVar12 + 10) = *(ushort *)(lVar12 + 10) & 0x1f | uVar6 << 5;
      }
      uVar9 = uVar1;
    } while (uVar2 != uVar1);
  }
  return;
}


