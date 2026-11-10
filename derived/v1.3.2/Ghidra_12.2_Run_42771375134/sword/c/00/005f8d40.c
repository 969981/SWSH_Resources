/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f8d40; name: FUN_005f8d40
 */


undefined8 FUN_005f8d40(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  ulong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar6 = *(uint *)(param_1 + 0xd4);
  iVar2 = *(int *)(param_1 + 0xd8);
  if (0xfffff < (int)uVar6) {
    uVar6 = 0x100000;
  }
  lVar1 = param_1 + 0x650;
  if (*(ulong *)(param_1 + 0x668) < (ulong)(long)iVar2) {
    uVar3 = FUN_005fb560(lVar1,(long)iVar2,1);
    if ((uVar3 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x660) = 0;
    }
    else {
      uVar7 = *(ulong *)(param_1 + 0x668);
      uVar3 = *(ulong *)(param_1 + 0x660);
      if (uVar7 < *(ulong *)(param_1 + 0x660)) {
        *(ulong *)(param_1 + 0x660) = uVar7;
        uVar3 = uVar7;
      }
      if (uVar3 != 0) {
        *(long *)(param_1 + 0x680) = *(long *)(param_1 + 0x678);
        *(ulong *)(param_1 + 0x688) = *(long *)(param_1 + 0x678) + uVar3 * 8;
        goto joined_r0x005f8dd0;
      }
    }
    *(undefined8 *)(param_1 + 0x688) = 0;
    *(undefined8 *)(param_1 + 0x680) = 0;
  }
joined_r0x005f8dd0:
  if (0 < iVar2) {
    iVar8 = 0;
    do {
      while( true ) {
        plVar4 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x38))
                                   (*(long **)(param_1 + 8),0x460,0x10,
                                    "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp"
                                    ,0xa53);
        FUN_006529a0(plVar4,*(undefined8 *)(param_1 + 8),param_1);
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        local_98 = 0;
        uStack_94 = 1;
        uStack_b0 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_70 = 0xffffffffffffffff;
        uStack_68 = 0xffffffffffffffff;
        local_a0 = 0x1000000000004;
        local_a8 = 0x100000002;
        local_b8 = (ulong)uVar6;
        uVar3 = (**(code **)(*plVar4 + 0x40))(plVar4,&local_b8);
        if ((uVar3 & 1) != 0) break;
        (**(code **)(*plVar4 + 0x18))(plVar4);
joined_r0x005f8ef0:
        iVar8 = iVar8 + 1;
        if (iVar2 <= iVar8) goto LAB_005f8f4c;
      }
      uVar3 = *(ulong *)(param_1 + 0x660);
      uVar7 = *(ulong *)(param_1 + 0x668);
      if (uVar3 < uVar7) {
LAB_005f8ec4:
        *(long **)(*(long *)(param_1 + 0x678) + uVar3 * 8) = plVar4;
        lVar5 = *(long *)(param_1 + 0x660) + 1;
        *(long *)(param_1 + 0x660) = lVar5;
        *(long *)(param_1 + 0x680) = *(long *)(param_1 + 0x678);
        *(long *)(param_1 + 0x688) = *(long *)(param_1 + 0x678) + lVar5 * 8;
        goto joined_r0x005f8ef0;
      }
      if (*(long *)(param_1 + 0x690) == 0) {
        lVar5 = uVar7 * 2;
        if (lVar5 == 0) {
          lVar5 = 1;
        }
        uVar3 = FUN_005fb560(lVar1,lVar5,1);
      }
      else {
        uVar3 = FUN_005fb560(lVar1,*(long *)(param_1 + 0x690) + uVar7,1);
      }
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(param_1 + 0x660);
        goto LAB_005f8ec4;
      }
      *(undefined8 *)(param_1 + 0x660) = 0;
      *(undefined8 *)(param_1 + 0x680) = 0;
      *(undefined8 *)(param_1 + 0x688) = 0;
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar2);
  }
