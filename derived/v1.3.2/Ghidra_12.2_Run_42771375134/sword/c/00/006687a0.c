/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006687a0; name: FUN_006687a0
 */


void FUN_006687a0(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  FUN_0066bb70(*(undefined8 *)(param_1 + 8),param_1 + 0x140,0);
  plVar2 = (long *)(param_1 + 0x1b8);
  if (((*(byte *)(param_1 + 0x1d8) & 1) == 0) && (*plVar2 != 0)) {
    plVar1 = *(long **)(param_1 + 0x198);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x48))
                (plVar1,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar2 = 0;
  }
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *plVar2 = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  uVar3 = *(ulong *)(param_1 + 0x240);
  plVar2 = (long *)(param_1 + 600);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      plVar1 = *(long **)(*plVar2 + uVar5 * 8);
      if (plVar1 != (long *)0x0) {
        *(undefined8 *)(*plVar2 + uVar5 * 8) = 0;
        (**(code **)(*plVar1 + 0x18))();
        uVar3 = *(ulong *)(param_1 + 0x240);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (((*(byte *)(param_1 + 0x278) & 1) == 0) && (*plVar2 != 0)) {
    plVar1 = *(long **)(param_1 + 0x238);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x48))
                (plVar1,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar2 = 0;
  }
  *(ulong *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *plVar2 = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  uVar3 = *(ulong *)(param_1 + 0x290);
  plVar2 = (long *)(param_1 + 0x2a8);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      plVar1 = *(long **)(*plVar2 + uVar5 * 8);
      if (plVar1 != (long *)0x0) {
        *(undefined8 *)(*plVar2 + uVar5 * 8) = 0;
        (**(code **)(*plVar1 + 0x18))();
        uVar3 = *(ulong *)(param_1 + 0x290);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (((*(byte *)(param_1 + 0x2c8) & 1) == 0) && (*plVar2 != 0)) {
    plVar1 = *(long **)(param_1 + 0x288);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x48))
                (plVar1,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar2 = 0;
  }
  *(ulong *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *plVar2 = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  if (*(char *)(param_1 + 0xbf0) == '\0') {
    *(undefined8 *)(param_1 + 0xbe8) = 0;
    *(undefined8 *)(param_1 + 0xc20) = 0;
    *(undefined8 *)(param_1 + 0xc18) = 0;
    *(undefined8 *)(param_1 + 0xc10) = 0;
    *(undefined8 *)(param_1 + 0xc08) = 0;
    *(undefined8 *)(param_1 + 0xc00) = 0;
    *(undefined8 *)(param_1 + 0xbf8) = 0;
    uVar3 = *(ulong *)(param_1 + 0xc68);
  }
  else {
    if (*(long *)(param_1 + 0xbe8) != 0) {
      plVar2 = *(long **)(param_1 + 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,*(long *)(param_1 + 0xbe8),
                   "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp"
                   ,0x54a);
      }
      *(undefined8 *)(param_1 + 0xbe8) = 0;
    }
    lVar4 = *(long *)(param_1 + 0xbf8);
    if (lVar4 != 0) {
      plVar2 = *(long **)(param_1 + 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x50))(plVar2,lVar4);
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,lVar4,
                   "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp"
                   ,0x54b);
      }
      *(undefined8 *)(param_1 + 0xbf8) = 0;
    }
    lVar4 = *(long *)(param_1 + 0xc00);
    if (lVar4 != 0) {
      plVar2 = *(long **)(param_1 + 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x50))(plVar2,lVar4);
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,lVar4,
                   "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp"
                   ,0x54c);
      }
      *(undefined8 *)(param_1 + 0xc00) = 0;
    }
    lVar4 = *(long *)(param_1 + 0xc08);
    if (lVar4 != 0) {
      plVar2 = *(long **)(param_1 + 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x50))(plVar2,lVar4);
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,lVar4,
                   "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp"
                   ,0x54d);
      }
      *(undefined8 *)(param_1 + 0xc08) = 0;
    }
    lVar4 = *(long *)(param_1 + 0xc10);
    if (lVar4 != 0) {
      plVar2 = *(long **)(param_1 + 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x50))(plVar2,lVar4);
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,lVar4,
                   "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp"
                   ,0x54e);
      }
      *(undefined8 *)(param_1 + 0xc10) = 0;
    }
    lVar4 = *(long *)(param_1 + 0xc18);
    if (lVar4 != 0) {
      plVar2 = *(long **)(param_1 + 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x50))(plVar2,lVar4);
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,lVar4,
                   "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp"
                   ,0x54f);
      }
      *(undefined8 *)(param_1 + 0xc18) = 0;
    }
    lVar4 = *(long *)(param_1 + 0xc20);
    if (lVar4 != 0) {
      plVar2 = *(long **)(param_1 + 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x50))(plVar2,lVar4);
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,lVar4,
                   "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp"
                   ,0x550);
      }
      *(undefined8 *)(param_1 + 0xc20) = 0;
    }
    uVar3 = *(ulong *)(param_1 + 0xc68);
  }
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      plVar2 = *(long **)(*(long *)(param_1 + 0xc80) + uVar5 * 8);
      if (plVar2 != (long *)0x0) {
        *(undefined8 *)(*(long *)(param_1 + 0xc80) + uVar5 * 8) = 0;
        (**(code **)(*plVar2 + 0x18))();
        uVar3 = *(ulong *)(param_1 + 0xc68);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  plVar2 = (long *)(param_1 + 0xc80);
  if (((*(byte *)(param_1 + 0xca0) & 1) == 0) && (*plVar2 != 0)) {
    plVar1 = *(long **)(param_1 + 0xc60);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x48))
                (plVar1,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar2 = 0;
  }
  *(undefined8 *)(param_1 + 0xc68) = 0;
  *(undefined8 *)(param_1 + 0xc70) = 0;
  *(undefined8 *)(param_1 + 0xca0) = 0;
  *plVar2 = 0;
  *(undefined8 *)(param_1 + 0xc88) = 0;
  *(undefined8 *)(param_1 + 0xc90) = 0;
  uVar3 = *(ulong *)(param_1 + 0xcb8);
  plVar2 = (long *)(param_1 + 0xcd0);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      plVar1 = *(long **)(*plVar2 + uVar5 * 8);
      if (plVar1 != (long *)0x0) {
        *(undefined8 *)(*plVar2 + uVar5 * 8) = 0;
        (**(code **)(*plVar1 + 0x18))();
        uVar3 = *(ulong *)(param_1 + 0xcb8);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (((*(byte *)(param_1 + 0xcf0) & 1) == 0) && (*plVar2 != 0)) {
    plVar1 = *(long **)(param_1 + 0xcb0);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x48))
                (plVar1,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar2 = 0;
  }
  *(ulong *)(param_1 + 0xcb8) = 0;
  *(undefined8 *)(param_1 + 0xcc0) = 0;
  *(undefined8 *)(param_1 + 0xcf0) = 0;
  *plVar2 = 0;
  *(undefined8 *)(param_1 + 0xcd8) = 0;
  *(undefined8 *)(param_1 + 0xce0) = 0;
  uVar3 = *(ulong *)(param_1 + 0xd08);
  plVar2 = (long *)(param_1 + 0xd20);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      plVar1 = *(long **)(*plVar2 + uVar5 * 8);
      if (plVar1 != (long *)0x0) {
        *(undefined8 *)(*plVar2 + uVar5 * 8) = 0;
        (**(code **)(*plVar1 + 0x18))();
        uVar3 = *(ulong *)(param_1 + 0xd08);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (((*(byte *)(param_1 + 0xd40) & 1) == 0) && (*plVar2 != 0)) {
    plVar1 = *(long **)(param_1 + 0xd00);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x48))
                (plVar1,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar2 = 0;
  }
  *(ulong *)(param_1 + 0xd08) = 0;
  *(undefined8 *)(param_1 + 0xd10) = 0;
  *(undefined8 *)(param_1 + 0xd40) = 0;
  *plVar2 = 0;
  *(undefined8 *)(param_1 + 0xd28) = 0;
  *(undefined8 *)(param_1 + 0xd30) = 0;
  uVar3 = *(ulong *)(param_1 + 0xd58);
  plVar2 = (long *)(param_1 + 0xd70);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      plVar1 = *(long **)(*plVar2 + uVar5 * 8);
      if (plVar1 != (long *)0x0) {
        *(undefined8 *)(*plVar2 + uVar5 * 8) = 0;
        (**(code **)(*plVar1 + 0x18))();
        uVar3 = *(ulong *)(param_1 + 0xd58);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (((*(byte *)(param_1 + 0xd90) & 1) == 0) && (*plVar2 != 0)) {
    plVar1 = *(long **)(param_1 + 0xd50);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x48))
                (plVar1,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar2 = 0;
  }
  *(ulong *)(param_1 + 0xd58) = 0;
  *(undefined8 *)(param_1 + 0xd60) = 0;
  *(undefined8 *)(param_1 + 0xd90) = 0;
  *plVar2 = 0;
  *(undefined8 *)(param_1 + 0xd78) = 0;
  *(undefined8 *)(param_1 + 0xd80) = 0;
  uVar3 = *(ulong *)(param_1 + 0xda8);
  plVar2 = (long *)(param_1 + 0xdc0);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      plVar1 = *(long **)(*plVar2 + uVar5 * 8);
      if (plVar1 != (long *)0x0) {
        *(undefined8 *)(*plVar2 + uVar5 * 8) = 0;
        (**(code **)(*plVar1 + 0x18))();
        uVar3 = *(ulong *)(param_1 + 0xda8);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (((*(byte *)(param_1 + 0xde0) & 1) == 0) && (*plVar2 != 0)) {
    plVar1 = *(long **)(param_1 + 0xda0);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x48))
                (plVar1,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar2 = 0;
  }
  *(ulong *)(param_1 + 0xda8) = 0;
  *(undefined8 *)(param_1 + 0xdb0) = 0;
  *(undefined8 *)(param_1 + 0xde0) = 0;
  *plVar2 = 0;
  *(undefined8 *)(param_1 + 0xdc8) = 0;
  *(undefined8 *)(param_1 + 0xdd0) = 0;
  uVar3 = *(ulong *)(param_1 + 0xdf8);
  plVar2 = (long *)(param_1 + 0xe10);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      plVar1 = *(long **)(*plVar2 + uVar5 * 8);
      if (plVar1 != (long *)0x0) {
        *(undefined8 *)(*plVar2 + uVar5 * 8) = 0;
        (**(code **)(*plVar1 + 0x18))();
        uVar3 = *(ulong *)(param_1 + 0xdf8);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (((*(byte *)(param_1 + 0xe30) & 1) == 0) && (*plVar2 != 0)) {
    plVar1 = *(long **)(param_1 + 0xdf0);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x48))
                (plVar1,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar2 = 0;
  }
  *(ulong *)(param_1 + 0xdf8) = 0;
  *(undefined8 *)(param_1 + 0xe00) = 0;
  plVar1 = (long *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0xe30) = 0;
  *plVar2 = 0;
  *(undefined8 *)(param_1 + 0xe18) = 0;
  *(undefined8 *)(param_1 + 0xe20) = 0;
  if (((*(byte *)(param_1 + 0x70) & 1) == 0) && (*plVar1 != 0)) {
    plVar2 = *(long **)(param_1 + 0x48);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
    }
    *plVar1 = 0;
  }
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0xbf0) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}


