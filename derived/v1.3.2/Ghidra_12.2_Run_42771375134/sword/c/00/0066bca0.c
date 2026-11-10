/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0066bca0; name: FUN_0066bca0
 */


undefined8 FUN_0066bca0(long param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 local_94;
  long *local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong local_68;
  
  if (param_2 == (long *)0x0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  FUN_00682fc0(param_2,0x10);
  (**(code **)(*param_2 + 0x118))(param_2,param_3 + 8,1);
  FUN_00682fc0(param_2,0x10);
  uVar1 = (**(code **)(*param_2 + 0xf8))(param_2,1);
  *(undefined4 *)(param_3 + 0x38) = uVar1;
  local_90 = *(long **)(param_1 + 8);
  local_70 = 0;
  local_68 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  if (local_90 == (long *)0x0) {
    lVar3 = FUN_005bc740();
    if (lVar3 == 0) {
      local_90 = (long *)FUN_005bc6f0();
    }
    else {
      local_90 = (long *)FUN_005bc740();
    }
  }
  (**(code **)(*param_2 + 0x118))(param_2,&local_90,1);
  FUN_00682fc0(param_2,0x10);
  iVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
  if ((iVar2 < 0) || (*(int *)(param_1 + 0x290) <= iVar2)) {
LAB_0066be20:
    uVar1 = 0;
    local_94 = 0;
  }
  else {
    plVar6 = *(long **)(*(long *)(param_1 + 0x2a8) + (long)iVar2 * 8);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    if (*(long **)(param_3 + 0x58) != (long *)0x0) {
      (**(code **)(**(long **)(param_3 + 0x58) + 0x18))();
    }
    *(long **)(param_3 + 0x58) = plVar6;
    if (plVar6 == (long *)0x0) {
      uVar1 = 0;
      *(undefined8 *)(param_3 + 0x44) = 0xffffffff;
      *(undefined4 *)(param_3 + 0x4c) = 0xffffffff;
LAB_0066be38:
      *(undefined4 *)(param_3 + 0x50) = uVar1;
    }
    else {
      uVar1 = (**(code **)(*plVar6 + 0x40))(plVar6);
      *(undefined4 *)(param_3 + 0x44) = uVar1;
      plVar6 = (long *)(**(code **)(**(long **)(param_3 + 0x58) + 0x88))();
      if (plVar6 != (long *)0x0) {
        uVar1 = (**(code **)(*plVar6 + 0x38))();
        *(undefined4 *)(param_3 + 0x48) = uVar1;
        uVar1 = (**(code **)(*plVar6 + 0x58))(plVar6);
        goto LAB_0066be38;
      }
    }
    plVar6 = (long *)(**(code **)(**(long **)(param_3 + 0x58) + 0x88))();
    if (plVar6 == (long *)0x0) goto LAB_0066be20;
    local_94 = (**(code **)(*plVar6 + 0x38))(plVar6);
    uVar1 = (**(code **)(*plVar6 + 0x58))(plVar6);
  }
  iVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
  uVar8 = (ulong)iVar2;
  if (*(ulong *)(param_3 + 0x70) != uVar8) {
    if ((uVar8 < *(ulong *)(param_3 + 0x78)) ||
       (uVar4 = FUN_0066f2f0(param_3 + 0x60,uVar8,1), (uVar4 & 1) != 0)) {
      *(ulong *)(param_3 + 0x70) = uVar8;
      if (iVar2 == 0) {
        *(undefined8 *)(param_3 + 0x90) = 0;
        *(undefined8 *)(param_3 + 0x98) = 0;
        goto joined_r0x0066bfb0;
      }
      *(long *)(param_3 + 0x90) = *(long *)(param_3 + 0x88);
      *(ulong *)(param_3 + 0x98) = *(long *)(param_3 + 0x88) + uVar8 * 8;
    }
    else {
      *(undefined8 *)(param_3 + 0x70) = 0;
      *(undefined8 *)(param_3 + 0x90) = 0;
      *(undefined8 *)(param_3 + 0x98) = 0;
    }
  }
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x38))
                        (*(long **)(param_1 + 8),0xb18,0x10,
                         "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp"
                         ,0x6fd);
      FUN_00666300(lVar5,*(undefined8 *)(param_1 + 8));
      if (lVar5 == 0) {
        uVar7 = 0;
        goto joined_r0x0066bf9c;
      }
      *(undefined4 *)(lVar5 + 0xb10) = local_94;
      *(undefined4 *)(lVar5 + 0xb14) = uVar1;
      *(long *)(*(long *)(param_3 + 0x88) + lVar3 * 8) = lVar5;
      FUN_0066bff0(param_1,param_2,param_3,lVar5);
      lVar3 = lVar3 + 1;
    } while (lVar3 < (long)uVar8);
  }
joined_r0x0066bfb0:
  uVar7 = 1;
joined_r0x0066bf9c:
  if ((((local_68 & 1) == 0) && (local_88 != 0)) && (local_90 != (long *)0x0)) {
    (**(code **)(*local_90 + 0x48))
              (local_90,local_88,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
  }
  return uVar7;
}


