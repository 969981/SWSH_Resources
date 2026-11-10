/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0066b950; name: FUN_0066b950
 */


undefined8 FUN_0066b950(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  lVar1 = param_1 + 0x140;
  iVar4 = *(int *)(param_3 + 0x7c);
  if ((ulong)(long)iVar4 <= *(ulong *)(param_1 + 0x158)) goto LAB_0066b9dc;
  uVar2 = FUN_0066ec70(lVar1,(long)iVar4,1);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x150) = 0;
LAB_0066b9d4:
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x158);
    uVar5 = *(ulong *)(param_1 + 0x150);
    if (uVar2 < *(ulong *)(param_1 + 0x150)) {
      *(ulong *)(param_1 + 0x150) = uVar2;
      uVar5 = uVar2;
    }
    if (uVar5 == 0) goto LAB_0066b9d4;
    *(long *)(param_1 + 0x170) = *(long *)(param_1 + 0x168);
    *(ulong *)(param_1 + 0x178) = *(long *)(param_1 + 0x168) + uVar5 * 8;
  }
  iVar4 = *(int *)(param_3 + 0x7c);
LAB_0066b9dc:
  if (0 < iVar4) {
    iVar4 = 0;
    do {
      while( true ) {
        plVar7 = *(long **)(param_1 + 8);
        lVar3 = (**(code **)(*plVar7 + 0x38))
                          (plVar7,0xb8,0x10,
                           "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp"
                           ,0x96);
        FUN_00666c60(lVar3,plVar7);
        if (lVar3 != 0) break;
LAB_0066ba90:
        iVar4 = iVar4 + 1;
        if (*(int *)(param_3 + 0x7c) <= iVar4) {
          return 1;
        }
      }
      *(int *)(lVar3 + 0x3c) = iVar4;
      FUN_0066bca0(param_1,param_2,lVar3);
      uVar2 = *(ulong *)(param_1 + 0x150);
      uVar5 = *(ulong *)(param_1 + 0x158);
      if (uVar2 < uVar5) {
LAB_0066ba70:
        *(long *)(*(long *)(param_1 + 0x168) + uVar2 * 8) = lVar3;
        lVar3 = *(long *)(param_1 + 0x150) + 1;
        *(long *)(param_1 + 0x150) = lVar3;
        *(long *)(param_1 + 0x170) = *(long *)(param_1 + 0x168);
        *(long *)(param_1 + 0x178) = *(long *)(param_1 + 0x168) + lVar3 * 8;
        goto LAB_0066ba90;
      }
      if (*(long *)(param_1 + 0x180) == 0) {
        lVar6 = uVar5 * 2;
        if (lVar6 == 0) {
          lVar6 = 1;
        }
        uVar2 = FUN_0066ec70(lVar1,lVar6,1);
      }
      else {
        uVar2 = FUN_0066ec70(lVar1,*(long *)(param_1 + 0x180) + uVar5,1);
      }
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(param_1 + 0x150);
        goto LAB_0066ba70;
      }
      *(undefined8 *)(param_1 + 0x150) = 0;
      *(undefined8 *)(param_1 + 0x170) = 0;
      *(undefined8 *)(param_1 + 0x178) = 0;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_3 + 0x7c));
  }
  return 1;
}


