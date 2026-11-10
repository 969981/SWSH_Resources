/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f8080; name: FUN_004f8080
 */


/* WARNING: Removing unreachable block (ram,0x004f8148) */

ulong FUN_004f8080(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  
  puVar4 = PTR_DAT_027137e0;
  puVar3 = PTR_DAT_027137c8;
  uVar1 = *(uint *)(PTR_DAT_027137e0 + 8);
  if (uVar1 != 0) {
    uVar11 = 0;
    do {
      if (*(long *)(*(long *)PTR_DAT_027137e0 + uVar11 * 8) == 0) goto LAB_004f81f0;
      uVar12 = (int)uVar11 + 1;
      uVar11 = (ulong)uVar12;
    } while (uVar12 < uVar1);
  }
  uVar12 = *(uint *)(PTR_DAT_027137e0 + 0xc);
  if (uVar1 < uVar12) goto LAB_004f81b8;
  uVar12 = uVar12 + 1;
  puVar7 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_027137c8,(ulong)uVar12 << 3);
  if (puVar7 == (undefined8 *)0x0) {
    return 0xffffffff;
  }
  puVar9 = *(undefined8 **)puVar4;
  if ((puVar9 != (undefined8 *)0x0) && (puVar9 != puVar7)) {
    uVar2 = *(uint *)(puVar4 + 8);
    if (uVar2 != 0) {
      *puVar7 = *puVar9;
      if (uVar2 != 1) {
        if (uVar2 == 2) {
          lVar10 = 1;
        }
        else {
          lVar5 = 0;
          do {
            lVar10 = lVar5;
            puVar7[lVar10 + 1] = *(undefined8 *)(*(long *)puVar4 + lVar10 * 8 + 8);
            puVar7[lVar10 + 2] = *(undefined8 *)(*(long *)puVar4 + lVar10 * 8 + 0x10);
            lVar5 = lVar10 + 2;
          } while (((ulong)uVar2 - 1) - (ulong)(~uVar2 & 1) != lVar10 + 2);
          lVar10 = lVar10 + 3;
          if ((~uVar2 & 1) == 0) goto LAB_004f81a4;
        }
        puVar7[lVar10] = *(undefined8 *)(*(long *)puVar4 + lVar10 * 8);
      }
LAB_004f81a4:
      puVar9 = *(undefined8 **)puVar4;
    }
    FUN_00404870(*(undefined4 *)puVar3,puVar9);
  }
  *(undefined8 **)puVar4 = puVar7;
  *(uint *)(puVar4 + 0xc) = uVar12;
LAB_004f81b8:
  if (uVar1 < uVar12) {
    puVar7 = (undefined8 *)(*(long *)puVar4 + (ulong)*(uint *)(puVar4 + 8) * 8);
    *(uint *)(puVar4 + 8) = *(uint *)(puVar4 + 8) + 1;
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      uVar11 = (ulong)(*(uint *)(puVar4 + 8) - 1);
      *(undefined8 *)(*(long *)puVar4 + (ulong)*(uint *)(puVar4 + 8) * 8 + -8) = 0;
LAB_004f81f0:
      if ((*(uint *)(param_1 + 0x18) & 1) == 0) {
        if ((*(uint *)(param_1 + 0x18) >> 1 & 1) == 0) {
          return 0xffffffff;
        }
        plVar8 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_027137c8,0x648);
        if (plVar8 == (long *)0x0) {
          return 0xffffffff;
        }
        FUN_005012d0(plVar8,param_2);
      }
      else {
        plVar8 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_027137c8,0x640);
        if (plVar8 == (long *)0x0) {
          return 0xffffffff;
        }
        FUN_004fffa0(plVar8,param_2);
      }
      iVar6 = (**(code **)(*plVar8 + 0x28))(plVar8,param_1,uVar11);
      if (iVar6 == 1) {
        *(long **)(*(long *)puVar4 + uVar11 * 8) = plVar8;
        return uVar11;
      }
      (**(code **)(*plVar8 + 0x30))(plVar8);
    }
  }
  return 0xffffffff;
}


