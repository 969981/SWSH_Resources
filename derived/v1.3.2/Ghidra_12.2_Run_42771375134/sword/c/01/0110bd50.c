/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0110bd50; name: FUN_0110bd50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0110bd50(long param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  long alStack_80 [12];
  
  if (*(long *)(param_1 + 0x88) == 0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    FUN_010eb5e0(&local_a0);
    puVar4 = local_a0;
    if (local_a0 == (undefined1 *)0x0) goto LAB_0110bd98;
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
  }
  local_a0 = (undefined1 *)0x0;
LAB_0110bd98:
  if (puVar4[0x88] != '\0') {
    if (puVar4[0x9c] == '\x01') {
      if (*(long *)(param_1 + 0x88) == 0) {
        uVar5 = _DAT_00000078;
      }
      else {
        FUN_010eb5e0(&local_a0);
        uVar5 = *(ulong *)(local_a0 + 0x78);
        if (local_a0 != (undefined1 *)0x0) {
          (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
        }
      }
      uVar3 = 0x11;
      if (uVar5 >> 0x20 == 0) {
        uVar3 = 0x12;
      }
      uVar1 = 0x11;
      if ((uVar5 & 0xff) != 0) {
        uVar1 = uVar3;
      }
      local_a0 = &LAB_0110c590;
      local_98 = FUN_0110c5a0;
      local_90 = &LAB_0110c5b0;
      local_88 = &LAB_0110c5c0;
      alStack_80[0] = param_1;
      FUN_010f5dc0(param_1 + 0xa0,uVar1,&local_a0);
      pcVar2 = local_98;
      if (local_98 != (code *)0x0) {
        local_90 = (undefined1 *)0x0;
        local_88 = (undefined1 *)0x0;
        local_a0 = (undefined1 *)0x0;
        local_98 = (code *)0x0;
        (*pcVar2)(alStack_80);
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 4;
    }
    *(undefined4 *)(param_1 + 0x80) = uVar3;
  }
  return;
}


