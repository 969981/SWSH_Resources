/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014001b0; name: FUN_014001b0
 */


void FUN_014001b0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  
  uVar1 = FUN_010384a0(*(undefined8 *)(param_1 + 0x90));
  if ((uVar1 & 1) != 0) {
    iVar3 = *(int *)(param_1 + 0x568);
    if (0 < iVar3) {
      *(int *)(param_1 + 0x568) = iVar3 + -1;
      iVar3 = iVar3 + -1;
    }
    if (iVar3 != 0) {
      uVar2 = FUN_0101f840(*(undefined8 *)PTR_DAT_02710840);
      uVar1 = FUN_01020290(uVar2,0x10000000);
      if ((((((uVar1 & 1) == 0) && (uVar1 = FUN_01020290(uVar2,0x20000000), (uVar1 & 1) == 0)) &&
           (uVar1 = FUN_01020290(uVar2,0x40000000), (uVar1 & 1) == 0)) &&
          ((((uVar1 = FUN_01020290(uVar2,0x80000000), (uVar1 & 1) == 0 &&
             (uVar1 = FUN_01020290(uVar2,0x1000000000000), (uVar1 & 1) == 0)) &&
            ((uVar1 = FUN_01020290(uVar2,0x200000000), (uVar1 & 1) == 0 &&
             ((uVar1 = FUN_01020290(uVar2,0x400000000), (uVar1 & 1) == 0 &&
              (uVar1 = FUN_01020290(uVar2,0x800000000), (uVar1 & 1) == 0)))))) &&
           (uVar1 = FUN_01020290(uVar2,0x1000000000), (uVar1 & 1) == 0)))) &&
         (((uVar1 = FUN_01020290(uVar2,0x2000000000), (uVar1 & 1) == 0 &&
           (uVar1 = FUN_01020290(uVar2,0x4000000000), (uVar1 & 1) == 0)) &&
          (uVar1 = FUN_01020290(uVar2,0x8000000000), (uVar1 & 1) == 0)))) {
        return;
      }
    }
    if (*(code **)(param_1 + 0x150) != (code *)0x0) {
      (**(code **)(param_1 + 0x150))(param_1 + 0x170);
      UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x158);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        *(undefined8 *)(param_1 + 0x160) = 0;
        *(undefined8 *)(param_1 + 0x168) = 0;
        *(undefined8 *)(param_1 + 0x150) = 0;
        *(undefined8 *)(param_1 + 0x158) = 0;
                    /* WARNING: Could not recover jumptable at 0x014002e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_1 + 0x170);
        return;
      }
    }
  }
  return;
}


