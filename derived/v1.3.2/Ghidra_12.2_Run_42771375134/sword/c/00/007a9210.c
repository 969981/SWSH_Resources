/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a9210; name: FUN_007a9210
 */


void FUN_007a9210(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_90;
  undefined1 auStack_88 [32];
  in_addr aiStack_68 [8];
  in_addr aiStack_60 [8];
  in_addr aiStack_58 [8];
  uint local_50 [2];
  uint local_48 [2];
  undefined1 auStack_40 [16];
  
  FUN_01875c40(auStack_40);
  FUN_01875d60(auStack_b8);
  FUN_018725b0(auStack_40,auStack_b8);
  FUN_01876350(auStack_b8);
  FUN_018725b0(auStack_40,auStack_b8);
  FUN_01875e20(auStack_b8);
  FUN_018725b0(auStack_40,auStack_b8);
  iVar3 = nn::nifm::GetCurrentIpConfigInfo
                    ((in_addr *)local_48,(in_addr *)local_50,aiStack_58,aiStack_60,aiStack_68);
  if (iVar3 == 0) {
    FUN_018670d0(auStack_88);
    uVar1 = (local_50[0] & 0xff00ff00) >> 8 | (local_50[0] & 0xff00ff) << 8;
    uVar2 = (local_48[0] & 0xff00ff00) >> 8 | (local_48[0] & 0xff00ff) << 8;
    FUN_018671b0(auStack_88,uVar2 >> 0x10 | uVar2 << 0x10);
    FUN_018670d0(auStack_b8);
    local_98 = 0xffffff00;
    local_90 = 0;
    local_90 = FUN_007a9e30();
    FUN_01867150(auStack_b8,auStack_88);
    local_98 = CONCAT44(local_98._4_4_,uVar1 >> 0x10 | uVar1 << 0x10);
    uVar4 = FUN_01876520();
    FUN_01876640(auStack_c8,uVar4,auStack_b8);
    FUN_018725b0(auStack_40,auStack_c8);
    plVar6 = *(long **)(param_1 + 0x50);
    uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,8,8);
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar6;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    FUN_01876bc0(uVar4);
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    puVar7 = *(undefined8 **)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = uVar4;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7);
      (**(code **)(**(long **)(param_1 + 0x68) + 0x18))
                (*(long **)(param_1 + 0x68),puVar7,*(undefined8 *)(param_1 + 0x70),
                 *(undefined8 *)(param_1 + 0x78));
    }
    *(undefined8 *)(param_1 + 0x78) = 8;
    *(long **)(param_1 + 0x68) = plVar6;
    *(undefined8 *)(param_1 + 0x70) = 8;
    FUN_01867190(auStack_b8);
    FUN_01867190(auStack_88);
  }
  return;
}


