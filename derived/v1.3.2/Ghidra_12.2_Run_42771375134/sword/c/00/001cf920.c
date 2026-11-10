/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001cf920; name: FUN_001cf920
 */


void FUN_001cf920(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long local_50;
  long local_48;
  
  *(undefined1 *)(param_1 + 0x1fb9) = 0;
  FUN_003ff570(*(undefined8 *)(param_1 + 0x1fc0));
  FUN_001cf3d0(param_1);
  if (*(int *)(param_1 + 0x21d4) != 0) {
    uVar9 = 0;
    do {
      lVar7 = *(long *)(*(long *)(param_1 + 0x21a8) + uVar9 * 8);
      if (*(uint *)(lVar7 + 8) >> 0x1e == 1) {
        uVar2 = FUN_003ea350(param_1 + 0x10,*(undefined8 *)(lVar7 + 0x18),
                             *(undefined1 *)(lVar7 + 0x28));
        *(undefined4 *)(lVar7 + 0x20) = uVar2;
LAB_001cf998:
        FUN_001cfdf0(lVar7,param_1);
      }
      else if ((*(uint *)(lVar7 + 8) >> 0x1c & 1) != 0) goto LAB_001cf998;
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 0x21d4));
  }
  lVar7 = param_1 + 0x10;
  FUN_001cafe0(param_1 + 0x21a0);
  *(undefined4 *)(param_1 + 0x2048) = 0;
  FUN_001cff30(param_1,param_1 + 0x2050);
  FUN_001cafe0(param_1 + 0x2050);
  puVar1 = PTR_DAT_02711068;
  iVar6 = *(int *)(param_1 + 0x38);
  if (iVar6 != 0) {
    plVar10 = *(long **)(param_1 + 0x30);
    do {
      iVar6 = iVar6 + -1;
      if ((*(byte *)((*plVar10 - *(long *)(puVar1 + (ulong)*(byte *)(*plVar10 + 0xd) * 8)) + 0xb) >>
           4 & 1) == 0) {
        FUN_001d0330();
      }
      plVar10 = plVar10 + 1;
    } while (iVar6 != 0);
  }
  puVar1 = PTR_DAT_02711068;
  uVar9 = (ulong)*(uint *)(param_1 + 0x10bc);
  if (*(uint *)(param_1 + 0x10bc) != 0) {
    plVar10 = *(long **)(param_1 + 0x1090);
    do {
      if ((*(byte *)((*plVar10 - *(long *)(puVar1 + (ulong)*(byte *)(*plVar10 + 0xd) * 8)) + 0xb) >>
           4 & 1) == 0) {
        FUN_001d0330();
      }
      uVar9 = uVar9 - 1;
      plVar10 = plVar10 + 1;
    } while (uVar9 != 0);
  }
  FUN_001d08f0(param_1,param_1 + 0x2088);
  FUN_001cafe0(param_1 + 0x2088);
  uVar9 = (ulong)*(uint *)(param_1 + 0x201c);
  *(undefined4 *)(param_1 + 0x2038) = 0;
  if (*(uint *)(param_1 + 0x201c) != 0) {
    uVar8 = 0;
    do {
      if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x1ff0) + uVar8 * 8) + 0xb) >> 4 & 1) != 0) {
        FUN_001e4d30();
        uVar9 = (ulong)*(uint *)(param_1 + 0x201c);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar9);
  }
  FUN_001cafe0(param_1 + 0x1fe8);
  *(undefined4 *)(param_1 + 0x2028) = 0;
  plVar10 = (long *)FUN_003ea340(lVar7);
  uVar3 = FUN_003ea330(lVar7);
  if (uVar3 != 0) {
    uVar9 = (ulong)uVar3;
    do {
      if ((*(byte *)(*plVar10 + -0xd) >> 4 & 1) == 0) {
        FUN_001d7c70(*plVar10 + -0x18);
      }
      uVar9 = uVar9 - 1;
      plVar10 = plVar10 + 1;
    } while (uVar9 != 0);
  }
  FUN_001d0cf0(param_1,param_1 + 0x20f8);
  FUN_001cafe0(param_1 + 0x20f8);
  plVar10 = (long *)FUN_003ea320(lVar7);
  uVar3 = FUN_003ea310(lVar7);
  if (uVar3 != 0) {
    uVar9 = (ulong)uVar3;
    do {
      if ((*(byte *)(*plVar10 + -0xd) >> 4 & 1) == 0) {
        FUN_001d7d60(*plVar10 + -0x18);
      }
      uVar9 = uVar9 - 1;
      plVar10 = plVar10 + 1;
    } while (uVar9 != 0);
  }
  if (*(int *)(param_1 + 0x2164) != 0) {
    lVar12 = *(long *)(param_1 + 0x2138);
    uVar9 = 0;
    do {
      while( true ) {
        lVar11 = *(long *)(lVar12 + uVar9 * 8);
        if (*(uint *)(lVar11 + 8) >> 0x1e != 1) break;
        lVar4 = FUN_001d9bc0(lVar11);
        FUN_003dfca0(lVar7,lVar11 + 0x18,lVar4 + 0x20);
        uVar9 = uVar9 + 1;
        if (*(uint *)(param_1 + 0x2164) <= uVar9) goto LAB_001cfbc4;
      }
      if ((*(uint *)(lVar11 + 8) >> 0x1c & 1) != 0) {
        FUN_001d7d60(lVar11);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 0x2164));
  }
