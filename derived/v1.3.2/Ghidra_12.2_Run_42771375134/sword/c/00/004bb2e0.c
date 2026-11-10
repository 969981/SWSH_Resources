/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bb2e0; name: FUN_004bb2e0
 */


ulong FUN_004bb2e0(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0x40) < 1) {
    uVar2 = FUN_004bb330();
    return uVar2;
  }
  local_28[0] = 0;
  local_20 = param_2;
  local_18 = param_3;
  lVar1 = FUN_004bb750(param_1 + 0x30,local_28);
  uVar3 = 1;
  if (lVar1 == 0) {
    uVar3 = 2;
  }
  return (ulong)uVar3;
}


