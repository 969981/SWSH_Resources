/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e53da0; name: FUN_00e53da0
 */


void FUN_00e53da0(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar5 == 0)) {
    lVar4 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_4 + uVar5);
    lVar4 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00ddd9c0(param_1,param_2,param_3,lVar4);
  puVar2 = PTR_DAT_0271fae8;
  *param_1 = (long)(PTR_DAT_0271fae8 + 0x10);
  param_1[9] = (long)(puVar2 + 0x1a0);
  param_1[10] = (long)(puVar2 + 0x1e0);
  if (*(ushort *)((long)param_4 - (long)*param_4) < 7) {
    bVar3 = false;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[3];
    bVar3 = false;
    if (uVar5 != 0) {
      bVar3 = *(char *)((long)param_4 + uVar5) != '\0';
    }
  }
  *(bool *)((long)param_1 + 0x3e4) = bVar3;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 9) {
    bVar3 = false;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[4];
    bVar3 = false;
    if (uVar5 != 0) {
      bVar3 = *(char *)((long)param_4 + uVar5) != '\0';
    }
  }
  *(bool *)((long)param_1 + 0x3e5) = bVar3;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0xb) {
    *(undefined1 *)((long)param_1 + 0x3e6) = 0;
    return;
  }
  uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[5];
  bVar3 = false;
  if (uVar5 != 0) {
    bVar3 = *(char *)((long)param_4 + uVar5) != '\0';
  }
  *(bool *)((long)param_1 + 0x3e6) = bVar3;
  return;
}


