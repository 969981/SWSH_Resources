/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffd450; name: FUN_00ffd450
 */


undefined8 FUN_00ffd450(undefined8 param_1,long param_2,byte *param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_28;
  
  if (param_3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  local_28 = 0xcbf29ce484222645;
  bVar1 = *param_3;
  while (bVar1 != 0) {
    param_3 = param_3 + 1;
    local_28 = (local_28 ^ bVar1) * 0x100000001b3;
    bVar1 = *param_3;
  }
  uVar3 = 0;
  if (*(long *)(param_2 + 0x1b0) != 0) {
    uVar2 = FUN_0167bc20(*(long *)(param_2 + 0x1b0),&local_28);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_2 + 0x1b0) == 0) {
        return 0;
      }
      FUN_0167ba30(*(long *)(param_2 + 0x1b0),&local_28);
    }
    FUN_0167bdb0(param_1,*(undefined8 *)(param_2 + 0x1b0),&local_28);
    uVar3 = 1;
  }
  return uVar3;
}


