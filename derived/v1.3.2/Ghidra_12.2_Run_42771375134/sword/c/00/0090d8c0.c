/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0090d8c0; name: FUN_0090d8c0
 */


void FUN_0090d8c0(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar5 = FUN_008f7fc0(*(undefined8 *)(param_1 + 0x58));
  lVar7 = 0;
  do {
    uVar2 = *(undefined4 *)(lVar5 + lVar7 + 8);
    lVar1 = lVar7 + 8;
    *(undefined2 *)((long)param_2 + lVar7 + 0x10) = *(undefined2 *)(lVar5 + lVar7 + 4);
    *(undefined4 *)((long)param_2 + lVar7 + 0x14) = uVar2;
    lVar7 = lVar1;
  } while (lVar1 != 0x180);
  uVar6 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
  uVar6 = FUN_008df7f0(uVar6,4);
  *param_2 = uVar6;
  FUN_008e0b60();
  uVar4 = FUN_008e5ef0();
  *(uint *)(param_2 + 1) = uVar4 & 0xff;
  *(undefined1 *)((long)param_2 + 0xc) =
       *(undefined1 *)(param_1 + (ulong)*(byte *)(param_1 + 0x2a6) * 8 + 0x266);
  bVar3 = FUN_008fb5d0(*(undefined8 *)(param_1 + 0x58));
  *(byte *)((long)param_2 + 0xd) = bVar3 & 1;
  return;
}


