/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121ad90; name: FUN_0121ad90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0121ad90(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar2 = _DAT_00000008;
  uVar3 = 0;
  if (param_2 == (undefined8 *)0x0) {
    *param_1 = uRam0000000000000000;
    param_1[1] = uVar2;
    uVar2 = _DAT_00000008;
    param_1[2] = uRam0000000000000000;
    param_1[3] = uVar2;
    param_1[4] = 0;
    return;
  }
  uVar4 = param_3 * 8;
  puVar1 = param_2;
  if (uVar4 < 0x80) {
    puVar1 = (undefined8 *)0x0;
  }
  uVar2 = puVar1[1];
  *param_1 = *puVar1;
  param_1[1] = uVar2;
  puVar1 = param_2 + 2;
  if (uVar4 < 0x100) {
    puVar1 = (undefined8 *)0x0;
  }
  uVar2 = puVar1[1];
  param_1[2] = *puVar1;
  param_1[3] = uVar2;
  if (0x13f < uVar4) {
    uVar3 = param_2[4];
  }
  param_1[4] = uVar3;
  return;
}


