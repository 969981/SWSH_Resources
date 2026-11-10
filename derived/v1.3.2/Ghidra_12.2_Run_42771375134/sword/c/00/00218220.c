/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00218220; name: FUN_00218220
 */


void FUN_00218220(long *param_1,uint param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  
  if (*(ushort *)(param_1 + 1) == 2) {
    lVar5 = *(long *)(*param_1 + (ulong)(1 - param_2) * 8);
    if (*(char *)((long)param_1 + 10) != '\0') {
      (**(code **)(*param_3 + 8))(param_3,*param_1,0x10);
    }
    *param_1 = lVar5;
    *(undefined4 *)(param_1 + 1) = 0x1010001;
    return;
  }
  uVar2 = *(ushort *)(param_1 + 1) - 1;
  if (uVar2 == 0) {
    *param_1 = 0;
    *(undefined2 *)(param_1 + 1) = 0;
    *(undefined1 *)((long)param_1 + 0xb) = 0;
    return;
  }
  *(short *)(param_1 + 1) = (short)uVar2;
  uVar1 = uVar2 & 0xffff;
  *(undefined8 *)(*param_1 + (ulong)param_2 * 8) =
       *(undefined8 *)(*param_1 + ((ulong)uVar2 & 0xffff) * 8);
  uVar2 = uVar1 - 1;
  if (*(char *)((long)param_1 + 10) == '\0') {
    uVar2 = uVar2 | uVar2 >> 1;
    uVar2 = uVar2 | uVar2 >> 2;
    uVar2 = uVar2 | uVar2 >> 4;
    uVar2 = uVar2 | uVar2 >> 8;
    pvVar4 = (void *)(**(code **)*param_3)(param_3,(uVar2 | uVar2 >> 0x10) * 8 + 8);
    memcpy(pvVar4,(void *)*param_1,(ulong)*(ushort *)(param_1 + 1) << 3);
    if (*(char *)((long)param_1 + 10) != '\0') {
      (**(code **)(*param_3 + 8))(param_3,*param_1,0);
    }
    *param_1 = (long)pvVar4;
  }
  else {
    if ((uVar2 & uVar1) != 0) {
      return;
    }
    uVar3 = (**(code **)(*param_3 + 0x10))(param_3,uVar1 << 1,uVar1);
    if ((uVar3 & 1) != 0) {
      return;
    }
    pvVar4 = (void *)(**(code **)*param_3)(param_3,uVar1 << 3);
    memcpy(pvVar4,(void *)*param_1,(ulong)*(ushort *)(param_1 + 1) << 3);
    if (*(char *)((long)param_1 + 10) != '\0') {
      (**(code **)(*param_3 + 8))(param_3,*param_1,uVar1 << 4);
    }
    *param_1 = (long)pvVar4;
  }
  *(undefined1 *)((long)param_1 + 10) = 1;
  return;
}


