/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00889e40; name: FUN_00889e40
 */


void FUN_00889e40(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = FUN_0087f070(param_2);
  FUN_0087d350(param_2,*(undefined8 *)(param_5 + 8));
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_1;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x80,8);
  if (lVar3 == 0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  FUN_0077d050(lVar3,0xd);
  *(long **)(lVar3 + 8) = param_1;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0x80;
  *(undefined8 *)(lVar3 + 0x20) = 8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar2 = FUN_00866030();
  FUN_008648a0(lVar3,899,*(undefined1 *)(lVar2 + 0x278));
  FUN_0087d230(param_2,lVar3);
  if (*(int *)(param_3 + 0x50) != 0) {
    uVar4 = 0;
    do {
      FUN_0087bfb0(param_2,uVar4 & 0xffffffff,*(undefined4 *)(param_3 + 0x54 + uVar4 * 4));
      FUN_0087b9a0(param_2,uVar4 & 0xffffffff,*(undefined4 *)(param_3 + 0x54 + uVar4 * 4));
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_3 + 0x50));
  }
  FUN_00878f70(param_2,8,*(undefined4 *)(param_3 + 100));
  FUN_0087d680(param_2);
  FUN_0087f0c0(param_2,uVar1 & 1);
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00889fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


