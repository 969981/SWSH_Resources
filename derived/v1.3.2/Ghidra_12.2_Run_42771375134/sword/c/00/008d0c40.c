/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d0c40; name: FUN_008d0c40
 */


uint FUN_008d0c40(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined8 local_1f8;
  int local_1f0 [16];
  undefined8 local_1b0;
  char *local_1a8;
  undefined8 local_1a0;
  long local_198;
  undefined1 auStack_a0 [64];
  
  local_1f8 = param_1;
  iVar4 = FUN_0077d680();
  if (iVar4 == 0) {
    uVar8 = 0;
  }
  else {
    iVar5 = (**(code **)(*DAT_02a4cb90 + 0x28))(DAT_02a4cb90,local_1f0,0xffff,&local_1f8,iVar4 != 0)
    ;
    plVar3 = DAT_02a4cb80;
    if (iVar5 == 0) {
      lVar7 = 0;
      uVar8 = 0;
      if (iVar4 == 0) {
        do {
          uVar1 = 0;
          if (local_1f0[lVar7] != 0) {
            uVar1 = 1 << (ulong)((uint)lVar7 & 0x1f);
          }
          uVar2 = 0;
          if (local_1f0[lVar7 + 1] != 0) {
            uVar2 = 1 << (ulong)((uint)lVar7 + 1 & 0x1f);
          }
          lVar7 = lVar7 + 2;
          uVar8 = uVar2 | uVar1 | uVar8;
        } while (lVar7 != 0);
      }
      if (iVar4 != 0) {
        uVar8 = local_1f0[0] != 0 | uVar8;
      }
      if ((0 < (int)uVar8) && ((param_2 & 1) != 0)) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar3;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        lVar6 = (**(code **)(*plVar3 + 0x10))(plVar3,0x80,8);
        if (lVar6 == 0) {
          (**(code **)(*plVar3 + 0xb8))(plVar3);
        }
        FUN_0077d050(lVar6,400);
        *(long **)(lVar6 + 8) = plVar3;
        *(long *)(lVar6 + 0x10) = lVar6;
        *(undefined8 *)(lVar6 + 0x18) = 0x80;
        *(undefined8 *)(lVar6 + 0x20) = 8;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        if ((uVar8 & 1) != 0) {
          local_1b0 = 0xcbdc15e3ceed118e;
          local_1a8 = "common/monsname.dat";
          local_1a0 = 0x13;
          local_198 = 0;
          FUN_014bfd20(auStack_a0,&local_1b0,1);
          if (local_198 != 0) {
            (**(code **)(*(long *)(local_198 + 0x48) + 0x18))();
            local_198 = 0;
          }
                    /* WARNING: Subroutine does not return */
          memset(&local_1b0,0,0x110);
        }
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
        }
      }
    }
    else {
      uVar8 = 0xffffffff;
    }
  }
  return uVar8;
}


