/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e94a0; name: FUN_012e94a0
 */


void FUN_012e94a0(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_012ba700(*(undefined8 *)(param_1 + 0x710));
  if (lVar1 == 0) {
    return;
  }
  uVar2 = FUN_012ba700(*(undefined8 *)(param_1 + 0x710));
  FUN_01319d90(uVar2,param_1 + 0x370,param_2);
  return;
}


