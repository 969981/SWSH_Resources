/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012d4ee0; name: FUN_012d4ee0
 */


void FUN_012d4ee0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 local_1b0;
  undefined8 *local_1a8;
  undefined8 local_150;
  undefined8 ******local_148;
  long *local_140;
  undefined8 ******local_138;
  long alStack_130 [32];
  
  pcVar2 = (code *)PTR_FUN_027279b0;
  puVar1 = PTR_FUN_027279a8;
  local_150 = *param_2;
  local_1b0 = param_1[1];
  local_1a8 = &local_150;
  alStack_130[0x1f] = 0;
  alStack_130[0x1d] = 0;
  alStack_130[0x1e] = 0;
  alStack_130[0x1b] = 0;
  alStack_130[0x1c] = 0;
  alStack_130[0x19] = 0;
  alStack_130[0x1a] = 0;
  alStack_130[0x17] = 0;
  alStack_130[0x18] = 0;
  alStack_130[0x15] = 0;
  alStack_130[0x16] = 0;
  alStack_130[0x13] = 0;
  alStack_130[0x14] = 0;
  alStack_130[0x11] = 0;
  alStack_130[0x12] = 0;
  alStack_130[0xf] = 0;
  alStack_130[0x10] = 0;
  alStack_130[0xd] = 0;
  alStack_130[0xe] = 0;
  alStack_130[0xb] = 0;
  alStack_130[0xc] = 0;
  alStack_130[9] = 0;
  alStack_130[10] = 0;
  alStack_130[7] = 0;
  alStack_130[8] = 0;
  alStack_130[5] = 0;
  alStack_130[6] = 0;
  alStack_130[3] = 0;
  alStack_130[4] = 0;
  alStack_130[1] = 0;
  alStack_130[2] = 0;
  local_138 = (undefined8 ******)0x0;
  alStack_130[0] = 0;
  local_148 = &local_138;
  local_140 = alStack_130 + 0x1f;
  FUN_012d4c90(*(undefined8 *)*param_1,&local_148);
  if (0x20 < (ulong)alStack_130[0x1f]) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (alStack_130[0x1f] == 0) {
    pcVar2 = (code *)PTR_FUN_027279b0;
  }
  else {
    local_148 = local_138;
    FUN_012d5070(&local_1b0,&local_148);
    if (1 < (ulong)alStack_130[0x1f]) {
      uVar3 = 1;
      do {
        local_148 = (undefined8 ******)alStack_130[uVar3 - 1];
        (*(code *)puVar1)(&local_1b0,&local_148);
        uVar3 = uVar3 + 1;
      } while (uVar3 < (ulong)alStack_130[0x1f]);
    }
    if (pcVar2 == (code *)0x0) {
      return;
    }
  }
  (*pcVar2)(&local_1b0);
  return;
}


