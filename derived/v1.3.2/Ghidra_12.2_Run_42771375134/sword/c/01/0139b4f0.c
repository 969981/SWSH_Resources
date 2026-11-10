/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0139b4f0; name: FUN_0139b4f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0139b4f0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  long local_120 [12];
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [12];
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar2 = FUN_0139c4b0(*(undefined8 *)(param_1 + 0x6a0),&local_40);
  puVar3 = (undefined8 *)FUN_012dcaa0(param_1);
  local_40 = CONCAT44((float)((ulong)*puVar3 >> 0x20) + (float)((ulong)_DAT_01d4b8b0 >> 0x20),
                      (float)*puVar3 + (float)_DAT_01d4b8b0);
  uStack_38 = CONCAT44((float)((ulong)puVar3[1] >> 0x20) + (float)((ulong)_UNK_01d4b8b8 >> 0x20),
                       (float)puVar3[1] + (float)_UNK_01d4b8b8);
  FUN_0139f840(DAT_01d4c698,uVar2,&local_40);
  local_c0 = &LAB_0139c960;
  local_b8 = FUN_0139c9a0;
  local_b0 = &LAB_0139c9b0;
  local_a8 = &LAB_0139c9c0;
  alStack_a0[0] = param_1;
  FUN_0139f180(uVar2,3,&local_c0);
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar1)(alStack_a0);
  }
  local_140 = &LAB_0139c9d0;
  local_138 = FUN_0139c9e0;
  local_130 = &LAB_0139c9f0;
  local_128 = &LAB_0139ca00;
  local_120[0] = param_1;
  FUN_0139f180(uVar2,4,&local_140);
  pcVar1 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = (undefined1 *)0x0;
    local_128 = (undefined1 *)0x0;
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0x0;
    (*pcVar1)(local_120);
  }
  return;
}


