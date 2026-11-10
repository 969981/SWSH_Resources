/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f5e20; name: FUN_011f5e20
 */


void FUN_011f5e20(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 auStack_4c [28];
  
  plVar7 = *(long **)(param_1 + 8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar7;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,0x80,8);
  if (lVar4 == 0) {
    (**(code **)(*plVar7 + 0xb8))(plVar7);
  }
  FUN_0077d050(lVar4,0xd);
  *(long **)(lVar4 + 8) = plVar7;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 0x80;
  *(undefined8 *)(lVar4 + 0x20) = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  uVar1 = FUN_01524c00(param_2);
  FUN_01524b90(param_2,lVar4);
  uVar5 = FUN_0077d470(lVar4);
  uVar6 = FUN_012ae800(uVar5,uVar1);
  if ((uVar6 & 1) != 0) {
    uVar5 = FUN_0077d470(lVar4);
    iVar2 = FUN_008d0c40(uVar5,1);
    if (iVar2 < 1) goto LAB_011f5f40;
  }
  FUN_012aed20(auStack_4c,uVar1 & 0xff);
  FUN_0077d520(lVar4,auStack_4c);
  FUN_01524b70(param_2,lVar4);
LAB_011f5f40:
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


