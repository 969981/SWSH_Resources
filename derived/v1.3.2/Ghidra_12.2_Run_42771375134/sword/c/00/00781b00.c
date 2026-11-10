/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00781b00; name: FUN_00781b00
 */


void FUN_00781b00(float param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
                 long param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  float local_34;
  
  if ((param_6 != 0) && ((param_4 != param_5 || (param_5 == 1)))) {
    if ((param_4 == param_5) && (param_5 == 1)) {
      if (*(long *)(param_6 + 0xa0) != 0) {
        iVar1 = FUN_00782300(param_3);
        iVar2 = FUN_007822c0(param_3);
        uVar3 = FUN_007822c0(param_3);
        local_34 = (param_1 - (float)uVar3) / (float)(uint)(iVar1 - iVar2);
        (**(code **)(param_6 + 0xa0))(param_6 + 0xc0,param_3,&local_34);
      }
    }
    else if ((param_4 == 0) && (param_5 - 1U < 2)) {
      UNRECOVERED_JUMPTABLE = *(code **)(param_6 + 0x20);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        param_6 = param_6 + 0x40;
LAB_00781bfc:
                    /* WARNING: Could not recover jumptable at 0x00781c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_6,param_3);
        return;
      }
    }
    else {
      if ((1 < param_4 - 1U) || (param_5 != 3)) {
        if (param_4 != 0) {
          return;
        }
        if (param_5 != 3) {
          return;
        }
        if (*(code **)(param_6 + 0x20) != (code *)0x0) {
          (**(code **)(param_6 + 0x20))(param_6 + 0x40,param_3);
        }
      }
      UNRECOVERED_JUMPTABLE = *(code **)(param_6 + 0x120);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        param_6 = param_6 + 0x140;
        goto LAB_00781bfc;
      }
    }
  }
  return;
}


