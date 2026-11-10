/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00218090; name: FUN_00218090
 */


void FUN_00218090(long *param_1,long param_2,long *param_3)

{
  ushort uVar1;
  long *plVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  
  uVar1 = *(ushort *)(param_1 + 1);
  if (uVar1 == 1) {
    lVar5 = *param_1;
    plVar2 = (long *)(**(code **)*param_3)(param_3,0x10);
    *param_1 = (long)plVar2;
    *plVar2 = lVar5;
    *(undefined2 *)((long)param_1 + 10) = 1;
  }
  else {
    if (uVar1 == 0) {
      *param_1 = param_2;
      *(undefined2 *)(param_1 + 1) = 1;
      *(undefined1 *)((long)param_1 + 0xb) = 1;
      return;
    }
    if (*(char *)((long)param_1 + 10) == '\0') {
      uVar1 = uVar1 | uVar1 >> 1;
      uVar1 = uVar1 | uVar1 >> 2;
      uVar1 = uVar1 | uVar1 >> 4;
      pvVar4 = (void *)(**(code **)*param_3)(param_3,(uint)(ushort)(uVar1 | uVar1 >> 8) * 8 + 8);
      memcpy(pvVar4,(void *)*param_1,(ulong)*(ushort *)(param_1 + 1) << 3);
      if (*(char *)((long)param_1 + 10) != '\0') {
        (**(code **)(*param_3 + 8))(param_3,*param_1,0);
      }
      *param_1 = (long)pvVar4;
    }
    else {
      if (((uVar1 - 1 & uVar1) != 0) ||
         (uVar3 = (**(code **)(*param_3 + 0x10))(param_3,uVar1,(ulong)uVar1 << 1), (uVar3 & 1) != 0)
         ) goto LAB_002181f0;
      pvVar4 = (void *)(**(code **)*param_3)(param_3,(ulong)uVar1 << 4);
      memcpy(pvVar4,(void *)*param_1,(ulong)*(ushort *)(param_1 + 1) << 3);
      if (*(char *)((long)param_1 + 10) != '\0') {
        (**(code **)(*param_3 + 8))(param_3,*param_1,(ulong)uVar1 << 3);
      }
      *param_1 = (long)pvVar4;
    }
    *(undefined1 *)((long)param_1 + 10) = 1;
  }
LAB_002181f0:
  uVar1 = *(ushort *)(param_1 + 1);
  *(ushort *)(param_1 + 1) = uVar1 + 1;
  *(long *)(*param_1 + (ulong)uVar1 * 8) = param_2;
  return;
}


