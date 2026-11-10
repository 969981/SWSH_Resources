/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e6410; name: FUN_007e6410
 */


void FUN_007e6410(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  string *psVar4;
  long lVar5;
  void *pvVar6;
  
  puVar2 = PTR_DAT_02716d10;
  psVar4 = (string *)*param_1;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  if (*(string **)(param_2 + 0x18) == *(string **)puVar2) {
    FUN_009b58d0();
  }
  else {
    std::string::operator=(*(string **)(param_2 + 0x18),psVar4);
  }
  uVar1 = *(undefined4 *)(param_1 + 2);
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
  *(undefined4 *)(param_2 + 0x28) = uVar1;
  lVar5 = param_1[4];
  lVar3 = FUN_00850fb0();
  if (lVar5 == lVar3) {
    return;
  }
  pvVar6 = *(void **)(param_2 + 0x20);
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 4;
  if (pvVar6 == (void *)0x0) {
    pvVar6 = operator_new(0x58);
    FUN_00858d60();
    *(void **)(param_2 + 0x20) = pvVar6;
  }
  FUN_00859620(pvVar6,param_1[4]);
  return;
}


