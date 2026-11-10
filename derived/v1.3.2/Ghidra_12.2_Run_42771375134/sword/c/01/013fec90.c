/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013fec90; name: FUN_013fec90
 */


void FUN_013fec90(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x78) = 6;
  FUN_016b2d70(*(undefined8 *)(lVar3 + 0x688),0);
  FUN_016b2d70(*(undefined8 *)(lVar3 + 0x690),0);
  FUN_008c4b10(*(undefined8 *)(param_1 + 0x98),0);
  FUN_00ffa160(*(undefined8 *)(param_1 + 0x98),0,1);
  puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar1 = (long *)(**(code **)*puVar2)(puVar2);
  lVar3 = FUN_013f9d40();
  for (; plVar1 != (long *)lVar3; plVar1 = (long *)*plVar1) {
  }
  lVar3 = puVar2[9];
  UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x2a8);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
  *(undefined8 *)(lVar3 + 0x2b8) = 0;
  *(undefined8 *)(lVar3 + 0x2b0) = 0;
  *(undefined8 *)(lVar3 + 0x2a8) = 0;
  *(undefined8 *)(lVar3 + 0x2a0) = 0;
                    /* WARNING: Could not recover jumptable at 0x013fed3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar3 + 0x2c0);
  return;
}


