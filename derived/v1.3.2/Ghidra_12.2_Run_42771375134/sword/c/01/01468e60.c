/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01468e60; name: FUN_01468e60
 */


void FUN_01468e60(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long local_70;
  int local_64;
  int local_60;
  uint uStack_5c;
  undefined1 auStack_58 [8];
  long local_48;
  
  local_64 = *(int *)(*(long *)(param_1 + 0x830) + 0x3dc);
  if (0 < local_64) {
    local_48 = *(long *)(param_1 + 8);
    lVar3 = FUN_0146b160(auStack_58,local_48,&local_64,&local_48);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x6e0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x6e0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x6e0) = 0;
    }
    *(long *)(param_1 + 0x6e0) = lVar3;
    puVar2 = PTR_DAT_02710860;
    if (0 < local_64) {
      iVar5 = 0;
      do {
        uStack_5c = uStack_5c & 0xffffff00;
        uVar1 = *(ulong *)(lVar3 + 0xe8);
        local_60 = iVar5;
        if (uVar1 < *(ulong *)(lVar3 + 0xf0)) {
          lVar6 = *(long *)(lVar3 + 0xe0);
          uVar7 = *(undefined8 *)(lVar3 + 0xa0);
          lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
          if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar7;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          *(ulong *)(lVar6 + uVar1 * 8) = CONCAT44(uStack_5c,local_60);
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
          *(long *)(lVar3 + 0xe8) = *(long *)(lVar3 + 0xe8) + 1;
          if (local_64 <= iVar5 + 1) break;
        }
        else {
          local_48 = *(long *)(lVar3 + 0xe0) + uVar1 * 8;
          FUN_008caa00(auStack_58,lVar3 + 0xa0,&local_48,1,&local_60);
          if (local_64 <= iVar5 + 1) break;
        }
        iVar5 = iVar5 + 1;
        lVar3 = *(long *)(param_1 + 0x6e0);
      } while( true );
    }
    local_48 = -0x68f005d9d33a074f;
    uVar7 = FUN_00ffde30(param_1 + 0x100,&local_48);
    local_70 = *(long *)(param_1 + 0x6e0);
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
    }
    FUN_016c2cb0(uVar7,&local_70);
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    FUN_016b2d70(uVar7,1);
    FUN_016bef00(uVar7);
  }
  return;
}


