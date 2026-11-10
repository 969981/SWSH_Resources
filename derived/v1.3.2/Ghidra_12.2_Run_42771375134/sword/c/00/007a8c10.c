/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a8c10; name: FUN_007a8c10
 */


void FUN_007a8c10(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  if ((*(long *)(param_1 + 0x50) != 0) && (*(long *)(param_1 + 0x58) != 0)) {
    FUN_0193e800();
    FUN_01936f40();
    FUN_007a8cc0(param_1);
    FUN_007a8f00(param_1,param_2);
    FUN_01871bf0();
    FUN_0186bc20();
    FUN_01870d80();
    FUN_01866ad0();
    (**(code **)(**(long **)(param_1 + 0x50) + 0x18))
              (*(long **)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),0x800000,8);
    puVar1 = *(undefined8 **)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1);
                    /* WARNING: Could not recover jumptable at 0x007a8cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x68) + 0x18))
                (*(long **)(param_1 + 0x68),puVar1,*(undefined8 *)(param_1 + 0x70),
                 *(undefined8 *)(param_1 + 0x78));
      return;
    }
  }
  return;
}


