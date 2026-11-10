/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c73a0; name: FUN_014c73a0
 */


ulong FUN_014c73a0(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (param_2 == 0xfd) {
    lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    lVar8 = *(long *)(lVar5 + 0x58);
    if (lVar8 == 0) {
      uVar10 = FUN_00884820(0);
    }
    else {
      plVar7 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      uVar10 = FUN_00884820(lVar8);
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    uVar1 = 0;
    if ((uVar10 & 0xfe) != 0) {
      uVar1 = 0x40;
    }
    param_2 = 0xfd;
LAB_014c7504:
    uVar4 = 0;
    uVar10 = 0;
    uVar2 = 0x20000;
  }
  else {
    if (param_2 == 0xfe) {
      param_2 = *(uint *)(param_1 + 0x22c);
    }
    else if (param_2 == 0xff) {
      lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
      if (lVar5 == 0) {
        uVar1 = FUN_01524bf0(0);
      }
      else {
        plVar7 = (long *)(lVar5 + 0x48);
        (**(code **)(*plVar7 + 0x10))(plVar7);
        uVar1 = FUN_01524bf0(lVar5);
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
      uVar1 = uVar1 & 3;
      param_2 = 0xff;
      goto LAB_014c7504;
    }
    if (*(uint *)(param_1 + 0x198) <= param_2) {
      uVar9 = 0;
      uVar10 = 0;
      goto LAB_014c75a0;
    }
    lVar5 = *(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18;
    uVar1 = *(uint *)(lVar5 + 8);
    uVar10 = (ulong)*(uint *)(lVar5 + 0xc);
    uVar4 = uVar1 & 0xff000000;
    uVar2 = uVar1 & 0xff0000;
  }
  uVar4 = *(uint *)(param_1 + 0x234) & *(uint *)(param_1 + 0x23c) |
          (uVar2 | uVar4 | uVar1 & 0xffff) & ~*(uint *)(param_1 + 0x23c);
  uVar9 = (ulong)uVar4;
  uVar2 = uVar4 >> 0x10;
  uVar1 = uVar2;
  if ((uVar4 & 0x40) != 0) {
    uVar1 = uVar2 & 0xffe7 | 4;
  }
  uVar11 = uVar9 & 0xff000000;
  if ((uVar4 & 0x20) != 0) {
    uVar1 = uVar2 & 0xffe3 | 8;
  }
  if ((uVar1 >> 1 & 1) == 0) {
    uVar6 = *(undefined8 *)PTR_DAT_02710898;
    uVar3 = FUN_0077d470(*(undefined8 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18));
    uVar2 = FUN_014bbcf0(uVar6,uVar3);
    uVar9 = (ulong)(uVar4 & 0xffe0 | uVar4 & 3 | (uVar2 & 7) << 2);
  }
  uVar9 = uVar11 | ((ulong)uVar1 & 0xff) << 0x10 | uVar9 & 0xffff;
LAB_014c75a0:
  return uVar9 | uVar10 << 0x20;
}


