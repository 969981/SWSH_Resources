/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ba9b0; name: FUN_012ba9b0
 */


/* WARNING: Removing unreachable block (ram,0x012baa7c) */

undefined8 FUN_012ba9b0(long param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    uVar4 = 0;
    uVar3 = 0;
    do {
      bVar1 = FUN_0087d530(*(undefined8 *)(*(long *)(param_1 + uVar4 * 8) + 0x58));
      uVar2 = *(ulong *)(param_1 + 0x80);
      uVar3 = uVar3 + bVar1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = uVar3 / uVar2;
    }
    if (0x19 < uVar4) {
      if (uVar2 != 0) {
        uVar3 = 0;
        uVar4 = 0;
        do {
          bVar1 = FUN_0087d530(*(undefined8 *)(*(long *)(param_1 + uVar3 * 8) + 0x58));
          uVar2 = *(ulong *)(param_1 + 0x80);
          uVar3 = uVar3 + 1;
          if (0xb3 < bVar1) {
            uVar4 = uVar4 + 1;
          }
        } while (uVar3 < uVar2);
        if (2 < uVar4) {
          fVar5 = (float)FUN_01029020(0x3f800000,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98));
          if (fVar5 < DAT_01d4c774) {
            return 1;
          }
          uVar2 = *(ulong *)(param_1 + 0x80);
        }
        if (uVar2 != 0) {
          uVar3 = 0;
          uVar4 = 0;
          do {
            bVar1 = FUN_0087d530(*(undefined8 *)(*(long *)(param_1 + uVar3 * 8) + 0x58));
            uVar3 = uVar3 + 1;
            if (0x45 < bVar1) {
              uVar4 = uVar4 + 1;
            }
          } while (uVar3 < *(ulong *)(param_1 + 0x80));
          if ((1 < uVar4) &&
             (fVar5 = (float)FUN_01029020(0x3f800000,
                                          *(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98)),
             fVar5 < 0.5)) {
            return 2;
          }
        }
      }
      return 0;
    }
  }
  return 3;
}


