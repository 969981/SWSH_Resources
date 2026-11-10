/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d9fc0; name: FUN_001d9fc0
 */


void FUN_001d9fc0(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x180) != 0) {
    uVar2 = (**(code **)*param_2)(param_2,0x80000000);
    *(undefined8 *)(param_1 + 0x180) = uVar2;
  }
  if (*(long *)(param_1 + 0x188) != 0) {
    uVar2 = (**(code **)*param_2)(param_2,0x80000000);
    *(undefined8 *)(param_1 + 0x188) = uVar2;
  }
  if (*(long *)(param_1 + 400) != 0) {
    uVar2 = (**(code **)*param_2)(param_2,0x80000000);
    *(undefined8 *)(param_1 + 400) = uVar2;
  }
  uVar5 = (ulong)*(ushort *)(param_1 + 0x30);
  plVar4 = (long *)(param_1 + 0x28);
  if (uVar5 != 1) {
    if (*(ushort *)(param_1 + 0x30) == 0) goto LAB_001da090;
    plVar4 = (long *)*plVar4;
  }
  do {
    if (*plVar4 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)*param_2)(param_2,0x80000000);
      *plVar4 = lVar3;
    }
    FUN_00206c40(lVar3,param_1);
    uVar5 = uVar5 - 1;
    plVar4 = plVar4 + 1;
  } while (uVar5 != 0);
LAB_001da090:
  FUN_001e1050(param_1 + 0x18,param_2);
  uVar1 = *(uint *)(param_1 + 0x1c8);
  if (uVar1 != 0) {
    uVar5 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0x1c0);
      if (*(long *)(lVar3 + uVar5 * 8) != 0) {
        uVar2 = (**(code **)*param_2)(param_2,0x80000000);
        *(undefined8 *)(lVar3 + uVar5 * 8) = uVar2;
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  return;
}


