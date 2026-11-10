/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0065c3e0; name: FUN_0065c3e0
 */


long * FUN_0065c3e0(long param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined1 auStack_d0 [128];
  undefined1 auStack_50 [16];
  
  FUN_006966f0(auStack_50,param_1 + 0x18,1);
  lVar3 = param_1 + 0x48;
  if (param_3 == 0) {
    if (*(long *)(param_1 + 0x78) == 0) {
      lVar4 = *(long *)(param_1 + 0x160) << 1;
      if ((lVar4 == 0) && (lVar4 = 1, *(char *)(param_1 + 0x168) != '\0')) {
        lVar4 = 2;
      }
      (**(code **)(*(long *)(param_1 + 0x48) + 0x28))(lVar3,lVar4);
      if (*(long *)(param_1 + 0x78) == 0) goto LAB_0065c5ac;
    }
    puVar5 = (undefined8 *)(param_1 + 0x68);
    puVar1 = (undefined8 *)*puVar5;
    if (puVar1 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)puVar1[1];
      if (puVar6 == (undefined8 *)0x0) {
        *puVar5 = 0;
        *(undefined8 *)(param_1 + 0x70) = 0;
      }
      else {
        *puVar6 = 0;
        *puVar5 = puVar6;
      }
      *puVar1 = 0;
      puVar1[1] = 0;
      *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + -1;
    }
    if (*(long *)(param_1 + 0x90) == 0) {
      *(undefined8 **)(param_1 + 0x90) = puVar1;
    }
    else {
      *(undefined8 **)(*(long *)(param_1 + 0x98) + 8) = puVar1;
      *puVar1 = *(undefined8 *)(param_1 + 0x98);
    }
    *(undefined8 **)(param_1 + 0x98) = puVar1;
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
    *(undefined1 *)(puVar1 + 3) = 1;
    uVar2 = 0;
    if (*(ulong *)(param_1 + 0x158) != 0) {
      uVar2 = (ulong)puVar1[2] / *(ulong *)(param_1 + 0x158);
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0xd0) + uVar2 * 8);
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
LAB_0065c4f8:
    plVar7 = (long *)(**(code **)(*param_2 + 0x38))
                               (param_2,0x118,0x10,
                                "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_SurfacePool.cpp"
                                ,0x67);
    FUN_0065c660(plVar7,param_2,*(undefined8 *)(param_1 + 0x178));
    if (plVar7 == (long *)0x0) {
      FUN_005ff140(lVar3,puVar1);
      goto LAB_0065c5b0;
    }
    uVar2 = FUN_0065ca40(plVar7,puVar1[2]);
    if ((uVar2 & 1) != 0) {
      puVar1[4] = plVar7;
      uVar2 = *(ulong *)(param_1 + 0xa0);
      lVar3 = (**(code **)(**(long **)(param_1 + 0x178) + 0x58))();
      if (*(char *)(lVar3 + 0xb5) != '\0') {
        FUN_005c5b40(auStack_d0,0x80,"Surface_%d",uVar2 & 0xffffffff);
        (**(code **)(*plVar7 + 0xe0))(plVar7,auStack_d0);
      }
      goto LAB_0065c5b0;
    }
    FUN_005ff140(lVar3,puVar1);
  }
  else {
    puVar1 = (undefined8 *)FUN_005fefc0(lVar3,param_3);
    if (puVar1 != (undefined8 *)0x0) goto LAB_0065c4f8;
  }
LAB_0065c5ac:
  plVar7 = (long *)0x0;
LAB_0065c5b0:
  FUN_00696730(auStack_50);
  return plVar7;
}


