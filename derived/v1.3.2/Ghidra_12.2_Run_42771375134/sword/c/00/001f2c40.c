/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f2c40; name: FUN_001f2c40
 */


void FUN_001f2c40(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x30);
  plVar2 = (long *)(param_1 + 0x28);
  if (uVar3 != 1) {
    if (*(ushort *)(param_1 + 0x30) == 0) goto LAB_001f2cac;
    plVar2 = (long *)*plVar2;
  }
  do {
    if (*plVar2 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = (**(code **)*param_2)(param_2,0x80000000);
      *plVar2 = lVar1;
    }
    FUN_00206c40(lVar1,param_1);
    plVar2 = plVar2 + 1;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
LAB_001f2cac:
  FUN_001e1050(param_1 + 0x18,param_2);
  return;
}


