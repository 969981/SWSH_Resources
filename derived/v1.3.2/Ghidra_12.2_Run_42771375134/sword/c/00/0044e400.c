/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044e400; name: FUN_0044e400
 */


undefined8 FUN_0044e400(undefined8 *param_1,void *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong __n;
  undefined1 auStack_48 [4];
  uint local_44;
  
  *param_4 = 0;
  if (param_1[6] == 0) {
    if (*(uint *)(param_1 + 2) <= param_3) {
      param_3 = *(uint *)(param_1 + 2);
    }
    *param_4 = param_3;
    *(uint *)(param_1 + 2) = *(int *)(param_1 + 2) - param_3;
    memcpy(param_2,(void *)param_1[5],(ulong)*param_4);
    param_1[5] = param_1[5] + (ulong)*param_4;
  }
  else if (param_3 != 0) {
    do {
      while (uVar1 = *(uint *)(param_1 + 2), uVar1 == 0) {
        uVar1 = *(uint *)(param_1 + 3);
        if (param_3 < *(uint *)((long)param_1 + 0x14)) {
          uVar2 = 0;
          if (uVar1 != 0) {
            uVar2 = *(uint *)((long)param_1 + 0x14) / uVar1;
          }
          uVar4 = (**(code **)(*(long *)param_1[6] + 0x38))
                            ((float)(uVar2 * uVar1) / *(float *)(param_1 + 7),(long *)param_1[6],
                             *param_1,uVar2 * uVar1,1,*(undefined1 *)((long)param_1 + 0x3c),
                             param_1 + 2);
          if ((int)uVar4 != 1) {
            return uVar4;
          }
          iVar3 = (**(code **)(*(long *)param_1[6] + 0x68))();
          if (iVar3 != 1) {
            return 1;
          }
          param_1[1] = *param_1;
          if (*(int *)(param_1 + 2) == 0) {
            return 1;
          }
        }
        else {
          uVar2 = 0;
          if (uVar1 != 0) {
            uVar2 = param_3 / uVar1;
          }
          uVar4 = (**(code **)(*(long *)param_1[6] + 0x38))
                            ((float)(uVar2 * uVar1) / *(float *)(param_1 + 7),(long *)param_1[6],
                             param_2,uVar2 * uVar1,1,*(undefined1 *)((long)param_1 + 0x3c),&local_44
                            );
          if ((int)uVar4 != 1) {
            return uVar4;
          }
          iVar3 = (**(code **)(*(long *)param_1[6] + 0x68))();
          if (iVar3 != 1) {
            return 1;
          }
          *param_4 = *param_4 + local_44;
          param_3 = param_3 - local_44;
          if (*(uint *)((long)param_1 + 0x14) <= param_3) {
            (**(code **)(*(long *)param_1[6] + 0x48))((long *)param_1[6],auStack_48);
            return 2;
          }
          param_2 = (void *)((long)param_2 + (ulong)local_44);
        }
        if (param_3 == 0) {
          return 1;
        }
      }
      if (param_3 <= uVar1) {
        uVar1 = param_3;
      }
      __n = (ulong)uVar1;
      memcpy(param_2,(void *)param_1[1],__n);
      param_1[1] = param_1[1] + __n;
      *param_4 = *param_4 + uVar1;
      param_2 = (void *)((long)param_2 + __n);
      param_3 = param_3 - uVar1;
      *(uint *)(param_1 + 2) = *(int *)(param_1 + 2) - uVar1;
    } while (param_3 != 0);
  }
  return 1;
}


