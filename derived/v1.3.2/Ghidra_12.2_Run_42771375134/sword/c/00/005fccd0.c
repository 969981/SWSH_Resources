/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005fccd0; name: FUN_005fccd0
 */


void FUN_005fccd0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  if (*(char *)(param_1 + 0x398) != '\0') {
    (**(code **)PTR_DAT_02714488)(param_1 + 0x348,0xffffffffffffffff);
    if (*(long *)(param_1 + 0x198) != 0) {
      (**(code **)PTR_DAT_027144a0)();
      if (*(long *)(param_1 + 0x198) != 0) {
        plVar2 = *(long **)(param_1 + 0x10);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x48))
                    (plVar2,*(long *)(param_1 + 0x198),
                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Canvas_Impl.cpp"
                     ,0x1d3);
        }
        *(undefined8 *)(param_1 + 0x198) = 0;
      }
    }
    puVar1 = PTR_DAT_02714490;
    plVar2 = (long *)(param_1 + 0x1c8);
    if (0 < *(int *)(param_1 + 0x98)) {
      lVar7 = 0;
      lVar8 = 0;
      puVar9 = (undefined8 *)(param_1 + 0x248);
      do {
        if (*(long *)(*plVar2 + lVar7) != 0) {
          (**(code **)puVar1)();
          lVar4 = *(long *)(*plVar2 + lVar7);
          if (lVar4 != 0) {
            plVar3 = *(long **)(param_1 + 0x10);
            if (plVar3 == (long *)0x0) {
              puVar6 = (undefined8 *)(*plVar2 + lVar8 * 8);
            }
            else {
              (**(code **)(*plVar3 + 0x48))
                        (plVar3,lVar4,
                         "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Canvas_Impl.cpp"
                         ,0x1db);
              puVar6 = (undefined8 *)(*plVar2 + lVar7);
            }
            *puVar6 = 0;
          }
          lVar4 = *(long *)(*(long *)(param_1 + 0x218) + lVar7);
          if (lVar4 != 0) {
            plVar3 = *(long **)(param_1 + 0x10);
            if (plVar3 == (long *)0x0) {
              puVar6 = (undefined8 *)(*(long *)(param_1 + 0x218) + lVar8 * 8);
            }
            else {
              (**(code **)(*plVar3 + 0x48))
                        (plVar3,lVar4,
                         "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Canvas_Impl.cpp"
                         ,0x1dc);
              puVar6 = (undefined8 *)(*(long *)(param_1 + 0x218) + lVar7);
            }
            *puVar6 = 0;
          }
        }
        FUN_006530c0(*(undefined8 *)(param_1 + 0x240),*puVar9);
        *puVar9 = 0;
        puVar9[1] = 0;
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 8;
        puVar9 = puVar9 + 2;
      } while (lVar8 < *(int *)(param_1 + 0x98));
    }
    if (((*(byte *)(param_1 + 0x1e8) & 1) == 0) && (*plVar2 != 0)) {
      plVar3 = *(long **)(param_1 + 0x1a8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x48))
                  (plVar3,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *plVar2 = 0;
    }
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    plVar3 = (long *)(param_1 + 0x218);
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *plVar2 = 0;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    if (((*(byte *)(param_1 + 0x238) & 1) == 0) && (*plVar3 != 0)) {
      plVar2 = *(long **)(param_1 + 0x1f8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,*plVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *plVar3 = 0;
    }
    *(undefined8 *)(param_1 + 0x208) = 0;
    *(undefined8 *)(param_1 + 0x200) = 0;
    *(undefined8 *)(param_1 + 0x238) = 0;
    *plVar3 = 0;
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined8 *)(param_1 + 0x228) = 0;
    (**(code **)PTR_DAT_027144a8)(param_1 + 0x348);
    *(undefined1 *)(param_1 + 0x398) = 0;
  }
  if (*(long **)(param_1 + 0x240) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x240) + 0x18))();
    *(undefined8 *)(param_1 + 0x240) = 0;
  }
  iVar5 = *(int *)(param_1 + 0x170);
  if (0 < iVar5) {
    lVar8 = 0;
    do {
      plVar2 = *(long **)(param_1 + 0x178 + lVar8 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))();
        *(undefined8 *)(param_1 + 0x178 + lVar8 * 8) = 0;
        iVar5 = *(int *)(param_1 + 0x170);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar5);
  }
  iVar5 = *(int *)(param_1 + 0x148);
  *(undefined4 *)(param_1 + 0x170) = 0;
  if (0 < iVar5) {
    lVar8 = 0;
    do {
      plVar2 = *(long **)(param_1 + 0x150 + lVar8 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))();
        *(undefined8 *)(param_1 + 0x150 + lVar8 * 8) = 0;
        iVar5 = *(int *)(param_1 + 0x148);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar5);
  }
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(long **)(param_1 + 0x140) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x140) + 0x18))();
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  iVar5 = *(int *)(param_1 + 0x11c);
  if (0 < iVar5) {
    lVar8 = 0;
    do {
      plVar2 = *(long **)(param_1 + 0x120 + lVar8 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))();
        *(undefined8 *)(param_1 + 0x120 + lVar8 * 8) = 0;
        iVar5 = *(int *)(param_1 + 0x11c);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar5);
  }
  *(undefined4 *)(param_1 + 0x11c) = 0;
  return;
}