LAB_005f8f4c:
  uVar6 = *(uint *)(param_1 + 0xdc);
  iVar2 = *(int *)(param_1 + 0xe0);
  if (0x3fffff < (int)uVar6) {
    uVar6 = 0x400000;
  }
  lVar1 = param_1 + 0x6a0;
  if (*(ulong *)(param_1 + 0x6b8) < (ulong)(long)iVar2) {
    uVar3 = FUN_005fb560(lVar1,(long)iVar2,1);
    if ((uVar3 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x6b0) = 0;
    }
    else {
      uVar7 = *(ulong *)(param_1 + 0x6b8);
      uVar3 = *(ulong *)(param_1 + 0x6b0);
      if (uVar7 < *(ulong *)(param_1 + 0x6b0)) {
        *(ulong *)(param_1 + 0x6b0) = uVar7;
        uVar3 = uVar7;
      }
      if (uVar3 != 0) {
        *(long *)(param_1 + 0x6d0) = *(long *)(param_1 + 0x6c8);
        *(ulong *)(param_1 + 0x6d8) = *(long *)(param_1 + 0x6c8) + uVar3 * 8;
        goto joined_r0x005f8fb8;
      }
    }
    *(undefined8 *)(param_1 + 0x6d8) = 0;
    *(undefined8 *)(param_1 + 0x6d0) = 0;
  }
joined_r0x005f8fb8:
  if (0 < iVar2) {
    iVar8 = 0;
    do {
      while( true ) {
        plVar4 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x38))
                                   (*(long **)(param_1 + 8),0x460,0x10,
                                    "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp"
                                    ,0xa75);
        FUN_006529a0(plVar4,*(undefined8 *)(param_1 + 8),param_1);
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        uStack_b0 = 0;
        local_98 = 0;
        uStack_94 = 1;
        local_80 = 0;
        uStack_78 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_70 = 0xffffffffffffffff;
        uStack_68 = 0xffffffffffffffff;
        local_b8 = (ulong)uVar6;
        local_a8 = 0x100000001;
        local_a0 = 1;
        uVar3 = (**(code **)(*plVar4 + 0x40))(plVar4,&local_b8);
        if ((uVar3 & 1) != 0) break;
        (**(code **)(*plVar4 + 0x18))(plVar4);
joined_r0x005f90c4:
        iVar8 = iVar8 + 1;
        if (iVar2 <= iVar8) goto LAB_005f9120;
      }
      uVar3 = *(ulong *)(param_1 + 0x6b0);
      uVar7 = *(ulong *)(param_1 + 0x6b8);
      if (uVar3 < uVar7) {
LAB_005f9098:
        *(long **)(*(long *)(param_1 + 0x6c8) + uVar3 * 8) = plVar4;
        lVar5 = *(long *)(param_1 + 0x6b0) + 1;
        *(long *)(param_1 + 0x6b0) = lVar5;
        *(long *)(param_1 + 0x6d0) = *(long *)(param_1 + 0x6c8);
        *(long *)(param_1 + 0x6d8) = *(long *)(param_1 + 0x6c8) + lVar5 * 8;
        goto joined_r0x005f90c4;
      }
      if (*(long *)(param_1 + 0x6e0) == 0) {
        lVar5 = uVar7 * 2;
        if (lVar5 == 0) {
          lVar5 = 1;
        }
        uVar3 = FUN_005fb560(lVar1,lVar5,1);
      }
      else {
        uVar3 = FUN_005fb560(lVar1,*(long *)(param_1 + 0x6e0) + uVar7,1);
      }
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(param_1 + 0x6b0);
        goto LAB_005f9098;
      }
      *(undefined8 *)(param_1 + 0x6b0) = 0;
      *(undefined8 *)(param_1 + 0x6d0) = 0;
      *(undefined8 *)(param_1 + 0x6d8) = 0;
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar2);
  }
