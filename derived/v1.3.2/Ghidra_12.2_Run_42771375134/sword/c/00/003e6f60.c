/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e6f60; name: FUN_003e6f60
 */


void FUN_003e6f60(long param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  
  uVar4 = DAT_01d4c464;
  if (*(char *)(param_1 + 0x10e9) == '\0') {
    iVar13 = *(int *)(param_1 + 0x10ac);
    if (iVar13 != 0) {
      puVar10 = (undefined8 *)(*(long *)(param_1 + 0x1080) + (ulong)(iVar13 - 1) * 8);
      lVar5 = *(long *)(param_1 + 0x748);
      do {
        while( true ) {
          lVar11 = FUN_003bd8a0(*puVar10);
          if ((*(ushort *)(lVar11 + 0xb4) >> 7 & 1) != 0) break;
          if ((*(byte *)(*(long *)(lVar5 + 200) + (ulong)(*(uint *)(lVar11 + 0xb0) >> 6) * 0x20 + 4)
               >> 1 & 1) != 0) {
            FUN_003f3bb0(param_1 + 0x1078,puVar10);
            FUN_003c00a0(uVar4,lVar11);
          }
          iVar13 = iVar13 + -1;
          puVar10 = puVar10 + -1;
          if (iVar13 == 0) goto LAB_003e7090;
        }
        *(ushort *)(lVar11 + 0xb4) = *(ushort *)(lVar11 + 0xb4) & 0xffdf;
        FUN_003f3bb0(param_1 + 0x1078,puVar10);
        iVar13 = iVar13 + -1;
        puVar10 = puVar10 + -1;
      } while (iVar13 != 0);
    }
LAB_003e7090:
    *(char *)(param_1 + 0x10e9) = '\x01';
    cVar3 = *(char *)(param_1 + 0x10e8);
  }
  else {
    cVar3 = *(char *)(param_1 + 0x10e8);
  }
  if (cVar3 == '\0') {
    iVar13 = *(int *)(param_1 + 0x10e4);
    if (iVar13 != 0) {
      puVar10 = (undefined8 *)(*(long *)(param_1 + 0x10b8) + (ulong)(iVar13 - 1) * 8);
      do {
        lVar5 = FUN_003bd8a0(*puVar10);
        if ((*(byte *)(lVar5 + 0xb4) >> 6 & 1) != 0) {
          FUN_003f3bb0(param_1 + 0x10b0,puVar10);
        }
        iVar13 = iVar13 + -1;
        puVar10 = puVar10 + -1;
      } while (iVar13 != 0);
    }
    *(undefined1 *)(param_1 + 0x10e8) = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x10ac);
  uVar14 = (ulong)uVar1;
  uVar2 = *(uint *)(param_1 + 0x10e4);
  uVar12 = (ulong)uVar2;
  uVar15 = uVar2;
  if (uVar2 <= uVar1) {
    uVar15 = uVar1;
  }
  if (uVar15 == 0) {
    FUN_003df520(param_1);
    return;
  }
  plVar6 = (long *)FUN_00400d30();
  lVar5 = (**(code **)(*plVar6 + 0x10))
                    (plVar6,(ulong)uVar15 << 3,"NonTrackedAlloc",
                     "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScScene.cpp"
                     ,0x129a);
  if ((uVar1 != 0) && (lVar5 != 0)) {
    plVar6 = *(long **)(param_1 + 0x1080);
    uVar9 = 0;
    uVar15 = 0xff;
    do {
      while( true ) {
        lVar11 = *plVar6;
        uVar1 = *(uint *)(lVar11 + 8) >> 0x18;
        if (uVar15 == uVar1) break;
        if (((int)uVar9 != 0) &&
           (plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 0x10f0) + (ulong)uVar1 * 8) + 0x48),
           plVar8 != (long *)0x0)) {
          (**(code **)(*plVar8 + 0x10))(plVar8,lVar5);
        }
        uVar9 = 0;
        uVar16 = uVar9;
        uVar15 = uVar1;
        if ((*(byte *)(lVar11 + 0xc) >> 2 & 1) == 0) goto LAB_003e7168;
LAB_003e717c:
        uVar7 = FUN_003d9790(lVar11);
        uVar9 = (ulong)((int)uVar16 + 1);
        *(undefined8 *)(lVar5 + uVar16 * 8) = uVar7;
        plVar6 = plVar6 + 1;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) goto LAB_003e7198;
      }
      uVar16 = uVar9;
      if ((*(byte *)(lVar11 + 0xc) >> 2 & 1) != 0) goto LAB_003e717c;
LAB_003e7168:
      plVar6 = plVar6 + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
LAB_003e7198:
    if (((int)uVar9 != 0) &&
       (plVar6 = *(long **)(*(long *)(*(long *)(param_1 + 0x10f0) + (ulong)uVar15 * 8) + 0x48),
       plVar6 != (long *)0x0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6,lVar5);
    }
  }
  if ((uVar2 != 0) && (lVar5 != 0)) {
    plVar6 = *(long **)(param_1 + 0x10b8);
    uVar14 = 0;
    uVar15 = 0xff;
    do {
      while( true ) {
        lVar11 = *plVar6;
        uVar1 = *(uint *)(lVar11 + 8) >> 0x18;
        if (uVar15 == uVar1) break;
        if (((int)uVar14 != 0) &&
           (plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 0x10f0) + (ulong)uVar1 * 8) + 0x48),
           plVar8 != (long *)0x0)) {
          (**(code **)(*plVar8 + 8))(plVar8,lVar5);
        }
        uVar14 = 0;
        uVar9 = uVar14;
        uVar15 = uVar1;
        if ((*(byte *)(lVar11 + 0xc) >> 2 & 1) == 0) goto LAB_003e7238;
LAB_003e724c:
        uVar7 = FUN_003d9790(lVar11);
        uVar14 = (ulong)((int)uVar9 + 1);
        *(undefined8 *)(lVar5 + uVar9 * 8) = uVar7;
        plVar6 = plVar6 + 1;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) goto LAB_003e7268;
      }
      uVar9 = uVar14;
      if ((*(byte *)(lVar11 + 0xc) >> 2 & 1) != 0) goto LAB_003e724c;
LAB_003e7238:
      plVar6 = plVar6 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
LAB_003e7268:
    if (((int)uVar14 != 0) &&
       (plVar6 = *(long **)(*(long *)(*(long *)(param_1 + 0x10f0) + (ulong)uVar15 * 8) + 0x48),
       plVar6 != (long *)0x0)) {
      (**(code **)(*plVar6 + 8))(plVar6,lVar5);
    }
  }
  FUN_003df520(param_1);
  if (lVar5 == 0) {
    return;
  }
  plVar6 = (long *)FUN_00400d30();
                    /* WARNING: Could not recover jumptable at 0x003e72c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,lVar5);
  return;
}


