/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013cd3a0; name: FUN_013cd3a0
 */


void FUN_013cd3a0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar1 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar1)();
    lVar3 = FUN_0132d9a0();
    for (; (plVar2 != (long *)0x0 && (plVar2 != (long *)lVar3)); plVar2 = (long *)*plVar2) {
    }
  }
  uVar4 = FUN_01321f40(*(undefined8 *)(param_1 + 0x90));
  if (((((uVar4 & 1) == 0) &&
       (uVar4 = FUN_01363360(*(undefined8 *)(param_1 + 0x98)), (uVar4 & 1) == 0)) &&
      (uVar4 = FUN_013cf2c0(param_1,*param_2), (uVar4 & 1) == 0)) &&
     (uVar4 = FUN_012d6170(1), (uVar4 & 1) != 0)) {
    if (param_2[1] == 0) {
      FUN_013cfbd0(param_1,*param_2);
      uVar4 = FUN_01363360(*(undefined8 *)(param_1 + 0x98));
      goto joined_r0x013cd43c;
    }
    FUN_013cf7e0(param_1);
  }
  uVar4 = FUN_01363360(*(undefined8 *)(param_1 + 0x98));
joined_r0x013cd43c:
  if (((uVar4 & 1) == 0) ||
     (uVar4 = FUN_013638b0(*(undefined8 *)(param_1 + 0x98)), (uVar4 & 1) == 0)) {
    return;
  }
  FUN_013d02e0(uVar4,*param_2);
  return;
}


