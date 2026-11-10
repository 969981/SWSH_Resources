/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00698df0; name: FUN_00698df0
 */


void FUN_00698df0(undefined8 param_1,long param_2,int *param_3)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_3 == (int *)0x0) {
    return;
  }
  if ((*(ushort *)((long)param_3 - (long)*param_3) < 7) ||
     (uVar3 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[3], uVar3 == 0)) {
    lVar2 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_3 + uVar3);
    lVar2 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00698ee0(param_1,param_2,lVar2);
  if ((*(ushort *)((long)param_3 - (long)*param_3) < 9) ||
     (uVar3 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[4], uVar3 == 0)) {
    lVar2 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_3 + uVar3);
    lVar2 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00699030(param_1,param_2 + 0x10,lVar2);
  if ((*(ushort *)((long)param_3 - (long)*param_3) < 0xb) ||
     (uVar3 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[5], uVar3 == 0)) {
    lVar2 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_3 + uVar3);
    lVar2 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00699240(param_1,param_2 + 0x60,lVar2);
  return;
}


