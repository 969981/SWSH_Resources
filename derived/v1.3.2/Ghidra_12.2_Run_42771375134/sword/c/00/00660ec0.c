/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00660ec0; name: FUN_00660ec0
 */


void FUN_00660ec0(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 1;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x204) = 0;
  *(undefined1 *)(param_1 + 0x20e) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    if ((0 < *(int *)(param_1 + 0x3a8)) &&
       (FUN_005fb340(*(long *)(param_1 + 0x28),**(undefined4 **)(param_1 + 0x3c0)),
       1 < *(int *)(param_1 + 0x3a8))) {
      lVar5 = 1;
      do {
        FUN_005fb340(*(undefined8 *)(param_1 + 0x28),
                     *(undefined4 *)(*(long *)(param_1 + 0x3c0) + lVar5 * 4));
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(param_1 + 0x3a8));
    }
    if (*(int *)(param_1 + 0x338) != -1) {
      FUN_005fb340(*(undefined8 *)(param_1 + 0x28));
      *(undefined4 *)(param_1 + 0x338) = 0xffffffff;
    }
  }
  if (*(char *)(param_1 + 0x451) == '\0') {
    if (*(char *)(param_1 + 0x450) != '\0') {
      (**(code **)PTR_DAT_02714490)(*(undefined8 *)(param_1 + 0x328));
      if (*(long *)(param_1 + 0x328) != 0) {
        plVar1 = *(long **)(param_1 + 0x18);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x48))
                    (plVar1,*(long *)(param_1 + 0x328),
                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Texture_Impl.cpp"
                     ,0x36d);
        }
        *(undefined8 *)(param_1 + 0x328) = 0;
      }
      if (*(long *)(param_1 + 0x330) != 0) {
        plVar1 = *(long **)(param_1 + 0x18);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x48))
                    (plVar1,*(long *)(param_1 + 0x330),
                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Texture_Impl.cpp"
                     ,0x36e);
        }
        *(undefined8 *)(param_1 + 0x330) = 0;
      }
      uVar3 = *(ulong *)(param_1 + 0x358);
      if ((1 < uVar3) && (0 < (int)uVar3)) {
        lVar6 = 0;
        lVar5 = 0;
        do {
          lVar2 = *(long *)(*(long *)(param_1 + 0x370) + lVar6);
          if (lVar2 != 0) {
            plVar1 = *(long **)(param_1 + 0x18);
            if (plVar1 == (long *)0x0) {
              puVar4 = (undefined8 *)(*(long *)(param_1 + 0x370) + lVar5 * 8);
            }
            else {
              (**(code **)(*plVar1 + 0x48))
                        (plVar1,lVar2,
                         "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Texture_Impl.cpp"
                         ,0x376);
              puVar4 = (undefined8 *)(*(long *)(param_1 + 0x370) + lVar6);
            }
            *puVar4 = 0;
            uVar3 = *(ulong *)(param_1 + 0x358);
          }
          lVar5 = lVar5 + 1;
          lVar6 = lVar6 + 8;
        } while (lVar5 < (int)uVar3);
      }
      *(undefined1 *)(param_1 + 0x450) = 0;
    }
    if (*(long *)(param_1 + 0x438) != 0) {
      FUN_006530c0(*(long *)(param_1 + 0x438),*(undefined8 *)(param_1 + 0x440));
      *(undefined8 *)(param_1 + 0x448) = 0;
      *(undefined8 *)(param_1 + 0x440) = 0;
      if (*(long **)(param_1 + 0x438) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x438) + 0x18))();
        *(undefined8 *)(param_1 + 0x438) = 0;
      }
      *(undefined8 *)(param_1 + 0x438) = 0;
    }
    plVar1 = *(long **)(param_1 + 0x318);
    *(undefined2 *)(param_1 + 0x450) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x330) = 0;
    *(undefined8 *)(param_1 + 0x328) = 0;
    plVar1 = *(long **)(param_1 + 0x318);
    *(undefined2 *)(param_1 + 0x450) = 0;
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
    *(undefined8 *)(param_1 + 0x318) = 0;
  }
  return;
}


