/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01416ac0; name: FUN_01416ac0
 */


void FUN_01416ac0(long param_1,uint param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(int *)(param_1 + 0x10) == 1) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    uVar1 = 0;
  }
  FUN_01038270(uVar1,param_2 & 1);
  FUN_014165a0(param_1);
  uVar2 = FUN_016b5560();
  if ((uVar2 & 1) != 0) {
    FUN_014165a0(param_1);
    FUN_016b5550();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x98);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0xb0);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x118);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
                    /* WARNING: Could not recover jumptable at 0x01416b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + 0x130);
  return;
}


