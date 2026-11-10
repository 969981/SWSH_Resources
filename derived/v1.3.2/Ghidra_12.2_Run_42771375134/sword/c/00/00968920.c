/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00968920; name: FUN_00968920
 */


void FUN_00968920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  iVar3 = FUN_0093b430(param_2);
  if ((iVar3 == 1) && (lVar5 = FUN_0093b2c0(param_2,0), lVar5 != 0)) {
    cVar1 = FUN_008e0a00();
    cVar2 = FUN_008e0a00(param_3);
    if (((cVar1 == cVar2) && (param_4[6] != 7)) &&
       ((uVar6 = FUN_008e2df0(param_3,0xc), (uVar6 & 1) != 0 ||
        ((uVar4 = FUN_00880b40(*param_4), uVar4 < 9 && ((1 << (ulong)(uVar4 & 0x1f) & 0x1d1U) != 0))
        )))) {
      FUN_0093b260(param_2,lVar5);
      return;
    }
  }
  return;
}


