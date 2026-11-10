/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ca2d0; name: FUN_007ca2d0
 */


undefined8 FUN_007ca2d0(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 local_54;
  int local_50 [4];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar4 = *(long *)PTR_DAT_02716a30;
  if (lVar4 == 0) {
    uVar6 = 3;
  }
  else {
    uVar2 = FUN_0193ff30(lVar4);
    if ((uVar2 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      FUN_0193ff60(local_50,lVar4);
      plVar3 = *(long **)(param_1 + 8);
      if (local_50[0] == 0) {
        *(undefined1 *)((long)plVar3 + 0x4f5) = 0;
        uVar1 = *(undefined4 *)(lVar4 + (ulong)*(byte *)(lVar4 + 0x162) * 4 + 0x180);
        lVar4 = *(long *)(param_1 + 8);
        uVar6 = 1;
        *(undefined1 *)(lVar4 + 0x4e8) = 1;
        *(undefined4 *)(lVar4 + 0x4ec) = uVar1;
      }
      else {
        (**(code **)(*plVar3 + 0xd8))(plVar3,local_50);
        if ((*(char *)(*(long *)(param_1 + 0x10) + 0x638) != '\0') &&
           (plVar3 = (long *)FUN_007b9800(*(long *)(param_1 + 8),
                                          *(undefined4 *)(*(long *)(param_1 + 8) + 0x4e0)),
           plVar3 != (long *)0x0)) {
          lVar4 = *(long *)(param_1 + 0x10);
          plVar5 = (long *)(lVar4 + 0x6c8);
          if (0x7f < *(ulong *)(lVar4 + 0x6c8)) {
            *plVar5 = 0;
            lVar4 = *(long *)(param_1 + 0x10);
            plVar5 = (long *)(lVar4 + 0x6c8);
          }
          local_54 = (**(code **)(*plVar3 + 0x18))();
          uVar2 = *(ulong *)(lVar4 + 0x6c8);
          if (uVar2 < *(ulong *)(lVar4 + 0x6d0)) {
            lVar7 = *(long *)(lVar4 + 0x6c0);
            uVar6 = *(undefined8 *)(lVar4 + 0x680);
            lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
            if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar6;
            *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
            *(undefined4 *)(lVar7 + uVar2 * 4) = local_54;
            *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
            *plVar5 = *plVar5 + 1;
          }
          else {
            local_38 = *(long *)(lVar4 + 0x6c0) + uVar2 * 4;
            FUN_007cd470(auStack_40,lVar4 + 0x680,&local_38,1,&local_54);
          }
        }
        uVar6 = 2;
      }
    }
  }
  return uVar6;
}


