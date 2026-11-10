/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0a7b0; name: FUN_00a0a7b0
 */


long FUN_00a0a7b0(long *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((((param_1 != (long *)0x0) && (cVar1 = FUN_008e0a00(param_2), cVar1 != '\x1f')) &&
      (iVar2 = (**(code **)(*param_1 + 0x740))(param_1), iVar2 != 0xff)) &&
     (uVar4 = FUN_008e50f0(param_2), (uVar4 & 1) != 0)) {
    uVar3 = FUN_008e16b0(param_2);
    lVar5 = (**(code **)(*param_1 + 0x7e8))(param_1);
    if (((uVar3 & 0xff) != 0x1f) && (lVar5 != 0)) {
      uVar6 = (**(code **)(*param_1 + 0x7f0))(param_1);
      lVar5 = FUN_008df3f0(uVar6,uVar3);
      if (lVar5 != 0) {
        return lVar5;
      }
    }
  }
  return param_2;
}


