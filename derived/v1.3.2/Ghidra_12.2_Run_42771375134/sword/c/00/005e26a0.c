/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005e26a0; name: FUN_005e26a0
 */


undefined8 FUN_005e26a0(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  void *__src;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  
  if (0 < *(int *)(param_1 + 0x11c)) {
    lVar12 = 0;
    plVar4 = (long *)(param_1 + 0x128);
    do {
      if ((long *)*plVar4 != (long *)0x0) {
        (**(code **)(*(long *)*plVar4 + 0x18))();
        *plVar4 = 0;
      }
      if ((long *)plVar4[-1] != (long *)0x0) {
        (**(code **)(*(long *)plVar4[-1] + 0x18))();
        plVar4[-1] = 0;
      }
      lVar12 = lVar12 + 1;
      plVar4 = plVar4 + 2;
    } while (lVar12 < *(int *)(param_1 + 0x11c));
  }
  if (*(long **)(param_1 + 0x110) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x110) + 0x18))();
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  if (*(long **)(param_1 + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x108) + 0x18))();
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (0 < *(int *)(param_1 + 0x170)) {
    lVar10 = 0;
    lVar12 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x188) + lVar10;
      if (*(long *)(lVar1 + 0x18) != 0) {
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x38) = 0;
        *(undefined8 *)(lVar1 + 0x40) = 0;
      }
      *(undefined8 *)(lVar1 + 0x58) = 0;
      lVar12 = lVar12 + 1;
      lVar10 = lVar10 + 0x68;
    } while (lVar12 < *(int *)(param_1 + 0x170));
  }
  if (0 < *(int *)(param_1 + 0x1c0)) {
    lVar10 = 0;
    lVar12 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x1d8) + lVar10;
      if (*(long *)(lVar1 + 0x18) != 0) {
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x38) = 0;
        *(undefined8 *)(lVar1 + 0x40) = 0;
      }
      *(undefined8 *)(lVar1 + 0x58) = 0;
      lVar12 = lVar12 + 1;
      lVar10 = lVar10 + 0x68;
    } while (lVar12 < *(int *)(param_1 + 0x1c0));
  }
  if (0 < *(int *)(param_1 + 0x210)) {
    lVar10 = 0;
    lVar12 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x228) + lVar10;
      if (*(long *)(lVar1 + 0x18) != 0) {
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x38) = 0;
        *(undefined8 *)(lVar1 + 0x40) = 0;
      }
      *(undefined8 *)(lVar1 + 0x58) = 0;
      lVar12 = lVar12 + 1;
      lVar10 = lVar10 + 0x68;
    } while (lVar12 < *(int *)(param_1 + 0x210));
  }
  if (0 < *(int *)(param_1 + 0x260)) {
    lVar10 = 0;
    lVar12 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x278) + lVar10;
      if (*(long *)(lVar1 + 0x18) != 0) {
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x38) = 0;
        *(undefined8 *)(lVar1 + 0x40) = 0;
      }
      *(undefined8 *)(lVar1 + 0x58) = 0;
      lVar12 = lVar12 + 1;
      lVar10 = lVar10 + 0x68;
    } while (lVar12 < *(int *)(param_1 + 0x260));
  }
  uVar11 = 0;
  if (param_2 != (long *)0x0) {
    plVar4 = (long *)(**(code **)(*param_2 + 0x28))(param_2);
    lVar12 = (**(code **)(*plVar4 + 0x170))(plVar4,0x47);
    if ((lVar12 == 0) ||
       (plVar5 = (long *)(**(code **)(*plVar4 + 0x138))(plVar4,2), plVar5 == (long *)0x0)) {
      uVar11 = 0;
    }
    else {
      plVar6 = (long *)(**(code **)(*plVar4 + 0xd0))(plVar4,1,0,0);
      (**(code **)(*plVar6 + 0x40))();
      (**(code **)(*plVar6 + 0x50))(plVar6,1);
      (**(code **)(*plVar6 + 0x60))(plVar6,0,2,1,0,0);
      (**(code **)(*plVar6 + 0x48))(plVar6);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      if (*(long **)(param_1 + 0x108) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x108) + 0x18))();
      }
      *(long **)(param_1 + 0x108) = plVar6;
      plVar7 = (long *)(**(code **)(*plVar4 + 200))(plVar4,1,0,0);
      (**(code **)(*plVar7 + 0x40))();
      plVar8 = (long *)(**(code **)(*plVar7 + 0x50))(plVar7);
      *plVar8 = (long)plVar6;
      lVar10 = (**(code **)(*plVar7 + 0x50))(plVar7);
      *(undefined4 *)(lVar10 + 0x160) = 5;
      lVar10 = (**(code **)(*plVar7 + 0x50))(plVar7);
      *(undefined4 *)(lVar10 + 0x10) = 1;
      lVar10 = (**(code **)(*plVar7 + 0x50))(plVar7);
      *(undefined1 *)(lVar10 + 0x34) = 0;
      lVar10 = (**(code **)(*plVar7 + 0x50))(plVar7);
      *(undefined1 *)(lVar10 + 0x35) = 0;
      lVar10 = (**(code **)(*plVar7 + 0x50))(plVar7);
      *(undefined1 *)(lVar10 + 0x60) = 1;
      lVar10 = (**(code **)(*plVar7 + 0x50))(plVar7);
      *(undefined4 *)(lVar10 + 0x6c) = 1;
      lVar10 = (**(code **)(*plVar7 + 0x50))(plVar7);
      *(undefined4 *)(lVar10 + 100) = 5;
      lVar10 = (**(code **)(*plVar7 + 0x50))(plVar7);
      *(undefined4 *)(lVar10 + 0x68) = 6;
      lVar10 = (**(code **)(*plVar7 + 0x50))(plVar7);
      *(undefined4 *)(lVar10 + 0x78) = 1;
      lVar10 = (**(code **)(*plVar7 + 0x50))(plVar7);
      *(undefined4 *)(lVar10 + 0x70) = 5;
      lVar10 = (**(code **)(*plVar7 + 0x50))(plVar7);
      *(undefined4 *)(lVar10 + 0x74) = 6;
      lVar10 = (**(code **)(*plVar7 + 0x50))(plVar7);
      *(long *)(lVar10 + 8) = lVar12;
      puVar9 = (undefined8 *)(**(code **)(*param_2 + 0x118))(param_2);
      lVar12 = (**(code **)(*plVar7 + 0x50))(plVar7);
      *(undefined8 *)(lVar12 + 0x4ec) = *puVar9;
      uVar11 = puVar9[3];
      uVar2 = puVar9[1];
      uVar3 = puVar9[2];
      *(undefined8 *)(lVar12 + 0x50c) = puVar9[4];
      *(undefined8 *)(lVar12 + 0x504) = uVar11;
      *(undefined8 *)(lVar12 + 0x4fc) = uVar3;
      *(undefined8 *)(lVar12 + 0x4f4) = uVar2;
      __src = (void *)(**(code **)(*plVar5 + 0x100))(plVar5);
      lVar12 = (**(code **)(*plVar7 + 0x50))(plVar7);
      memcpy((void *)(lVar12 + 0x168),__src,900);
      (**(code **)(*plVar7 + 0x48))(plVar7);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      if (*(long **)(param_1 + 0x110) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x110) + 0x18))();
      }
      *(long **)(param_1 + 0x110) = plVar7;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
      if (*(int *)(param_1 + 0x11c) < 1) {
        uVar11 = 1;
      }
      else {
        lVar12 = 0;
        puVar9 = (undefined8 *)(param_1 + 0x128);
        uVar11 = 1;
        do {
          plVar5 = (long *)(**(code **)(*plVar4 + 0x1d8))(plVar4,0,0,0);
          uStack_b0 = 0;
          local_a8 = 1;
          local_94 = 0;
          local_a4 = 0;
          local_a2 = 0;
          local_78 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_74 = 0xffffffffffffffff;
          uStack_6c = 0xffffffffffffffff;
          local_b8 = 0x8000000000;
          local_a0 = 0x400000002;
          local_98 = 0x10000;
          (**(code **)(*plVar5 + 0xa8))(plVar5,&local_b8);
          *puVar9 = plVar5;
          plVar5 = (long *)(**(code **)(*plVar4 + 0xe0))(plVar4,1,0,0);
          (**(code **)(*plVar5 + 0x40))(plVar5,*(undefined8 *)(param_1 + 0x108));
          (**(code **)(*plVar5 + 0x48))(plVar5,1);
          (**(code **)(*plVar5 + 0x50))(plVar5,0,0,*puVar9,0,0);
          (**(code **)(*plVar5 + 0x80))(plVar5);
          puVar9[-1] = plVar5;
          lVar12 = lVar12 + 1;
          puVar9 = puVar9 + 2;
        } while (lVar12 < *(int *)(param_1 + 0x11c));
      }
    }
  }
  return uVar11;
}


