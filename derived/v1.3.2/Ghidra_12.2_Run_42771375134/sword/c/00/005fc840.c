/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005fc840; name: FUN_005fc840
 */


undefined8 FUN_005fc840(long param_1)

{
  long *plVar1;
  ulong uVar2;
  
  *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x11c);
  if (0 < *(int *)(param_1 + 0x11c)) {
    uVar2 = 0;
    do {
      plVar1 = (long *)(**(code **)(**(long **)(param_1 + 0x10) + 0x38))
                                 (*(long **)(param_1 + 0x10),0x358,0x10,
                                  "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Canvas_Impl.cpp"
                                  ,0x4a8);
      FUN_00655780(plVar1,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20));
      FUN_00655bf0(plVar1,0);
      (**(code **)(*plVar1 + 0x90))(plVar1);
      (**(code **)(*plVar1 + 0x98))(plVar1,0,param_1,uVar2 & 0xffffffff);
      if (*(long *)(param_1 + 0x140) != 0) {
        (**(code **)(*plVar1 + 0xb0))(plVar1,param_1,0);
      }
      (**(code **)(*plVar1 + 200))(plVar1);
      *(long **)(param_1 + 0x150 + uVar2 * 8) = plVar1;
      uVar2 = uVar2 + 1;
    } while ((long)uVar2 < (long)*(int *)(param_1 + 0x148));
  }
  return 1;
}


