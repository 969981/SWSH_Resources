/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0154c9d0; name: FUN_0154c9d0
 */


uint FUN_0154c9d0(long param_1,uint *param_2,undefined8 *param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  void *__dest;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  ulong local_98;
  undefined1 local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined8 local_60;
  uint local_58;
  uint uStack_54;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x78));
  plVar4 = *(long **)(param_1 + 0x58);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x30))(plVar4,param_2);
  }
  uVar5 = *param_4 + 5;
  if (*(ulong *)(param_2 + 4) < uVar5) {
    plVar4 = *(long **)(param_1 + 0x58);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4,param_2);
    }
    __dest = (void *)(**(code **)(**(long **)(param_1 + 0x38) + 0x10))
                               (*(long **)(param_1 + 0x38),uVar5);
    if (__dest == (void *)0x0) {
      uVar3 = 0;
      goto LAB_0154cbb0;
    }
    memcpy(__dest,*(void **)(param_2 + 2),*(size_t *)(param_2 + 6));
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
              (*(long **)(param_1 + 0x38),*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4))
    ;
    *(void **)(param_2 + 2) = __dest;
    *(ulong *)(param_2 + 4) = uVar5;
    *(ulong *)(param_2 + 6) = uVar5;
    uVar7 = uVar5;
  }
  else {
    uVar7 = *(ulong *)(param_2 + 6);
    if (*(ulong *)(param_2 + 4) != uVar5) {
      if (*(ulong *)(param_2 + 6) != uVar5) {
        plVar4 = *(long **)(param_1 + 0x58);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
        }
        *(ulong *)(param_2 + 6) = uVar5;
      }
      uVar7 = uVar5;
    }
  }
  uVar6 = *(undefined8 *)(param_2 + 2);
  local_c0 = PTR_DAT_0272a788 + 0x10;
  uStack_54 = *param_2;
  local_60 = 0;
  local_58 = 0;
  puVar1 = PTR_DAT_0272a770 + 0x10;
  local_68 = puVar1;
  if (uStack_54 != 0) {
    uVar5 = (ulong)uStack_54 - ((ulong)(uStack_54 >> 1) & 0x5555555555555555);
    uStack_54 = uStack_54 ^ uStack_54 << 2;
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uStack_54 = uStack_54 ^ uStack_54 >> 0xf;
    uStack_54 = uStack_54 ^ uStack_54 << 0xd;
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if ((uVar5 != 1) &&
       (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
       uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar5 != 2)) {
      FUN_014fc490(&local_68);
      for (lVar2 = uVar5 - 3; lVar2 != 0; lVar2 = lVar2 + -1) {
        (**(code **)(local_68 + 0x10))(&local_68);
      }
    }
  }
  local_b0 = 0;
  local_a8 = PTR_DAT_0272a778 + 0x10;
  local_90 = 0;
  local_78 = CONCAT44(uStack_54,uStack_54);
  local_b8 = PTR_DAT_0272a780 + 0x10;
  uStack_70 = 0;
  uStack_a0 = uVar6;
  local_98 = uVar7;
  local_88 = puVar1;
  uStack_80 = local_60;
  local_58 = uStack_54;
  uVar3 = FUN_014fdc90(&local_c0,*param_3,*param_4);
LAB_0154cbb0:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x78));
  return uVar3 & 1;
}


