/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077d930; name: FUN_0077d930
 */


undefined8 FUN_0077d930(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *param_1;
  if (uVar1 == *param_2) {
    do {
      if (uVar1 == 0x10) {
        puVar2 = param_1 + 1;
        uVar3 = (ulong)*puVar2;
        lVar4 = uVar3 * 2 + 4;
        param_1 = param_1 + uVar3 + 2;
        while (lVar4 != 0) {
          param_2 = param_2 + 1;
          lVar4 = lVar4 + -2;
          uVar1 = *puVar2;
          puVar2 = puVar2 + 1;
          if (uVar1 != *param_2) {
            return 0;
          }
        }
        uVar1 = *param_1;
      }
      if (uVar1 == 0) {
        return 1;
      }
      param_1 = param_1 + 1;
      uVar1 = *param_1;
      param_2 = param_2 + 1;
    } while (uVar1 == *param_2);
  }
  return 0;
}


