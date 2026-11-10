/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0116dd80; name: FUN_0116dd80
 */


undefined8 FUN_0116dd80(long param_1,long *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long local_38;
  
  uVar9 = 0;
  if (*param_2 != 0) {
    lVar11 = *(long *)(*(long *)(param_1 + 0x90) + 0x60);
    if (lVar11 == 0) {
      uVar9 = 0;
    }
    else {
      iVar3 = FUN_009fe1a0(*param_2,3);
      iVar4 = FUN_009fe1a0(*param_2,2);
      *(int *)(lVar11 + 0x14c) = iVar3;
      *(int *)(lVar11 + 0x150) = iVar4;
      *(uint *)(lVar11 + 0x148) = (uint)(iVar3 != iVar4);
      uVar1 = FUN_009fe1a0(*param_2,5);
      uVar5 = FUN_009ff100(*param_2);
      *(undefined1 *)(lVar11 + 0x158) = uVar1;
      if ((uVar5 & 0xff) < 6) {
        *(uint *)(lVar11 + 0x154) = uVar5 & 0xff;
      }
      uVar5 = FUN_009ffa40(*param_2);
      *(uint *)(lVar11 + 0x15c) = ~uVar5 & 1;
      uVar5 = FUN_009fed30(*param_2,1);
      *(uint *)(lVar11 + 0x160) = uVar5 & 1;
      uVar5 = FUN_009fed30(*param_2,2);
      *(uint *)(lVar11 + 0x164) = uVar5 & 1;
      bVar2 = FUN_009fe1a0(*param_2,10);
      if (bVar2 < 10) {
        *(byte *)(lVar11 + 0x55) = bVar2;
      }
      else {
        *(undefined1 *)(lVar11 + 0x55) = 10;
        plVar10 = *(long **)(param_1 + 8);
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar10;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        lVar8 = (**(code **)(*plVar10 + 0x10))(plVar10,0x80,8);
        if (lVar8 == 0) {
          (**(code **)(*plVar10 + 0xb8))(plVar10);
        }
        FUN_0077d050(lVar8,0x25);
        *(long **)(lVar8 + 8) = plVar10;
        *(long *)(lVar8 + 0x10) = lVar8;
        *(undefined8 *)(lVar8 + 0x18) = 0x80;
        *(undefined8 *)(lVar8 + 0x20) = 8;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
        }
        lVar7 = *param_2;
        uVar6 = FUN_008d3750();
        local_38 = lVar8;
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
        }
        FUN_009fee40(lVar7,0,uVar6,&local_38);
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
          local_38 = 0;
        }
        uVar9 = FUN_0077d470(lVar8);
        FUN_0077d7e0(lVar11 + 0x56,uVar9,0x25);
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
        }
      }
      uVar9 = 1;
    }
  }
  return uVar9;
}


