/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00659960; name: FUN_00659960
 */


long * FUN_00659960(long param_1,long *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_d0 [128];
  undefined1 auStack_50 [16];
  
  FUN_006966f0(auStack_50,param_1 + 0x18,1);
  if (*(char *)(param_1 + 0x180) == '\0') {
    uVar8 = 0;
    puVar2 = (undefined8 *)0x0;
LAB_00659a88:
    uVar9 = *(undefined8 *)(param_1 + 0x178);
    plVar3 = (long *)(**(code **)(*param_2 + 0x38))
                               (param_2,0x1a0,0x10,
                                "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_ShaderProgramPool.cpp"
                                ,0x76);
    FUN_00659e70(plVar3,param_2,uVar9);
    if ((plVar3 != (long *)0x0) && (uVar4 = FUN_0065a1a0(plVar3,uVar8), (uVar4 & 1) != 0)) {
      if (puVar2 != (undefined8 *)0x0) {
        puVar2[4] = plVar3;
      }
      iVar1 = *(int *)(param_1 + 0x184) + 1;
      *(int *)(param_1 + 0x184) = iVar1;
      lVar5 = (**(code **)(**(long **)(param_1 + 0x178) + 0x58))();
      if (*(char *)(lVar5 + 0xb5) != '\0') {
        FUN_005c5b40(auStack_d0,0x80,"ShaderProgram_%d",iVar1);
        (**(code **)(*plVar3 + 0x140))(plVar3,auStack_d0);
      }
      goto LAB_00659b44;
    }
    if (puVar2 != (undefined8 *)0x0) {
      FUN_005ff140(param_1 + 0x48,puVar2);
    }
  }
  else {
    if (param_3 == 0) {
      if (*(long *)(param_1 + 0x78) == 0) {
        lVar5 = *(long *)(param_1 + 0x160) << 1;
        if ((lVar5 == 0) && (lVar5 = 1, *(char *)(param_1 + 0x168) != '\0')) {
          lVar5 = 2;
        }
        (**(code **)(*(long *)(param_1 + 0x48) + 0x28))(param_1 + 0x48,lVar5);
        if (*(long *)(param_1 + 0x78) == 0) goto LAB_00659b40;
      }
      puVar6 = (undefined8 *)(param_1 + 0x68);
      puVar2 = (undefined8 *)*puVar6;
      if (puVar2 != (undefined8 *)0x0) {
        puVar7 = (undefined8 *)puVar2[1];
        if (puVar7 == (undefined8 *)0x0) {
          *puVar6 = 0;
          *(undefined8 *)(param_1 + 0x70) = 0;
        }
        else {
          *puVar7 = 0;
          *puVar6 = puVar7;
        }
        *puVar2 = 0;
        puVar2[1] = 0;
        *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + -1;
      }
      if (*(long *)(param_1 + 0x90) == 0) {
        *(undefined8 **)(param_1 + 0x90) = puVar2;
      }
      else {
        *(undefined8 **)(*(long *)(param_1 + 0x98) + 8) = puVar2;
        *puVar2 = *(undefined8 *)(param_1 + 0x98);
      }
      *(undefined8 **)(param_1 + 0x98) = puVar2;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *(undefined1 *)(puVar2 + 3) = 1;
      uVar4 = 0;
      if (*(ulong *)(param_1 + 0x158) != 0) {
        uVar4 = (ulong)puVar2[2] / *(ulong *)(param_1 + 0x158);
      }
      lVar5 = *(long *)(*(long *)(param_1 + 0xd0) + uVar4 * 8);
      *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
LAB_00659a84:
      uVar8 = puVar2[2];
      goto LAB_00659a88;
    }
    puVar2 = (undefined8 *)FUN_005fefc0(param_1 + 0x48,param_3);
    if (puVar2 != (undefined8 *)0x0) goto LAB_00659a84;
  }
LAB_00659b40:
  plVar3 = (long *)0x0;
LAB_00659b44:
  FUN_00696730(auStack_50);
  return plVar3;
}


