/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0066bff0; name: FUN_0066bff0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0066bff0(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  FUN_00682fc0(param_2,0x10);
  uVar1 = (**(code **)(*param_2 + 0xf8))(param_2,1);
  *(uint *)(param_4 + 8) = uVar1;
  if ((uVar1 & 1) != 0) {
    FUN_00682fc0(param_2,0x10);
    (**(code **)(*param_2 + 0x128))(param_2,param_4 + 0x10,1);
    FUN_00682fc0(param_2,0x10);
    (**(code **)(*param_2 + 0x118))(param_2,param_4 + 0x40,1);
    uVar1 = *(uint *)(param_4 + 8);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    FUN_00682fc0(param_2,0x10);
    (**(code **)(*param_2 + 0x128))(param_2,param_4 + 0x70,1);
    FUN_00682fc0(param_2,0x10);
    (**(code **)(*param_2 + 0x118))(param_2,param_4 + 0xa0,1);
    uVar1 = *(uint *)(param_4 + 8);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    FUN_00682fc0(param_2,0x10);
    (**(code **)(*param_2 + 0x128))(param_2,param_4 + 0xd0,1);
    FUN_00682fc0(param_2,0x10);
    (**(code **)(*param_2 + 0x118))(param_2,param_4 + 0x100,1);
    uVar1 = *(uint *)(param_4 + 8);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    FUN_00682fc0(param_2,0x10);
    (**(code **)(*param_2 + 0x128))(param_2,param_4 + 0x130,1);
    FUN_00682fc0(param_2,0x10);
    (**(code **)(*param_2 + 0x118))(param_2,param_4 + 0x160,1);
    uVar1 = *(uint *)(param_4 + 8);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    FUN_00682fc0(param_2,0x10);
    (**(code **)(*param_2 + 0x128))(param_2,param_4 + 400,1);
    FUN_00682fc0(param_2,0x10);
    (**(code **)(*param_2 + 0x118))(param_2,param_4 + 0x1c0,1);
    uVar1 = *(uint *)(param_4 + 8);
  }
  if ((uVar1 >> 5 & 1) != 0) {
    FUN_00682fc0(param_2,0x10);
    (**(code **)(*param_2 + 0x128))(param_2,param_4 + 0x1f0,1);
    FUN_00682fc0(param_2,0x10);
    (**(code **)(*param_2 + 0x118))(param_2,param_4 + 0x220,1);
  }
  FUN_00682fc0(param_2,0x10);
  uVar3 = (**(code **)(*param_2 + 0xd8))(param_2,1);
  if ((int)uVar3 != 0) {
    *(int *)(param_4 + 0x250) = (int)uVar3;
    FUN_0066c530(uVar3,param_2,param_4 + 0x254);
  }
  FUN_00682fc0(param_2,0x10);
  uVar1 = (**(code **)(*param_2 + 0xd8))(param_2,1);
  uVar6 = (ulong)(int)uVar1;
  if (*(ulong *)(param_4 + 0xa80) == uVar6) {
LAB_0066c138:
    if (*(ulong *)(param_4 + 0xad0) == uVar6) goto LAB_0066c348;
  }
  else {
    if ((*(ulong *)(param_4 + 0xa88) <= uVar6) &&
       (uVar4 = FUN_0066f490(param_4 + 0xa70,uVar6,1), (uVar4 & 1) == 0)) {
      *(undefined8 *)(param_4 + 0xa80) = 0;
      *(undefined8 *)(param_4 + 0xaa8) = 0;
      *(undefined8 *)(param_4 + 0xaa0) = 0;
      return 0;
    }
    *(ulong *)(param_4 + 0xa80) = uVar6;
    if (uVar1 != 0) {
      *(long *)(param_4 + 0xaa0) = *(long *)(param_4 + 0xa98);
      *(ulong *)(param_4 + 0xaa8) = *(long *)(param_4 + 0xa98) + uVar6 * 8;
      goto LAB_0066c138;
    }
    *(undefined8 *)(param_4 + 0xaa8) = 0;
    *(undefined8 *)(param_4 + 0xaa0) = 0;
    if (*(long *)(param_4 + 0xad0) == 0) goto LAB_0066c348;
  }
  if ((*(ulong *)(param_4 + 0xad8) <= uVar6) &&
     (uVar4 = FUN_0066f490(param_4 + 0xac0,uVar6,1), (uVar4 & 1) == 0)) {
    *(undefined8 *)(param_4 + 0xad0) = 0;
    *(undefined8 *)(param_4 + 0xaf8) = 0;
    *(undefined8 *)(param_4 + 0xaf0) = 0;
    return 0;
  }
  *(ulong *)(param_4 + 0xad0) = uVar6;
  if (uVar1 == 0) {
    *(undefined8 *)(param_4 + 0xaf8) = 0;
    *(undefined8 *)(param_4 + 0xaf0) = 0;
  }
  else {
    *(long *)(param_4 + 0xaf0) = *(long *)(param_4 + 0xae8);
    *(ulong *)(param_4 + 0xaf8) = *(long *)(param_4 + 0xae8) + uVar6 * 8;
  }
LAB_0066c348:
  FUN_00682fc0(param_2,0x10);
  if (0 < *(int *)(param_4 + 0xa80)) {
    lVar7 = 0;
    do {
      lVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x38))
                        (*(long **)(param_1 + 8),0x130,0x10,
                         "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp"
                         ,0x756);
      FUN_00666120(lVar5,*(undefined8 *)(param_1 + 8));
      uVar6 = (ulong)*(int *)(param_4 + 0xb10);
      if (0 < *(int *)(param_4 + 0xb10)) {
        if (*(ulong *)(lVar5 + 0x60) != uVar6) {
          if ((uVar6 < *(ulong *)(lVar5 + 0x68)) ||
             (uVar4 = FUN_005ea2b0(lVar5 + 0x50,uVar6,1), (uVar4 & 1) != 0)) {
            *(ulong *)(lVar5 + 0x60) = uVar6;
            *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x78);
            *(ulong *)(lVar5 + 0x88) = *(long *)(lVar5 + 0x78) + uVar6;
          }
          else {
            *(undefined8 *)(lVar5 + 0x60) = 0;
            *(undefined8 *)(lVar5 + 0x80) = 0;
            *(undefined8 *)(lVar5 + 0x88) = 0;
          }
        }
        *(undefined4 *)(lVar5 + 0x44) = *(undefined4 *)(param_4 + 0xb10);
        *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)(lVar5 + 0x78);
      }
      uVar6 = (ulong)*(int *)(param_4 + 0xb14);
      if (0 < *(int *)(param_4 + 0xb14)) {
        if (*(ulong *)(lVar5 + 0xd0) != uVar6) {
          if ((uVar6 < *(ulong *)(lVar5 + 0xd8)) ||
             (uVar4 = FUN_005ea2b0(lVar5 + 0xc0,uVar6,1), (uVar4 & 1) != 0)) {
            *(ulong *)(lVar5 + 0xd0) = uVar6;
            *(long *)(lVar5 + 0xf0) = *(long *)(lVar5 + 0xe8);
            *(ulong *)(lVar5 + 0xf8) = *(long *)(lVar5 + 0xe8) + uVar6;
          }
          else {
            *(undefined8 *)(lVar5 + 0xd0) = 0;
            *(undefined8 *)(lVar5 + 0xf0) = 0;
            *(undefined8 *)(lVar5 + 0xf8) = 0;
          }
        }
        *(undefined4 *)(lVar5 + 0xb4) = *(undefined4 *)(param_4 + 0xb14);
        *(undefined8 *)(lVar5 + 0xb8) = *(undefined8 *)(lVar5 + 0xe8);
      }
      *(long *)(*(long *)(param_4 + 0xa98) + lVar7 * 8) = lVar5;
      *(int *)(lVar5 + 0x114) = (int)lVar7;
      FUN_0066c6c0(param_1,param_2);
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_4 + 0xa80));
  }
  FUN_00682fc0(param_2,0x10);
  if (0 < (int)uVar1) {
    uVar6 = 0;
    do {
      iVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
      *(undefined8 *)(*(long *)(param_4 + 0xae8) + uVar6 * 8) =
           *(undefined8 *)(*(long *)(param_4 + 0xa98) + (long)iVar2 * 8);
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
  }
  return 1;
}


