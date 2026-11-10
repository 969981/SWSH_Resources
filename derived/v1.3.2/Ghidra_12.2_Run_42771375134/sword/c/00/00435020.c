/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00435020; name: FUN_00435020
 */


void FUN_00435020(MutexType *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  
  nn::os::LockMutex(param_1);
  if (*(uint *)(param_1 + 0x28) != 0) {
    plVar3 = (long *)**(long **)(param_1 + 0x20);
    if (plVar3 != (long *)0x0) {
      uVar4 = 0;
      plVar5 = (long *)plVar3[1];
      if (plVar5 != (long *)0x0) goto LAB_004350a0;
      goto LAB_0043507c;
    }
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      if (*(uint *)(param_1 + 0x28) <= uVar4) goto LAB_004350d4;
      plVar3 = (long *)(*(long **)(param_1 + 0x20))[uVar4];
    } while (plVar3 == (long *)0x0);
LAB_00435074:
    do {
      plVar5 = (long *)plVar3[1];
      if (plVar5 == (long *)0x0) {
LAB_0043507c:
        do {
          uVar4 = uVar4 + 1;
          if (*(uint *)(param_1 + 0x28) <= uVar4) {
            iVar1 = (int)plVar3[2];
            plVar5 = (long *)0x0;
            plVar2 = plVar3;
            goto joined_r0x004350bc;
          }
          plVar5 = *(long **)(*(long *)(param_1 + 0x20) + (ulong)uVar4 * 8);
        } while (plVar5 == (long *)0x0);
      }
LAB_004350a0:
      iVar1 = (int)plVar3[2];
      plVar2 = plVar3;
joined_r0x004350bc:
      plVar3 = plVar5;
      if (-1 < iVar1) {
        if (plVar3 == (long *)0x0) break;
        goto LAB_00435074;
      }
      (**(code **)(*plVar2 + 0x18))();
    } while (plVar3 != (long *)0x0);
  }
LAB_004350d4:
  nn::os::UnlockMutex(param_1);
  if (*(uint *)(param_1 + 0x290) == 0) {
    return;
  }
  plVar3 = (long *)**(long **)(param_1 + 0x288);
  if (plVar3 != (long *)0x0) {
    uVar4 = 0;
    plVar5 = (long *)plVar3[1];
    if (plVar5 != (long *)0x0) goto LAB_00435144;
    goto LAB_00435120;
  }
  uVar4 = 0;
  do {
    uVar4 = uVar4 + 1;
    if (*(uint *)(param_1 + 0x290) <= uVar4) {
      return;
    }
    plVar3 = (long *)(*(long **)(param_1 + 0x288))[uVar4];
  } while (plVar3 == (long *)0x0);
  do {
    plVar5 = (long *)plVar3[1];
    if (plVar5 == (long *)0x0) {
LAB_00435120:
      do {
        uVar4 = uVar4 + 1;
        if (*(uint *)(param_1 + 0x290) <= uVar4) {
          iVar1 = (int)plVar3[2];
          plVar5 = (long *)0x0;
          plVar2 = plVar3;
          goto joined_r0x00435160;
        }
        plVar5 = *(long **)(*(long *)(param_1 + 0x288) + (ulong)uVar4 * 8);
      } while (plVar5 == (long *)0x0);
    }
LAB_00435144:
    iVar1 = (int)plVar3[2];
    plVar2 = plVar3;
joined_r0x00435160:
    plVar3 = plVar5;
    if (iVar1 < 0) {
      (**(code **)(*plVar2 + 0x18))();
      if (plVar3 == (long *)0x0) {
        return;
      }
    }
    else if (plVar3 == (long *)0x0) {
      return;
    }
  } while( true );
}


