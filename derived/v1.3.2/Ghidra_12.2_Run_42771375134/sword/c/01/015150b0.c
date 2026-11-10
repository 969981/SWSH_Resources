/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015150b0; name: FUN_015150b0
 */


uint FUN_015150b0(long param_1,uint *param_2,int *param_3)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  void *__dest;
  long *plVar4;
  long lVar5;
  undefined1 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  uint local_48;
  uint uStack_44;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x78));
  plVar3 = *(long **)(param_1 + 0x58);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,param_2);
  }
  if (*(long *)(param_2 + 4) == 0) {
    plVar3 = *(long **)(param_1 + 0x58);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
    }
    __dest = (void *)(**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),1)
    ;
    if (__dest == (void *)0x0) {
      uVar2 = 0;
      goto LAB_015152e8;
    }
    memcpy(__dest,*(void **)(param_2 + 2),*(size_t *)(param_2 + 6));
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
              (*(long **)(param_1 + 0x38),*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4))
    ;
    *(void **)(param_2 + 2) = __dest;
    param_2[4] = 1;
    param_2[5] = 0;
LAB_015151a0:
    uVar8 = 1;
    param_2[6] = 1;
    param_2[7] = 0;
  }
  else if (*(long *)(param_2 + 4) == 1) {
    uVar8 = *(undefined8 *)(param_2 + 6);
  }
  else {
    if (*(long *)(param_2 + 6) != 1) {
      plVar3 = *(long **)(param_1 + 0x58);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2);
      }
      goto LAB_015151a0;
    }
    uVar8 = 1;
  }
  uVar9 = *(undefined8 *)(param_2 + 2);
  local_b0 = PTR_DAT_0272a788 + 0x10;
  uStack_44 = *param_2;
  local_50 = 0;
  local_48 = 0;
  puVar1 = PTR_DAT_0272a770 + 0x10;
  local_58 = puVar1;
  if (uStack_44 != 0) {
    uVar7 = (ulong)uStack_44 - ((ulong)(uStack_44 >> 1) & 0x5555555555555555);
    uStack_44 = uStack_44 ^ uStack_44 << 2;
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uStack_44 = uStack_44 ^ uStack_44 >> 0xf;
    uStack_44 = uStack_44 ^ uStack_44 << 0xd;
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if ((uVar7 != 1) &&
       (uStack_44 = uStack_44 ^ uStack_44 << 2, uStack_44 = uStack_44 ^ uStack_44 >> 0xf,
       uStack_44 = uStack_44 ^ uStack_44 << 0xd, uVar7 != 2)) {
      FUN_014fc490(&local_58);
      for (lVar5 = uVar7 - 3; lVar5 != 0; lVar5 = lVar5 + -1) {
        (**(code **)(local_58 + 0x10))(&local_58);
      }
    }
  }
  puStack_98 = PTR_DAT_0272a778 + 0x10;
  local_80 = 0;
  local_a0 = 0;
  local_68 = CONCAT44(uStack_44,uStack_44);
  local_60 = 0;
  local_a8 = PTR_DAT_0272a780 + 0x10;
  uVar6 = 1;
  if (*param_3 != 0) {
    uVar6 = 2;
  }
  local_58 = (undefined *)CONCAT71(local_58._1_7_,uVar6);
  local_90 = uVar9;
  uStack_88 = uVar8;
  local_78 = puVar1;
  uStack_70 = local_50;
  local_48 = uStack_44;
  plVar3 = (long *)(**(code **)(local_b0 + 0x10))(&local_b0);
  plVar4 = (long *)(**(code **)(*plVar3 + 0x28))();
  uVar7 = (**(code **)(*plVar4 + 0x18))(plVar4,1,plVar3[1]);
  uVar2 = 0;
  if ((uVar7 & 1) != 0) {
    uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,&local_58,1,0);
  }
  lVar5 = (**(code **)(local_b0 + 0x10))(&local_b0);
  *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
LAB_015152e8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x78));
  return uVar2 & 1;
}


