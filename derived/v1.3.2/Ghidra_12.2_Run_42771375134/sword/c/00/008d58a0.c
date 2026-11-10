/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d58a0; name: FUN_008d58a0
 */


uint FUN_008d58a0(long param_1,uint param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  uint local_4c [3];
  
  if (param_2 == 4) {
    lVar9 = *(long *)(param_1 + 0x98);
    uVar4 = FUN_008e12a0(lVar9,0x13);
  }
  else {
    uVar5 = FUN_008d56f0(param_1);
    uVar7 = FUN_00931920(*(undefined8 *)(param_1 + 0x60));
    lVar9 = FUN_008df7f0(uVar7,uVar5);
    uVar4 = FUN_008e12a0(lVar9,0x13);
    if ((param_2 | 2) == 3) {
      return uVar4;
    }
  }
  if ((0x30 < uVar4 - 0x17) || ((1L << ((ulong)(uVar4 - 0x17) & 0x3f) & 0x1000000080001U) == 0)) {
    FUN_008e0a00(lVar9);
    uVar8 = FUN_009ec850();
    if ((uVar8 & 1) == 0) {
      uVar3 = FUN_008e1290(lVar9);
      uVar2 = *(undefined1 *)(lVar9 + 0x33d);
      uVar6 = FUN_008ec470(uVar3,uVar2,0x1a);
      bVar1 = uVar6 != 0;
      if (bVar1) {
        local_4c[0] = uVar6;
      }
      uVar8 = (ulong)bVar1;
      uVar6 = FUN_008ec470(uVar3,uVar2,0x1b);
      if (uVar6 != 0) {
        local_4c[uVar8] = uVar6;
        uVar8 = (ulong)(bVar1 + 1);
      }
      uVar6 = FUN_008ec470(uVar3,uVar2,0x1c);
      if (uVar6 == 0) {
        if ((int)uVar8 == 0) {
          return uVar4;
        }
      }
      else {
        local_4c[uVar8] = uVar6;
        uVar8 = (ulong)((int)uVar8 + 1);
      }
      lVar9 = FUN_008ed5b0(param_1 + 0x290,uVar8);
      uVar4 = local_4c[lVar9];
    }
  }
  return uVar4;
}


