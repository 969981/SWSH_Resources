/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00469430; name: FUN_00469430
 */


void FUN_00469430(uint *param_1,long param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  puVar2 = PTR_DAT_02712ad0;
  lVar4 = *(long *)(param_1 + 2);
  if (((lVar4 != 0) && ((*(byte *)(param_2 + 8) >> 2 & 1) != 0)) &&
     (uVar3 = (ulong)*param_1, *param_1 != 0)) {
    lVar5 = 0;
    uVar6 = 1;
    while( true ) {
      uVar1 = *(uint *)(lVar4 + lVar5 + 4);
      if (param_3 <= uVar1 && uVar1 < param_4) {
        FUN_0048f430(*(undefined8 *)puVar2,param_2);
        uVar3 = (ulong)*param_1;
      }
      if (uVar3 <= uVar6) break;
      lVar4 = *(long *)(param_1 + 2);
      lVar5 = lVar5 + 0x10;
      uVar6 = uVar6 + 1;
    }
  }
  return;
}


