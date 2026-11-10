/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0066b0b0; name: FUN_0066b0b0
 */


undefined8 FUN_0066b0b0(long param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    return 0;
  }
  FUN_00682fc0(param_2,0x10);
  iVar5 = *(int *)(param_3 + 0x78);
  lVar1 = param_1 + 0x280;
  if ((ulong)(long)iVar5 <= *(ulong *)(param_1 + 0x298)) goto LAB_0066b158;
  uVar3 = FUN_0066ee10(lVar1,(long)iVar5,1);
  if ((uVar3 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x290) = 0;
LAB_0066b14c:
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    *(undefined8 *)(param_1 + 0x2b0) = 0;
  }
  else {
    uVar7 = *(ulong *)(param_1 + 0x298);
    uVar3 = *(ulong *)(param_1 + 0x290);
    if (uVar7 < *(ulong *)(param_1 + 0x290)) {
      *(ulong *)(param_1 + 0x290) = uVar7;
      uVar3 = uVar7;
    }
    if (uVar3 == 0) goto LAB_0066b14c;
    *(long *)(param_1 + 0x2b0) = *(long *)(param_1 + 0x2a8);
    *(ulong *)(param_1 + 0x2b8) = *(long *)(param_1 + 0x2a8) + uVar3 * 8;
  }
  iVar5 = *(int *)(param_3 + 0x78);
LAB_0066b158:
  if (0 < iVar5) {
    iVar5 = 0;
    do {
      while( true ) {
        while( true ) {
          plVar4 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x38))
                                     (*(long **)(param_1 + 8),200,0x10,
                                      "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp"
                                      ,0x608);
          FUN_0066fe10(plVar4,*(undefined8 *)(param_1 + 8));
          uVar3 = (**(code **)(*plVar4 + 0x78))(plVar4,param_2);
          if ((uVar3 & 1) != 0) break;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x18))(plVar4);
          }
          iVar5 = iVar5 + 1;
          if (*(int *)(param_3 + 0x78) <= iVar5) {
            return 1;
          }
        }
        iVar2 = (**(code **)(*plVar4 + 0x40))(plVar4);
        if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x240))) {
          (**(code **)(*plVar4 + 0x80))
                    (plVar4,*(undefined8 *)(*(long *)(param_1 + 600) + (long)iVar2 * 8));
        }
        uVar3 = *(ulong *)(param_1 + 0x290);
        uVar7 = *(ulong *)(param_1 + 0x298);
        if (uVar7 <= uVar3) break;
LAB_0066b224:
        *(long **)(*(long *)(param_1 + 0x2a8) + uVar3 * 8) = plVar4;
        lVar6 = *(long *)(param_1 + 0x290) + 1;
        *(long *)(param_1 + 0x290) = lVar6;
        *(long *)(param_1 + 0x2b0) = *(long *)(param_1 + 0x2a8);
        *(long *)(param_1 + 0x2b8) = *(long *)(param_1 + 0x2a8) + lVar6 * 8;
        iVar5 = iVar5 + 1;
        if (*(int *)(param_3 + 0x78) <= iVar5) {
          return 1;
        }
      }
      if (*(long *)(param_1 + 0x2c0) == 0) {
        lVar6 = uVar7 * 2;
        if (lVar6 == 0) {
          lVar6 = 1;
        }
        uVar3 = FUN_0066ee10(lVar1,lVar6,1);
      }
      else {
        uVar3 = FUN_0066ee10(lVar1,*(long *)(param_1 + 0x2c0) + uVar7,1);
      }
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(param_1 + 0x290);
        goto LAB_0066b224;
      }
      *(undefined8 *)(param_1 + 0x290) = 0;
      *(undefined8 *)(param_1 + 0x2b0) = 0;
      *(undefined8 *)(param_1 + 0x2b8) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_3 + 0x78));
  }
  return 1;
}


