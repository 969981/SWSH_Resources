/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015050b0; name: FUN_015050b0
 */


uint FUN_015050b0(long param_1,uint *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  void *__dest;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  long lStack_88;
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
  plVar4 = *(long **)(param_1 + 0x58);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x30))(plVar4,param_2);
  }
  if (*(ulong *)(param_2 + 4) < 2) {
    plVar4 = *(long **)(param_1 + 0x58);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4,param_2);
    }
    __dest = (void *)(**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),2)
    ;
    if (__dest == (void *)0x0) {
      uVar3 = 0;
      goto LAB_0150527c;
    }
    memcpy(__dest,*(void **)(param_2 + 2),*(size_t *)(param_2 + 6));
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
              (*(long **)(param_1 + 0x38),*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4))
    ;
    *(void **)(param_2 + 2) = __dest;
    param_2[4] = 2;
    param_2[5] = 0;
LAB_01505194:
    lVar7 = 2;
    param_2[6] = 2;
    param_2[7] = 0;
  }
  else {
    lVar7 = *(long *)(param_2 + 6);
    if ((*(ulong *)(param_2 + 4) != 2) && (lVar7 != 2)) {
      plVar4 = *(long **)(param_1 + 0x58);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
      }
      goto LAB_01505194;
    }
  }
  uVar6 = *(undefined8 *)(param_2 + 2);
  local_b0 = PTR_DAT_0272a788 + 0x10;
  uStack_44 = *param_2;
  local_50 = 0;
  local_48 = 0;
  puVar1 = PTR_DAT_0272a770 + 0x10;
  local_58 = puVar1;
  if (uStack_44 != 0) {
    uVar5 = (ulong)uStack_44 - ((ulong)(uStack_44 >> 1) & 0x5555555555555555);
    uStack_44 = uStack_44 ^ uStack_44 << 2;
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uStack_44 = uStack_44 ^ uStack_44 >> 0xf;
    uStack_44 = uStack_44 ^ uStack_44 << 0xd;
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if ((uVar5 != 1) &&
       (uStack_44 = uStack_44 ^ uStack_44 << 2, uStack_44 = uStack_44 ^ uStack_44 >> 0xf,
       uStack_44 = uStack_44 ^ uStack_44 << 0xd, uVar5 != 2)) {
      FUN_014fc490(&local_58);
      for (lVar2 = uVar5 - 3; lVar2 != 0; lVar2 = lVar2 + -1) {
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
  local_90 = uVar6;
  lStack_88 = lVar7;
  local_78 = puVar1;
  uStack_70 = local_50;
  local_48 = uStack_44;
  uVar3 = FUN_015054e0(&local_b0,param_3);
LAB_0150527c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x78));
  return uVar3 & 1;
}


