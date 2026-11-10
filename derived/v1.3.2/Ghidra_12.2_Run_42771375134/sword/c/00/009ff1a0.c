/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ff1a0; name: FUN_009ff1a0
 */


undefined8 FUN_009ff1a0(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x188);
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar6 + 0x5d8);
    uVar2 = *(uint *)(lVar6 + 0x5dc);
    uVar3 = *(uint *)(lVar6 + 0x5e4);
    uVar4 = *(uint *)(lVar6 + 0x5e8);
    if (((((uVar2 == 0 && uVar1 == 0) && *(uint *)(lVar6 + 0x5e0) == 0) && uVar3 == 0) && uVar4 == 0
        ) && *(uint *)(lVar6 + 0x5ec) == 0) {
      return 1;
    }
    uVar5 = *param_2;
    if ((uVar1 < uVar5) ||
       ((uVar1 == uVar5 &&
        ((uVar2 < param_2[1] || ((uVar2 == param_2[1] && (*(uint *)(lVar6 + 0x5e0) <= param_2[2]))))
        )))) {
      if (uVar5 < uVar3) {
        return 1;
      }
      if (uVar5 == uVar3) {
        if (param_2[1] < uVar4) {
          return 1;
        }
        if ((param_2[1] == uVar4) && (param_2[2] <= *(uint *)(lVar6 + 0x5ec))) {
          return 1;
        }
      }
    }
  }
  return 0;
}