LAB_005f9120:
  uVar6 = *(uint *)(param_1 + 0xe4);
  iVar2 = *(int *)(param_1 + 0xe8);
  if (0x3fffff < (int)uVar6) {
    uVar6 = 0x400000;
  }
  lVar1 = param_1 + 0x6f0;
  if (*(ulong *)(param_1 + 0x708) < (ulong)(long)iVar2) {
    uVar3 = FUN_005fb560(lVar1,(long)iVar2,1);
    if ((uVar3 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x700) = 0;
    }
    else {
      uVar7 = *(ulong *)(param_1 + 0x708);
      uVar3 = *(ulong *)(param_1 + 0x700);
      if (uVar7 < *(ulong *)(param_1 + 0x700)) {
        *(ulong *)(param_1 + 0x700) = uVar7;
        uVar3 = uVar7;
      }
      if (uVar3 != 0) {
        *(long *)(param_1 + 0x720) = *(long *)(param_1 + 0x718);
        *(ulong *)(param_1 + 0x728) = *(long *)(param_1 + 0x718) + uVar3 * 8;
        goto joined_r0x005f91ac;
      }
    }
    *(undefined8 *)(param_1 + 0x728) = 0;
    *(undefined8 *)(param_1 + 0x720) = 0;
  }
joined_r0x005f91ac:
  if (0 < iVar2) {
    iVar8 = 0;
    do {
      while( true ) {
        plVar4 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x38))
                                   (*(long **)(param_1 + 8),0x460,0x10,
                                    "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp"
                                    ,0xa97);
        FUN_006529a0(plVar4,*(undefined8 *)(param_1 + 8),param_1);
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        uStack_b0 = 0;
        local_98 = 0;
        uStack_94 = 1;
        local_80 = 0;
        uStack_78 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_70 = 0xffffffffffffffff;
        uStack_68 = 0xffffffffffffffff;
        local_a0 = 2;
        local_a8 = 0x100000001;
        local_b8 = (ulong)uVar6;
        uVar3 = (**(code **)(*plVar4 + 0x40))(plVar4,&local_b8);
        if ((uVar3 & 1) == 0) break;
        uVar3 = *(ulong *)(param_1 + 0x700);
        uVar7 = *(ulong *)(param_1 + 0x708);
        if (uVar3 < uVar7) {
LAB_005f9278:
          *(long **)(*(long *)(param_1 + 0x718) + uVar3 * 8) = plVar4;
          lVar5 = *(long *)(param_1 + 0x700) + 1;
          *(long *)(param_1 + 0x700) = lVar5;
          *(long *)(param_1 + 0x720) = *(long *)(param_1 + 0x718);
          *(long *)(param_1 + 0x728) = *(long *)(param_1 + 0x718) + lVar5 * 8;
          goto joined_r0x005f92a4;
        }
        if (*(long *)(param_1 + 0x730) == 0) {
          lVar5 = uVar7 * 2;
          if (lVar5 == 0) {
            lVar5 = 1;
          }
          uVar3 = FUN_005fb560(lVar1,lVar5,1);
        }
        else {
          uVar3 = FUN_005fb560(lVar1,*(long *)(param_1 + 0x730) + uVar7,1);
        }
        if ((uVar3 & 1) != 0) {
          uVar3 = *(ulong *)(param_1 + 0x700);
          goto LAB_005f9278;
        }
        *(undefined8 *)(param_1 + 0x700) = 0;
        *(undefined8 *)(param_1 + 0x720) = 0;
        *(undefined8 *)(param_1 + 0x728) = 0;
        iVar8 = iVar8 + 1;
        if (iVar2 <= iVar8) {
          return 1;
        }
      }
      (**(code **)(*plVar4 + 0x18))(plVar4);
joined_r0x005f92a4:
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar2);
  }
  return 1;
}


