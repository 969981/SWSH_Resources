/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01197090; name: FUN_01197090
 */


void FUN_01197090(long param_1,int param_2,uint param_3)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long local_98;
  undefined1 auStack_90 [80];
  
  lVar6 = *(long *)PTR_DAT_027108d8;
  if (lVar6 != 0) {
    FUN_0121b630(auStack_90);
    FUN_0121bc50(auStack_90,param_3 & 1);
    if (((param_2 == 0) && (FUN_011ffb60(&local_98,*(undefined8 *)PTR_DAT_02718f20), local_98 != 0))
       && (lVar8 = *(long *)(local_98 + 8), lVar8 != 0)) {
      plVar7 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      plVar9 = *(long **)(param_1 + 0x68);
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar9;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar4 = (**(code **)(*plVar9 + 0x10))(plVar9,0x80,8);
      if (lVar4 == 0) {
        (**(code **)(*plVar9 + 0xb8))(plVar9);
      }
      FUN_0077d050(lVar4,0xd);
      *(long **)(lVar4 + 8) = plVar9;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 0x80;
      *(undefined8 *)(lVar4 + 0x20) = 8;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      if (lVar4 == 0) {
        FUN_01524b90(lVar8,0);
        uVar5 = FUN_0077d470(0);
        cVar1 = FUN_01524bf0(lVar8);
        uVar2 = FUN_01524c00(lVar8);
        FUN_0121bba0(auStack_90,uVar5,cVar1 != '\0',uVar2);
      }
      else {
        plVar9 = (long *)(lVar4 + 0x48);
        (**(code **)(*plVar9 + 0x10))(plVar9);
        FUN_01524b90(lVar8,lVar4);
        uVar5 = FUN_0077d470(lVar4);
        cVar1 = FUN_01524bf0(lVar8);
        uVar2 = FUN_01524c00(lVar8);
        FUN_0121bba0(auStack_90,uVar5,cVar1 != '\0',uVar2);
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    FUN_010a1250(lVar6,auStack_90);
  }
  return;
}


