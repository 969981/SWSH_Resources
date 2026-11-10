/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010b13b0; name: FUN_010b13b0
 */


void FUN_010b13b0(long param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  uint local_68;
  uint uStack_64;
  undefined1 auStack_60 [8];
  long local_58;
  
  local_58 = *(long *)(param_1 + 8);
  piVar1 = (int *)(*(long *)PTR_DAT_027108d8 + 0x11aec);
  lVar4 = FUN_0166fe50(auStack_60,local_58,piVar1,&local_58);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x600) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x600) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x600) = 0;
  }
  *(long *)(param_1 + 0x600) = lVar4;
  puVar3 = PTR_DAT_02710860;
  uVar6 = *(ulong *)(lVar4 + 0xf0);
  if ((int)uVar6 != 0) {
    uVar7 = 0;
    do {
      uStack_64 = uStack_64 & 0xffffff00;
      uVar8 = *(ulong *)(lVar4 + 0xe8);
      local_68 = uVar7;
      if (uVar8 < uVar6) {
        lVar9 = *(long *)(lVar4 + 0xe0);
        uVar10 = *(undefined8 *)(lVar4 + 0xa0);
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar10;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        *(ulong *)(lVar9 + uVar8 * 8) = CONCAT44(uStack_64,local_68);
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        *(long *)(lVar4 + 0xe8) = *(long *)(lVar4 + 0xe8) + 1;
      }
      else {
        local_58 = *(long *)(lVar4 + 0xe0) + uVar8 * 8;
        FUN_008caa00(auStack_60,lVar4 + 0xa0,&local_58,1,&local_68);
      }
      lVar4 = *(long *)(param_1 + 0x600);
      uVar6 = *(ulong *)(lVar4 + 0xf0);
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)uVar6);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x5f0);
  *(int *)(param_1 + 0x1a58) = *piVar1 + -1;
  local_58 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))((long *)(lVar4 + 0x48));
  }
  FUN_016c2cb0(uVar10,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  FUN_016c2c80(*(undefined8 *)(param_1 + 0x5f0),0,0);
  FUN_016c2c90(*(undefined8 *)(param_1 + 0x5f0),0);
  FUN_016bef00(*(undefined8 *)(param_1 + 0x5f0));
  FUN_016b2eb0(*(undefined8 *)(param_1 + 0x5f0));
  local_58 = -0x152ef7a1b3c6884f;
  lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_58);
  *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe | *piVar1 == 0;
  pcVar2 = "anime_stamp_off";
  if (*piVar1 != 0) {
    pcVar2 = "anime_stamp_on";
  }
  FUN_00ffcf80(param_1 + 0x100,pcVar2);
  return;
}


