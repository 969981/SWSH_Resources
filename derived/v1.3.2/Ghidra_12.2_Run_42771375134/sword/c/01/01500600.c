/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01500600; name: FUN_01500600
 */


undefined8 FUN_01500600(long param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uint *local_70;
  undefined *local_68;
  undefined8 local_60;
  uint local_58;
  uint uStack_54;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x78));
  plVar3 = *(long **)(param_1 + 0x58);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3,param_2);
  }
  FUN_014fde70(&local_70,param_1,param_2,*param_4 + 5);
  if (local_70 != (uint *)0x0) {
    uVar5 = *(undefined8 *)(local_70 + 2);
    uVar6 = *(undefined8 *)(local_70 + 6);
    local_c8 = PTR_DAT_0272a788 + 0x10;
    uStack_54 = *local_70;
    local_60 = 0;
    local_58 = 0;
    puVar1 = PTR_DAT_0272a770 + 0x10;
    local_68 = puVar1;
    if (uStack_54 != 0) {
      uVar4 = (ulong)uStack_54 - ((ulong)(uStack_54 >> 1) & 0x5555555555555555);
      uStack_54 = uStack_54 ^ uStack_54 << 2;
      uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
      uStack_54 = uStack_54 ^ uStack_54 >> 0xf;
      uStack_54 = uStack_54 ^ uStack_54 << 0xd;
      uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if ((uVar4 != 1) &&
         (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
         uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar4 != 2)) {
        FUN_014fc490(&local_68);
        for (lVar2 = uVar4 - 3; lVar2 != 0; lVar2 = lVar2 + -1) {
          (**(code **)(local_68 + 0x10))(&local_68);
        }
      }
    }
    local_b8 = 0;
    local_b0 = PTR_DAT_0272a778 + 0x10;
    local_98 = 0;
    local_80 = CONCAT44(uStack_54,uStack_54);
    local_c0 = PTR_DAT_0272a780 + 0x10;
    uStack_78 = 0;
    uStack_a8 = uVar5;
    local_a0 = uVar6;
    local_90 = puVar1;
    uStack_88 = local_60;
    local_58 = uStack_54;
    uVar4 = FUN_014fdc90(&local_c8,*param_3,*param_4);
    if ((uVar4 & 1) != 0) {
      nn::os::LockMutex((MutexType *)(param_1 + 0x78));
      FUN_014fe170(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_68);
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x78));
      uVar5 = 1;
      goto LAB_015007ac;
    }
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
              (*(long **)(param_1 + 0x38),*(undefined8 *)(local_70 + 2),
               *(undefined8 *)(local_70 + 4));
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x20;
  }
  uVar5 = 0;
LAB_015007ac:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x78));
  return uVar5;
}


