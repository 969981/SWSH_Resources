/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ec080; name: FUN_008ec080
 */


void FUN_008ec080(int param_1,undefined8 param_2,ulong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if (5 < param_1) {
    *param_3 = 0;
    if (param_1 == 6) {
      iVar1 = FUN_008ed5b0(DAT_02a4d198,3);
      uVar6 = FUN_008e0a00(param_2);
      uVar5 = FUN_008ed0b0(uVar6,iVar1 + 2);
    }
    else if (param_1 == 7) {
      uVar2 = FUN_008e0a00(param_2);
      uVar3 = FUN_008e0a00(param_2);
      uVar5 = FUN_008ed100(uVar2,uVar3);
    }
    else {
      FUN_008e0a00(param_2);
      uVar5 = FUN_008ed120();
    }
    *param_3 = uVar5;
    return;
  }
  iVar1 = FUN_008e0a00(param_2);
  if (2 < param_1 - 3U) {
    if (param_1 == 2) {
      iVar4 = FUN_008ed5b0(DAT_02a4d198,3);
      *param_3 = (ulong)(iVar4 * 0x100 + 0x200) & 0x3f00 | (ulong)(iVar1 << 3 | 2) & 0xfe;
      return;
    }
    if (param_1 != 1) {
      *param_3 = (ulong)(uint)(iVar1 << 3) & 0xf8;
      return;
    }
  }
  *param_3 = (ulong)(iVar1 << 3 | 1) & 0xff;
  return;
}


