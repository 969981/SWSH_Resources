/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0066aec0; name: FUN_0066aec0
 */


undefined8 FUN_0066aec0(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  FUN_00682fc0(param_2,0x10);
  iVar4 = *(int *)(param_3 + 0x70);
  lVar1 = param_1 + 0x230;
  if ((ulong)(long)iVar4 <= *(ulong *)(param_1 + 0x248)) goto LAB_0066af68;
  uVar2 = FUN_0066efb0(lVar1,(long)iVar4,1);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x240) = 0;
LAB_0066af5c:
    *(undefined8 *)(param_1 + 0x268) = 0;
    *(undefined8 *)(param_1 + 0x260) = 0;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x248);
    uVar2 = *(ulong *)(param_1 + 0x240);
    if (uVar6 < *(ulong *)(param_1 + 0x240)) {
      *(ulong *)(param_1 + 0x240) = uVar6;
      uVar2 = uVar6;
    }
    if (uVar2 == 0) goto LAB_0066af5c;
    *(long *)(param_1 + 0x260) = *(long *)(param_1 + 600);
    *(ulong *)(param_1 + 0x268) = *(long *)(param_1 + 600) + uVar2 * 8;
  }
  iVar4 = *(int *)(param_3 + 0x70);
LAB_0066af68:
  if (0 < iVar4) {
    iVar4 = 0;
    do {
      while( true ) {
        while( true ) {
          plVar3 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x38))
                                     (*(long **)(param_1 + 8),0x158,0x10,
                                      "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp"
                                      ,0x5e6);
          FUN_006747c0(plVar3,*(undefined8 *)(param_1 + 8));
          uVar2 = (**(code **)(*plVar3 + 0x78))(plVar3,param_2);
          if ((uVar2 & 1) != 0) break;
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x18))(plVar3);
          }
          iVar4 = iVar4 + 1;
          if (*(int *)(param_3 + 0x70) <= iVar4) {
            return 1;
          }
        }
        uVar2 = *(ulong *)(param_1 + 0x240);
        uVar6 = *(ulong *)(param_1 + 0x248);
        if (uVar6 <= uVar2) break;
LAB_0066affc:
        *(long **)(*(long *)(param_1 + 600) + uVar2 * 8) = plVar3;
        lVar5 = *(long *)(param_1 + 0x240) + 1;
        *(long *)(param_1 + 0x240) = lVar5;
        *(long *)(param_1 + 0x260) = *(long *)(param_1 + 600);
        *(long *)(param_1 + 0x268) = *(long *)(param_1 + 600) + lVar5 * 8;
        iVar4 = iVar4 + 1;
        if (*(int *)(param_3 + 0x70) <= iVar4) {
          return 1;
        }
      }
      if (*(long *)(param_1 + 0x270) == 0) {
        lVar5 = uVar6 * 2;
        if (lVar5 == 0) {
          lVar5 = 1;
        }
        uVar2 = FUN_0066efb0(lVar1,lVar5,1);
      }
      else {
        uVar2 = FUN_0066efb0(lVar1,*(long *)(param_1 + 0x270) + uVar6,1);
      }
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(param_1 + 0x240);
        goto LAB_0066affc;
      }
      *(undefined8 *)(param_1 + 0x240) = 0;
      *(undefined8 *)(param_1 + 0x260) = 0;
      *(undefined8 *)(param_1 + 0x268) = 0;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_3 + 0x70));
  }
  return 1;
}


