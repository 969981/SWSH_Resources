/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093ba00; name: FUN_0093ba00
 */


void FUN_0093ba00(long param_1,byte param_2,byte param_3)

{
  long lVar1;
  long lVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((param_2 < 5) && (param_3 < 5)) {
    lVar7 = (ulong)param_3 * 8;
    lVar1 = param_1 + 0x28;
    lVar8 = (ulong)param_2 * 8;
    lVar5 = (ulong)param_2 * 2;
    lVar2 = param_1 + 0x42;
    uVar9 = *(undefined8 *)(param_1 + lVar8);
    lVar6 = (ulong)param_3 * 2;
    uVar3 = *(undefined2 *)(lVar1 + lVar5);
    uVar4 = *(undefined2 *)(lVar2 + lVar5);
    *(undefined8 *)(param_1 + lVar8) = *(undefined8 *)(param_1 + lVar7);
    *(undefined2 *)(lVar1 + lVar5) = *(undefined2 *)(lVar1 + lVar6);
    *(undefined2 *)(lVar2 + lVar5) = *(undefined2 *)(lVar2 + lVar6);
    *(undefined8 *)(param_1 + lVar7) = uVar9;
    *(undefined2 *)(lVar1 + lVar6) = uVar3;
    *(undefined2 *)(lVar2 + lVar6) = uVar4;
  }
  return;
}


