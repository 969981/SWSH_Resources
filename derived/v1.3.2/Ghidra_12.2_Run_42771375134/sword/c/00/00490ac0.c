/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00490ac0; name: FUN_00490ac0
 */


void FUN_00490ac0(long *param_1,uint param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  void *__src;
  long lVar3;
  uint *puVar4;
  ulong *puVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  undefined4 *puVar9;
  
  puVar7 = (uint *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  puVar4 = puVar7;
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 * 0x28;
    do {
      if ((*puVar4 == param_2) && (*(long *)(puVar4 + 2) == param_4)) goto LAB_00490b3c;
      lVar3 = lVar3 + -0x28;
      puVar4 = puVar4 + 10;
    } while (lVar3 != 0);
    puVar4 = puVar7 + (ulong)uVar1 * 10;
  }
LAB_00490b3c:
  nn::os::LockMutex((MutexType *)(param_1 + 4));
  puVar9 = (undefined4 *)PTR_DAT_02712a90;
  if (puVar4 == puVar7 + (ulong)uVar1 * 10) {
    puVar7 = (uint *)*param_1;
    uVar1 = *(uint *)(param_1 + 1);
    puVar4 = puVar7;
    if (uVar1 == 0) {
LAB_00490bdc:
      if (puVar4 == puVar7 + (ulong)uVar1 * 10) goto LAB_00490bf4;
      puVar4 = puVar4 + 4;
    }
    else {
      lVar3 = (ulong)uVar1 * 0x28;
      do {
        if ((*puVar4 == param_2) && (*(long *)(puVar4 + 2) == param_4)) goto LAB_00490bdc;
        lVar3 = lVar3 + -0x28;
        puVar4 = puVar4 + 10;
      } while (lVar3 != 0);
LAB_00490bf4:
      uVar6 = *(uint *)((long)param_1 + 0xc);
      if (uVar6 <= uVar1) {
        uVar6 = uVar6 + 1;
        __dest = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar6 * 0x28);
        if (__dest == (void *)0x0) goto LAB_00490b6c;
        __src = (void *)*param_1;
        if ((__src != (void *)0x0) && (__src != __dest)) {
          uVar2 = *(uint *)(param_1 + 1);
          if (uVar2 != 0) {
            memcpy(__dest,__src,0x28);
            if (uVar2 != 1) {
              if (uVar2 == 2) {
                lVar3 = 1;
              }
              else {
                lVar8 = 0;
                lVar3 = 1;
                do {
                  memcpy((void *)((long)__dest + lVar8 + 0x28),(void *)(*param_1 + lVar8 + 0x28),
                         0x28);
                  memcpy((void *)((long)__dest + lVar8 + 0x50),(void *)(*param_1 + lVar8 + 0x50),
                         0x28);
                  lVar3 = lVar3 + 2;
                  lVar8 = lVar8 + 0x50;
                } while ((ulong)uVar2 - (ulong)(~uVar2 & 1) != lVar3);
              }
              puVar9 = (undefined4 *)PTR_DAT_02712a90;
              if ((~uVar2 & 1) != 0) {
                memcpy((void *)((long)__dest + lVar3 * 0x28),(void *)(*param_1 + lVar3 * 0x28),0x28)
                ;
              }
            }
            __src = (void *)*param_1;
          }
          FUN_00404870(*puVar9,__src);
        }
        *param_1 = (long)__dest;
        *(uint *)((long)param_1 + 0xc) = uVar6;
      }
      if (uVar6 <= uVar1) goto LAB_00490b6c;
      uVar1 = *(uint *)(param_1 + 1);
      lVar3 = *param_1;
      *(uint *)(param_1 + 1) = uVar1 + 1;
      puVar5 = (ulong *)(lVar3 + (ulong)uVar1 * 0x28);
      if (puVar5 == (ulong *)0x0) goto LAB_00490b6c;
      *puVar5 = (ulong)param_2;
      lVar3 = lVar3 + (ulong)uVar1 * 0x28;
      *(long *)(lVar3 + 8) = param_4;
      uVar1 = *(uint *)(param_1 + 1);
      puVar4 = (uint *)(lVar3 + 0x10);
    }
    if (uVar1 != 0) {
      lVar3 = nn::os::GetSystemTick();
      param_1[8] = lVar3;
    }
  }
  else {
    puVar4 = puVar4 + 4;
  }
  *(undefined8 *)(puVar4 + 4) = param_3[1];
  *(undefined8 *)(puVar4 + 2) = *param_3;
  *(long *)puVar4 = param_1[8];
LAB_00490b6c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 4));
  return;
}


