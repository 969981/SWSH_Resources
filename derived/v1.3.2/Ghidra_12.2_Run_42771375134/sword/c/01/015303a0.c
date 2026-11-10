/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015303a0; name: FUN_015303a0
 */


undefined8 FUN_015303a0(long param_1,undefined8 param_2,char *param_3)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  uint local_58;
  uint uStack_54;
  uint *local_48;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x78));
  plVar2 = *(long **)(param_1 + 0x58);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
  }
  FUN_014fde70(&local_48,param_1,param_2,1);
  if (local_48 != (uint *)0x0) {
    uVar7 = *(undefined8 *)(local_48 + 2);
    uVar8 = *(undefined8 *)(local_48 + 6);
    local_c0 = PTR_DAT_0272a788 + 0x10;
    uStack_54 = *local_48;
    local_60 = 0;
    local_58 = 0;
    puVar1 = PTR_DAT_0272a770 + 0x10;
    local_68 = puVar1;
    if (uStack_54 != 0) {
      uVar6 = (ulong)uStack_54 - ((ulong)(uStack_54 >> 1) & 0x5555555555555555);
      uStack_54 = uStack_54 ^ uStack_54 << 2;
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uStack_54 = uStack_54 ^ uStack_54 >> 0xf;
      uStack_54 = uStack_54 ^ uStack_54 << 0xd;
      uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if ((uVar6 != 1) &&
         (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
         uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar6 != 2)) {
        FUN_014fc490(&local_68);
        for (lVar4 = uVar6 - 3; lVar4 != 0; lVar4 = lVar4 + -1) {
          (**(code **)(local_68 + 0x10))(&local_68);
        }
      }
    }
    puStack_a8 = PTR_DAT_0272a778 + 0x10;
    local_90 = 0;
    local_b0 = 0;
    local_78 = CONCAT44(uStack_54,uStack_54);
    local_70 = 0;
    local_b8 = PTR_DAT_0272a780 + 0x10;
    uVar5 = 1;
    if (*param_3 != '\0') {
      uVar5 = 2;
    }
    local_68 = (undefined *)CONCAT71(local_68._1_7_,uVar5);
    local_a0 = uVar7;
    uStack_98 = uVar8;
    local_88 = puVar1;
    uStack_80 = local_60;
    local_58 = uStack_54;
    plVar2 = (long *)(**(code **)(local_c0 + 0x10))(&local_c0);
    plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
    uVar6 = (**(code **)(*plVar3 + 0x18))(plVar3,1,plVar2[1]);
    if ((uVar6 & 1) == 0) {
      lVar4 = (**(code **)(local_c0 + 0x10))(&local_c0);
      *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
    }
    else {
      uVar6 = (**(code **)(*plVar2 + 0x18))(plVar2,&local_68,1,0);
      lVar4 = (**(code **)(local_c0 + 0x10))(&local_c0);
      *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
      if ((uVar6 & 1) != 0) {
        nn::os::LockMutex((MutexType *)(param_1 + 0x78));
        FUN_014fe170(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_68);
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x78));
        uVar7 = 1;
        goto LAB_015305bc;
      }
    }
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
              (*(long **)(param_1 + 0x38),*(undefined8 *)(local_48 + 2),
               *(undefined8 *)(local_48 + 4));
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x20;
  }
  uVar7 = 0;
LAB_015305bc:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x78));
  return uVar7;
}


