/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00639cf0; name: FUN_00639cf0
 */


void FUN_00639cf0(long param_1)

{
  undefined *puVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (*(char *)(param_1 + 0x121) == '\0') {
    if (*(char *)(param_1 + 0x120) != '\0') {
      cVar2 = (**(code **)PTR_DAT_027146e8)(*(undefined8 *)(param_1 + 0x88));
      if (cVar2 != '\0') {
        (**(code **)PTR_DAT_027146f0)(*(undefined8 *)(param_1 + 0x88));
      }
      (**(code **)PTR_DAT_027146f8)(*(undefined8 *)(param_1 + 0x88));
      if (*(long *)(param_1 + 0x88) != 0) {
        plVar3 = *(long **)(param_1 + 8);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x48))
                    (plVar3,*(long *)(param_1 + 0x88),
                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_CommandList_Impl.cpp"
                     ,0xbb);
        }
        *(undefined8 *)(param_1 + 0x88) = 0;
      }
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined1 *)(param_1 + 0x120) = 0;
    }
    if (*(long *)(param_1 + 0xf0) != 0) {
      (**(code **)(**(long **)(param_1 + 8) + 0x48))
                (*(long **)(param_1 + 8),*(long *)(param_1 + 0xf0),
                 "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_CommandList_Impl.cpp"
                 ,0xc2);
      *(undefined8 *)(param_1 + 0xf0) = 0;
    }
    if (0 < *(int *)(param_1 + 0xa8)) {
      lVar5 = 0;
      do {
        lVar4 = *(long *)(*(long *)(param_1 + 0xc0) + lVar5 * 8);
        if (lVar4 != 0) {
          FUN_006530c0(lVar4,*(undefined8 *)(param_1 + 0xf8));
          plVar3 = *(long **)(*(long *)(param_1 + 0xc0) + lVar5 * 8);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x18))();
            *(undefined8 *)(*(long *)(param_1 + 0xc0) + lVar5 * 8) = 0;
          }
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(param_1 + 0xa8));
    }
    if (*(long *)(param_1 + 0x160) != 0) {
      lVar5 = 0;
      uVar6 = 0;
      do {
        lVar4 = *(long *)(param_1 + 0x178);
        if (*(long **)(lVar4 + lVar5) != (long *)0x0) {
          (**(code **)(**(long **)(lVar4 + lVar5) + 0x18))();
          *(undefined8 *)(*(long *)(param_1 + 0x178) + lVar5) = 0;
          lVar4 = *(long *)(param_1 + 0x178);
        }
        (**(code **)(**(long **)(param_1 + 8) + 0x48))
                  (*(long **)(param_1 + 8),*(undefined8 *)(lVar4 + lVar5 + 8),
                   "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_CommandList_Impl.cpp"
                   ,0xd2);
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x10;
      } while (uVar6 < *(ulong *)(param_1 + 0x160));
    }
    puVar1 = PTR_DAT_02714488;
    if (*(long *)(param_1 + 0x1b0) != 0) {
      lVar5 = 0;
      uVar6 = 0;
      do {
        (**(code **)puVar1)(*(long *)(param_1 + 0x1c8) + lVar5 + 0x10,0xffffffffffffffff);
        lVar4 = *(long *)(param_1 + 0x1c8);
        if (*(long **)(lVar4 + lVar5) != (long *)0x0) {
          (**(code **)(**(long **)(lVar4 + lVar5) + 0x18))();
          *(undefined8 *)(*(long *)(param_1 + 0x1c8) + lVar5) = 0;
          lVar4 = *(long *)(param_1 + 0x1c8);
        }
        (**(code **)(**(long **)(param_1 + 8) + 0x48))
                  (*(long **)(param_1 + 8),*(undefined8 *)(lVar4 + lVar5 + 8),
                   "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_CommandList_Impl.cpp"
                   ,0xd8);
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x50;
      } while (uVar6 < *(ulong *)(param_1 + 0x1b0));
    }
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  return;
}


