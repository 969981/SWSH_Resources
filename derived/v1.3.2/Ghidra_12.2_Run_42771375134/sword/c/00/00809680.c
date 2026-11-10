/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00809680; name: FUN_00809680
 */


void FUN_00809680(undefined8 *param_1,void *param_2,ulong param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  void *pvVar4;
  size_t __n;
  void *local_38;
  
  if ((param_3 != 0) && (*(char *)((long)param_1 + 0x15) == '\0')) {
    if (*(char *)((long)param_1 + 0x14) != '\0') {
      *(undefined1 *)((long)param_1 + 0x14) = 0;
      if ((*(byte *)(param_1 + 3) & 1) == 0) {
        FUN_00809680(param_1,(long)param_1 + 0x19,*(byte *)(param_1 + 3) >> 1);
        cVar1 = *(char *)((long)param_1 + 0x15);
      }
      else {
        FUN_00809680(param_1,param_1[5],param_1[4]);
        cVar1 = *(char *)((long)param_1 + 0x15);
      }
      if (cVar1 != '\0') {
        return;
      }
    }
    __n = (size_t)*(int *)(param_1 + 2);
    pvVar4 = (void *)param_1[1];
    if (__n < param_3) {
      do {
        memcpy(pvVar4,param_2,__n);
        iVar2 = *(int *)(param_1 + 2);
        bVar3 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,&local_38,param_1 + 2);
        *(byte *)((long)param_1 + 0x15) = ~bVar3 & 1;
        if ((~bVar3 & 1) != 0) {
          return;
        }
        __n = (size_t)*(int *)(param_1 + 2);
        param_3 = param_3 - (long)iVar2;
        param_2 = (void *)((long)param_2 + (long)iVar2);
        param_1[1] = local_38;
        pvVar4 = local_38;
      } while (__n < param_3);
    }
    memcpy(pvVar4,param_2,param_3);
    param_1[1] = param_1[1] + param_3;
    *(int *)(param_1 + 2) = *(int *)(param_1 + 2) - (int)param_3;
  }
  return;
}


