/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00696df0; name: FUN_00696df0
 */


void FUN_00696df0(undefined8 *param_1,int *param_2)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  *param_1 = param_2;
  lVar2 = 0;
  if (param_2 == (int *)0x0) {
LAB_00696e30:
    FUN_00696f40(param_1 + 1,lVar2);
    piVar4 = (int *)*param_1;
  }
  else {
    if ((4 < *(ushort *)((long)param_2 - (long)*param_2)) &&
       (uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar3 != 0)) {
      puVar1 = (uint *)((long)param_2 + uVar3);
      lVar2 = (long)puVar1 + (ulong)*puVar1;
      goto LAB_00696e30;
    }
    FUN_00696f40(param_1 + 1,0);
    piVar4 = (int *)*param_1;
  }
  if (piVar4 != (int *)0x0) {
    if ((6 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
       (uVar3 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar3 != 0)) {
      puVar1 = (uint *)((long)piVar4 + uVar3);
      FUN_00697c30(param_1 + 0xd,(long)puVar1 + (ulong)*puVar1);
      piVar4 = (int *)*param_1;
      goto joined_r0x00696e88;
    }
  }
  FUN_00697c30(param_1 + 0xd,0);
  piVar4 = (int *)*param_1;
joined_r0x00696e88:
  if (piVar4 == (int *)0x0) {
    FUN_00696f40(param_1 + 0x19,0);
    return;
  }
  param_1 = param_1 + 0x19;
  if (*(ushort *)((long)piVar4 - (long)*piVar4) < 9) {
    FUN_00696f40(param_1,0);
    return;
  }
  uVar3 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4];
  if (uVar3 == 0) {
    FUN_00696f40(param_1,0);
    return;
  }
  puVar1 = (uint *)((long)piVar4 + uVar3);
  FUN_00696f40(param_1,(long)puVar1 + (ulong)*puVar1);
  return;
}


