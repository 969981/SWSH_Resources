/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00133bd0; name: FUN_00133bd0
 */


void FUN_00133bd0(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  uint *puVar4;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  
  local_60 = 0;
  local_70 = 0;
  uStack_68 = 0x3f80000000000000;
  local_58 = 0;
  FUN_00218620(param_2,&local_70);
  uVar1 = *(uint *)(param_1 + 0x1f0);
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      puVar4 = *(uint **)(*(long *)(param_1 + 0x1e8) + uVar3 * 8);
      if (puVar4[4] != 0) {
        FUN_00218580(param_2,0xff00ff00);
        puVar2 = (undefined4 *)(*(long *)(*(long *)(param_1 + 0x120) + 8) + (ulong)*puVar4 * 0x18);
        local_90 = *puVar2;
        local_8c = puVar2[1];
        local_88 = puVar2[2];
        local_84 = puVar2[3];
        local_80 = puVar2[4];
        uStack_7c = puVar2[5];
        local_78 = 1;
        FUN_00218ad0(param_2,&local_90);
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  return;
}


