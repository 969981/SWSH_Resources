/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c5460; name: FUN_007c5460
 */


long FUN_007c5460(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar3 = param_1[9];
  uVar6 = param_1[10];
  lVar7 = param_1[8] + uVar3 * 0x180;
  if (uVar3 < uVar6) {
    uVar8 = *param_1;
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar4 + 0x80) < 0x10) {
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar8;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      FUN_007c2250(lVar7,param_2);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      param_1[9] = param_1[9] + 1;
      return lVar7;
    }
  }
  else {
    uVar5 = param_1[1];
    uVar1 = uVar3 + 1;
    if (uVar1 - uVar6 <= uVar5 - uVar6) {
      uVar2 = uVar6 << 3;
      if (4 < uVar6 >> 0x3d) {
        uVar2 = 0xffffffffffffffff;
      }
      if (uVar6 >> 0x3d == 0) {
        uVar2 = (uVar6 << 3) / 5;
      }
      uVar6 = uVar5;
      if (uVar2 <= uVar5) {
        uVar6 = uVar2;
      }
      if (uVar1 <= uVar6) {
        uVar1 = uVar6;
      }
      if (uVar1 <= uVar5) {
        uVar8 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,uVar1 * 0x180,8);
        FUN_007c5a90(param_1,uVar8,uVar1,lVar7,1,param_2);
        return param_1[8] + ((long)(uVar3 * 0x180) >> 7) * 0x80;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


