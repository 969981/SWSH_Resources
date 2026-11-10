/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e6130; name: FUN_007e6130
 */


void FUN_007e6130(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  string *psVar3;
  long lVar4;
  void *pvVar5;
  
  puVar1 = PTR_DAT_02716d10;
  psVar3 = (string *)*param_1;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  if (*(string **)(param_2 + 0x18) == *(string **)puVar1) {
    FUN_009b58d0();
    lVar4 = param_1[5];
    lVar2 = FUN_0084f0d0();
    if (lVar4 == lVar2) {
      return;
    }
  }
  else {
    std::string::operator=(*(string **)(param_2 + 0x18),psVar3);
    lVar4 = param_1[5];
    lVar2 = FUN_0084f0d0();
    if (lVar4 == lVar2) {
      return;
    }
  }
  pvVar5 = *(void **)(param_2 + 0x20);
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
  if (pvVar5 == (void *)0x0) {
    pvVar5 = operator_new(0x50);
    FUN_008579c0();
    *(void **)(param_2 + 0x20) = pvVar5;
  }
  FUN_00858190(pvVar5,param_1[5]);
  return;
}


