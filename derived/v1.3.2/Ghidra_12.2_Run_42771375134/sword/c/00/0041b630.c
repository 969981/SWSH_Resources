/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041b630; name: FUN_0041b630
 */


/* WARNING: Removing unreachable block (ram,0x0041b740) */

undefined8 FUN_0041b630(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  undefined8 uVar3;
  void *__src;
  int *piVar4;
  long lVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  long lVar9;
  
  nn::os::LockMutex((MutexType *)(param_1 + 2));
  puVar8 = (undefined4 *)PTR_DAT_02712a90;
  piVar4 = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar6 = piVar4;
  if (uVar1 == 0) {
LAB_0041b6a4:
    if (piVar6 == piVar4 + (ulong)uVar1 * 0xe) goto LAB_0041b6bc;
LAB_0041b808:
    piVar6[10] = 0;
    piVar6[6] = 0;
    piVar6[7] = 0;
    piVar6[8] = 0;
    piVar6[9] = 0;
    piVar6[2] = 0;
    piVar6[3] = 0;
    piVar6[4] = 0;
    piVar6[5] = 0;
    uVar3 = nn::os::GetSystemTick();
    *(undefined8 *)(piVar6 + 0xc) = uVar3;
    uVar3 = 1;
  }
  else {
    lVar5 = (ulong)uVar1 * 0x38;
    do {
      if (*piVar6 == param_2) goto LAB_0041b6a4;
      lVar5 = lVar5 + -0x38;
      piVar6 = piVar6 + 0xe;
    } while (lVar5 != 0);
LAB_0041b6bc:
    uVar7 = *(uint *)((long)param_1 + 0xc);
    if (uVar1 < uVar7) {
LAB_0041b7d4:
      if (uVar1 < uVar7) {
        uVar1 = *(uint *)(param_1 + 1);
        lVar5 = *param_1;
        *(uint *)(param_1 + 1) = uVar1 + 1;
        piVar6 = (int *)(lVar5 + (ulong)uVar1 * 0x38);
        if (piVar6 != (int *)0x0) {
          *piVar6 = param_2;
          piVar6 = (int *)(lVar5 + (ulong)uVar1 * 0x38);
          goto LAB_0041b808;
        }
      }
    }
    else {
      uVar7 = uVar7 + 1;
      __dest = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar7 * 0x38);
      if (__dest != (void *)0x0) {
        __src = (void *)*param_1;
        if ((__src != (void *)0x0) && (__src != __dest)) {
          uVar2 = *(uint *)(param_1 + 1);
          if (uVar2 != 0) {
            memcpy(__dest,__src,0x38);
            if (uVar2 != 1) {
              if (uVar2 == 2) {
                lVar5 = 1;
              }
              else {
                lVar9 = 0;
                lVar5 = 1;
                do {
                  memcpy((void *)((long)__dest + lVar9 + 0x38),(void *)(*param_1 + lVar9 + 0x38),
                         0x38);
                  memcpy((void *)((long)__dest + lVar9 + 0x70),(void *)(*param_1 + lVar9 + 0x70),
                         0x38);
                  lVar5 = lVar5 + 2;
                  lVar9 = lVar9 + 0x70;
                } while ((ulong)uVar2 - (ulong)(~uVar2 & 1) != lVar5);
                puVar8 = (undefined4 *)PTR_DAT_02712a90;
                if ((~uVar2 & 1) == 0) goto LAB_0041b7c0;
              }
              puVar8 = (undefined4 *)PTR_DAT_02712a90;
              memcpy((void *)((long)__dest + lVar5 * 0x38),(void *)(*param_1 + lVar5 * 0x38),0x38);
            }
LAB_0041b7c0:
            __src = (void *)*param_1;
          }
          FUN_00404870(*puVar8,__src);
        }
        *param_1 = (long)__dest;
        *(uint *)((long)param_1 + 0xc) = uVar7;
        goto LAB_0041b7d4;
      }
    }
    uVar3 = 2;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 2));
  return uVar3;
}


