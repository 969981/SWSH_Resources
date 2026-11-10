/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b2be0; name: FUN_001b2be0
 */


void FUN_001b2be0(long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_003ff570(*(undefined8 *)(param_1 + 0xb8));
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 != 0) {
    lVar3 = *(long *)(param_1 + 8);
    uVar2 = 0;
    do {
      if (*(long **)(lVar3 + (uVar2 & 0xffffffff) * 8) == param_2) {
        *(uint *)(param_1 + 0x10) = uVar1 - 1;
        *(undefined8 *)(lVar3 + uVar2 * 8) = *(undefined8 *)(lVar3 + (ulong)(uVar1 - 1) * 8);
        (**(code **)(*param_2 + 8))(param_2);
        break;
      }
      uVar2 = uVar2 + 1;
    } while ((uint)uVar2 < uVar1);
  }
                    /* try { // try from 001b2c4c to 001b2c4f has its CatchHandler @ 001b2c5c */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 0xb8));
  return;
}


