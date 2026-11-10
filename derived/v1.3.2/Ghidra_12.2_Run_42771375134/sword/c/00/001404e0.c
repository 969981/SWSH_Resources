/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001404e0; name: FUN_001404e0
 */


undefined8 FUN_001404e0(long param_1,long *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *extraout_x1;
  uint uVar5;
  ulong uVar6;
  
  uVar5 = *(uint *)(param_1 + 0x30);
  if (uVar5 != 0) {
    uVar6 = 0;
    plVar4 = param_2;
    do {
      while( true ) {
        puVar1 = (uint *)(*(long *)(param_1 + 0x20) + uVar6 * 8);
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        if (((*(uint *)(*param_2 + (ulong)(uVar2 >> 5) * 4) & 1 << ((ulong)uVar2 & 0x1f)) == 0) &&
           ((*(uint *)(*param_2 + (ulong)(uVar3 >> 5) * 4) & 1 << (ulong)(uVar3 & 0x1f)) == 0))
        break;
        uVar2 = uVar2 | uVar3 << 0x10;
        uVar2 = uVar2 + (uVar2 << 0xf ^ 0xffffffff);
        uVar5 = (uVar2 ^ (int)uVar2 >> 10) * 9;
        uVar5 = uVar5 ^ (int)uVar5 >> 6;
        uVar5 = uVar5 + (uVar5 << 0xb ^ 0xffffffff);
        FUN_001401b0(param_1,plVar4,param_3,*(uint *)(param_1 + 0x38) & (uVar5 ^ (int)uVar5 >> 0x10)
                     ,uVar6);
        uVar5 = *(uint *)(param_1 + 0x30);
        plVar4 = extraout_x1;
        if (uVar5 <= (uint)uVar6) {
          return 1;
        }
      }
      uVar2 = (uint)uVar6 + 1;
      uVar6 = (ulong)uVar2;
    } while (uVar2 < uVar5);
  }
  return 1;
}


