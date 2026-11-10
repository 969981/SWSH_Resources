/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00490790; name: FUN_00490790
 */


/* WARNING: Removing unreachable block (ram,0x004908c4) */

void FUN_00490790(long *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  void *__src;
  uint *puVar3;
  uint *puVar4;
  ulong *puVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined4 *puVar9;
  
  puVar3 = (uint *)*param_1;
  uVar7 = *(uint *)(param_1 + 1);
  puVar4 = puVar3;
  if (uVar7 == 0) {
LAB_0049080c:
    if (puVar4 != puVar3 + (ulong)uVar7 * 10) {
      return;
    }
  }
  else {
    lVar6 = (ulong)uVar7 * 0x28;
    do {
      if ((*puVar4 == param_2) && (*(long *)(puVar4 + 2) == param_3)) goto LAB_0049080c;
      lVar6 = lVar6 + -0x28;
      puVar4 = puVar4 + 10;
    } while (lVar6 != 0);
  }
  nn::os::LockMutex((MutexType *)(param_1 + 4));
  puVar9 = (undefined4 *)PTR_DAT_02712a90;
  uVar1 = *(uint *)(param_1 + 1);
  uVar7 = *(uint *)((long)param_1 + 0xc);
  if (uVar7 <= uVar1) {
    uVar7 = uVar7 + 1;
    __dest = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar7 * 0x28);
    if (__dest == (void *)0x0) goto LAB_004909ac;
    __src = (void *)*param_1;
    if ((__src != (void *)0x0) && (__src != __dest)) {
      uVar2 = *(uint *)(param_1 + 1);
      if (uVar2 != 0) {
        memcpy(__dest,__src,0x28);
        if (uVar2 != 1) {
          if (uVar2 == 2) {
            lVar6 = 1;
          }
          else {
            lVar8 = 0;
            lVar6 = 1;
            do {
              memcpy((void *)((long)__dest + lVar8 + 0x28),(void *)(*param_1 + lVar8 + 0x28),0x28);
              memcpy((void *)((long)__dest + lVar8 + 0x50),(void *)(*param_1 + lVar8 + 0x50),0x28);
              lVar6 = lVar6 + 2;
              lVar8 = lVar8 + 0x50;
            } while ((ulong)uVar2 - (ulong)(~uVar2 & 1) != lVar6);
            puVar9 = (undefined4 *)PTR_DAT_02712a90;
            if ((~uVar2 & 1) == 0) goto LAB_00490950;
          }
          puVar9 = (undefined4 *)PTR_DAT_02712a90;
          memcpy((void *)((long)__dest + lVar6 * 0x28),(void *)(*param_1 + lVar6 * 0x28),0x28);
        }
LAB_00490950:
        __src = (void *)*param_1;
      }
      FUN_00404870(*puVar9,__src);
    }
    *param_1 = (long)__dest;
    *(uint *)((long)param_1 + 0xc) = uVar7;
  }
  if (uVar1 < uVar7) {
    uVar7 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar7 + 1;
    puVar5 = (ulong *)(*param_1 + (ulong)uVar7 * 0x28);
    if (puVar5 != (ulong *)0x0) {
      lVar6 = *param_1 + (ulong)uVar7 * 0x28;
      *puVar5 = (ulong)param_2;
      *(long *)(lVar6 + 8) = param_3;
      *(undefined8 *)(lVar6 + 0x18) = 0x3f800000ffffffff;
      *(undefined8 *)(lVar6 + 0x20) = 0x1ffffffff;
    }
  }
LAB_004909ac:
  nn::os::UnlockMutex((MutexType *)(param_1 + 4));
  return;
}


