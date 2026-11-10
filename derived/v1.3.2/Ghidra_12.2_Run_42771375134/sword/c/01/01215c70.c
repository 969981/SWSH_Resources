/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01215c70; name: FUN_01215c70
 */


long FUN_01215c70(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar3 = param_1[9];
  uVar6 = param_1[10];
  lVar7 = param_1[8] + uVar3 * 0x260;
  if (uVar3 < uVar6) {
    FUN_01216540(param_1,lVar7,param_2,param_3);
    param_1[9] = param_1[9] + 1;
    return lVar7;
  }
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
      uVar4 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,uVar1 * 0x260,0x10);
      FUN_012166e0(param_1,uVar4,uVar1,lVar7,1,param_3,param_2);
      return param_1[8] + ((long)(uVar3 * 0x260) >> 5) * 0x20;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


