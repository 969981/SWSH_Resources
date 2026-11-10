/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f6d30; name: FUN_005f6d30
 */


long * FUN_005f6d30(long param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  plVar2 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x38))
                             (*(long **)(param_1 + 8),0x7c0,0x10,
                              "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Manager_Impl.cpp"
                              ,99);
  FUN_005f7250(plVar2,param_1);
  if (plVar2 != (long *)0x0) {
    uVar3 = FUN_005f7970(plVar2);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
      return (long *)0x0;
    }
    uVar3 = *(ulong *)(param_1 + 0x28);
    uVar1 = *(ulong *)(param_1 + 0x30);
    if (uVar1 <= uVar3) {
      if (*(long *)(param_1 + 0x58) == 0) {
        lVar4 = uVar1 * 2;
        if (lVar4 == 0) {
          lVar4 = 1;
        }
        uVar3 = FUN_005f7020(param_1 + 0x18,lVar4,1);
      }
      else {
        uVar3 = FUN_005f7020(param_1 + 0x18,*(long *)(param_1 + 0x58) + uVar1,1);
      }
      if ((uVar3 & 1) == 0) {
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 *)(param_1 + 0x50) = 0;
        return plVar2;
      }
      uVar3 = *(ulong *)(param_1 + 0x28);
    }
    *(long **)(*(long *)(param_1 + 0x40) + uVar3 * 8) = plVar2;
    lVar4 = *(long *)(param_1 + 0x28) + 1;
    *(long *)(param_1 + 0x28) = lVar4;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x40) + lVar4 * 8;
  }
  return plVar2;
}


