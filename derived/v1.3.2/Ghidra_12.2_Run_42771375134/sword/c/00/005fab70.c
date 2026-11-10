/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005fab70; name: FUN_005fab70
 */


long * FUN_005fab70(long param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  
  FUN_006966f0(auStack_50,param_1 + 0x20,1);
  *param_3 = 0;
  if (0 < *(int *)(param_1 + 0x660)) {
    lVar6 = 0;
    do {
      plVar5 = *(long **)(*(long *)(param_1 + 0x678) + lVar6 * 8);
      uVar2 = FUN_00653000(plVar5,param_2,param_3);
      if ((uVar2 & 1) != 0) goto LAB_005fad10;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x660));
  }
  plVar5 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x38))
                             (*(long **)(param_1 + 8),0x460,0x10,
                              "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp"
                              ,0xad7);
  FUN_006529a0(plVar5,*(undefined8 *)(param_1 + 8),param_1);
  if (plVar5 != (long *)0x0) {
    uVar3 = *(uint *)(param_1 + 0xd4);
    if (0xfffff < (int)uVar3) {
      uVar3 = 0x100000;
    }
    uStack_a0 = 0;
    uVar1 = *(uint *)(param_2 + 4);
    if ((int)*(uint *)(param_2 + 4) <= (int)uVar3) {
      uVar1 = uVar3;
    }
    local_84 = 1;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_60 = 0xffffffffffffffff;
    uStack_58 = 0xffffffffffffffff;
    uStack_90 = *(undefined4 *)(param_2 + 0x1c);
    local_94 = 1;
    local_98 = *(undefined4 *)(param_2 + 0x18);
    local_88 = *(undefined4 *)(param_2 + 0x24);
    local_8c = *(undefined4 *)(param_2 + 0x20);
    local_a8 = (ulong)uVar1;
    uVar2 = (**(code **)(*plVar5 + 0x40))(plVar5,&local_a8);
    if (((uVar2 & 1) == 0) || (uVar2 = FUN_00653000(plVar5,param_2,param_3), (uVar2 & 1) == 0)) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
      plVar5 = (long *)0x0;
    }
    else {
      uVar2 = *(ulong *)(param_1 + 0x660);
      uVar4 = *(ulong *)(param_1 + 0x668);
      if (uVar4 <= uVar2) {
        if (*(long *)(param_1 + 0x690) == 0) {
          lVar6 = uVar4 * 2;
          if (lVar6 == 0) {
            lVar6 = 1;
          }
          uVar2 = FUN_005fb560(param_1 + 0x650,lVar6,1);
        }
        else {
          uVar2 = FUN_005fb560(param_1 + 0x650,*(long *)(param_1 + 0x690) + uVar4,1);
        }
        if ((uVar2 & 1) == 0) {
          *(undefined8 *)(param_1 + 0x660) = 0;
          *(undefined8 *)(param_1 + 0x688) = 0;
          *(undefined8 *)(param_1 + 0x680) = 0;
          goto LAB_005fad10;
        }
        uVar2 = *(ulong *)(param_1 + 0x660);
      }
      *(long **)(*(long *)(param_1 + 0x678) + uVar2 * 8) = plVar5;
      lVar6 = *(long *)(param_1 + 0x660) + 1;
      *(long *)(param_1 + 0x660) = lVar6;
      *(long *)(param_1 + 0x680) = *(long *)(param_1 + 0x678);
      *(long *)(param_1 + 0x688) = *(long *)(param_1 + 0x678) + lVar6 * 8;
    }
  }
LAB_005fad10:
  FUN_00696730(auStack_50);
  return plVar5;
}


