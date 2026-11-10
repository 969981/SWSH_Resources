/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01199de0; name: FUN_01199de0
 */


undefined8 FUN_01199de0(long param_1,undefined8 param_2,undefined2 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 local_80;
  undefined8 *local_78;
  long *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  long *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 auStack_38 [8];
  
  if (*(int *)(param_1 + 0x80) == 2) {
    uVar4 = 0;
    if (*(long *)(param_1 + 0x2a8) != 0) {
      plVar5 = *(long **)(param_1 + 0x78);
      FUN_011a6070(&local_80,*(long *)(param_1 + 0x2a8),param_2,plVar5);
      puVar2 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x28,8);
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      puVar1 = local_78;
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      *puVar2 = local_80;
      local_78 = (undefined8 *)0x0;
      puVar2[1] = puVar1;
      puVar2[2] = local_70;
      puVar2[3] = uStack_68;
      puVar2[4] = local_60;
      local_48 = 0x28;
      local_40 = 8;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      local_58 = 0;
      lVar3 = *(long *)(param_1 + 0x88);
      puVar1 = (undefined8 *)(param_1 + 0x90);
      *(undefined8 **)(param_1 + 0x88) = puVar2;
      local_50 = plVar5;
      if (lVar3 == 0) {
        *(undefined8 *)(param_1 + 0x98) = 0x28;
        *(undefined8 *)(param_1 + 0xa0) = 8;
        *puVar1 = plVar5;
        local_58 = 0;
      }
      else {
        FUN_011a1f10(puVar1);
        lVar3 = local_58;
        *puVar1 = local_50;
        *(undefined8 *)(param_1 + 0x98) = local_48;
        *(undefined8 *)(param_1 + 0xa0) = local_40;
        local_58 = 0;
        if (lVar3 != 0) {
          FUN_011a1f10(&local_50);
        }
      }
      FUN_0075efb0(auStack_38,local_80,0,1);
      puVar1 = local_78;
      local_78 = (undefined8 *)0x0;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1);
        (**(code **)(*local_70 + 0x18))(local_70,puVar1,uStack_68,local_60);
      }
      FUN_0075f0a0(auStack_38);
      puVar1 = local_78;
      local_78 = (undefined8 *)0x0;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1);
        (**(code **)(*local_70 + 0x18))(local_70,puVar1,uStack_68,local_60);
      }
      *(undefined2 *)(param_1 + 0x86) = param_3;
      if (*(int *)(param_1 + 0x80) != 0x10) {
        *(undefined4 *)(param_1 + 0x80) = 3;
      }
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


