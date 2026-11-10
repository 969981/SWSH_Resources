/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00881280; name: FUN_00881280
 */


void FUN_00881280(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  long *plVar6;
  long local_88 [2];
  undefined1 *local_78;
  long local_70;
  long local_68;
  long local_58;
  
  puVar1 = PTR_DAT_02710788;
  uVar4 = 0;
  puVar5 = PTR_DAT_027173f8;
  do {
    FUN_0087fd60(local_88,uVar4 & 0xffffffff);
    iVar3 = FUN_006e5970(local_88);
    if (iVar3 != 0) {
      FUN_006dccd0(&local_58,*(undefined8 *)puVar1,0,local_88,0,param_1,0);
      if (*(long *)(puVar5 + 8) != 0) {
        (**(code **)(*(long *)(*(long *)(puVar5 + 8) + 0x48) + 0x18))();
        *(undefined8 *)(puVar5 + 8) = 0;
      }
      lVar2 = local_58;
      *(long *)(puVar5 + 8) = local_58;
      if (local_58 != 0) {
        plVar6 = (long *)(local_58 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        if ((*(long *)(puVar5 + 0x10) != 0) || (*(long *)(puVar5 + 0x90) != 0)) {
          FUN_006e1e70(lVar2,puVar5,1);
        }
        FUN_006e1be0(lVar2);
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    if ((local_70 != 0) && (local_88[0] != 0)) {
      (**(code **)(*(long *)(local_88[0] + 0x48) + 0x18))();
    }
    local_88[0] = 0;
    local_88[1] = 0xcbf29ce484222645;
    local_78 = &DAT_01d38550;
    local_70 = 0;
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    uVar4 = uVar4 + 1;
    puVar5 = puVar5 + 0x110;
  } while (uVar4 != 0x33b);
  return;
}


