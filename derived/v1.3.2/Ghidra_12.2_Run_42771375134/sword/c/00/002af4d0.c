/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002af4d0; name: FUN_002af4d0
 */


undefined8 FUN_002af4d0(long param_1,uint param_2,ulong param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  
  (**(code **)*param_4)(param_4,param_1,param_2 << 2);
  if ((param_2 != 0) && ((param_3 & 1) != 0)) {
    uVar3 = (ulong)param_2;
    puVar4 = (undefined1 *)(param_1 + 3);
    do {
      uVar1 = puVar4[-3];
      puVar4[-3] = *puVar4;
      uVar2 = puVar4[-2];
      *puVar4 = uVar1;
      puVar4[-2] = puVar4[-1];
      puVar4[-1] = uVar2;
      puVar4 = puVar4 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return 1;
}


