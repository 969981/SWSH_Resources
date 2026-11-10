/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005d9f30; name: FUN_005d9f30
 */


void FUN_005d9f30(long *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  
  puVar4 = (ulong *)(param_1 + 0xf);
  uVar3 = *puVar4;
  plVar1 = param_1 + 0x12;
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      plVar2 = *(long **)(*plVar1 + uVar5 * 8);
      if (plVar2 != (long *)0x0) {
        *(undefined8 *)(*plVar1 + uVar5 * 8) = 0;
        (**(code **)(*plVar2 + 0x18))();
        uVar3 = *puVar4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (((*(byte *)(param_1 + 0x16) & 1) == 0) && (*plVar1 != 0)) {
    plVar2 = (long *)param_1[0xe];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  *puVar4 = 0;
  param_1[0x10] = 0;
  param_1[0x16] = 0;
  *plVar1 = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  puVar4 = (ulong *)(param_1 + 0x19);
  uVar3 = *puVar4;
  plVar1 = param_1 + 0x1c;
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      plVar2 = *(long **)(*plVar1 + uVar5 * 8);
      if (plVar2 != (long *)0x0) {
        *(undefined8 *)(*plVar1 + uVar5 * 8) = 0;
        (**(code **)(*plVar2 + 0x18))();
        uVar3 = *puVar4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (((*(byte *)(param_1 + 0x20) & 1) == 0) && (*plVar1 != 0)) {
    plVar2 = (long *)param_1[0x18];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  *puVar4 = 0;
  param_1[0x1a] = 0;
  param_1[0x20] = 0;
  *plVar1 = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  uVar3 = param_1[0x23];
  plVar1 = param_1 + 0x26;
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      plVar2 = *(long **)(*plVar1 + uVar5 * 8);
      if (plVar2 != (long *)0x0) {
        *(undefined8 *)(*plVar1 + uVar5 * 8) = 0;
        (**(code **)(*plVar2 + 0x18))();
        uVar3 = param_1[0x23];
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (((*(byte *)(param_1 + 0x2a) & 1) == 0) && (*plVar1 != 0)) {
    plVar2 = (long *)param_1[0x22];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x2a] = 0;
  *plVar1 = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  uVar3 = param_1[0x2d];
  plVar1 = param_1 + 0x30;
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      plVar2 = *(long **)(*plVar1 + uVar5 * 8);
      if (plVar2 != (long *)0x0) {
        *(undefined8 *)(*plVar1 + uVar5 * 8) = 0;
        (**(code **)(*plVar2 + 0x18))();
        uVar3 = param_1[0x2d];
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (((*(byte *)(param_1 + 0x34) & 1) == 0) && (*plVar1 != 0)) {
    plVar2 = (long *)param_1[0x2c];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x34] = 0;
  *plVar1 = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  uVar3 = param_1[0x37];
  plVar1 = param_1 + 0x3a;
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      plVar2 = *(long **)(*plVar1 + uVar5 * 8);
      if (plVar2 != (long *)0x0) {
        *(undefined8 *)(*plVar1 + uVar5 * 8) = 0;
        (**(code **)(*plVar2 + 0x18))();
        uVar3 = param_1[0x37];
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (((*(byte *)(param_1 + 0x3e) & 1) == 0) && (*plVar1 != 0)) {
    plVar2 = (long *)param_1[0x36];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3e] = 0;
  *plVar1 = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  uVar3 = param_1[0x41];
  plVar1 = param_1 + 0x44;
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      plVar2 = *(long **)(*plVar1 + uVar5 * 8);
      if (plVar2 != (long *)0x0) {
        *(undefined8 *)(*plVar1 + uVar5 * 8) = 0;
        (**(code **)(*plVar2 + 0x18))();
        uVar3 = param_1[0x41];
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (*plVar1 != 0)) {
    plVar2 = (long *)param_1[0x40];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x48] = 0;
  *plVar1 = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
                    /* WARNING: Could not recover jumptable at 0x005da274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1);
  return;
}


