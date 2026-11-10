/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffd280; name: FUN_00ffd280
 */


uint FUN_00ffd280(long param_1,byte *param_2)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  ulong local_138;
  undefined1 *local_130;
  code *local_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  long local_110;
  ulong uStack_108;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  long local_90;
  ulong uStack_88;
  
  if (param_2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  local_138 = 0xcbf29ce484222645;
  bVar1 = *param_2;
  while (bVar1 != 0) {
    param_2 = param_2 + 1;
    local_138 = (local_138 ^ bVar1) * 0x100000001b3;
    bVar1 = *param_2;
  }
  local_b0 = &LAB_010002d0;
  local_a8 = FUN_01000330;
  local_a0 = &LAB_01000340;
  puStack_98 = &LAB_01000350;
  local_120 = &LAB_01000340;
  puStack_118 = &LAB_01000350;
  local_130 = &LAB_010002d0;
  local_128 = FUN_01000330;
  local_110 = param_1;
  uStack_108 = local_138;
  local_90 = param_1;
  uStack_88 = local_138;
  uVar3 = FUN_00ffd120(param_1,&local_138,&local_130);
  pcVar2 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = (undefined1 *)0x0;
    puStack_118 = (undefined1 *)0x0;
    local_130 = (undefined1 *)0x0;
    local_128 = (code *)0x0;
    (*pcVar2)(&local_110);
  }
  if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x3c0) != 0)) {
    FUN_016d20d0();
  }
  pcVar2 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    puStack_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar2)(&local_90);
  }
  return uVar3 & 1;
}


