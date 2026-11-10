/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0ab20; name: FUN_00a0ab20
 */


void FUN_00a0ab20(long param_1,long *param_2,long param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    return;
  }
  lVar6 = param_3;
  if (param_2 != (long *)0x0) {
    cVar2 = FUN_008e0a00(param_3);
    if (((cVar2 != '\x1f') && (iVar3 = (**(code **)(*param_2 + 0x740))(param_2), iVar3 != 0xff)) &&
       (uVar5 = FUN_008e50f0(param_3), (uVar5 & 1) != 0)) {
      uVar4 = FUN_008e16b0(param_3);
      lVar6 = (**(code **)(*param_2 + 0x7e8))(param_2);
      if (((uVar4 & 0xff) != 0x1f) && (lVar6 != 0)) {
        uVar7 = (**(code **)(*param_2 + 0x7f0))(param_2);
        lVar6 = FUN_008df3f0(uVar7,uVar4);
        if (lVar6 != 0) goto LAB_00a0abd0;
      }
    }
    lVar6 = param_3;
  }
LAB_00a0abd0:
  lVar1 = param_3;
  if (lVar6 != 0) {
    lVar1 = lVar6;
  }
  *(long *)(param_1 + 0x18) = param_3;
  *(long *)(param_1 + 8) = param_3;
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}


