/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01416900; name: FUN_01416900
 */


void FUN_01416900(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(long *)(param_1 + 0x110) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x98);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
      (*UNRECOVERED_JUMPTABLE)(param_1 + 0xb0);
    }
    if (*(code **)(param_1 + 0x120) != (code *)0x0) {
      (**(code **)(param_1 + 0x120))(param_1 + 0x130,param_1 + 0xb0);
      *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x120);
      *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x128);
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x110);
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x118);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x118);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x120) = 0;
      *(undefined8 *)(param_1 + 0x128) = 0;
      *(undefined8 *)(param_1 + 0x110) = 0;
      *(undefined8 *)(param_1 + 0x118) = 0;
      (*UNRECOVERED_JUMPTABLE)(param_1 + 0x130);
    }
  }
  if (*(char *)(param_1 + 0x8c) == '\0') {
    if (*(int *)(param_1 + 0x10) == 1) {
      uVar2 = FUN_010386c0(*(undefined8 *)(param_1 + 0x20));
    }
    else if (*(int *)(param_1 + 0x10) == 0) {
      uVar2 = FUN_010386c0(*(undefined8 *)(param_1 + 0x18));
    }
    else {
      uVar2 = FUN_010386c0(0);
    }
    if ((uVar2 & 1) != 0) {
      FUN_014165a0(param_1);
      FUN_016b4cf0();
      *(undefined1 *)(param_1 + 0x8c) = 1;
      if (*(int *)(param_1 + 0x10) == 1) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
      }
      else if (*(int *)(param_1 + 0x10) == 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x18);
      }
      else {
        uVar3 = 0;
      }
      uVar1 = FUN_010386e0(uVar3);
      UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x90);
      *(undefined4 *)(param_1 + 0x88) = uVar1;
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1 + 0xb0);
        if (((uVar2 & 1) != 0) &&
           (UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x98), UNRECOVERED_JUMPTABLE != (code *)0x0
           )) {
          *(undefined8 *)(param_1 + 0xa0) = 0;
          *(undefined8 *)(param_1 + 0xa8) = 0;
          *(undefined8 *)(param_1 + 0x90) = 0;
          *(undefined8 *)(param_1 + 0x98) = 0;
                    /* WARNING: Could not recover jumptable at 0x01416a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(param_1 + 0xb0);
          return;
        }
      }
    }
  }
  return;
}


