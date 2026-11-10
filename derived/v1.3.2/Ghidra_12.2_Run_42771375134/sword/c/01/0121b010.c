/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121b010; name: FUN_0121b010
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0121b010(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  puVar2 = (undefined8 *)0x0;
  if (*param_2 != 0) {
    if ((ulong)(param_2[1] << 3) < 0x80) {
      uRam0000000000000000 = *param_1;
      _DAT_00000008 = param_1[1];
      lVar3 = *param_2;
      goto joined_r0x0121b05c;
    }
    uVar4 = (ulong)param_2[4] >> 3;
    *(byte *)(param_2[3] + uVar4) =
         *(byte *)(param_2[3] + uVar4) | (byte)(1 << (ulong)((uint)param_2[4] & 7));
    puVar2 = (undefined8 *)*param_2;
  }
  uVar1 = param_1[1];
  *puVar2 = *param_1;
  puVar2[1] = uVar1;
  lVar3 = *param_2;
joined_r0x0121b05c:
  if ((lVar3 == 0) || ((ulong)(param_2[1] << 3) < 0x100)) {
    uRam0000000000000000 = param_1[2];
    _DAT_00000008 = param_1[3];
    lVar3 = *param_2;
  }
  else {
    uVar4 = param_2[4] + 1U >> 3;
    *(byte *)(param_2[3] + uVar4) =
         *(byte *)(param_2[3] + uVar4) | (byte)(1 << (ulong)((uint)(param_2[4] + 1U) & 7));
    lVar3 = *param_2;
    uVar1 = param_1[3];
    *(undefined8 *)(lVar3 + 0x10) = param_1[2];
    *(undefined8 *)(lVar3 + 0x18) = uVar1;
    lVar3 = *param_2;
  }
  if ((lVar3 != 0) && (0x13f < (ulong)(param_2[1] << 3))) {
    *(undefined8 *)(lVar3 + 0x20) = param_1[4];
    uVar4 = param_2[4] + 2U >> 3;
    *(byte *)(param_2[3] + uVar4) =
         *(byte *)(param_2[3] + uVar4) | (byte)(1 << (ulong)((uint)(param_2[4] + 2U) & 7));
  }
  return;
}


