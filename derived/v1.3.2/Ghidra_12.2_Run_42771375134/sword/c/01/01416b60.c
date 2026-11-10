/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01416b60; name: FUN_01416b60
 */


void FUN_01416b60(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x118);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(long *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0x130);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0x130);
    lVar1 = *param_2;
    lVar2 = param_2[1];
    lVar3 = param_2[3];
    *(long *)(param_1 + 0x120) = param_2[2];
    *(long *)(param_1 + 0x128) = lVar3;
    *(long *)(param_1 + 0x110) = lVar1;
    *(long *)(param_1 + 0x118) = lVar2;
  }
  if ((*param_2 == 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x98), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
                    /* WARNING: Could not recover jumptable at 0x01416bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0xb0);
    return;
  }
  return;
}


