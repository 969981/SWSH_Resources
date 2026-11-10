/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015345e0; name: FUN_015345e0
 */


undefined8
FUN_015345e0(long param_1,int param_2,uint *param_3,byte *param_4,undefined2 *param_5,uint *param_6,
            byte *param_7)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  
  uVar4 = FUN_014ae400(0);
  if ((uint)uVar4 == 0) {
    uVar4 = FUN_014ae400(1,param_2);
    if ((uint)uVar4 == 0) {
      uVar4 = FUN_014ae400(2,param_2);
      if ((uint)uVar4 == 0) {
        return uVar4;
      }
      bVar1 = 0xd2 < (uint)uVar4;
      uVar5 = 0xd1;
      iVar3 = 2;
    }
    else {
      bVar1 = 0xd3 < (uint)uVar4;
      uVar5 = 0xd2;
      iVar3 = 1;
    }
  }
  else {
    iVar3 = 0;
    uVar5 = 399;
    bVar1 = 400 < (uint)uVar4;
  }
  uVar2 = ((uint)uVar4 & 0xffff) - 1;
  if (bVar1) {
    uVar2 = 0xffffffff;
  }
  if (uVar2 <= uVar5) {
    if (iVar3 == 2) {
      param_1 = param_1 + 0x72f0;
      lVar6 = param_1 + (ulong)uVar2 * 0x30;
    }
    else if (iVar3 == 1) {
      param_1 = param_1 + 0x4b60;
      lVar6 = param_1 + (ulong)uVar2 * 0x30;
    }
    else {
      param_1 = param_1 + 0x60;
      lVar6 = param_1 + (ulong)uVar2 * 0x30;
    }
    if (lVar6 != 0) {
      puVar7 = (uint *)(param_1 + (ulong)uVar2 * 0x30 + 0x20);
      uVar5 = *puVar7 >> 0xf & 0x1fff;
      if (param_2 == 0x365) {
        uVar2 = uVar5 / 7 + (uVar5 - uVar5 / 7 >> 1) >> 2;
        *param_6 = uVar5 + uVar2 * -7 & 0xffff;
        uVar5 = uVar2;
      }
      else {
        *param_6 = 0;
      }
      *param_5 = (short)uVar5;
      FUN_008649f0(param_2);
      iVar3 = FUN_00864a10(0x14);
      if (iVar3 == 0xff) {
        uVar5 = 2;
      }
      else {
        uVar5 = *puVar7 >> 0x1d & 3;
      }
      *param_3 = uVar5;
      *param_4 = (byte)(*puVar7 >> 0x1f);
      *param_7 = (byte)(*puVar7 >> 0x1c) & 1;
      return 1;
    }
  }
  return 0;
}


