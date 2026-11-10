/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005fc580; name: FUN_005fc580
 */


undefined8 FUN_005fc580(long param_1)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  
  if (*(long **)(param_1 + 0x140) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x140) + 0x18))();
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x11c);
  if (0 < iVar4) {
    lVar5 = 0;
    do {
      plVar2 = *(long **)(param_1 + 0x120 + lVar5 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))();
        *(undefined8 *)(param_1 + 0x120 + lVar5 * 8) = 0;
        iVar4 = *(int *)(param_1 + 0x11c);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  iVar4 = *(int *)(param_1 + 0xdc) + 2;
  *(int *)(param_1 + 0x11c) = iVar4;
  *(undefined4 *)(param_1 + 0x114) = 0;
  if (-2 < *(int *)(param_1 + 0xdc)) {
    uVar6 = 0;
    do {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x38))
                        (*(long **)(param_1 + 0x10),0x118,0x10,
                         "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Canvas_Impl.cpp"
                         ,0x425);
      FUN_0065c660(uVar3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20));
      lVar5 = uVar6 * 8;
      FUN_0065cde0(uVar3,param_1,uVar6 & 0xffffffff,
                   *(undefined8 *)(*(long *)(param_1 + 0x1c8) + lVar5),
                   *(undefined8 *)(*(long *)(param_1 + 0x218) + lVar5));
      *(undefined8 *)(param_1 + lVar5 + 0x120) = uVar3;
      iVar4 = *(int *)(param_1 + 0x11c);
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)iVar4);
  }
  *(int *)(param_1 + 0x98) = iVar4;
  lVar5 = (**(code **)(**(long **)(param_1 + 0x120) + 0x88))();
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(lVar5 + 4);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 200);
  lVar5 = (**(code **)(**(long **)(param_1 + 0x120) + 0x88))();
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(lVar5 + 0x14);
  lVar5 = (**(code **)(**(long **)(param_1 + 0x120) + 0x88))();
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(lVar5 + 0x18);
  lVar5 = (**(code **)(**(long **)(param_1 + 0x120) + 0x88))();
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(lVar5 + 0x1c);
  lVar5 = (**(code **)(**(long **)(param_1 + 0x120) + 0x88))();
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(lVar5 + 0x20);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0xf8);
  if (*(long **)(param_1 + 0x140) == (long *)0x0) {
    iVar4 = *(int *)(param_1 + 0xe4);
    *(undefined1 *)(param_1 + 0xbc) = 0;
    *(int *)(param_1 + 0xa8) = iVar4;
    *(undefined1 *)(param_1 + 0xbd) = 0;
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0xfc);
  }
  else {
    lVar5 = (**(code **)(**(long **)(param_1 + 0x140) + 0x88))();
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(lVar5 + 4);
    *(undefined1 *)(param_1 + 0xbc) = 1;
    lVar5 = (**(code **)(**(long **)(param_1 + 0x140) + 0x88))();
    bVar1 = FUN_005ed240(*(undefined4 *)(lVar5 + 4));
    iVar4 = *(int *)(param_1 + 0xe4);
    *(byte *)(param_1 + 0xbd) = bVar1 & 1;
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0xfc);
  }
  if ((iVar4 == 0) || (*(char *)(param_1 + 0x104) == '\0')) {
    plVar2 = *(long **)(param_1 + 0x140);
  }
  else {
    plVar2 = (long *)(**(code **)(**(long **)(param_1 + 0x10) + 0x38))
                               (*(long **)(param_1 + 0x10),0x118,0x10,
                                "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Canvas_Impl.cpp"
                                ,0x44c);
    FUN_0065c660(plVar2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20));
    FUN_0065d080(plVar2,param_1);
    *(long **)(param_1 + 0x140) = plVar2;
  }
  if (plVar2 == (long *)0x0) {
    bVar1 = 0;
    *(undefined1 *)(param_1 + 0xbc) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xbc) = 1;
    lVar5 = (**(code **)(*plVar2 + 0x88))(plVar2);
    bVar1 = FUN_005ed240(*(undefined4 *)(lVar5 + 4));
    bVar1 = bVar1 & 1;
  }
  *(byte *)(param_1 + 0xbd) = bVar1;
  return 1;
}


