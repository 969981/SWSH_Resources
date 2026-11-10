/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012182d0; name: FUN_012182d0
 */


uint FUN_012182d0(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0121b3c0((undefined8 *)(param_1 + 0x28));
  if ((uVar1 & 1) != 0) {
    uVar2 = *param_2;
    *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)((long)param_2 + 6);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    uVar2 = nn::time::StandardSteadyClock::now();
    *(undefined8 *)(param_1 + 0x38) = uVar2;
  }
  return uVar1 & 1;
}


