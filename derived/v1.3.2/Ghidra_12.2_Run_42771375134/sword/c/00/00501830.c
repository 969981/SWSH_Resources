/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00501830; name: FUN_00501830
 */


undefined8 *
FUN_00501830(long *param_1,long param_2,long param_3,uint param_4,long param_5,undefined4 param_6,
            undefined4 param_7,long *param_8)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long local_68;
  
  *param_8 = 0;
  nn::os::LockMutex((MutexType *)(param_1 + 0x3c));
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x50))(param_1);
  if (puVar2 != (undefined8 *)0x0) {
    if (*(long *)(param_3 + 0x10) == 0) {
      local_68 = param_3;
    }
    else {
      FUN_004ff230(param_1 + 0x54,param_3,&local_68);
      if (local_68 == 0) {
        lVar3 = puVar2[1];
        puVar2[1] = 0;
        if (lVar3 != 0) {
          FUN_004fe6b0(param_1 + 0x54);
        }
        FUN_00404870(*(undefined4 *)PTR_DAT_027137c8,puVar2);
        puVar2 = (undefined8 *)0x0;
        goto LAB_005019bc;
      }
    }
    lVar3 = *(long *)(local_68 + 8);
    plVar4 = (long *)param_1[199];
    if (plVar4 != (long *)0x0) {
      if (*plVar4 == 0) {
        param_1[199] = 0;
        param_1[0xc6] = 0;
      }
      else {
        param_1[199] = *plVar4;
      }
      *(int *)(param_1 + 0xc5) = (int)param_1[0xc5] + -1;
    }
    plVar4[1] = (ulong)(uint)(*(int *)(param_2 + 0x60) * *(int *)(*(long *)(param_2 + 0x20) + 8)) +
                param_5;
    puVar1 = PTR_FUN_02713860;
    *(undefined4 *)(plVar4 + 2) = param_6;
    *(undefined4 *)((long)plVar4 + 0x14) = param_7;
    plVar4[3] = lVar3 + (ulong)param_4;
    plVar4[4] = (long)puVar1;
    plVar4[5] = (long)plVar4;
    plVar4[6] = 0;
    plVar4[8] = param_2;
    *(byte *)(plVar4 + 9) = *(byte *)(plVar4 + 9) & 0xfc;
    *param_8 = (long)plVar4;
    *(long **)(local_68 + 0x10) = plVar4;
    puVar2[1] = local_68;
    *(uint *)(puVar2 + 2) = param_4;
    *(byte *)((long)puVar2 + 0x14) = *(byte *)((long)puVar2 + 0x14) & 0xf8;
    lVar3 = *param_8;
    if (*(long *)(lVar3 + 0x38) == 0) {
      *(undefined8 **)(lVar3 + 0x38) = puVar2;
      puVar2[3] = 0;
      *puVar2 = 0;
      lVar3 = *(long *)(param_2 + 0xb8);
    }
    else {
      puVar2[3] = *(long *)(lVar3 + 0x38);
      *(undefined8 **)(lVar3 + 0x38) = puVar2;
      *puVar2 = 0;
      lVar3 = *(long *)(param_2 + 0xb8);
    }
    puVar5 = (undefined8 *)(param_2 + 0xb8);
    if (lVar3 != 0) {
      puVar5 = *(undefined8 **)(param_2 + 0xb0);
    }
    *puVar5 = puVar2;
    *(undefined8 **)(param_2 + 0xb0) = puVar2;
    puVar2[4] = param_2;
  }
LAB_005019bc:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3c));
  return puVar2;
}


