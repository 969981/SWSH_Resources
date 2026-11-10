/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e66590; name: FUN_00e66590
 */


void FUN_00e66590(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_28;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar4 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar4 == 0)) {
    lVar3 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_4 + uVar4);
    lVar3 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00de0450(param_1,param_2,param_3,lVar3);
  puVar2 = PTR_DAT_0271fce8;
  *(undefined1 *)((long)param_1 + 0x52e) = 1;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[9] = (long)(puVar2 + 0x250);
  param_1[10] = (long)(puVar2 + 0x290);
  *(undefined4 *)(param_1 + 0xa5) = 0;
  *(undefined2 *)((long)param_1 + 0x52c) = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  *(undefined2 *)((long)param_1 + 0x534) = 0xffff;
  *(undefined8 *)((long)param_1 + 0x53e) = 0;
  param_1[0xa7] = 0;
  param_1[0xa9] = 0;
  *(undefined8 *)((long)param_1 + 0x556) = 0;
  param_1[0xaa] = 0;
  *(undefined8 *)((long)param_1 + 0x55e) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x566) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xae) = 0xff;
  *(undefined2 *)((long)param_1 + 0x56e) = 0;
  *(undefined2 *)((long)param_1 + 0x572) = 0;
  param_1[0xaf] = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)((long)param_1 + 0x584) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  local_28 = 0x5f17fc11021c480f;
  FUN_00dc07c0(param_1,&local_28,0xffffffff);
  local_28 = 0x538b73ebb59bd5b;
  FUN_00dc07c0(param_1,&local_28,0xffffffff);
  local_28 = 0x4097643d8e475f13;
  FUN_00dc07c0(param_1,&local_28,0xffffffff);
  *(uint *)((long)param_1 + 0x38c) = *(uint *)((long)param_1 + 0x38c) | 0x10;
  return;
}


