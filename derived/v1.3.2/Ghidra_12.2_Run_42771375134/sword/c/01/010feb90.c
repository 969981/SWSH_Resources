/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010feb90; name: FUN_010feb90
 */


void FUN_010feb90(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  long alStack_80 [12];
  
  if (*(long *)(param_1 + 0x90) == 0) {
    local_a0 = (undefined1 *)0x0;
    uVar2 = FUN_010ef130();
  }
  else {
    FUN_010edb50(&local_a0);
    uVar2 = FUN_010ef130(local_a0);
  }
  if (local_a0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = (undefined1 *)0x0;
  }
  if ((uVar2 & 1) == 0) {
    uVar4 = 0xc;
    if (*(int *)(param_1 + 0x84) == 2) {
      uVar4 = 0xd;
    }
    if (*(int *)(param_1 + 0x84) == 0) {
      local_a0 = (undefined1 *)0x0;
      FUN_01549c70(&local_a0);
      lVar3 = *(long *)(param_1 + 0x130);
      *(undefined1 **)(lVar3 + 0x748) = local_a0;
      *(undefined1 *)(lVar3 + 0x740) = 1;
      uVar4 = 0xe;
    }
    FUN_01102d70(*(undefined8 *)(param_1 + 0x130),uVar4);
    local_a0 = &LAB_010ffdb0;
    local_98 = FUN_010ffe40;
    local_90 = &LAB_010ffe50;
    local_88 = &LAB_010ffe60;
    alStack_80[0] = param_1;
    FUN_01036ef0(*(undefined8 *)(param_1 + 0x138),&local_a0);
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x138),1,1);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x138),0);
    pcVar1 = local_98;
    if (local_98 != (code *)0x0) {
      local_90 = (undefined1 *)0x0;
      local_88 = (undefined1 *)0x0;
      local_a0 = (undefined1 *)0x0;
      local_98 = (code *)0x0;
      (*pcVar1)(alStack_80);
    }
    *(undefined4 *)(param_1 + 0x80) = 7;
  }
  return;
}


