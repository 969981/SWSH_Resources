/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014e7400; name: FUN_014e7400
 */


uint FUN_014e7400(undefined8 param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_2 != (long *)0x0) {
    lVar5 = param_2[1] - *param_2;
    if (lVar5 != 0) {
      uVar3 = (lVar5 >> 3) * -0x7d05f417d05f417d;
      iVar1 = FUN_00884820(*(undefined8 *)(*param_2 + 0x18));
      uVar2 = (uint)(iVar1 != 0);
      if (uVar3 < 2) {
        return uVar2;
      }
      uVar4 = 1;
      lVar5 = 0x170;
      do {
        iVar1 = FUN_00884820(*(undefined8 *)(*param_2 + lVar5));
        uVar4 = uVar4 + 1;
        if (iVar1 != 0) {
          uVar2 = uVar2 + 1;
        }
        lVar5 = lVar5 + 0x158;
      } while (uVar4 < uVar3);
      return uVar2;
    }
  }
  return 0;
}