LAB_001cfbc4:
  FUN_001cafe0(param_1 + 0x2130);
  if (*(int *)(param_1 + 0x219c) != 0) {
    lVar12 = *(long *)(param_1 + 0x2170);
    uVar9 = 0;
    do {
      while( true ) {
        lVar11 = *(long *)(lVar12 + uVar9 * 8);
        if (*(uint *)(lVar11 + 8) >> 0x1e != 1) break;
        FUN_001e39e0(lVar11,&local_48,&local_50);
        FUN_003dfe20(lVar7,lVar11 + 0x18,local_48 + 0x20,local_50 + 0x20);
        uVar9 = uVar9 + 1;
        if (*(uint *)(param_1 + 0x219c) <= uVar9) goto LAB_001cfc54;
      }
      if ((*(uint *)(lVar11 + 8) >> 0x1c & 1) != 0) {
        FUN_001d7f00(lVar11);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 0x219c));
  }
LAB_001cfc54:
  FUN_001cafe0(param_1 + 0x2168);
  uVar3 = FUN_003ea080(lVar7);
  plVar10 = (long *)FUN_003ea090(lVar7);
  puVar1 = PTR_DAT_02711068;
  if (uVar3 != 0) {
    uVar9 = (ulong)uVar3;
    do {
      FUN_001e4890(*plVar10 - *(long *)(puVar1 + (ulong)*(byte *)(*plVar10 + 0xd) * 8));
      uVar9 = uVar9 - 1;
      plVar10 = plVar10 + 1;
    } while (uVar9 != 0);
  }
  if (*(int *)(param_1 + 0x20f4) != 0) {
    uVar9 = 0;
    do {
      lVar12 = *(long *)(*(long *)(param_1 + 0x20c8) + uVar9 * 8);
      uVar3 = *(uint *)(lVar12 + 8) >> 0x1e;
      if (uVar3 == 1) {
        FUN_003e9f20(lVar7,lVar12 + 0x18);
      }
      else if (uVar3 == 3) {
        FUN_001e3bd0(lVar12 + 0xb0);
        FUN_001e3bd0(lVar12 + 200);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 0x20f4));
  }
  FUN_001cafe0(param_1 + 0x20c0);
  if (*(int *)(param_1 + 0x220c) != 0) {
    uVar9 = 0;
    do {
      lVar12 = *(long *)(*(long *)(param_1 + 0x21e0) + uVar9 * 8);
      if ((*(uint *)(lVar12 + 8) >> 0x1e == 1) &&
         (uVar8 = FUN_003ea0a0(lVar7,lVar12 + 0x18), (uVar8 & 1) == 0)) {
        uVar5 = FUN_00400880();
        FUN_00400890(uVar5,0x20,
                     "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/buffering/ScbScene.cpp"
                     ,0x494,"Adding cloth to the scene failed!");
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 0x220c));
  }
  FUN_001cafe0(param_1 + 0x21d8);
  iVar6 = *(int *)(param_1 + 0x1fd8);
  do {
    uVar9 = (ulong)*(uint *)(param_1 + 0x1fd0);
    do {
      if ((uint)uVar9 <= iVar6 + 2U) {
        *(undefined8 *)(param_1 + 0x1fd8) = 0;
        FUN_003ff5a0(*(undefined8 *)(param_1 + 0x1fc0));
        return;
      }
      uVar3 = (uint)uVar9 - 1;
      uVar9 = (ulong)uVar3;
      lVar7 = *(long *)(*(long *)(param_1 + 0x1fc8) + uVar9 * 8);
      *(uint *)(param_1 + 0x1fd0) = uVar3;
    } while (lVar7 == 0);
    plVar10 = (long *)FUN_00400d30();
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar7);
  } while( true );
}


